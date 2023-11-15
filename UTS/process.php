<?php
include 'crud_operations.php';

if (isset($_POST['submit'])) {
    $name = $_POST['name'];
    $email = $_POST['email'];
    $photo = $_FILES['photo']['name'];

    $target_dir = "uploads/";
    $target_file = $target_dir . basename($_FILES["photo"]["name"]);

    move_uploaded_file($_FILES["photo"]["tmp_name"], $target_file);

    $crud = new CrudOperation();

    if ($crud->insertData($name, $email, $photo)) {
        header("Location: index.php");
    } else {
        echo "Gagal menambahkan data!";
    }
}
?>