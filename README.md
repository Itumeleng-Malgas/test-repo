# To run and compile
1. gcc *.c -o main
2. ./main

_printf has a map of function pointers were the key
is the identifier.

the correct function will be invoked when the correct
identifier is supplied. NB the identifier must be 
preceded by % just like on a normal printf invocation

after I handled %% case, the _printf function went over 
40 lines and failed betty test. The plan is to create a
function called _printer which will handle only the printing
logic
