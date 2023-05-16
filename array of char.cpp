#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char kata[]="Belajar Matematika", pilih, huruf,pilih2, kal[100];
    int nomor, i, indexAwal, len, index_awal;
    int panjang_kalimat=strlen(kata);

    do
    {
        cout << "==================================================" << endl;
        cout << "\t       PROGRAM ARRAY OF CHAR " << endl;
        cout << "==================================================" << endl;
        cout << "       Isi Array Of Char => "<<kata<<endl;
        cout << "       Panjang Kalimat   => " <<panjang_kalimat<<endl;
        cout << "--------------------------------------------------" << endl;
        cout << "\t Menu" << endl;
        cout << " 1. Insert character pada indeks tertentu" << endl;
        cout << " 2. Insert array pada indeks tertentu" << endl;
        cout << " 3. Pencarian Substring\n" << endl;

        cout << " Pilihan Anda [1/2/3] : "; cin >> nomor;

        system ("cls");
        switch(nomor)
        {
            case 1:
                cout << "  Insert character pada indeks tertentu" << endl;
                cout << "=========================================" << endl;
                cout << " Isi Array Of Char => "<<kata<<endl<<endl;
                cout << " Indeks yang diinputkan   : "; cin >> i;

                if (i<panjang_kalimat)
                {
                    cout << " Karakter yang dinputkan  : "; cin >> huruf;
                    kata[i]=huruf;
                    cout << " Isi Array Of Char Terbaru => "<<kata<<endl;
                } else
                {
                    cout << " Masukkan indeks yang tepat" << endl;
                }

                break;

            case 2:
                {
                cout << " Insert array pada indeks tertentu" << endl;
                cout << "=======================================" << endl;
                cout << " Isi Array Of Char => "<<kata<<endl<<endl;
                int k=0;
                do
                {
                    cout << " Masukkan huruf : ";cin>>kal[k];
                    cout << " Tambah huruf? [y/n] : ";cin>>pilih2;
                    k++;
                }while (pilih2 == 'y'||pilih2 == 'Y');

                cout << " Index awal yang ditempati : ";cin>>index_awal;
                int b=k;
                k=0;
                for (int a=0; a<b;a++)
                {
                    kata[index_awal]=kal[k];
                    index_awal++;
                    k++;
                }

                cout << " Isi Array Of Char Terbaru => "<<kata<<endl;
                break;}

            case 3:
                cout << "         Pencarian Substring" << endl;
                cout << "=======================================" << endl;
                cout << " Isi Array Of Char => "<<kata<<endl<<endl;
                cout << " Masukkan indeks awal : ";cin >> indexAwal;
                cout << " Panjang substring    : ";cin >>len;

                cout <<" Substring => ";
                for (int j=indexAwal; j<=indexAwal+len; j++)
                {
                    cout<<kata[j];
                }


        }

        cout << "\n\n Apa Anda ingin memilih menu lain? [Y/T] : "; cin >> pilih;
        system("cls");

    }while (pilih == 'y' || pilih == 'Y');

}
