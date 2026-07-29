<?php

$con = mysqli_connect("localhost","root","","cruddb");

if(!$con){
    die('Connection Failed'. mysqli_connect_error());
}

?>