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
        cin >> id;
        cout << "Nama: ";
        cin >> name;
        cout << "Bidang: ";
        cin >> bidang;
        cout << "Partai: ";
        cin >> partai;

        temp.set_id(id);
        temp.set_name(name);
        temp.set_bidang(bidang);
        temp.set_partai(partai);

        llist.push_back(temp);
    }

    // Method untuk menghapus anggota dari list berdasarkan ID
    void remove(list<Dpr>& llist, string id) {
        for (auto it = llist.begin(); it != llist.end(); ++it) {
            if (it->get_id() == id) {
                llist.erase(it);
                break;
            }
        }
    }

    // Method untuk mengupdate anggota dari list berdasarkan ID
    void update(list<Dpr>& llist, string id) {
        for (auto it = llist.begin(); it != llist.end(); ++it) {
            if (it->get_id() == id) {
                cout << "Masukkan data yang diperbarui:" << '\n';
                cout << "ID: ";
                cin >> id;
                cout << "Nama: ";
                cin >> name;
                cout << "Bidang: ";
                cin >> bidang;
                cout << "Partai: ";
                cin >> partai;

                it->set_id(id);
                it->set_name(name);
                it->set_bidang(bidang);
                it->set_partai(partai);

                break;
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

    // Destruktor
    ~Dpr() {

    }
};