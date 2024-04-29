#include <iostream>
using namespace std;


int arr[20];

void input()
{
    int nMtk, nInggris;
    float rerata;
    string  status;
    char mhs;

    cout << "Masukan nama mahasiswa: ";
    cin >> mhs;
    cout << " Masukan nilai matematika: ";
    cin >> nMtk; 
    cout << " Masukan nilai Inggris: ";
    cin >> nInggris;

    rerata = (nInggris + nMtk) / 2;

    if (rerata >= 70) {
        status = " Diterima ";
    }
    else if (nMtk > 80) {
        status = " Diterima jalur matematika";
    }
    else
    {
        status = "  Ditolak";
    }

    cout << " status kelulusan " << status << endl;
}

void display()
{   

    Mahasiswa mhs[20];
    for (int i = 0; i < 20; i++) {

        cout << "Nama Mahasiswa : ";
        cin >> mhs.nama;
        cout << "Status Mahasiswa : ";
        cin >> mhs.status;
    }
}

int main()
{
   
    input();
    display();
    

    char pilihan;
    do
    {

        cout << "apakah anda ingin mengulangi lagi? (y/n)";
        cin >> pilihan;

        system("cls");

    } while (pilihan == 'y' || pilihan == 'Y');


}


// 1. int nTinggi, float nJari, double Llingkaran, char pilihan;
// 2. memberikan kondisi jika iya atau tidak misalnya status kelulusan mahasiswa if= nilai 80 lulus, else= nilai kurang 80 tidak lulus 
// 3. membuat input struktur data diri mahasiswa lalu menampilkan hasil data tersebut
// 4. prosedur
//     tidak mengembalikkan nilai(hanya melewatkan saja)
//     contoh: hanya menampilkan bilangan tanpa adanya operasi perhitungan
//    fungsi
//    mengembalikkan nilai
//      contoh: membuat luas persegi panjang dengan cara mengembalikan variabelnya untuk dihitung 
// 5. melakukan perulangan penulisan nama program studi berdasarkan jumlah yang telah ditentukan