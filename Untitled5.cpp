#include <iostream>
#include <iomanip>

using namespace std;


int main()
{
    char huruf[5] = {'E', 'D', 'C', 'B', 'A'};
    string mapel[3] = {"Algoritma", "Fisika   ", "Logika   "};
    int sks[3];
    int indeks[3];
	
	 // Declare the indeks variable here

    // Meminta user memasukkan nilai yang ingin dicari
    char cari;
    int pengulangan = 0;

    cout << "KARTU HASIL STUDI" << endl;
    cout << "-----------------" << endl;
    cout << "Semester : 1" << endl;
    cout << "----------------------------" << endl;
    cout << "Mata Kuliah  | Nilai | SKS | AM | SA |" << endl;
    cout << "----------------------------" << endl;

    while(pengulangan < 3 ){

        cout << mapel[pengulangan] << "    |";
        cin >> cari;
        cout << setw(5);
        cout << "                     | ";

        // Mencari indeks elemen array yang memiliki nilai sama dengan variabel cari
        indeks[pengulangan] = -1; // Variabel indeks untuk menyimpan indeks elemen yang ditemukan
        for (int i = 0; i < 5; i++)
        {
            if (huruf[i] == cari)
            {
                indeks[pengulangan] = i;
                break;
            }
        }

        cin >> sks[pengulangan];
        cout << "                           | "<< indeks[pengulangan] << endl;
        cout << "                                | "<< indeks[pengulangan]*sks[pengulangan] << endl;
        cout << "----------------------------" << endl;
        pengulangan++;
    }
    cout << endl;


    // Menjumlahkan elemen array
    int jumlahSK = 0;
    for (int i = 0; i < 3; i++)
    {
        jumlahSK += sks[i];

    }

    // Menjumlahkan elemen array
    int jumlahSA = 0;
    for (int i = 0; i < 3; i++)
    {
        jumlahSA += indeks[i] * sks[i];
        
    }


	cout << "total SKS: " << jumlahSK << endl;
    // Menampilkan hasil penjumlahan
    cout << "Total SA: " << jumlahSA << endl;
    
    float result = 0.0;
	result = (float)jumlahSA / jumlahSK;
	cout << "Total SA / Total SKS: " << result << endl;
    
 

    return 0;
}


