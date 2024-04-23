#include<stdlib.h>
#include<stdio.h>

int main(int argc, char* argv[]){

    int a = 2;
    int b = a;
    int *p = &a;


    printf("a = %d \t b = %d\n", a, b);
    printf("&a = %p \t &b = %p\n", &a, &b);

    b = 3;
    printf("a = %d \t b = %d\n", a,b);

    a = 4;
    printf("a = %d \t b = %d\n", a,b);

    printf("&p = %p \t p = %p \t *p = %d\n ", &p, p, *p);

    *p = 5; 
    printf("a = %d \t b = %d\n",a , b);
    
    p = malloc(sizeof(int)*5 );
    p[0] = 3;
    p[2] = 55;

    printf("&p = %p \t p = %p \t *p = %d\n", &p, p, *p);
    printf("a = %d \t    p = %p  b = %d\n",&p, &p[1], p[1]);

    ponto A;
    A.x = 4;
    A.x = 4;
    printf("A(%d, %d)\n",A.x,A.x )


    

    exit(0);








}
