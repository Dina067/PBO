<?php
class DBConfig {
    private $host = "localhost";
    private $username = "username";
    private $password = "password";
    private $database = "database";

    protected $conn;

    public function __construct() {
        if (!isset($this->conn)) {
            $this->conn = new mysqli($this->host, $this->username, $this->password, $this->database);

            if (!$this->conn) {
                echo "Koneksi gagal: " . mysqli_connect_error();
            }
        }

        return $this->conn;
    }
}
?>