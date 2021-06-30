<?php

if (!isset($_GET["code"]) || $_GET["code"] !== md5("about.php")) {
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
	<h1>About</h1>

	<p>You thought you could find things about me? You should not post anything on the internet.</p>
</body>
</html>
