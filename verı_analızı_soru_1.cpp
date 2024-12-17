#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
 const int n = 500;
 int veriler[n];
 srand(time(0));
 for (int i = 0; i < n; i++) {
 veriler[i] = rand() % 101;
 }
 cout << "Üretilen 500 rastgele sayý: \n";
 for (int i = 0; i < n; i++) {
 cout << veriler[i] << " ";
 if ((i + 1) % 10 == 0) {
 cout << endl;
 }
 }
 return 0;
}

