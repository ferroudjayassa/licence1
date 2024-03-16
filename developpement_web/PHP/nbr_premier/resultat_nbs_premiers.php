<!DOCTYPE html>
<html>
  <head>
    <meta charset="utf-8">
    <title>Liste des nombres premiers</title>
  </head>
  <body>
    <?php
      function est_premier($nombre) {
        if ($nombre <= 1) {
          return false;
        }
        for ($i = 2; $i <= sqrt($nombre); $i++) {
          if ($nombre % $i == 0) {
            return false;
          }
        }
        return true;
      }

      $nombre1 = $_POST["nombre1"];
      $nombre2 = $_POST["nombre2"];
      echo "Les nombres premiers entre $nombre1 et $nombre2 sont :<br>";
      for ($i = $nombre1; $i <= $nombre2; $i++) {
        if (est_premier($i)) {
          echo "  $i ";
        }
      }
    ?>
  </body>
</html>
