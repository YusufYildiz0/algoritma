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

    cout << "0-100 (dahil) aras�nda 100 adet rastgele tamsay� :\n";
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

    cout << endl << "Say�lar�n tekrar say�lar�:" << endl;
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
            cout  << veri[i] << " - Say�s�: " << tekrarSayisi<<" - Kere tekrar etti" << endl;
        }
    }

    cout << endl;
    cout << "Say�lar�n aritmetik ortalamas�: " << ortalama << endl;
    cout << "En b�y�k say�: " << max << endl;
    cout << "En k���k say�: " << min << endl;

    cout << endl << "Tek Say�lar: ";
    for (int i = 0; i < tekIndex; i++) {
        cout << tek[i] << " ";
    }

    cout << endl << "�ift Say�lar: ";
    for (int i = 0; i < ciftIndex; i++) {
        cout << cift[i] << " ";
    }

    cout << endl << "Ortalamadan K���k Say�lar: ";
    for (int i = 0; i < kucukIndex; i++) {
        cout << kucukOrtalama[i] << " ";
    }

    cout << endl << "Ortalamadan B�y�k Say�lar: ";
    for (int i = 0; i < buyukIndex; i++) {
        cout << buyukOrtalama[i] << " ";
    }

    return 0;
}

