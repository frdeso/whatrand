# whatrand
Simple shared library to control the random number generator of any compiled C program


## norand
Overloads the rand() function and always returns the same number.

## samerand
Overloads the srand() function and always returns the same sequence of numbers.


## Build
<pre>make</pre>

## Run

<pre>env LD_PRELOAD=./libsamerand.so ./main
env LD_PRELOAD=./libnorand.so ./main</pre>



