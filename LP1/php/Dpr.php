<!-- /* 
Saya Marvel Ravindra Dioputra [2200481] LatPrak1 php dalam Mata Kuliah DPBO 
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin
*/ -->
<?php
    class Dpr{
        // atribut
        private $id;
        private $nama;
        private $bidang;
        private $partai;
        private $foto;

        // konstruktor
        public function __construct($id, $nama, $bidang, $partai, $foto) {
            $this->id = $id;
            $this->nama = $nama;
            $this->bidang = $bidang;
            $this->partai = $partai;
            $this->foto = $foto;
        }

        // Getter dan setter
        public function getId() {
            return $this->id;
        }

        public function setId($id) {
            $this->id = $id;
        }

        public function getNama() {
            return $this->nama;
        }

        public function setNama($nama) {
            $this->nama = $nama;
        }

        public function getBidang() {
            return $this->bidang;
        }

        public function setBidang($bidang) {
            $this->bidang = $bidang;
        }

        public function getPartai() {
            return $this->partai;
        }

        public function setPartai($partai) {
            $this->partai = $partai;
        }

        public function getFoto() {
            return $this->foto;
        }

        public function setFoto($foto) {
            $this->foto = $foto;
        }

        // Method untuk menampilkan data anggota dalam bentuk baris tabel
        public function showList() {
            echo "<tr>";
            echo "<td>{$this->id}</td>";
            echo "<td>{$this->nama}</td>";
            echo "<td>{$this->bidang}</td>";
            echo "<td>{$this->partai}</td>";
            echo "<td><img src='{$this->foto}' alt='{$this->nama}' height='50' width='50' ></td>";
            echo "</tr>";
        }

        function __destruct(){

        }
} 
?>
