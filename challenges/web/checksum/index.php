<!DOCTYPE html>
<html lang="en">
<head>
	<meta charset="UTF-8">
	<title>Checksum</title>
</head>
<body>
	<h1>Welcome to my site!</h1>

	<ul>
		<li><a href="/contact.php?code=<?= md5("contact.php") ?>">/contact.php</a> - contact page</li>
		<li><a href="/about.php?code=<?= md5("about.php") ?>">/about.php</a> - about page</li>
		<!-- <li><a href="/test.php?code=<?= md5("test.php") ?>">/test.php</a> - test page</li> -->
	</ul>
</body>
</html>
