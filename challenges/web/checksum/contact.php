<?php

if (!isset($_GET["code"]) || $_GET["code"] !== md5("contact.php")) {
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
	<h1>Contact</h1>

	<p>Unfortunately some people are spamming me so I temporarily disabled the form.</p>
</body>
</html>
