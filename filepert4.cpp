#include <iostream>
using namespace std;

//struktur data untuk menyimpan informasi mahasiswa
// typedef sama kaya struck menjelaskan nama struct
/*typedef struct{
    char nama[50];
    int umur;
    float ipk;
} Mahasiswa;
int main(){
FILE *file;

//menulis data ke file biner
file=fopen("mahasiswa.dat","wb");
if (file==NULL){
    cout << "gagal membuka file untuk menulis!" << endl;
    return (1);
}

//mengisi data record
Mahasiswa datamhs={"nayy",19,3.99};
fwrite(&datamhs,sizeof(Mahasiswa),1,file);
fclose(file); //dipake buat ngubah modenya dan akhir program

//membaca data dari file biner
file=fopen("mahasiswa.dat","rb"); //read only
if(file==NULL){
    cout << "gagal membuka file untuk menulis!" << endl;
    return (1);
}

fread(&datamhs, sizeof(Mahasiswa),1,file);
cout << "Nama : " << datamhs.nama << endl;
cout << "Umur : " << datamhs.umur << endl;
cout << "IPK  : " << datamhs.ipk << endl;

fclose(file);
}*/
typedef struct{
    char nama[50];
    char notlpn[15];
} dafkontak;
int main(){
    FILE *file;
    int banyak,menu;

    file = fopen("daftarkontak.dat", "ab");
    if (file == NULL)
    {
        cout << "gagal membuka file untuk menulis!" << endl;
        return (1);
    }
    // mengisi data record
    dafkontak kontak;
    fwrite(&kontak, sizeof(dafkontak), 1, file);
    fclose(file); // dipake buat ngubah modenya dan akhir program

    fread(&kontak, sizeof(dafkontak), 1, file);
    
        cout << "Banyak Data yang ingin dimasukkan : ";
        cin >> banyak;
        cout << "Nama : ";
        cin >> kontak.nama;
        cout << "Nomor Telepon  : ";
        cin >> kontak.notlpn;

        fread(&kontak, sizeof(dafkontak), 1, file);
        for (int i = 0; i < banyak; i++)
        {
            printf("\nData Nilai UTS:\n");
            printf("\nNama : %s", kontak.nama);
            printf("\nNIM  : %d", kontak.notlpn);
        }
        fclose(file);
        if (file == NULL)
        {
            cout << "gagal membuka file untuk menulis!" << endl;
            return (1);
        }
    do{

    }while(menu !=0);
}