<?php
include 'db_config.php';

class CrudOperation extends DBConfig {
    
    public function insertData($name, $email, $photo) {
        $sql = "INSERT INTO users (name, email, photo) VALUES ('$name', '$email', '$photo')";
        $result = $this->conn->query($sql);

        if ($result) {
            return true;
        } else {
            return false;
        }
    }

    public function fetchData() {
        $sql = "SELECT * FROM users";
        $result = $this->conn->query($sql);
        $data = array();

        if ($result->num_rows > 0) {
            while ($row = $result->fetch_assoc()) {
                $data[] = $row;
            }
        }

        return $data;
    }

    public function deleteData($id) {
        $sql = "DELETE FROM users WHERE id = $id";
        $result = $this->conn->query($sql);

        if ($result) {
            return true;
        } else {
            return false;
        }
    }

    public function updateData($id, $name, $email, $photo) {
        $sql = "UPDATE users SET name='$name', email='$email', photo='$photo' WHERE id = $id";
        $result = $this->conn->query($sql);

        if ($result) {
            return true;
        } else {
            return false;
        }
    }
}
?>