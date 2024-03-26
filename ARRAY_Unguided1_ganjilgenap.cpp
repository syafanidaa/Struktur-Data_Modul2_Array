#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int daftar_bilangan[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int bilangan_ganjil[10], bilangan_genap[10];
    int indeks_ganjil = 0, indeks_genap = 0;

    cout << "Data Array:" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << setw(3) << daftar_bilangan[i];
        if (i < 9)
        {
            cout << ", ";
        }
    }
    cout << endl
         << endl;

    for (int i = 0; i < 10; i++)
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

    cout << "Nomor genap :" << endl;
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

    cout << "Nomor ganjil :" << endl;
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
