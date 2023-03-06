// void Memory (double *p, int size);
// void Filling (double *p, int size);
// void Print (double *p, int size);
// void Delete (double *p);

class Flag {
private:
    bool flag;
    bool flagSwitch;

public:
    Flag ();
    bool GetFlag ();
    bool GetFlagSwitch ();
    void SetFlag (bool flag);
    void SetFlagSwitch (bool flagSwitch);
};

class Pointer {
private:
    int size;
    double *p;

public:
    Pointer ();
    void SetSize ();
    void SetMemory ();
    void Memory ();
    void Filling ();
    void Print ();
    void Delete ();
    ~Pointer () {}; 
};