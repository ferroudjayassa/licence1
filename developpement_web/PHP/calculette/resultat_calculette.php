<!DOCTYPE html>
<html>

<head>
	<meta charset="utf-8">
	<title>Calculatrice</title>
	<link rel="stylesheet" href="style.css">

</head>

<body>
	<div class="container">


		<h1>Résultat de la calculatrice</h1>
		<?php
		$op1 = $_POST['op1'];
		$op2 = $_POST['op2'];
		$operation = $_POST['operation'];

		switch ($operation) {
			case 'addition':
				$resultat = $op1 + $op2;
				echo "$op1 + $op2 = $resultat";
				break;

			case 'soustraction':
				$resultat = $op1 - $op2;
				echo "$op1 - $op2 = $resultat";
				break;

			case 'multiplication':
				$resultat = $op1 * $op2;
				echo "$op1 * $op2 = $resultat";
				break;

			case 'division':
				if ($op2 != 0) {
					$resultat = $op1 / $op2;
					echo "$op1 / $op2 = $resultat";
				} else {
					echo "Division par zéro est impossible";
				}
				break;

			default:
				echo "Opération invalide";
				break;
		}
		?>

		<p>
			<a href="calculette.php">Revenir à la calculatrice</a>
		</p>
	</div>
</body>

</html>