#define CRT SECURE NO WARNINGS
#include <stdio.h>
#include <stdlib.h>

// DECLARACIONES DE FUNCIONES
int parImpar(int);
long factorial(long n);
double mediaAritmetica(double x, double y, double z, double w);
int desplazar(int n, int nPos);
void operacionesLogicasBits();
int ponerACeroBit(int n, int nPosBit);
int numeroBits(int n);
int potencia(int numero, int elevado);
int cambiarBits(int x, int y,int z); 
void intercambiar(double *a, double *b);

int menu();// declaración de la función"menu"
int main(){

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
            operacionesLogicasBits();
            break;

        case 4:
            printf("Ejercicio4:poner a cero un bit\n");
            int n, nPosBit;
            printf("Introduzca un número: ");
            scanf("%d", &n);
            printf("Posicion del bit a poner a cero: ");
            scanf("%d", &nPosBit);
            int resul;
            resul = ponerACeroBit(n,  nPosBit);
            printf("El numero modificado es %d\n",resul);
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
            int numbits;
            do{ 
                printf("Introduce un número ");
                scanf("%d", &numbits);
            }while(numbits<=0);
            int resulbits;
            resulbits = numeroBits(numbits);
            printf("El numero de bits para representar %d es %d\n",numbits,resulbits);
            break;

        case 7:
            printf("Ejercicio7:cambiar bits\n");
            int numcbits;
            do{ 
                printf("Introduce un número ");
                scanf("%d", &numcbits);
            }while(numcbits<=0);
            printf("Posicion del bit inicial a invertir ");
            int intialpos;
            scanf("%d",&intialpos);
            printf("Numero de bits a invertir ");
            int numbitsinvert;
            scanf("%d",&numbitsinvert);
            int resultados = cambiarBits(numcbits,intialpos,numbitsinvert);
            resultados == -1 ? printf("El número de bits no es valido\n") : printf("El número modificado es: %d\n",resultados);
            break;

        case 8:
            printf("Ejercicio8:intercambiar\n");
            double aa,bb;
            printf("Introduce el primer valor: ");
            scanf("%lf",&aa);
            printf("Introduce el segundo valor: ");
            scanf("%lf",&bb);
            intercambiar(&aa, &bb);
            printf("Los valores intercambiados son 1-%lf y 2-%lf\n",aa,bb);

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

void operacionesLogicasBits(){

    int a = 8, b = 0, c = 15, d = 93, e, r1, r2, r3, r4, r5, r6;

    r1 = a && b || c && !d; //r1 = False
    r2 = !a || b && c || d; //r2 = True
    r3 = a < b || !c > d; //r3 = False
    r4 = a + b > d - c; //r4 = False
    r5 = a && b && !c || !(a && b) && c; //r5 = True

    a = 0x12; b = 0x56; c = 0x9a ; d = 0x0f ; e = 0360;

    r1 = a & b | c; //r1 = 154
    r2 = c & 0177; //r2 = 26
    r3 = ~a | b ^ c; //r3 = -155
    r4 = e & c; //r4 = 144
    r5 = r4 & ~077; //r5 = 0
    r6 = (a & d) << 4 | (a & e) >> 4; //r6 = 33

}

int ponerACeroBit(int n, int nPosBit){
    int resultado = 0, mascara;
    mascara = 1 << nPosBit;
    resultado = n ^ mascara;
    return resultado;
}

int numeroBits(int n){
    
    int i = 1;
    int dosElevadoN = potencia(2,i);

    for(i=2;dosElevadoN <= n;i++){
        dosElevadoN = potencia(2,i);
    } 
    return i-1;
}

int potencia(int numero, int elevado){
    int copia=numero;
    for(int i=1;i<elevado;i++){
        numero = numero*copia;
    }
    return numero;
}

int cambiarBits(int x, int y,int z){
    int pos = y-2;
    int comp = z+(pos);
    int tam = numeroBits(x);
    if(tam<comp){
        return -1;
    }
    else{
        int xcop = x;
        for(int i=0;i<z;i++){
            xcop = xcop ^ (1<<pos);
            pos++;
        }
        return xcop;
    }

}

void intercambiar(double *a, double *b){
    int tmp=*a;
    *a=*b;
    *b=tmp;
}