#include <stdio.h>
int main(){
    int op;
    float n1, n2, suma, resta, multi, divi;
    
    printf("1 Suma\n2 Resta \n3 Multiplicacion\n4 Division\n");
    printf("Ingresa un numero segun la operacion deseada ");
    scanf("%d", &op);

    printf("Dame un numero ");
    scanf("%f", &n1);
    printf("Dame otro numero ");
    scanf("%f", &n2);

    switch(op){
        case 1:
        suma= n1+n2;
        printf("La suma es igual a %.2f", suma);
        break;

        case 2:
        resta= n1-n2;
        printf("La resta es igual a %.2f", resta);
        break;

        case 3:
        multi= n1*n2;
        printf("La multiplicacion es igual a %.2f", multi);
        break;

        case 4:
        if (n2==0){
            printf("Valor indeterminado");
        }else{
            divi= n1/n2;
            printf("La division es igual a %.2f", divi);
        }
        break;

        default:
        printf("Operacion no valida");
    }
}
