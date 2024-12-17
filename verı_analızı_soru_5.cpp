#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "Turkish");	
    
    float srand(time(0));
    float veri[500];
    float sayi,yedek;
    
    cout<<"0-100 (dahil) arasýnda 500 adet rastgele float veri :"<<endl;
    for(int i=0;i<500;i++)
    {
		sayi={((float) rand() / RAND_MAX)*100};
		veri[i]=sayi;
    	cout<<veri[i]<<endl;	
	}
	cout<<endl<<endl<<endl;
	return 0;
}
