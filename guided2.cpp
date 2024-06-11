#include <iostream>
using namespace std;
#include <conio.h>
#include <iomanip>
int data1[7] = {1, 8, 2, 5, 4, 9, 7};
int cari;
void selection_sort()
{
    int temp, min, i, j;
    for (i = 0; i < 7; i++)
    {
        min = i;
        for (j = i + 1; j < 7; j++)
        {
            if (data1[j] < data1[min])
            {
                min = j;
            }
        }
        temp = data1[i];
        data1[i] = data1[min];
        data1[min] = temp;
    }
}
void binarysearch()
{
    // searching
    int awal, akhir, tengah, b_flag = 0;
    awal = 0;
    akhir = 7;
    while (b_flag == 0 && awal <= akhir)
    {
        tengah = (awal + akhir) / 2;
        if (data1[tengah] == cari)
        {
            b_flag = 1;
            break;
        }
        else if (data1[tengah] < cari)
            awal = tengah + 1;
        else
            akhir = tengah - 1;
    }
    if (b_flag == 1)
        cout << "\n Data ditemukan pada index ke-"<<tengah<<endl;
            else cout
             << "\n Data tidak ditemukan\n";
}
int main()
{
    cout << "\t BINARY SEARCH " << endl;
    cout << "\n Data : ";
    // tampilkan data1 awal
    for (int x = 0; x < 7; x++)
        cout << setw(3) << data1[x];
    cout << endl;
    cout << "\n Masukkan data yang ingin Anda cari :";
    cin >> cari;
    cout << "\n Data diurutkan : ";
    // urutkan data1 dengan selection sort
    selection_sort();
    // tampilkan data1 setelah diurutkan
    for (int x = 0; x < 7; x++)
        cout << setw(3) << data1[x];
    cout << endl;
    binarysearch();
    _getche();
    return EXIT_SUCCESS;
}