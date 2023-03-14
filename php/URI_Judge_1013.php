<?php

    $v = readline();
    $v = explode(" ",$v);
    $maiorAB = ($v[0]+$v[1]+abs($v[0] - $v[1])) / 2;
    $total = ($maiorAB + $v[2]+ abs($maiorAB - $v[2])) / 2;
    
    echo "$total eh o maior\n";

?>