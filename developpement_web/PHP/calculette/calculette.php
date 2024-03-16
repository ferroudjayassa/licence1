<!DOCTYPE html>
<html>

<head>
	<meta charset="utf-8">
	<title>Calculatrice</title>
	<link rel="stylesheet" href="style.css">

</head>

<body>
	<div class="container">


		<h1>Calculatrice php</h1>

		<form action="resultat_calculette.php" method="POST">
			<label for="op1">Opérande 1 : </label>
			<input type="number" name="op1" id="op1">

			<select name="operation" id="operation">
				<option value="addition">+</option>
				<option value="soustraction">-</option>
				<option value="multiplication">x</option>
				<option value="division">/</option>
			</select>

			<label for="op2">Opérande 2 : </label>
			<input type="number" name="op2" id="op2">
			<div>
				<input class="button" type="submit" value="Calculer">
			</div>
		</form>
	</div>
</body>

</html>