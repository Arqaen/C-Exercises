#include <stdio.h>
#include <stdlib.h>

int main(){
    int elem;
    int array[10];
    printf("Cuantos elementos se desean introducir\n");
    scanf("%d",&elem);
    printf("\n");
    for(int i=0;i<elem;i++){
        scanf("%d",&array[i]); 
    }
    printf("\n");
    for(int i=1;i<elem;i++){
        int j=i-1;
        int tmp = array[i];
        while(array[j]>tmp && j>=0){
            array[j+1]=array[j];
            j--;
        }
        array[j+1]=tmp; 
    }

    for(int x=0;x<elem;x++){
        printf("%d\n",array[x]);
    
    }
    
}
