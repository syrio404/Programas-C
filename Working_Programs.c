/*
#include <stdio.h>

int main (){

printf("hello world");

    return 0;
}
*/
/*
#include <stdio.h>

int main (){
int num1, num2;
printf("digite os numeros a serem somados: ");
scanf("%i %i", &num1,&num2);
printf("\n%i + %i = %i", num1, num2, num1+num2);



    return 0;
}

*/

// Desneçariamente complicado programa de quantidadade de numeros pares 

#include <stdio.h>

int main (){
int num, num2;
int even = 0;
printf("Digite o numero a ser analizado duas vezes: ");
scanf("%i %i", &num, &num2);
while(num)
{
    
    if (num % 2 == 0)
    {   
    even++;
    }  
 
num--;
}
 printf("O numero de vezes que um numero par aparece is %i e tambem (To remind me of my hubris) %i/2 =  %i", even, num2, num2 / 2);
    return 0;
}

