#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int ex4a();
int ex4b();
int ex4c();
int ex4d();
int ex4e();
int ex4f();
int ex4g();
int ex4h();
int ex4i();
int ex4j();
int ex1 ();
int ex2 ();
int ex3 ();
int ex4 ();
int ex5 ();
int ex6 ();
int ex7 ();
int ex8 ();
int ex9 ();
int ex10 ();
int ex11 ();
int ex12 ();
int ex13 ();
int ex14 ();
int ex15 ();

int main ()
{ printf("4-a)\n");
 ex4a();
 printf("\n4-b)\n");
 ex4b();
 printf("\n4-c)\n");
 ex4c();
 printf("\n4-d)\n");
 ex4d();
 printf("\n4-e)\n");
 ex4e();
 printf("\n4-f)\n");
 ex4f();
 printf("\n4-g)\n");
 ex4g();
 printf("\n4-h)\n");
 ex4h();
 printf("\n4-i)\n");
 ex4i();
 printf("\n4-j)\n");
 ex4j();
 printf("5.1)\n");
 ex1();
 printf("5.2)\n");
 ex2();
 printf("5.3)\n");
 ex3();
 printf("5.4)\n");
 ex4();
 printf("5.5)\n");
 ex5();
 printf("5.6)\n");
 ex6();
 printf("5.7)\n");
 ex7();
 printf("5.8)\n");
 ex8();
 printf("5.9)\n");
 ex9();
 printf("5.10)\n");
 ex10();
 printf("5.11)\n");
 ex11();
 printf("5.12)\n");
 ex12();
 printf("5.13)\n");
 ex13();
 printf("5.14)\n");
 ex14();
 printf("5.15)\n");
 ex15();
 }

int ex4a()
{
int n,s;

printf("Escreva um numero: ");
scanf("%i",& n);
s=n+1;
printf("O sucessor e: %i \n",s);

return 0;
}

int ex4b()
{
float n1,n2,n3,n4,m;

printf("Escreva o primeiro numero: ");
scanf("%f", & n1);

printf("Escreva o segundo numero: ");
scanf("%f", & n2);

printf("Escreva o terceiro numero: ");
scanf("%f", & n3);

printf("Escreva o quarto numero: \n");
scanf("%f", & n4);

m=(n1+n2+n3+n4)/4;
printf("A media dos quatro numeros: %.2f", m);

return 0;
}
int ex4c()
{
float n1,n2,n3,p1,p2,p3,mp;

printf("Escreva a primeira nota: ");
scanf("%f", & n1);

printf("Escreva o peso da primeira nota: ");
scanf("%f", & p1);

printf("Escreva a segunda nota: ");
scanf("%f", & n2);

printf("Escreva o peso da segunda nota: ");
scanf("%f", & p2);

printf("Escreva a terceira nota: ");
scanf("%f", & n3);

printf("Escreva o peso da terceira nota: \n");
scanf("%f", & p3);

mp=((n1*p1)+(n2*p2)+(n3*p3))/3;

printf("A media ponderada dessas notas e: %.2f\n", mp);

return 0;
}
int ex4d()
{
float c, f;

printf ("Escreva a temperatura em celsius: ");
scanf("%f",&c);

f=(c*9/5)+32;

printf("A temperatura em Fahrenheit: %.2f\n",f);

return 0;
}

int ex4e()
{
float s,a,n;

printf("Escreva o salario atual: ");
scanf("%f", & s);

printf("Escreva o percentual de aumento: ");
scanf("%f", & a);

n=(s*(a/100))+s;

printf("O novo salario: R$%.2f\n",n);

return 0;
}

int ex4f()
{
float b,h,a;

printf("Escreva o valor da base do triangulo: ");
scanf("%f", & b);

printf("Escreva o valor da altura do triangulo: ");
scanf("%f", & h);

a=(b*h)/2;

printf("A area do triangulo: %.2f\n", a);


return 0;
}

int ex4g()
{
float ps,g1,g2,q5;

printf("Escreva o peso em KG do saco de racao: ");
scanf("%f", & ps);

printf("Escreva a quantidade de racao que o primeiro gato come: ");
scanf("%f", & g1);

printf("Escreva a quantidade de racao que o segundo gato come: ");
scanf("%f", & g2);

q5=(ps*1000)-((g1+g2)*5);

printf("A quantidade de racao depois de 5 dias: %.2fg\n", q5);

return 0;
}

