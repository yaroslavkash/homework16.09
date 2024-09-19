#include <iostream>
using namespace std;


/*template<typename T>
bool ifthere(T* array, int size, T elem) {
    for (int i = 0; i < size; i++) {
        if (array[i] == elem) {
            return true;
        }
    }
    return false;
}

template<typename T>
void addtoarray(T*& array, int& size, T elem) {
    if (!ifthere(array, size, elem)) {
        T* new_array = new T[size + 1];
        for (int i = 0; i < size; i++) {
            new_array[i] = array[i];
        }
        new_array[size] = elem;
        size++;
        delete[] array;
        array = new_array;
    }
}

int main() {
    int M, N;

    cout << "size of A: ";
    cin >> M;
    cout << "site of B: ";
    cin >> N;

    int* A = new int[M];
    int* B = new int[N];

    cout << "enter array A: ";
    for (int i = 0; i < M; i++) {
        cin >> A[i];
    }

    cout << "enter array B: ";
    for (int i = 0; i < N; i++) {
        cin >> B[i];
    }

    int* C = nullptr;
    int C_size = 0;

    for (int i = 0; i < M; i++) {
        if (!ifthere(B, N, A[i])) {
            addtoarray(C, C_size, A[i]);
        }
    }

    cout << "array C: ";
    for (int i = 0; i < C_size; i++) {
        cout << C[i] << " ";
    }
    cout << endl;

    delete[] A;
    delete[] B;
    delete[] C;

    return 0;
}*/
template<typename T>
bool ifthere(T* array, int size, T elem) {
    for (int i = 0; i < size; i++) {
        if (array[i] == elem) {
            return true;
        }
    }
    return false;
}

template<typename T>
void addtoarray(T*& array, int& size, T elem) {
    if (!ifthere(array, size, elem)) {
        T* new_array = new T[size + 1];
        for (int i = 0; i < size; i++) {
            new_array[i] = array[i];
        }
        new_array[size] = elem;
        size++;
        delete[] array;
        array = new_array;
    }
}

int main() {
    int M, N;

    cout << "size A: ";
    cin >> M;
    cout << "size B: ";
    cin >> N;

    int* A = new int[M];
    int* B = new int[N];

    cout << "array A: ";
    for (int i = 0; i < M; i++) {
        cin >> A[i];
    }
    cout << "array B: ";
    for (int i = 0; i < N; i++) {
        cin >> B[i];
    }
    int* C = nullptr;
    int C_size = 0;
    for (int i = 0; i < M; i++) {
        if (!ifthere(B, N, A[i])) {
            addtoarray(C, C_size, A[i]);
        }
    }

    for (int i = 0; i < N; i++) {
        if (!ifthere(A, M, B[i])) {
            addtoarray(C, C_size, B[i]);
        }
    }
    cout << "array: ";
    for (int i = 0; i < C_size; i++) {
        cout << C[i] << " ";
    }
    cout << endl;
    delete[] A;
    delete[] B;
    delete[] C;

    return 0;
}