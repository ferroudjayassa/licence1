<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="stylesheet" href="style.css">
    <title>TP php - index.php</title>

</head>

<body>

    <div class="container">

        <form action="welcome_post.php" method="post">
            <h2 class="form_post">Formulaire avec post</h2>
            <div class="champ_form"><label for="">Prénom</label>: <input type="text" name="firstname" placeholder="prenom"> </div>

            <div class="champ_form"><label for="">Nom</label> <input type="text" name="lastname" placeholder="nom"> </div>

            <div class="champ_form"><label for="">E-mail</label> <input type="email" name="adresse_email" placeholder="email"> </div>

            <button type="submit"> Envoyer </button>

        </form>
        <form action="welcome_get.php" method="get">
            <h2 class="form_get">Formulaire avec get</h2>

            <div class="champ_form"><label for="">Prénom</label> : <input type="text" name="firstname" placeholder="prenom"> </div>

            <div class="champ_form"><label for="">Nom</label> : <input type="text" name="lastname" placeholder="nom"> </div>

            <div class="champ_form"><label for="">E-mail</label> : <input type="email" name="adresse_email" placeholder="email"> </div>

            <button type="submit"> Envoyer </button>

        </form>
    </div>


</body>

</html>