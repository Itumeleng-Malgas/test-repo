# To run and compile
1. gcc *.c -o main
2. ./main

_printf has a map of function pointers were the key
is the identifier.

the correct function will be invoked when the correct
identifier is supplied. NB the identifier must be 
preceded by % just like on a normal printf invocation
