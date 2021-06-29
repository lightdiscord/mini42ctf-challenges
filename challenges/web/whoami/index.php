<!DOCTYPE html>
<html lang="en">
<head>
	<meta charset="UTF-8">
	<title>Whoami?</title>
</head>
<body>
	<h1>Whoami?</h1>

	<p><?php
if ($_SERVER['HTTP_USER_AGENT'] === "admin") {
	echo "You're now authenticated, you can proceed using mini42CTF{4uth3nt1c4t10n_thr0ugh_Us3r_4g3n7}";
} else {
	echo "Hello, <small>" . htmlspecialchars($_SERVER['HTTP_USER_AGENT']) . "</small> only <small>admin</small> is allowed here.";
}
	?></p>
</body>
</html>
