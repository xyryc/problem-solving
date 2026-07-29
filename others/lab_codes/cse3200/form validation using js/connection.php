<?php  

	include 'db_conn.php';

	$name = ($_POST['name']);
	$email = ($_POST['email']);
	$username = ($_POST['username']);	
	$password = ($_POST['password']);
	$dob = ($_POST['dob']);
	$contactnumber = ($_POST['contactnumber']);




		$sql = "INSERT INTO reg_data(name, email,username, password, dob, contactnumber) VALUES('$name', '$email', 'username', 'password', 'dob', 'contactnumber')";
		$result = mysqli_query($conn, $sql);

		if ($result) {
			echo "Data inserted successfully!";
		}else {
			echo "Data insertion unsuccessful!";
		}

		header("Location: login.html");
		exit();

?>