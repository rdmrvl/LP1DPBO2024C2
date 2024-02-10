/* 
Saya Marvel Ravindra Dioputra [2200481] LatPrak1 Java dalam Mata Kuliah DPBO 
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/
import java.util.ArrayList; //library untuk implementasi array list
import java.util.List;      //library untuk linked list
import java.util.Scanner;   //library untuk melakukan input (scanfnya lah)

public class Dpr {
    private String id;          //atribut untuk menampung id
    private String name;        //atribut untuk menampung nama
    private String bidang;      //atribut untuk menampung bidang
    private String partai;      //atribut untuk menampung partai

    //konstruktor
    public Dpr(String id, String name, String bidang, String partai) {
        this.id = id;
        this.name = name;
        this.bidang = bidang;
        this.partai = partai;
    }

    //getter dan setter
    public String getId() {
        return id;
    }

    public void setId(String id) {
        this.id = id;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getBidang() {
        return bidang;
    }

    public void setBidang(String bidang) {
        this.bidang = bidang;
    }

    public String getPartai() {
        return partai;
    }

    public void setPartai(String partai) {
        this.partai = partai;
    }

    public static void main(String[] args) {
        List<Dpr> llist = new ArrayList<>(); // List untuk menampung data dpr
        int endProgram = 0;
        Scanner scanner = new Scanner(System.in);

        while (endProgram == 0) {
            clearScreen(); //method untuk membersihkan layar

            System.out.println("+--MENU-------------+");
            System.out.println("| 1. Tambah Anggota |");
            System.out.println("| 2. Ubah Anggota   |");
            System.out.println("| 3. Hapus Anggota  |");
            System.out.println("| 4. List Anggota   |");
            System.out.println("| 5. Exit Program   |");
            System.out.println("+-------------------+");
            System.out.print("Pilih menu : ");
            int menu = scanner.nextInt();           //memilih inputan menggunakan scanner.nextInt

            Dpr dpr = new Dpr("", "", "", ""); //Instansiasi
            if (menu == 1) {
                clearScreen();
                dpr.showList(llist);
                dpr.add(llist);
            } else if (menu == 2) {
                clearScreen();
                dpr.showList(llist);
                System.out.print("Masukkan ID anggota yang ingin diubah: ");
                String id = scanner.next();
                dpr.update(llist, id);
            } else if (menu == 3) {
                clearScreen();
                dpr.showList(llist);
                System.out.print("Masukkan ID anggota yang ingin dihapus: ");
                String id = scanner.next();
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
        System.out.println("Masukkan data anggota baru:");
        System.out.print("ID: ");
        String id = scanner.next();
        System.out.print("Nama: ");
        String name = scanner.next();
        System.out.print("Bidang: ");
        String bidang = scanner.next();
        System.out.print("Partai: ");
        String partai = scanner.next();
        Dpr temp = new Dpr(id, name, bidang, partai); // Instantiating Dpr object with provided values
        llist.add(temp);
    }

    // Method untuk menghapus anggota dari list berdasarkan ID
    public void remove(List<Dpr> llist, String id) {
        llist.removeIf(dpr -> dpr.getId().equals(id));
    }

    // Method untuk mengupdate anggota dari list berdasarkan ID
    public void update(List<Dpr> llist, String id) {
        Scanner scanner = new Scanner(System.in);
        for (Dpr dpr : llist) {
            if (dpr.getId().equals(id)) {
                System.out.println("Masukkan data yang diperbarui:");
                System.out.print("ID: ");
                dpr.setId(scanner.next());
                System.out.print("Nama: ");
                dpr.setName(scanner.next());
                System.out.print("Bidang: ");
                dpr.setBidang(scanner.next());
                System.out.print("Partai: ");
                dpr.setPartai(scanner.next());
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
                System.out.println((i + 1) + ". " + dpr.getId() + "\t | " + dpr.getName() + "\t | " + dpr.getBidang() + "\t | " + dpr.getPartai());
                i++;
            }
            System.out.println();
        }
    }
}
