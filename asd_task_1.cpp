/**
    NAMA  : Falia Amalia
    NIM   : 1301164602
    KELAS : IF-40-02
**/


#include <iostream>

using namespace std;

/**
    - daftarkan seluruh variable global yang dibutuhkan di sini
**/
//=================================================
// YOUR CODE STARTS HERE

int a, x, y, z, awal;
float nuts,nuas,ntubes;
float uts, uas, tubes;
float total;

// YOUR CODE ENDS HERE
//=================================================


void main_menu();
void set_standar();
void set_proporsi_nilai();
void hitung_index(double uts, double uas, double tubes);
void input();
void thank_you();

int main()
{
    main_menu();
    return 0;
}

void main_menu()
{
    /**
    - fungsi berisi pilihan menu di dalam aplikasi:
      daftar menu:
      1. set standar index nilai
      2. set proporsi nilai
      3. input nilai
      4. keluar
    - fungsi meminta input pilihan menu dari user
      dan memanggil fungsi menu yang dipilih
    **/

    int pilihan;
    //=================================================
    // YOUR CODE STARTS HERE
    awal=1;
    while(awal==1)
    {

        cout<<"Daftar Menu"<<endl;
        cout<<"1. Set Standar Index Nilai"<<endl;
        cout<<"2. Set Proporsi Nilai"<<endl;
        cout<<"3. Input Nilai"<<endl;
        cout<<"4. Keluar"<<endl;
        cout<<"Masukkan Pilihan: "<<endl;
        cin>> pilihan;
        if (pilihan==1)
        {
            set_standar ();
        }
        else if (pilihan==2)
        {
            set_proporsi_nilai ();
        }
        else if (pilihan==3)
        {
            input ();
        }
        else if (pilihan==4)
        {
            thank_you ();
        }
    }
}

// YOUR CODE ENDS HERE
//=================================================


void set_proporsi_nilai()
{
    /**
    - fungsi mengubah prosentase nilai UTS, UAS, dan TUBES
    - fungsi akan menerima 3 input prosentase dari user untuk UTS, UAS, dan TUBES
    - fungsi akan mengulang menerima input dari user jika total prosentase != 100
    **/
    //=================================================
    // YOUR CODE STARTS HERE

    cout<<"Input prosentase dalam persen"<<endl;
    cout<<"Masukkan prosentase UTS: "<<endl;
    cin>>nuts;
    cout<<"Masukkan prosentase UAS: "<<endl;
    cin>>nuas;
    cout<<"Masukkan prosentase TUBES: "<<endl;
    cin>>ntubes;

    if (nuts+nuas+ntubes != 100)
    {
        cout<<"Presentase yang dimasukkan salah, silahkan ulang kembali"<<endl;
        set_proporsi_nilai();
    }

    // YOUR CODE ENDS HERE
    //=================================================
}

void set_standar()
{
    /**
    - fungsi mengubah standar index A, B, C, D, dan E
    - fungsi akan menerima input rentang nilai untuk masing-masing index nilai
    - fungsi akan mengulang menerima input dari user jika terdapat nilai yang overlap
    **/
    //=================================================
    // YOUR CODE STARTS HERE

    cout<<"Masukkan standar minimum A: ";
    cin>>a;
    cout<<"Masukkan standar minimum B: ";
    cin>>x;
    cout<<"Masukkan standar minimum C: ";
    cin>>y;
    cout<<"Masukkan standar minimum D: ";
    cin>>z;


    main_menu();

    // YOUR CODE ENDS HERE
    //=================================================
}


void hitung_index (float uts, float uas, float tubes, float nuts, float nuas, float ntubes, int a, int x, int y, int z)
{

    /**
    - fungsi menghitung total nilai berdasarkan input parameter dan proporsi nilai
    - fungsi menentukan index nilai berdasarkan standar nilai
    - fungsi mengembalikan karakter index nilai
    **/

    char index;
    //=================================================
    // YOUR CODE STARTS HERE

    total=(nuts/100*uts)+(nuas/100*uas)+(ntubes/100*tubes);
    cout<<total<<endl;
    if (total>=a)
    {
        cout<<"Index nilai anda adalah: A";
    }
    else if (total>=x)
    {
        cout<<"Index nilai anda adalah: B";
    }
    else if (total>=y)
    {
        cout<<"Index nilai anda adalah: C";
    }
    else if (total>=z)
    {
        cout<<"Index nilai anda adalah: D";
    }
    else
    {
        cout<<"Index nilai anda adalah: E";
    }

    cout<<endl;

    // YOUR CODE ENDS HERE
    //=================================================
    //return index;
}


void input()
{
    /**
    - fungsi menerima input nilai UTS, UAS, dan TUBES
    - fungsi menampilkan index yang didapat berdasarkan input nilai UTS, UAS, dan TUBES
    **/
    double uas, uts, tubes;
    //=================================================
    // YOUR CODE STARTS HERE

    cout<<"Masukkan nilai UTS: ";
    cin>>uts;
    cout<<"Masukkan nilai UAS: ";
    cin>>uas;
    cout<<"Masukkan nilai TUBES: ";
    cin>>tubes;

    hitung_index(uts,uas,tubes,nuts,nuas,ntubes,a,x,y,z);

    main_menu();
    // YOUR CODE ENDS HERE
    //=================================================
}

void thank_you()
{
    /**
    - fungsi menampilkan pesan singkat untuk mengakhiri program
    - tampilkan nim dan nama kalian
    **/
    //=================================================
    // YOUR CODE STARTS HERE

    cout<<"Anda telah selesai. Terima Kasih :))"<<endl;
    cout<<"Nama: Falia Amalia"<<endl;
    cout<<"NIM: 1301164602";

    // YOUR CODE ENDS HERE
    //=================================================
}
