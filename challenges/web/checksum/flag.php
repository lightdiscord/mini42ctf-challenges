<?php

if (!isset($_GET["code"]) || $_GET["code"] !== md5("flag.php")) {
	echo "Wrong code? Attack detected! I'm calling the police!";
	die();
}

?><!DOCTYPE html>
<html lang="en">
<head>
	<meta charset="UTF-8">
	<title>Checksum</title>
</head>
<body>
	<h1>Flag</h1>

	<p>Here's a flag: mini42CTF{4_pr3d1ct4bl3_c0d3_1s_n0t_4_c0d3}</p>
</body>
</html>
