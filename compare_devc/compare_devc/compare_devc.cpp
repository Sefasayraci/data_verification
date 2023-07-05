#include <iostream>

using namespace std;

int main() {
	int sayi;
	int secilen_indeks;
	int maksimum_deger;
	int son_deger = 0;
	int toplam_deger = 3970;
	int dogru_deger;

	const int dizi[10] = { 50, 100, 150, 250, 400, 500, 600, 750, 850, 1000 };
	setlocale(LC_ALL, "TURKISH");
	cout << "Hedef deger verilen dizinin en küçük elemanindan büyük, dizinin toplamından ise küçük olacak. Eger degilse kullanicidan yeni bir deger girmesi istenecek.\n" << endl;
	cout << "Lütfen Bir Sayi Giriniz" << endl;
	cin >> sayi;

	if (sayi < 50 || sayi > toplam_deger)
	{
		cout << "\nLütfen Tekrar Sayi Giriniz ve Yukaridaki Kosullara Uyunuz" << endl;
		cin >> sayi;
	}

	// 2 adet çözüm kümesine yaklasalim.
	// target 2020, secilenler 100 - 750 - 250

//degere:
	cout << "\nMaksiumum Indeks Degerini Seçiniz" << endl;
	cin >> maksimum_deger;
	
	if (maksimum_deger < 3)
	{
		cout << "\n3 ve 3'ten büyük deger giriniz!";
		//goto degere;
		cin >> maksimum_deger;
	}

	for (secilen_indeks = 4; secilen_indeks < maksimum_deger; secilen_indeks++)
	{
		cout <<"\n"<< maksimum_deger - secilen_indeks << ". adet indeks deger giriniz" << endl;
		cin >> secilen_indeks;
		cout << dizi[secilen_indeks]<<" "<<endl;
		son_deger += dizi[secilen_indeks];
		
	}
	cout << "\nIndeksin dizi karsiligi toplam degerleri=" << son_deger<<endl;

	if (son_deger > sayi)//sayi=hedef deger
	{
		cout << "Toplam deger, hedef degeri gecmemelidir, tekrar indeksleri giriniz.";
		cin >> maksimum_deger;
		//goto kullanma geregi duymadım.
	}


	dogru_deger = son_deger - toplam_deger;

}

