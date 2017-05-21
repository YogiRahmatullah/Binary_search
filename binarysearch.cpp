#include <iostream>
using namespace std;

int main()
{
	int n, i, arr[50], cari, awal, akhir, tengah;
	cout << "Masukan Nilai Array : ";
	cin >> n;
	cout << "Masukan " << n << " nilai Array :" << endl;
	
	for (i=0; i<n; i++)
	{
		cout << "Masukan nilai Array Ke " << i << " : ";
		cin >> arr[i];
	}
	
	cout << "Masukan angka yang di cari :";
	cin >> cari;
	awal = 0;
	akhir = n-1;
	tengah = (awal+akhir)/2;
	while (awal <= akhir)
	{
		if(arr[tengah] < cari)
		{
			awal = tengah + 1;

		}
		else if(arr[tengah] == cari)
		{
			cout << cari << " Ketemu di data ke " << tengah + 1  << endl;
			break;
		}
		else
		{
			 akhir = tengah - 1;
		}
		tengah = (awal + akhir)/2;
	}
	if(awal > akhir)
	{
		cout<<"Tidak ketemu " << cari << " tidak ada di daftar.";
	}
	return 0;
}