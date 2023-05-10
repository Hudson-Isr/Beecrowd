<?php

while (!feof(STDIN)) {
    $input = explode(" ", (readline(" ")));
    $n = intval($input[0]);
    $r = intval($input[1]);
    
    $retornaram = explode(" ", (readline(" ")));
    
    $voluntarios = range(1, $n);
    
    foreach ($retornaram as $voltaram) {
        $sucesso = array_search($voltaram, $voluntarios);
        if ($sucesso !== false) {
            unset($voluntarios[$sucesso]);
        }
    }
    
    if (empty($voluntarios)) {
        echo "*\n";
    } else {
        echo implode(" ", $voluntarios) . " \n";
    }
}

