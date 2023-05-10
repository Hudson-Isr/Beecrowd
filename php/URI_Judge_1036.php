<?php

    $v = readline();
    $v = explode(" ",$v);

    $a = (float)$v[0];
    $b = (float)$v[1];
    $c = (float)$v[2];

    $delta = $b*$b - 4 * $a * $c;

    $x1 = -$b + sqrt($delta);
    $R1 = $x1/(2*$a);

    $x2 = -$b - sqrt($delta);
    $R2 = $x2/(2*$a);

    if($delta < 0){
        echo "Impossivel calcular\n";
    }
    elseif($x1 == 0 || $x2 == 0){
        echo "Impossivel calcular\n";
    }
    else{
        echo "R1 = " . number_format($R1,5) . "\n";
        echo "R2 = " . number_format($R2,5) . "\n";
    }
?>