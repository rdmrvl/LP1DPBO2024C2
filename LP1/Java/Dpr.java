/* 
Saya Marvel Ravindra Dioputra [2200481] LatPrak1 Java dalam Mata Kuliah DPBO 
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/
import java.util.ArrayList; //library untuk implemenasi array list
import java.util.List;      //library untuk linked list
import java.util.Scanner;   //library untuk melakukan input (scanfnya lah)

public class Dpr {
    String id;          //atribut untuk menampung id
    String name;        //atribut untuk menampung nama
    String bidang;      //atribut untuk menampung bidang
    String partai;      //atribut untuk menampung partai

    public static void main(String[] args) {
        List<Dpr> llist = new ArrayList<>(); // List untuk menampung data dpr
        String id;
        int endProgram = 0;
        Scanner scanner = new Scanner(System.in);

        while (endProgram == 0) {
            clearScreen(); // Panggil method untuk membersihkan layar

            System.out.println("+--MENU-------------+");
            System.out.println("| 1. Tambah Anggota |");
            System.out.println("| 2. Ubah Anggota   |");
            System.out.println("| 3. Hapus Anggota  |");
            System.out.println("| 4. List Anggota   |");
            System.out.println("| 5. Exit Program   |");
            System.out.println("+-------------------+");
            System.out.print("Pilih menu : ");
            int menu = scanner.nextInt();           //memilih inputan menggunakan scanner.nextInt

            Dpr dpr = new Dpr();
            if (menu == 1) {
                clearScreen();
                dpr.showList(llist);
                dpr.add(llist);
            } else if (menu == 2) {
                clearScreen();
                dpr.showList(llist);
                System.out.print("Masukkan ID anggota yang ingin diubah: ");
                id = scanner.next();
                dpr.update(llist, id);
            } else if (menu == 3) {
                clearScreen();
                dpr.showList(llist);
                System.out.print("Masukkan ID anggota yang ingin dihapus: ");
                id = scanner.next();
                dpr.remove(llist, id);
            } else if (menu == 4) {
                clearScreen();
                dpr.showList(llist);
            } else if (menu == 5) {
                endProgram = 1;
            } else {
                System.out.println("Pilihan tidak valid!");
            }

            if (menu != 5) {
                System.out.println("1. Kembali ke Menu");
                System.out.println("2. Exit Program");
                System.out.print("Pilih : ");
                int listOption = scanner.nextInt();

                if (listOption == 2) {
                    endProgram = 1;
                }
            }
        }
    }

    // Method untuk membersihkan layar
    public static void clearScreen() {
        System.out.print("\033[H\033[2J");
        System.out.flush();
    }

    // Method untuk menambah anggota ke list
    public void add(List<Dpr> llist) {
        Scanner scanner = new Scanner(System.in);
        Dpr temp = new Dpr();
        System.out.println("Masukkan data anggota baru:");
        System.out.print("ID: ");
        temp.id = scanner.next();
        System.out.print("Nama: ");
        temp.name = scanner.next();
        System.out.print("Bidang: ");
        temp.bidang = scanner.next();
        System.out.print("Partai: ");
        temp.partai = scanner.next();
        llist.add(temp);
    }

    // Method untuk menghapus anggota dari list berdasarkan ID
    public void remove(List<Dpr> llist, String id) {
        llist.removeIf(dpr -> dpr.id.equals(id));
    }

    // Method untuk mengupdate anggota dari list berdasarkan ID
    public void update(List<Dpr> llist, String id) {
        Scanner scanner = new Scanner(System.in);
        for (Dpr dpr : llist) {
            if (dpr.id.equals(id)) {
                System.out.println("Masukkan data yang diperbarui:");
                System.out.print("ID: ");
                dpr.id = scanner.next();
                System.out.print("Nama: ");
                dpr.name = scanner.next();
                System.out.print("Bidang: ");
                dpr.bidang = scanner.next();
                System.out.print("Partai: ");
                dpr.partai = scanner.next();
            }
        }
    }

    // Method untuk menampilkan list anggota
    public void showList(List<Dpr> llist) {
        if (llist.isEmpty()) {
            System.out.println("List Anggota DPR Kosong.");
        } else {
            int i = 0;
            for (Dpr dpr : llist) {
                System.out.println((i + 1) + ". " + dpr.id + "\t | " + dpr.name + "\t | " + dpr.bidang + "\t | " + dpr.partai);
                i++;
            }
            System.out.println();
        }
    }
}