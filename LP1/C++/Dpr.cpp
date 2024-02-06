/* 
Saya Marvel Ravindra Dioputra [2200481] LatPrak1 C++ dalam Mata Kuliah DPBO 
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

#include <iostream> // library innput output pada c++
#include <string>   // library string
#include <list>     // library untuk list

using namespace std;

class Dpr {             // class untuk objek dpr
private:
    string id;          // atribut id
    string name;        // atribut name
    string bidang;      // atribut bidang
    string partai;      // atribut partai

public:
    // Konstruktor default
    Dpr() {
        this->id = "";          // id di set kosong
        this->name = "";        // name di set kosong
        this->bidang = "";      // bidang di set kosong
        this->partai = "";      // partai di set kosong
    }

    // Konstruktor dengan parameter
    Dpr(string id, string name, string bidang, string partai) {
        this->id = id;              // memasukan data id inputan ke atribut
        this->name = name;          // memasukan name id inputan ke name
        this->bidang = bidang;      // memasukan bidang id inputan ke bidang
        this->partai = partai;      // memasukan data partai inputan ke partai
    }

    // Getter dan setter untuk id
    string get_id() {
        return this->id;
    }

    void set_id(string id) {
        this->id = id;
    }

    // Getter dan setter untuk name
    string get_name() {
        return this->name;
    }

    void set_name(string name) {
        this->name = name;
    }

    // Getter dan setter untuk bidang
    string get_bidang() {
        return this->bidang;
    }

    void set_bidang(string bidang) {
        this->bidang = bidang;
    }

    // Getter dan setter untuk partai
    string get_partai() {
        return this->partai;
    }

    void set_partai(string partai) {
        this->partai = partai;
    }

    // Method untuk menambah anggota ke list
    void add(list<Dpr>& llist) {
        Dpr temp;
        cout << "Masukkan data anggota baru:" << '\n';
        cout << "ID: ";
        cin >> id;              //input id
        cout << "Nama: ";
        cin >> name;            //input nama
        cout << "Bidang: ";
        cin >> bidang;          //input bidang
        cout << "Partai: ";
        cin >> partai;          //input partai

        temp.set_id(id);            //set data yang sudah di input ke atribut id
        temp.set_name(name);        //set data yang sudah di input ke atribut name
        temp.set_bidang(bidang);    //set data yang sudah di input ke atribut bidang
        temp.set_partai(partai);    //set data yang sudah di input ke atribut partai

        llist.push_back(temp);      //push kedalam list
    }

    // Method untuk menghapus anggota dari list berdasarkan ID
    void remove(list<Dpr>& llist, string id) {
        auto it = llist.begin();
        while (it != llist.end()) {
            if (it->get_id() == id) {
                it = llist.erase(it); // Hapus elemen dan perbarui iterator ke elemen berikutnya
            } else {
                ++it; // Lanjutkan ke elemen berikutnya
            }
        }
    }

    // Method untuk mengupdate anggota dari list berdasarkan ID
    void update(list<Dpr>& llist, string id) {
        for (auto it = llist.begin(); it != llist.end(); ++it) {
            if (it->get_id() == id) {
                cout << "Masukkan data yang diperbarui:" << '\n';
                string newId, newName, newBidang, newPartai;
                cout << "ID: ";
                cin >> newId;
                cout << "Nama: ";
                cin >> newName;
                cout << "Bidang: ";
                cin >> newBidang;
                cout << "Partai: ";
                cin >> newPartai;

                it->set_id(newId);
                it->set_name(newName);
                it->set_bidang(newBidang);
                it->set_partai(newPartai);
            }
        }
    }

    // Method untuk menampilkan list anggota
    void showList(list<Dpr>& llist) {
        if (llist.empty()) {
            cout << "List Anggota DPR Kosong." << '\n';
        }
        else {
            int i = 0;
            for (auto it = llist.begin(); it != llist.end(); it++) {
                cout << (i + 1) << ". " << it->get_id() << "\t | " << it->get_name() << "\t | " << it->get_bidang() << "\t | " << it->get_partai() << '\n';
                i++;
            }
            cout << endl;
        }
    }

    // Destruktor untuk free alokasi memori
    ~Dpr() {

    }
};