<!DOCTYPE html>
<html>
<head>
	<title></title>
	<link rel="stylesheet" type="text/css" href="css/bootstrap.css" />
	<script src="script.js"></script>
</head>
<body>
	<div>
	<div class="container"><br>
		<h1>Registration Form</h1></div>
		<div class="col-lg-6 m-auto d-block">
			<form action="connection.php" onsubmit="return validation()" class="bg-light">
				<div class="form-group">
					<label for="name" class="font-weight-bold"> Name: </label>
					<input type="text" name="name" class="form-control" id="name">
					<span id="war_name" class="text-danger font-weight-bold"> </span>
				</div>
				<div class="form-group">
					<label class="font-weight-bold"> Email: </label>
					<input type="text" name="email" class="form-control" id="email">
					<span id="war_email" class="text-danger font-weight-bold"> </span>
				</div>
				<div class="form-group">
					<label class="font-weight-bold"> UserName: </label>
					<input type="text" name="username" class="form-control" id="username">
					<span id="war_username" class="text-danger font-weight-bold"> </span>
				</div>
				<div class="form-group">
					<label class="font-weight-bold"> Password: </label>
					<input type="text" name="pass" class="form-control" id="pass">
					<span id="war_password" class="text-danger font-weight-bold"> </span>
				</div>
				<div class="form-group">
					<label class="font-weight-bold"> Confirm Password: </label>
					<input type="text" name="conpass" class="form-control" id="conpass">
					<span id="war_confrmpass" class="text-danger font-weight-bold"> </span>
				</div>
				<div class="form-group">
					<label class="font-weight-bold"> Date of Birth: </label>
					<input type="date" name="dob" class="form-control" id="dob">
					<span id="dob" class="text-danger font-weight-bold"> </span>
				</div>
				<div class="form-group">
					<label class="font-weight-bold"> Contact Number: </label>
					<input type="text" name="contactnumber" class="form-control" id="contactnumber">
					<span id="war_contact" class="text-danger font-weight-bold"> </span>
				</div>	
				<input type="submit" name="submit" value="submit" class="btn btn-success">
			</form><br><br>

		</div>
	</div>	
</body>
</html>