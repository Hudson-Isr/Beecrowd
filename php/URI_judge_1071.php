<?php

    $x = readline();
    $y = readline();

    if ($x > $y) {
        $maior = $x;
        $menor = $y;
    } else {
        $maior = $y;
        $menor = $x;
    }

    $menor += 1;
    $s = 0;

    for ($x = $menor; $x < $maior; $x++) {
        if ($x % 2 != 0) {
            $s += $x;
        }
    }
    echo "$s\n";
?>