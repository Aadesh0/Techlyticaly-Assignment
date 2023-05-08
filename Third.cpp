#include <iostream>
using namespace std;

int findNumber(int *A, int *B, int n) {
    int maxA = A[0], minB = B[0];
    for (int i = 1; i < n; i++) {
        if (A[i] > maxA) maxA = A[i];
        if (B[i] < minB) minB = B[i];
    }
    int count = 0;
    for (int x = maxA; x <= minB; x++) {
        bool found = true;
        for (int i = 0; i < n; i++) {
            if (A[i] > x || B[i] < x) {
                found = false;
                break;
            }
        }
        if (found) count++;
    }
    return count;
}

int main() {
    int A[] = {3, 2};
    int B[] = {7, 5};
    int n = 2;
    cout << "Number of integers: " << findNumber(A, B, n) << endl;

    int C[] = {1, 2, 3, 4};
    int D[] = {2, 3, 4, 5};
    n = 4;
    cout << "Number of integers: " << findNumber(C, D, n) << endl;

    int E[] = {1, 2, 3, 4, 5};
    int F[] = {1, 2, 3, 4, 5};
    n = 5;
    cout << "Number of integers: " << findNumber(E, F, n) << endl;

    int G[] = {1};
    int H[] = {1000};
    n = 1;
    cout << "Number of integers: " << findNumber(G, H, n) << endl;

    int I[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int J[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
    n = 10;
    cout << "Number of integers: " << findNumber(I, J, n) << endl;

    return 0;
}

