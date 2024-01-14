#include <iostream>
using namespace std;

class AlanHesapla {
public:
	float genislik;
	float yukseklik;
	float alan;
	

void giris (){
	cout << "yukseklik giriniz"<< endl;
cin >> yukseklik;
cout << "genislik giriniz" << endl;
cin >> genislik;}
void hesapla () {
	alan = yukseklik * genislik;
	cout <<" Alan = "<< alan;


}
};


int main()
{
	while (true)
	{

		cout << "\n***hesap***\n";
	AlanHesapla hesap;
	hesap.giris();
	hesap.hesapla();
}
}


