#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

#define kapasite 100

int main() {
    setlocale(LC_ALL, "Turkish");

    srand(time(0));
    int veri[kapasite];
    int tek[kapasite], cift[kapasite], kucukOrtalama[kapasite], buyukOrtalama[kapasite];
    int sayi;
    int topla = 0;
    int max, min;

    cout << "0-100 (dahil) arasýnda 100 adet rastgele tamsayý :\n";
    for (int i = 0; i < kapasite; i++) {
        veri[i] = rand() % 101;
        cout << veri[i] << endl;
        topla += veri[i];
    }

    min = veri[0];
    max = veri[0];

    for (int i = 1; i < kapasite; i++) {
        if (veri[i] < min) {
            min = veri[i];
        }
        if (veri[i] > max) {
            max = veri[i];
        }
    }

    double ortalama = (double)topla / kapasite;

    int tekIndex = 0, ciftIndex = 0, kucukIndex = 0, buyukIndex = 0;

    for (int i = 0; i < kapasite; i++) {
        if (veri[i] % 2 == 0) {
            cift[ciftIndex++] = veri[i];
        } else {
            tek[tekIndex++] = veri[i];
        }

        if (veri[i] < ortalama) {
            kucukOrtalama[kucukIndex++] = veri[i];
        } else {
            buyukOrtalama[buyukIndex++] = veri[i];
        }
    }

    cout << endl << "Sayýlarýn tekrar sayýlarý:" << endl;
    for (int i = 0; i < kapasite; i++) {
        int tekrarSayisi = 1;
        if (veri[i] == -1) continue;

        for (int j = i + 1; j < kapasite; j++) {
            if (veri[i] == veri[j]) {
                tekrarSayisi++;
                veri[j] = -1;
            }
        }

        if (veri[i] != -1) {
            cout  << veri[i] << " - Sayýsý: " << tekrarSayisi<<" - Kere tekrar etti" << endl;
        }
    }

    cout << endl;
    cout << "Sayýlarýn aritmetik ortalamasý: " << ortalama << endl;
    cout << "En büyük sayý: " << max << endl;
    cout << "En küçük sayý: " << min << endl;

    cout << endl << "Tek Sayýlar: ";
    for (int i = 0; i < tekIndex; i++) {
        cout << tek[i] << " ";
    }

    cout << endl << "Çift Sayýlar: ";
    for (int i = 0; i < ciftIndex; i++) {
        cout << cift[i] << " ";
    }

    cout << endl << "Ortalamadan Küçük Sayýlar: ";
    for (int i = 0; i < kucukIndex; i++) {
        cout << kucukOrtalama[i] << " ";
    }

    cout << endl << "Ortalamadan Büyük Sayýlar: ";
    for (int i = 0; i < buyukIndex; i++) {
        cout << buyukOrtalama[i] << " ";
    }

    return 0;
}

