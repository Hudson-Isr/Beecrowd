<?php

while (true) {
    $v = readline();
    $v = explode(" ", $v);

    $x = $v[0];
    $y = $v[1];

    if ($x <= 0 || $y <= 0) {
        break;
    }
    if ($x > $y) {
        $z = $x;
        $x = $y;
        $y = $z;
    }

    $soma = 0;
    for ($i = $x; $i <= $y; $i++) {
        echo "$i ";
        $soma += $i;
    }
    echo "Sum=$soma\n";
}
