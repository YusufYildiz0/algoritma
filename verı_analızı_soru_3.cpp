#include <iostream>
#include <locale.h>
#include <string>
#include <cctype>
#include <stdlib.h>
#include <time.h>
using namespace std;


#define kapasite 500
int main() {
    setlocale(LC_ALL, "Turkish");	
    
    srand(time(0));
    int dizi[kapasite];
    int sayi;
    int topla=0,art_ortalama;
    
    
    cout<<"ortalamas� 20 ile 30 aras�nda olan , 10 ile 35 (dahil) aras�nda 500 adet rastgele tamsay� :"<<endl;
    
    do{
	
		for(int i=1;i<kapasite;i++)
    	{
    		sayi={25+rand() % 11};
			dizi[kapasite]=sayi;
    		topla+=dizi[kapasite];
		}
		art_ortalama=topla/500;
		
		
	}while (!(art_ortalama > 20.0) || !(art_ortalama < 30.0));
	
	for(int i=1;i<kapasite;i++)
	{
		sayi={25+rand() % 11};
		dizi[kapasite]=sayi;
		cout<<dizi[kapasite]<<endl;
	}
	
	cout<<endl<<endl<<endl;
	cout<<"aritmetik ortlamas� :"<<art_ortalama<<endl;
	return 0;
}

