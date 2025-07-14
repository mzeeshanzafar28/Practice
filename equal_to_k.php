<?php

//Print the all possible combinations, whose sum equals to k

$array=[2,4,6,8];
$k=8;


for($i=0; $i<count($array); $i++)
    {
    
    if ($k % $array[$i] == 0){
        $times = $k / $array[$i];
        for ($temp=0; $temp<$times; $temp++){
            echo ' ' . $array[$i] . ' ';
        }
        echo '<br>';
    }
    else{

    $num = $array[$i];

    for ($j=0; $j<count($array); $j++){
        if ($array[$j] + $num == $k)
        {
             echo ' ' . $array[$j] . ' ' . $num . ' ';
            echo '<br>';

        }
    }

}

}   

?>
