/*
int i=7, j=3; ---> São declaradas 2 variaveis do tipo int,
                   a variavel i que recebe o valor 7 e a 
                   variavel j que recebe o valor 3.
int *p; ---> O ponteiro p é declarado.
int **r; ---> O ponteiro de ponteiro r é declarado.
p = &i; ---> o ponteiro p recebe o endereço de i.
r = &p; ---> o ponteiro de ponteiro r recebe o endereço de p e consequentemente o endereço de i.
c = **r + j; ---> a variavel c que não foi declarada anteriormente receberia o valor de i +j que seria 10.
*/