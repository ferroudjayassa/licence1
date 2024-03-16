<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Bisextille</title>
</head>
<body>
    <p>Bonjour tout le monde</p>
    <?php 
    echo "Bonjour tout le monde \n";
    $prenom ="Djoudja";

    function bisextille($annee){
        if ( $annee % 4 == 0 && ($annee % 100 != 0 || $annee % 400 ==0 ) )  {
            return true ;
           }
           else {
             return false ;
           }
    }
    $A = 2000;
    if (bisextille($A) == true){
        echo "l'annee $A est bisextille <br>";
    }else{
        echo "l'annee $A n'est pas bisextille <br>";
    }
    function nbjours($mois,$annee){
        switch($mois){
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            echo " le nombre de jours est 31<br>";
            break;

            case 4: case 6: case 9: case 11:
                echo "le nombre de jours est 30<br>";
                break;

            case 2:
                if(bisextille($annee) == true ){
                    echo "le mois a 29 jours<br>";
                }else{
                    echo "le mois a 28 jours <br>";
                }
            
            default;
        }
    }
    $a=2000;
    $m=2;
    nbjours($a,$m);

    $A2 = 2030;
    echo "les années bisextilles entre $A et $A2 sont: ";
    for($i=$A; $i<= $A2; $i++){
        if (bisextille($i) == true){
            echo ' '.$i;
        }
    }

    ?>
</body>
</html>