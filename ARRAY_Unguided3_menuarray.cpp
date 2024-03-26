#include <iostream>
using namespace std;

int main()
{
    int pilih;
    int daftar_bil[10];
    int total = 0;
    int bilangan;
    int n;
    int maksimum = daftar_bil[0];
    int minimum = daftar_bil[0];

    cout << "--------MENU-------  " << endl;
    cout << " " << endl;
    cout << "1. Cari Nilai Minimum" << endl;
    cout << "2. Cari Nilai Maksimum" << endl;
    cout << "3. Hitung Rata-rata" << endl;
    cout << " " << endl;
    cout << "Masukkan pilihan (1-3): ";
    cin >> pilih;
    cout << " " << endl;

    switch (pilih)
    {

    case 1:
        cout << "Cari Nilai Minimum" << endl;

        cout << "Masukkan panjang Array : ";
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            cout << " Masukkan Bilangan Bulat ke-" << i + 1 << " : ";
            cin >> daftar_bil[i];
            if (daftar_bil[i] < minimum)
            {
                minimum = daftar_bil[i];
            }
        }
        cout << "Nilai Minimum: " << minimum << endl;
        break;
    case 2:
        cout << "Cari Nilai Maksimum" << endl;
        cout << "Masukkan panjang Array : ";
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            cout << " Masukkan Bilangan Bulat ke-" << i + 1 << " : ";
            cin >> daftar_bil[i];

            if (daftar_bil[i] > maksimum)
            {
                maksimum = daftar_bil[i];
            }
        }
        cout << "Nilai Maksimum: " << maksimum << endl;
        break;
    case 3:
        cout << "Hitung Rata-rata" << endl;
        for (int i = 0; i < 10; i++)
        {
            cout << " Masukkan Bilangan Bulat ke-" << i + 1 << " : ";
            cin >> daftar_bil[i];
            total += daftar_bil[i];
        }
        float rata_rata = static_cast<float>(total) / 10;
        cout << "Rata-rata: " << rata_rata << endl;
        break;
    }

    return 0;
}
