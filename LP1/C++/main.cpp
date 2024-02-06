/* 
Saya Marvel Ravindra Dioputra [2200481] LatPrak1 C++ dalam Mata Kuliah DPBO 
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/
#include "Dpr.cpp"  // memanggil file Dpr.cpp untuk mengakses class dan atribut

using namespace std;

int main() {
    list<Dpr> llist; // List untuk menampung data dpr
    string id;
    int endProgram = 0;
    while (endProgram == 0) {
        system("cls"); // Clear terminal

        cout << "+--MENU-------------+" << '\n';
        cout << "| 1. Tambah Anggota |" << '\n';
        cout << "| 2. Ubah Anggota   |" << '\n';
        cout << "| 3. Hapus Anggota  |" << '\n';
        cout << "| 4. List Anggota   |" << '\n';
        cout << "| 5. Exit Program   |" << '\n';
        cout << "+-------------------+" << '\n';

        int menu;       // Variabel untuk memilih menu
        cout << "Pilih menu : ";
        cin >> menu;    // Input menu yang dipilih

        Dpr dpr;
        string id;
        if (menu == 1) {
            dpr.showList(llist);
            system("cls");
            dpr.add(llist);
        }
        else if (menu == 2) {
            system("cls");
            dpr.showList(llist);
            cout << "Masukkan ID anggota yang ingin diubah: ";
            cin >> id;
            dpr.update(llist, id);
        }
        else if (menu == 3) {
            system("cls");
            dpr.showList(llist);
            cout << "Masukkan ID anggota yang ingin dihapus: ";
            cin >> id;
            dpr.remove(llist, id);
        }
        else if (menu == 4) {
            system("cls");
            dpr.showList(llist);
        }
        else if (menu == 5) {
            endProgram = 1;
        }
        else {
            cout << "Pilihan tidak valid!";
        }

        if (menu != 5) {
            cout << "1. Kembali ke Menu" << '\n';
            cout << "2. Exit Program" << '\n';
            cout << "Pilih : ";
            int listOption;
            cin >> listOption;

            if (listOption == 2) {
                endProgram = 1;
            }
        }
    }
    return 0;
}