int ex4h()
{
int a,b,c,d;

printf("Escreva o valor de A: ");
scanf("%i", & a);

printf("Escreva o valor de B: ");
scanf("%i", & b);

c=a;
d=b;

printf("O valor de A: %i \n", d);
printf("O valor de B: %i\n", c);

return 0;
}

int ex4i()
{
int a,r;

printf("Digite um valor para ser dividido por 7: ");
scanf("%i", & a);

r=a%7;
printf("O resto da divisao por 7 e: %i \n", r);

return 0;

}
int ex4j()
{
int t1,t2,nt,r,ent,resultado;

printf("Digite o primeiro termo da P.A.: ");
scanf("%i", & t1);

printf("Digite o segundo termo da P.A.: ");
scanf("%i", & t2);

printf("Digite o numero de termos da P.A.: ");
scanf("%i", & nt);

r=t2-t1;

ent=t1+((nt-1)*r);

resultado=(nt*(t1+ent))/2;

printf("A soma dos termos da P.A. e: %i\n", resultado);

return 0;
}

 int ex1 ()
 {
     int n,r;

     printf("Escreva um numero: ");
     scanf("%i", & n);

     r=n%2;

     if (r==0)
     printf("O numero %i e par.\n", n);
     
     else
     printf("O numero %i nao e par.\n", n);

     return 0;

/* TESTE
 Entrada: 10
 Saída: O numero é par
 */
 }

 int ex2 ()
 {
     int n,r;

     printf("Escreva um numero: ");
     scanf("%i", & n);

     r=n%2!=0;

     if (r==1)
     printf("O numero %i e impar.\n", n);
     
     else
     printf("O numero %i nao e impar.\n", n);

     return 0;
     
/* TESTE
 Entrada: 11
 Saída: O numero é ímpar
 */
 }

 int ex3 ()
 {
     int n,r;

     printf("Escreva um numero: ");
     scanf("%i", & n);

     r=n%2;

     if (r==1,n>100)
     printf("O numero %i e impar e maior que 100.\n", n);
     
     else
     printf("Ou numero nao e um impar maior que 100.\n");

     return 0;

/* TESTE
 Entrada: 101
 Saída: O numero é ímpar e maior que 100.
 */
 }

 int ex4 ()
 {
     int n,r;

     printf("Escreva um numero: ");
     scanf("%i", & n);

     r=n%2;

     if (r==1 && n>100)
     { 
         printf("O numero %i e impar e maior que 100.\n", n);
     }
     
     else if(r==1 && n<100)
     {
         printf("O numero %i e impar e menor que 100.\n", n);
     }

     else if(r==0 && n>100)
     {
         printf("O numero %i e par e maior que 100.\n", n);
     }

     else
     {
         printf("O numero %i e par e menor que 100.\n", n);
     }

     return 0;

/* TESTE
 Entrada: 101
 Saída: O número é ímpar e maior que 100.

 Entrada: 99
 Saída: O número é ímpar e menor que 100.

 Entrada: 102
 Saída: O número é par e maior que 100.

 Entrada: 98
 Saída: O número é par e menor que 100.
 */
 }

 int ex5 ()
 {
     int n;

     printf("Escreva um numero: ");
     scanf("%i", & n);

     if (n>25 && n<75)
     { 
         printf("Pertence.");
     }

     else
     {
         printf("Nao pertence.\n");
     }
     
     system("pause");

     return 0;

/* TESTE
 Entrada: 50
 Saída: Pertence.
 */
 }

int ex6 ()
 {
     int n;

     printf("Escreva um numero: ");
     scanf("%i", & n);

     if (n>=25 && n<=75)
     { 
         printf("Pertence.");
     }

     else
     {
         printf("Nao pertence.\n");
     }
     
     system("pause");

     return 0;

/* TESTE
 Entrada: 75
 Saída: Pertence.
 */
 }

 int ex7 ()
 {
     int n;

     printf("Escreva um numero: ");
     scanf("%i", & n);

     if (n>=15 && n<=45)
     { 
         printf("Pertence ao invervalo fechado [15:45].\n");
     }

     if (n>=66 && n<=99)
     {
         printf("Pertence ao invervalo fechado [66:99].\n");
     }
     
     system("pause");

     return 0;

/* TESTE
 Entrada: 75
 Saída: Pertence ao invervalo fechado [66:99].
 */
 }

