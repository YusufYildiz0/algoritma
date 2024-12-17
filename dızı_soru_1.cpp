#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
 srand(time(0));
 const int yilSayisi = 5;
 const int aySayisi = 12;
 int ciro[yilSayisi][aySayisi];
 double ortciro[yilSayisi];
 for (int yil = 0; yil < yilSayisi; yil++) {
 for (int ay = 0; ay < aySayisi; ay++) {
 ciro[yil][ay] = rand() % 4901 + 100;
 }
 }
 for (int yil = 0; yil < yilSayisi; yil++) {
 int toplamCiro = 0;
 for (int ay = 0; ay <aySayisi; ay++) {
 toplamCiro += ciro[yil][ay];
 }
 ortciro[yil] = toplamCiro / 12.0;
 }
 int yil;
 cout << "Bir yýl numarasý girin (1-5 arasý): ";
 cin >> yil;
 double yilOrtalamasi = ortciro[yil - 1];
 cout << "Yýl " << yil << " ortalama cirosu: " << yilOrtalamasi << endl;
 cout << "Ortalama cirosundan yüksek olan aylar:" << endl;
 for (int ay = 0; ay < aySayisi; ay++) {
 if (ciro[yil - 1][ay] > yilOrtalamasi) {
 cout << "Ay " << (ay + 1) << ": Ciro = " << ciro[yil - 1][ay] << endl;
 }
 }
 cout << "Yýl " << yil << " için çeyrek bazýnda ortalama cirolar:" << endl;
 for (int ceyrek = 0; ceyrek < 4; ceyrek++) {
 int toplamCiro = 0;
 for (int ay = ceyrek * 3; ay < (ceyrek + 1) * 3; ay++) {
 toplamCiro += ciro[yil - 1][ay];
 }
 double ceyrekOrtalamasi = toplamCiro / 3.0;
 cout << (ceyrek + 1) << ". Çeyrek ortalama ciro:" << ceyrekOrtalamasi << endl;
 }
 return 0;
}
