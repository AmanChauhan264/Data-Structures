//   BRUTE FORCE APPROACH

// #include <bits/stdc++.h>
// using namespace std;

// void markRow(vector<vector<int>> &arr, int row) {
//     int m = arr[0].size();
//     for (int j = 0; j < m; j++) {
//         if (arr[row][j] != 0) {
//             arr[row][j] = -1;
//         }
//     }
// }

// void markCol(vector<vector<int>> &arr, int col) {
//     int n = arr.size();

//     for (int i = 0; i < n; i++) {
//         if (arr[i][col] != 0) {
//             arr[i][col] = -1;
//         }
//     }
// }

// void setMatrixZero(vector<vector<int>> &arr) {
//     int n = arr.size();
//     int m = arr[0].size();
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             if (arr[i][j] == 0) {
//                 markRow(arr, i);
//                 markCol(arr, j);
//             }
//         }
//     }
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             if (arr[i][j] == -1) {
//                 arr[i][j] = 0;
//             }
//         }
//     }
// }

// int main() {
//     int n, m;
//     cout << "Enter number of rows: ";
//     cin >> n;
//     cout << "Enter number of columns: ";
//     cin >> m;
//     vector<vector<int>> arr(n, vector<int>(m));
//     cout << "Enter elements of the matrix:\n";
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             cin >> arr[i][j];
//         }
//     }
//     cout << "\nMatrix befor:\n";
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
//     setMatrixZero(arr);
//     cout << "\nMatrix after setting zeroes:\n";
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

//     Better approach

#include <bits/stdc++.h>
using namespace std;

void setMatrixZero(vector<vector<int>> &arr) {
    int n = arr.size();
    int m = arr[0].size();
    int col[m] = {0};
    int row[n] = {0};
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] == 0) {
               row[i] = 1;
               col[j] = 1;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (row[i] || col[j]) {
                arr[i][j] = 0;
            }
        }
    }
}

int main() {
    int n, m;
    cout << "Enter number of rows: ";
    cin >> n;
    cout << "Enter number of columns: ";
    cin >> m;
    vector<vector<int>> arr(n, vector<int>(m));
    cout << "Enter elements of the matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }
    cout << "\nMatrix befor:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    setMatrixZero(arr);
    cout << "\nMatrix after setting zeroes:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}