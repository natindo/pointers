template <typename T1>
void CreateTwoDimensionalArray (T1 num, T1 col);
void FillArray (int* const arr, const int size);
void PrintArray (const int* const arr, const int size);
void push_back (int *&arr, int &size, const int value);
void pop_back (int *&arr, int &size);
void push_front (int *&arr, int &size, const int value);
void pop_front (int *&arr, int &size);
void push_index (int *&arr, int &size, const int value, const int index);
void pop_index (int *&arr, int &size, const int index);

void testArray (int *arr, int num);