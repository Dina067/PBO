<?php
// INCLUDE KONEKSI KE DATABASE
include_once("config.php");

// AMBIL DATA DARI DATABASE BERDASARKAN DATA TERAKHIR DI INPUT
$result = mysqli_query($mysqli, "SELECT * FROM users ORDER BY id DESC");
?>

<html>

<head>
	<title>Homepage</title>
	<style type="text/css">
      * {
        font-family: "Trebuchet MS";
      }
      h1 {
        text-transform: uppercase;
        color: #00798c;
        text-shadow : 1px 1px 1px #003d5b
      }
      table {
        border: solid 1px #DDEEEE;
        border-collapse: collapse;
        border-spacing: 0;
        width: 70%;
        margin: 35px auto 35px auto;
      }
      .stable {
        background-color: #003d5b;
        border: solid 1px #30638e;
        color: #edae49;
        padding: 10px;
        text-align: left;
        text-decoration: none;
      }
      .ttable {
        border: solid 1px #DDEEEE;
        color: #edae49;
        padding: 10px;
    
      }
      a {
          background-color: #d1495b;
          color: #fff;
          padding: 10px;
          text-decoration: none;
          font-size: 12px;
      }
    </style>
</head>

<body>
	<center><h1>Data Mahasiswa</h1><center>
	<center><a href="add.html">Tambah Data Mahasiswa</a><center>
	<div>
	<table>

<tr class="stable">
	<td class="ttable">Nama</td>
	<td class="ttable">Umur</td>
	<td class="ttable">Email</td>
	<td class="ttable">Gambar</td>
	<td class="ttable">Update</td>
</tr>
<?php

while ($res = mysqli_fetch_array($result)) {
	echo "<tr>";
	echo "<td>" . $res['nama'] . "</td>";
	echo "<td>" . $res['umur'] . "</td>";
	echo "<td>" . $res['email'] . "</td>";
	echo "<td><img width='80' src='image/" . $res['gambar'] . "'</td>";
	echo "<td><a href=\"edit.php?id=$res[id]\">Edit</a> | <a href=\"delete.php?id=$res[id]\" onClick=\"return confirm('Kamu yakin untuk delete ini?')\">Delete</a></td>";
}
?>
</table>
	</div>
	
</body>

</html>
