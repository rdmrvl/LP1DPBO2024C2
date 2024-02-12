# /* 
# Saya Marvel Ravindra Dioputra [2200481] LatPrak1 python dalam Mata Kuliah DPBO 
# untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin
# */

# Import kelas Dpr dari file Dpr.py
from Dpr import Dpr
import os

# Fungsi untuk membersihkan layar
def clear_screen():
    os.system('cls' if os.name == 'nt' else 'clear')

# Fungsi untuk menambahkan anggota baru ke dalam list
def add(llist):
    print("Masukkan data anggota baru:")
    id = input("ID: ")
    name = input("Nama: ")
    bidang = input("Bidang: ")
    partai = input("Partai: ")
    temp = Dpr(id, name, bidang, partai)
    llist.append(temp)

# Fungsi untuk menghapus anggota dari list berdasarkan ID
def remove(llist, id):
    llist[:] = [dpr for dpr in llist if dpr.get_id() != id]

# Fungsi untuk mengupdate anggota dari list berdasarkan ID
def update(llist, id):
    for dpr in llist:
        if dpr.get_id() == id:
            print("Masukkan data yang diperbarui:")
            dpr.set_id(input("ID: "))
            dpr.set_name(input("Nama: "))
            dpr.set_bidang(input("Bidang: "))
            dpr.set_partai(input("Partai: "))

# Fungsi untuk menampilkan list anggota
def show_list(llist):
    if not llist:
        print("List Anggota DPR Kosong.")
    else:
        print("+----+--------------+--------------+--------------+--------------+")
        print("| No |     ID       |     Nama     |    Bidang    |    Partai    |")
        print("+----+--------------+--------------+--------------+--------------+")
        for i, dpr in enumerate(llist, 1):
            print(f"| {i:2d} | {dpr.get_id():<12s} | {dpr.get_name():<12s} | {dpr.get_bidang():<12s} | {dpr.get_partai():<12s} |")
        print("+----+--------------+--------------+--------------+--------------+")

# Fungsi utama
if __name__ == "__main__":
    llist = []  # List untuk menampung data anggota DPR
    end_program = 0

    while end_program == 0:
        clear_screen()

        print("+--MENU-------------+")
        print("| 1. Tambah Anggota |")
        print("| 2. Ubah Anggota   |")
        print("| 3. Hapus Anggota  |")
        print("| 4. List Anggota   |")
        print("| 5. Exit Program   |")
        print("+-------------------+")
        menu = int(input("Pilih menu: "))

        if menu == 1:
            clear_screen()
            show_list(llist)
            add(llist)
        elif menu == 2:
            clear_screen()
            show_list(llist)
            id = input("Masukkan ID anggota yang ingin diubah: ")
            update(llist, id)
        elif menu == 3:
            clear_screen()
            show_list(llist)
            id = input("Masukkan ID anggota yang ingin dihapus: ")
            remove(llist, id)
        elif menu == 4:
            clear_screen()
            show_list(llist)
        elif menu == 5:
            end_program = 1
        else:
            print("Pilihan tidak valid!")

        if menu != 5:
            print("1. Kembali ke Menu")
            print("2. Exit Program")
            list_option = int(input("Pilih: "))

            if list_option == 2:
                end_program = 1

