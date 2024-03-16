<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>welcome page</title>
    <link rel="stylesheet" href="style.css">
</head>

<body>

    <div class="container_2">
        <h1>welcome <?php echo $_POST["firstname"] . " " . $_POST["lastname"]; ?></h1> <br>
        <p> ton addresse mail est : <?php echo $_POST["adresse_email"]; ?> </p>
        <a href="index.php">revenir au formulaire</a>
    </div>


</body>

</html>