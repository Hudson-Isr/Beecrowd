<?php
    while (true) {
        $qt_jogos = readline();
        if ($qt_jogos == 0) {
            break;
        }

        $valor = readline();
        $valor = explode(" ", $valor);
        $mary = 0;
        $john = 0;

        for ($i = 0; $i < $qt_jogos; $i++) {
            if ($valor[$i] == 0) {
                $mary++;
            } else {
                $john++;
            }
        }
        echo "Mary won {$mary} times and John won {$john} times\n";
    }
/*
while (true) {
    $qt_jogos = readline();
    if ($qt_jogos == 0) {
        break;
    }

    $results = readline();
    $results = explode(" ", $results);

    $mary_wins = array_count_values($results)[0];
    $john_wins = array_count_values($results)[1];

    echo "Mary won {$mary_wins} times and John won {$john_wins} times\n";
}
*/
?>