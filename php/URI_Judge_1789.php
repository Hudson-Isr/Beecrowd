<?php
    $total_lesmas = readline();
    $s = 0;

    $t = readline();
    $t = explode(" ",$t);

    for($i = 0; $i <= $total_lesmas; $i++){           
        if($s<$t[$i]){
            $s = $t[$i];
        }
    }
    if ($s >= 20){
        echo "3\n";
    } 
    elseif ($s >= 10 && $s < 20){
        echo "2\n";
    } 
    else {echo "1\n";}

?>