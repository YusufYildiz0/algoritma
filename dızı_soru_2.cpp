#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
 int A[3][3], B[3][3], C[3][3];
 int detA;
 cout << "A matrisini giriniz (3x3):\n";
 for (int i = 0; i < 3; i++) {
 for (int j = 0; j < 3; j++) {
 cout << "A[" << i + 1 << "][" << j + 1 << "]: ";
 cin >> A[i][j];
 }
 }
 cout << "B matrisini giriniz (3x3):\n";
 for (int i = 0; i < 3; i++) {
 for (int j = 0; j < 3; j++) {
 cout << "B[" << i + 1 << "][" << j + 1 << "]: ";
 cin >> B[i][j];
 }
 }
 cout << "\nA + B = C:\n";
 for (int i = 0; i < 3; i++) {
 for (int j = 0; j < 3; j++) {
 C[i][j] = A[i][j] + B[i][j];
 cout << setw(5) << C[i][j];
 }
 cout << endl;
 }
 cout << "\nA * B = C:\n";
 for (int i = 0; i < 3; i++) {
 for (int j = 0; j < 3; j++) {
 C[i][j] = 0;
 for (int k = 0; k < 3; k++) {
 C[i][j] += A[i][k] * B[k][j];
 }
 cout << setw(5) << C[i][j];
 }
 cout << endl;
 }
 detA = A[0][0] * (A[1][1] * A[2][2] - A[1][2] * A[2][1]) -
 A[0][1] * (A[1][0] * A[2][2] - A[1][2] * A[2][0]) +
 A[0][2] * (A[1][0] * A[2][1] - A[1][1] * A[2][0]);
 cout << "\nA matrisinin determinantý: " << detA << endl;
 return 0;
}

