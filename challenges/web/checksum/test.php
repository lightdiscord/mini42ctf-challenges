<?php

if (!isset($_GET["code"]) || $_GET["code"] !== md5("test.php")) {
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
	<h1>Test</h1>

	<p>This is a test page, test test and retest.</p>
	<!-- I should remove this page from the robots.txt when I'm done -->
</body>
</html>
