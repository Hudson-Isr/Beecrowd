<?php

    //Notas  em cédulas.
    $notas = array(100,50,20,10,5,2,1);

    //Adicinando valor.
    $valor = readline();

    echo "$valor\n";

    //Variavel contador para os 7 resultados.
    for ($x = 0; $x < 7; $x++) {
        
        //variavel auxiliar
        $y = $valor / $notas[$x];

        echo (int) $y . " nota(s) de R$ " . $notas[$x] . ",00\n";

        //valor = valor resto 100,50...
        $valor %= $notas[$x];
    }
?>
