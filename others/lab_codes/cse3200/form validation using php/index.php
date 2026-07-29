<?php
$name = $email = $username = $password = $confirmpassword = $dob = $contact = "";
$error_name = $error_email = $error_username = $error_password = $error_confirmpassword = $error_dob = $error_contact = "";

if($_SERVER["REQUEST_METHOD"] == "POST"){
	if (empty($_POST["name"])) {
		$error_name = "Name is required";
	  }
	  else {
		$name = $_POST["name"];
	  }
	
	  if (empty($_POST["email"])) {
		$error_email = "Email is required";
	  } else if (!filter_var($email, FILTER_VALIDATE_EMAIL)) {
		$error_email = "Invalid email format";
	  } else {
		$email = $_POST["email"];
	  }

	  if (empty($_POST["username"])) {
		$error_username = "Username is required";
	  } else {
		$username = $_POST["username"];
	  }

	  if (empty($_POST["password"])) {
		$error_password = "Password is required";
	  } else {
		$password = $_POST["password"];
	  }

	  if (empty($_POST["confirmpassword"])) {
		$error_confirmpassword = "Confirm Password is required";
	  } else {
		$confirmpassword = $_POST["confirmpassword"];
	  }

	  if (empty($_POST["dob"])) {
		$error_dob= "Date of Birth is required";
	  } else {
		$dob = $_POST["dob"];
	  }

	  if (empty($_POST["conatct"])) {
		$error_contact = "Contact is required";
	  } else {
		$contact = $_POST["contact"];
	  }


	  
	  if (!preg_match("/^[a-zA-Z-' ]*$/",$name)) {
		$error_name = "Only letters and white space allowed";
	  }

	  if (preg_match("/^[a-zA-Z-' ]*$/",$contact)) {
		$error_contact= "Only numbers allowed";
	  }


}


?>








<!DOCTYPE html>
<html>
<head>
	<title>Registration Form</title>
	<link rel="stylesheet" type="text/css" href="css/bootstrap.css"/>
</head>
<body>


<div class="container">


	<h1>Registration Form</h1>
	<br>

	<form action="" method="post">


		Name: <input type="text" name="name" class="form-control">
		<span class="text-danger"> <?php echo $error_name; ?></span><br>


		Email: <input type="text" name="email" class="form-control">
		<span class="text-danger"> <?php echo $error_email; ?></span><br>

		UserName: <input type="text" name="username" class="form-control">
		<span class="text-danger"> <?php echo $error_username; ?></span><br>

		Password: <input type="text" name="password" class="form-control">
		<span class="text-danger"> <?php echo $error_password; ?></span><br>

		Confirm Password: <input type="text" name="confirmpassword" class="form-control">
		<span class="text-danger"> <?php echo $error_confirmpassword; ?></span><br>

		Date of Birth: <input type="date" name="dob" class="form-control">
		<span class="text-danger"> <?php echo $error_dob; ?></span><br>

		Contact Number: <input type="text" name="contact" class="form-control">
		<span class="text-danger"> <?php echo $error_contact; ?></span><br>
		

		<button type="submit" class="btn btn-success"> SUBMIT </button>


	</form>


</div>


</body>
</html>
