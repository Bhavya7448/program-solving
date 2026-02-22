#include <iostream>
using namespace std;
int main() {
    int a[10][10], b[10][10], c[10][10], r1, c1, r2, c2;
    cout << "Enter rows and columns of first matrix: ";
    cin >> r1 >> c1;
    cout << "Enter elements of first matrix:\n";
    for(int i = 0; i < r1; i++)  {for(int j = 0; j < c1; j++){ cin >> a[i][j];}}
    cout << "Enter rows and columns of second matrix: ";
    cin >> r2 >> c2;
    cout << "Enter elements of second matrix:\n";
    for(int i = 0; i < r2; i++) {  for(int j = 0; j < c2; j++) { cin >> b[i][j];}}
    if(r1 == r2 && c1 == c2) { cout << "\nMatrix Addition:\n";
        for(int i = 0; i < r1; i++) {   for(int j = 0; j < c1; j++) {  c[i][j] = a[i][j] + b[i][j];
                cout << c[i][j] << " "; }
            cout << endl; }
    } else {  cout << "\nMatrix addition not possible\n";   }
    if(c1 == r2) {cout << "\nMatrix Multiplication:\n";
        for(int i = 0; i < r1; i++) {
            for(int j = 0; j < c2; j++) { c[i][j] = 0;
                for(int k = 0; k < c1; k++)
                    c[i][j] += a[i][k] * b[k][j];
                cout << c[i][j] << " ";  }
            cout << endl; }
    } else { cout << "\nMatrix multiplication not possible\n";}
    cout << "\nTranspose of first matrix:\n";
    for(int i = 0; i < c1; i++) {
        for(int j = 0; j < r1; j++)
            cout << a[j][i] << " ";
            cout << endl;  }}
