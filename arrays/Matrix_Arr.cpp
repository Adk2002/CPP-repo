

/********************************************
        	alphabetacoder.com
C++ program to check equality of two matrices
*********************************************/
#include <iostream>

using namespace std;

int main() {
    int m, n, p, q, flag = 0, i, j;
    int A[10][10] = {0}, B[10][10] = {0};

    //take input of the order of first matrix
    cout << "\nEnter the number of row and column of first matrix="<<endl;
    cin >> m;
    cin >> n;

    //take input of the first matrix
    cout << "Enter the first matrix of order " << m << " x " << n << " = \n";
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }
    //take input of the order of second matrix
    cout << "Enter the number of row and column of second matrix="<<endl;
    cin >> p;
    cin >> q;

    //take input of the first matrix
    cout << "Enter the first matrix of order " << p << " x " << q << " = \n";
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            cin >> B[i][j];
        }
    }

    // check if order of matrices are same
    // if not same order then check each corresponding elements
    if (m != p || n != q) {
        cout << "\nMatrices are of different order,hence not equal";
        flag = 1;
    } else {
        //check equality of each corresponding elements
        for (i = 0; i < m; i++) {
            for (j = 0; j < n; j++) {
                if (A[i][j] != B[i][j]) {
                    // inequality spotted 
                    cout << "\nMatrices are not equal. Element mismatch at " << i + 1 << " row " << j + 1 << " column";
                    flag = 1;
                    break;
                }
            }
            if (flag == 1)
                break;
        }
    }
    if (flag == 0)
        cout << "\nMatrices are equal";
    return 0;
}

