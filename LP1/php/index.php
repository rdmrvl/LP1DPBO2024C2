<!-- /* 
Saya Marvel Ravindra Dioputra [2200481] LatPrak1 php dalam Mata Kuliah DPBO 
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin
*/ -->
<?php
    include "Dpr.php";

    // Membuat objek Dpr
    $dpr_1 = new Dpr("001", "John Doe", "Dokumentasi", "Nasdem", "img1.jpg");
    $dpr_2 = new Dpr("002", "Ryan Gosling", "Acara", "Golkar", "img2.jpg");
    $dpr_3 = new Dpr("003", "Emma Stone", "Dokumentasi", "PDIP", "img3.jpg");

    // Menambahkan data ke dalam list
    $dprList = array($dpr_1, $dpr_2, $dpr_3);

    // Menampilkan list dalam bentuk tabel
    echo "<br><b>list setelah di add anggota:</b><br>";
    echo "<table border='1'>";
    echo "<tr><th>ID</th><th>Nama</th><th>Bidang</th><th>Partai</th><th>Foto</th></tr>";
    foreach ($dprList as $dpr) {
        $dpr->showList();
    }
    echo "</table>";

    // Update 
    foreach ($dprList as $dpr) {
        if ($dpr->getId() == "002") {
            $dpr->setBidang("City of Stars");
            $dpr->setPartai("are you shining down for me");
            $dpr->setFoto("img4.jpg");
        }
    }

    // Menampilkan list yang telah diupdate
    echo "<br><b>Setelah diupdate:</b><br>";
    echo "<table border='1'>";
    echo "<tr><th>ID</th><th>Nama</th><th>Bidang</th><th>Partai</th><th>Foto</th></tr>";
    foreach ($dprList as $dpr) {
        $dpr->showList();
    }
    echo "</table>";

    // Menghapus anggota
    foreach ($dprList as $key => $dpr) {
        if ($dpr->getId() == "001") {
            unset($dprList[$key]);
        }
    }

    // Menampilkan list setelah penghapusan
    echo "<br><b>Setelah penghapusan:</b><br>";
    echo "<table border='1'>";
    echo "<tr><th>ID</th><th>Nama</th><th>Bidang</th><th>Partai</th><th>Foto</th></tr>";
    foreach ($dprList as $dpr) {
        $dpr->showList();
    }
    echo "</table>";
?>
