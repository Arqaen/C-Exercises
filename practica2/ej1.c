#define CRT SECURE NO WARNINGS
#include <stdio.h>
#include <stdlib.h>

// DECLARACIONES DE FUNCIONES
int parImpar(int);
long factorial(long n);
double mediaAritmetica(double x, double y, double z, double w);
int desplazar(int n, int nPos);

int menu();// declaración de la función"menu"
int main(){

    // DEFINICIONES DE VARIABLES
    int opcion;// opción elegida del menú
    printf("PRÁCTICA2\n");
    printf("==========\n");
    opcion = menu();// llama/invocaala función"menu"
    
    switch(opcion)// sentencia condicional
    {        
        case 1:
            printf("Ejercicio1: desplazar\n");// llamaala función"printf"
            int num,pos;
            printf("Introduzca un número: ");
            scanf("%d", &num);
            printf("Posiciones a desplazar a la derecha: ");
            scanf("%d", &pos);
            int nuevonum;
            nuevonum = desplazar(num, pos);
            printf("%d",nuevonum);
            break;

        case 2: 
            printf("Ejercicio2: par o impar\n");
            int y = 0, z = 0;
            scanf("%d",&y);
            z = parImpar(y);
            if (z == 1)
                printf("El número %d es impar\n",y);
            else
                printf("El número %d es par\n",y);
            break;

        case 3:
            printf("Ejercicio3: operaciones logicasyanivel de bits\n");
            // Llamarala función"operaciones LogicasBits"
            break;

        case 4:
            printf("Ejercicio4:poneracero un bit\n");
            // Llamarala función"ponerACeroBit"
            break;

        case 5:
            printf("Ejercicio 5: factorial\n");
            long yl,xl;
            do{
                printf("Introduzca un número entero positivo: ");
                scanf("%ld", &yl);
            }while (yl < 0);

            xl = factorial(yl);            
            if (xl == 0){                
                printf("No es posible calcular el factorial\n");
            }
            else{
                printf("El factorial de %ld es: %ld\n\n", yl, xl);
            }            
            break;

        case 6:
            printf("Ejercicio6:número de bits\n");
            // Llamarala función"numeroBits"
            break;

        case 7:
            printf("Ejercicio7:cambiar bits\n");
            // Llamarala función"cambiarBits"
            break;

        case 8:
            printf("Ejercicio8:intercambiar\n");
            // Llamarala función"intercambiar"
            break;

        case 9:
            printf("Ejercicio9:media aritmética\n");
            double xd,yd,zd,wd;
            printf("Introduzca los 4 números: \n");
            scanf("%lf\n",&xd);
            scanf("%lf\n",&yd);
            scanf("%lf\n",&zd);
            scanf("%lf",&wd);
            printf("La media aritmética es: %lf\n",mediaAritmetica(xd,yd,zd,wd));
            break;

        case 10:
            exit(0);

        default:
            printf("ERROR:Opción incorrecta.\n");
            break;
    }

    exit(0);
    
}

// DEFINICIONES DE FUNCIONES
int menu()// definición de la función"menu"
{
    int op;
    do // sentencia repetitiva
    {
        printf("\n"
        "\t01.- Ejercicio1\n"
        "\t02.- Ejercicio2\n"
        "\t03.- Ejercicio3\n"
        "\t04.- Ejercicio4\n"
        "\t05.- Ejercicio5\n"
        "\t06.- Ejercicio6\n"
        "\t07.- Ejercicio7\n"
        "\t08.- Ejercicio8\n"
        "\t09.- Ejercicio9\n"
        "\t10.- Salir\n"
        "\n"
        "Elija una opción:");
    

        scanf("%d",&op); // llamarala función"scanf"
        if(op<1 || op>10)// sentencia condicional
        {
            printf("Opcion no valida\n");           
        }
        
    }while(op<1 || op>10);// condición

    return op;

}

int parImpar(int num){
    if(num%2==0){
        return 0;
    }else{
        return 1;
    }
}

long factorial(long n){
    if(n==0){
        return 1;
    }
    if(n>0){
        return n*factorial(n-1);
    }
    if(n<0){
        return -1;
    }
}

double mediaAritmetica(double x, double y, double z, double w){
    return (x+y+z+w)/4;
}

int desplazar(int n, int nPos){
    int nDesplazado = 0;
    nDesplazado =  n >> nPos;
    return nDesplazado;
}