int ex8 ()
 {
     int n1,n2,r1,r2;

     printf("Escreva dois numeros: ");
     scanf("%i%i", & n1, & n2);

     r1=n1%2;
     r2=n2%2;

     if (r1==0 && r2==1)
     { 
         printf("O primeiro numero e par e o segundo e impar.\n");
     }

     else
     {
         printf("O primeiro numero nao e par e o segundo nao e impar.\n");
     }

     return 0;

/* TESTE
 Entrada: 4 e 3
 Saída: O primeiro numero e par e o segundo e impar.
 */
 }

int ex9 ()
 {
     int n1,n2,r1,r2;

     printf("Escreva o primeiro numero: ");
     scanf("%i", & n1);

     printf("Escreva o segundo numero: ");
     scanf("%i", & n2);


     r1=n1%2;
     r2=n2%2;

     if (n1>0 && r1==0 && n2<0 && r2==-1)
     { 
         printf("O primeiro numero e par e positivo e o segundo e impar e negativo.\n");
     }

     return 0;

/* TESTE
 Entrada: 4 e -3
 Saída: O primeiro numero e par e positivo e o segundo e impar e negativo.
 */
 }

int ex10 ()
 {
     int n1,n2;

     printf("Escreva o primeiro numero: ");
     scanf("%i", & n1);

     printf("Escreva o segundo numero: ");
     scanf("%i", & n2);

     if (n1>n2)
     { 
         printf("O primeiro numero e maior que o segundo.\n");
     }

     if (n1<n2)
     {
      printf("O primeiro numero e menor que o segundo.\n");   
     }

      if (n1==n2)
     {
      printf("O primeiro numero e igual ao segundo.\n");   
     }

     return 0;

/* TESTE
 Entrada: 4 e 3
 Saída: O primeiro número é maior que o segundo.
 */
 }

int ex11 ()
 {
     int n1,n2,n3;

     printf("Escreva o primeiro numero: ");
     scanf("%i", & n1);

     printf("Escreva o segundo numero: ");
     scanf("%i", & n2);

     printf("Escreva o terceiro numero: ");
     scanf("%i", & n3);

     if(n1>n2 && n1<n3)
     {
         printf("O primeiro numero esta entre os outros dois valores.\n");
     }

     system("pause");

     return 0;

/* TESTE
 Entrada: 4, 1 e 6
 Saída: O primeiro numero esta entre os outros dois valores.
 */
 }

int ex12 ()
 {
     int n1,n2,n3;

     printf("Escreva o primeiro numero: ");
     scanf("%i", & n1);

     printf("Escreva o segundo numero: ");
     scanf("%i", & n2);

     printf("Escreva o terceiro numero: ");
     scanf("%i", & n3);

     if(n1<n2 || n1>n3)
     {
         printf("O primeiro numero nao esta entre os outros dois valores.\n");
     }

     system("pause");

     return 0;

/* TESTE
 Entrada: 4, 1 e 6
 Saída: O primeiro numero nao esta entre os outros dois valores.
 */
 }

int ex13 ()
 {
     char x,y,z;

     printf("Digite o primeiro caractere: ");
     scanf("%c", & x);

     printf("Digite o segundo caractere: ");
     fflush(stdin);
     scanf("%c", & y);

     printf("Digite o terceiro caractere: ");
     fflush(stdin);
     scanf("%c", & z);

     if(x<y && x>z || x<z && x>y)
     {
         printf("1\n");
     }

     else
     {
         printf("0\n");
     }

     return 0;
 }

int ex14 ()
 {
     char x,y,z;

     printf("Digite o primeiro caractere: ");
     scanf("%s", & x);

     printf("Digite o segundo caractere: ");
     scanf("%s", & y);

     printf("Digite o terceiro caractere: ");
     scanf("%s", & z);

     if(x<y && y<z)
     {
         printf("Esta em ordem alfabetica.\n");
     }

     else
     {
         printf("Nao esta em ordem alfabetica.\n");
     }

     return 0;
 }

int ex15 ()
 {
     char l;

     printf("Digite uma letra: ");
     scanf("%s", & l);

     if(isupper(l))
     {
         printf("A letra esta em maiusculo.");
     }
    
    else
    {
        printf("A letra esta em minusculo.");
    }

     return 0;

     /* TESTE
     Entrada: V
     Saída: A letra esta em maiusculo.
     */
 }
