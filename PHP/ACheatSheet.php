<?php // Starting the script
// usually contents html tags and/or php scripts 


?> // ending the script

// php inside html 
<!DOCTYPE>
<html>
    <body>
        <h1>My first php page</h1>
        <?php
        // echo & print outputs the same => echo allows mutiple parameters using || print allows 1 parameter

        // variable naming is case sensitive but instructions like ECHO are not case sensitive
        $num = 2.4;
        $str = "Hello, world!"; // the name of variable can start with "$_" like  $_variable 
        echo "The variable is : $str</br>"; // </br> starts new row in browser
        //! Concat text [.]
        echo "The $num "."$sstr</br>"; // this will show "2.4 Hello, world!"
        
        echo $num + $num; // will show 4.8
        echo "</br>";
        ?>
        //! Scope of php variables
        <?php
        $x = 5; // global scope variable 
        function myFunc(){
            // local => using $x in that function will generate an error
            //? to use $x from the global :
            global $x = 10; // makes $x to be 10
            // All global variables are gathered in GLOBALS array => accesing to that array =>
            $GLOBALS['x'] = 12; // it makes $x to be 12 
        }
        // static => 

        // DataTypes => string, integer, float, boolean, array, object, null
        // String -> can print html
        // Integer -> -2 147 483 648 / 2 147 483 647
        $x = 5985;
        var_dump($x) // int(5985)
        var_dump(is_int($x)); // is_float($x)
        $x = 1.9e411;
        var_dump($x); // float(INF) => if the size is huger we go to infinity // is_infinite($x)
        
        // Object ->
        $car = new Car("Audi");
        $some;
        var_dump($some) // NULL
        // some basic functions:
        strlen();//string length
        str_word_count();//
        strrev();//
        strpos();//
        str_replace();//
        
        // NaN => not a number
        $x = acos(8); // returns arcus cossinus
        var_dump($x); //float(NaN)
        //! interesting
        $x = "6589.5" + 100;
        var_dump(is_numeric($x)); // bool true  

        //Casting
        $int_cast = intval("2345.123");
        echo $int_cast;// result = 2345
        ?>

        

    </body>
</html>

<?php
$x = 30;
$y = 15;
$z = 45;
echo "\$x ="." $x</br>";
echo "\$y ="." $y</br>";
echo "\$z ="." $z</br>";
echo "<b>sum = ".($x + $y + $z)."</b></br>";
?>