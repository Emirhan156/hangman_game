#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;

vector<char> dogruharfler;
#include <cctype>  // tolower

string returnString(string word)
{
	string lowerWord = "";
	for (char c : word)
	{
		lowerWord += tolower(c);  
	}
	return lowerWord;
}

void kafaCiz() {
	cout << "--------------";
	cout << endl;
	cout << "|";
	cout << "          " << "(" << " " << ")";
	cout << endl;
	cout << "|";
	cout << endl;
	cout << "|";
	cout << endl;
	cout << "|";
	cout << endl;
	cout << "|";
}

void govdeCiz() {
	cout << "--------------";
	cout << endl;
	cout << "|";
	cout << "          " << "(" << " " << ")";
	cout << endl;
	cout << "|";
	cout << "           I";
	cout << endl;
	cout << "|";
	cout << "           I";
	cout << endl;
	cout << "|";
	cout << "          ";
	cout << " I";
	cout << endl;
	cout << "|";
}

void kolCiz() {
	cout << "--------------";
	cout << endl;
	cout << "|";
	cout << "          " << "(" << " " << ")";
	cout << endl;
	cout << "|";
	cout << "          /";
	cout << "I";
	cout << "\\  ";
	cout << endl;
	cout << "|";
	cout << "         / ";
	cout << "I";
	cout << " \\ ";
	cout << endl;
	cout << "|";
	cout << "          ";
	cout << " I";
	cout << endl;
	cout << "|";
}

void ayakCiz() {
	cout << "--------------";
	cout << endl;
	cout << "|";
	cout << "          " << "(" << " " << ")";
	cout << endl;
	cout << "|";
	cout << "          /";
	cout << "I";
	cout << "\\  ";
	cout << endl;
	cout << "|";
	cout << "         / ";
	cout << "I";
	cout << " \\ ";
	cout << endl;
	cout << "|";
	cout << "          ";
	cout << " I";
	cout << endl;
	cout << "|";
	cout << "          /";
	cout << " ";
	cout << "\\  ";
}

void aSonDurumGoster(int yanlisGirilenHarfSayisi) {

	switch (yanlisGirilenHarfSayisi)
	{
	case 1:
		kafaCiz();
		break;

	case 2:
		govdeCiz();
		break;

	case 3:
		kolCiz();
		break;

	case 4:
		ayakCiz();
		break;

	default:
		cout << "--------------";
		cout << endl;
		cout << "|";
		cout << endl;
		cout << "|";
		cout << endl;
		cout << "|";
		cout << endl;
		cout << "|";
		cout << endl;
		cout << "|";

		break;
	}
}

void kSonDurumGoster(string secilenkelime) {

	cout << "Kelimenin son durumu:";

	int limit = dogruharfler.size();

	for (int i = 0; i < secilenkelime.length(); i++) {
		bool find{ false };
		for (int x = 0; x < limit; x++) {
			if (tolower(dogruharfler.at(x)) == tolower(secilenkelime[i])) { 
				find = true;
				break;  
			}

		}
		if (find)
			cout << secilenkelime[i] << " ";
		else
			cout << "_ ";
	}

}

int main()
{
	int döndürensayi;
	do {
		int bilinenKelimeler = 0;
		int anasayac = 0;
		int sayac = 0;
		int yanlisGirilenHarfSayisi = 0;
		char harf;
		int num = 0;


		string kelimelerim[] = {
	 "Ataturk",
	 "Universitesi",
	 "Bilgisayar",
	 "Muhendisligi",
	 "Bolumu",
	 "Erzurum",
	 "Nesne",
	 "Yonelimli",
	 "Programlama",
	 "Dersi"
		};


		srand(time(0));

		int sayi = rand() % 10;

		string  secilenkelime = kelimelerim[sayi];

		cout << "//-----------------------------------Adam Asmaca-------------------------------------//";
		cout << endl;
		cout << endl;
		cout << "Hosgeldiniz....!";
		cout << endl;
		cout << endl;
		cout << endl;
		cout << "Kelime: ";
		for (int i = 0; i < secilenkelime.length(); i++) {

			cout << "_" << " ";

		}
		vector<char> harflerr;


		do {

			cout << endl;
			cout << endl;
			cout << "Bilinen Kelimeler : " << bilinenKelimeler << endl;
			cout << "Harf tahmini icin harf giriniz veya tam tahmin icin 1`i tuslayiniz :";
			cin >> harf;
			harf = tolower(harf);
			anasayac += 1;
			harflerr.push_back(harf);


			if (harf == '1') {
				string tahmin;

				cout << "Tahmini giriniz:";
				cin >> tahmin;
				if (returnString(tahmin) == returnString(secilenkelime)) {
					cout << "Dogru bildiniz." << endl;
					++bilinenKelimeler;
					cout << "Tekrar oynamak icin 2`ye basiniz:";
					cin >> num;
					if (num != 2) {
						return 0;
					}

					if (num == 2)
					{
						bilinenKelimeler = 0;
						yanlisGirilenHarfSayisi = 0;
						harflerr.clear();
						dogruharfler.clear();
						sayac = 0;
						anasayac = 0;
						sayi = rand() % 10;
						secilenkelime = kelimelerim[sayi];

					}
				}

				else {

					int tekrar;
					cout << "Yanlis tahmin. ";
					cout << "Kelime " << secilenkelime << " \n";
					cout << endl;
					cout << "Tekrar oynamak icin 2`ye basiniz:";
					cin >> num;

					if (num != 2) {
						return 0;
					}

					if (num == 2)
					{
						bilinenKelimeler = 0;
						yanlisGirilenHarfSayisi = 0;
						dogruharfler.clear();
						sayac = 0;
						anasayac = 0;
						sayi = rand() % 10;
						secilenkelime = kelimelerim[sayi];


					}


				}
			}


			else {

				for (int j = 0; j <= secilenkelime.length(); j++) {

					if (tolower(harf) == tolower(secilenkelime[j])) {
						sayac = sayac + 1;


						dogruharfler.push_back(tolower(harf));

					}

				};
				if (sayac == 0) {
					yanlisGirilenHarfSayisi = yanlisGirilenHarfSayisi + 1;



				}
				sayac = 0;


			}
			cout << endl;
			cout << "Adamin Son Durumu: ";
			cout << endl;
			aSonDurumGoster(yanlisGirilenHarfSayisi);
			cout << endl;
			kSonDurumGoster(secilenkelime);
			cout << endl;
			cout << "Girilen harfler:";
			for (int z = 0; z < harflerr.size(); z++) {
				cout << harflerr[z] << ",";
			}



		} while (anasayac < 4);

		cout << endl;
		cout << "Kelime " << secilenkelime << " \n";
		cout << "Kelimeyi bilemediniz.Tekrar oynamak icin 2`ye basiniz.";
		cin >> döndürensayi;

	} while (döndürensayi == 2);




	return 0;
	cout << endl;
}