#include <iostream>
#include <chrono>
#include <thread>

#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

string pixelToAASCII (int pixelIntensity) {
    const string ASCIICHARS = "@%$*+=-. ";
    string s = string (1, ASCIICHARS[pixelIntensity * ASCIICHARS.length() / 256]);
    return s;
}


int main (void) {
    string videoPath = "/Users/natindo/Documents/Smth/С++/OpenCV/TerminalASCII/vid1.mp4";
    
    VideoCapture cap(videoPath);

    double fps = cap.get(CAP_PROP_FPS);
    cout << fps << endl;

    int frameDurationMs = 1000 / fps;
    int width = 150;
    int height = 50;

    int frameWidth = cap.get(CAP_PROP_FRAME_WIDTH);
    int frameHeight = cap.get(CAP_PROP_FRAME_HEIGHT);

    height = (width * frameHeight / frameWidth) * 0.4149;

    Mat frame, grayFrame, resizeFrame;

    while (true) {
        cap >> frame;
        if (frame.empty()) {
            break;
        }

        cvtColor(frame, grayFrame, cv::COLOR_BGR2GRAY);
        resize(grayFrame, resizeFrame, Size (width, height), 0, 0, INTER_LINEAR);

        string asciiFrame;

        for (int i = 0; i < height; i++) {
            for (int j = 0; j < width; j++){
                asciiFrame += pixelToAASCII(resizeFrame.at<uchar>(i, j));
            }
            asciiFrame += "\n";
        }

        system("clear"); // clear console
        cout << asciiFrame;
        std::this_thread::sleep_for(std::chrono::milliseconds(frameDurationMs));
        
    }

    return 0;
}