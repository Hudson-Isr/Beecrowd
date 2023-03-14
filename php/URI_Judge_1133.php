<?php

    $x = readline();
    $y = readline();
    
    if ($x < $y) {
        $x += 1;
        for ($i = $x; $i < $y; $i++) {
            $rest = $i % 5;
            if ($rest == 2 or $rest == 3) {
                echo $i . "\n";
            }
        }
    } else {
        $y +=1;
        for ($i = $y; $i < $x; $i++) {
            $rest = $i % 5;
            if ($rest == 2 or $rest == 3) {
                echo $i . "\n";
            }
        }
    }

?>