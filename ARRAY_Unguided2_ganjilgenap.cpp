#include <iostream>
#include <iomanip> // for setw manipulator
using namespace std;

int main()
{
    int jumlahElemen;

    cout << "Masukkan jumlah elemen array (1-100): ";
    cin >> jumlahElemen;

    while (jumlahElemen < 1 || jumlahElemen > 100)
    {
        cout << "Jumlah elemen tidak valid! Masukkan kembali (1-100): ";
        cin >> jumlahElemen;
    }

    int daftar_bilangan[jumlahElemen];
    int bilangan_ganjil[jumlahElemen], bilangan_genap[jumlahElemen];
    int indeks_ganjil = 0, indeks_genap = 0;

    cout << "Masukkan " << jumlahElemen << " bilangan bulat: " << endl;
    for (int i = 0; i < jumlahElemen; i++)
    {
        cout << "Bilangan ke-" << i + 1 << ": ";
        cin >> daftar_bilangan[i];
    }

    for (int i = 0; i < jumlahElemen; i++)
    {
        if (daftar_bilangan[i] % 2 != 0)
        {
            bilangan_ganjil[indeks_ganjil++] = daftar_bilangan[i];
        }
        else
        {
            bilangan_genap[indeks_genap++] = daftar_bilangan[i];
        }
    }

    cout << "Nomor Genap :" << endl;
    for (int i = 0; i < indeks_genap; i++)
    {
        cout << setw(3) << bilangan_genap[i];
        if (i < indeks_genap - 1)
        {
            cout << ", ";
        }
    }
    cout << endl
         << endl;

    cout << "Nomor Ganjil :" << endl;
    for (int i = 0; i < indeks_ganjil; i++)
    {
        cout << setw(3) << bilangan_ganjil[i];
        if (i < indeks_ganjil - 1)
        {
            cout << ", ";
        }
    }
    cout << endl;

    return 0;
}
