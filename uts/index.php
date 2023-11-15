<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>CRUD with File Upload</title>
</head>
<body>
    <form action="process.php" method="post" enctype="multipart/form-data">
        <label>Name:</label>
        <input type="text" name="name" required><br>

        <label>Email:</label>
        <input type="email" name="email" required><br>

        <label>Photo:</label>
        <input type="file" name="photo" accept="image/*" required><br>

        <button type="submit" name="submit">Submit</button>
    </form>
    
    <?php
    include 'process.php';
    $crud = new CrudOperation();
    $data = $crud->fetchData();

    if (!empty($data)) {
        echo "<h2>User Data:</h2>";
        echo "<table border='1'>";
        echo "<tr><th>ID</th><th>Name</th><th>Email</th><th>Photo</th><th>Action</th></tr>";

        foreach ($data as $row) {
            echo "<tr>";
            echo "<td>" . $row['id'] . "</td>";
            echo "<td>" . $row['name'] . "</td>";
            echo "<td>" . $row['email'] . "</td>";
            echo "<td><img src='uploads/" . $row['photo'] . "' height='50' width='50'></td>";
            echo "<td><a href='edit.php?id=" . $row['id'] . "'>Edit</a> | <a href='delete.php?id=" . $row['id'] . "'>Delete</a></td>";
            echo "</tr>";
        }

        echo "</table>";
    }
    ?>
</body>
</html>
