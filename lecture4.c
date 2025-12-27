#include <stdio.h>
#include <stdlib.h>
int main(void){
/*
    //this is arrey structure

    //size and capacity
    int i,size = 5;
    int capacity = 16;
    int *a = malloc(capacity * sizeof(int));
    
    if(a == NULL){
        return 1;
    }
    //is_empty()
    if (size == 0){
        return 1;
    }
    //if size is 1/4 of capaciuesy
    //capacizty --, for 50 percent;
    if(size < capacity/4){
        int *pom = malloc((capacity/2) * sizeof(int));
        a = pom;
        free(pom);
    }
    for(i = 0 ; i < size ; i ++){
        a[i] = i;
        //if size is greater then capacity
        if(size > capacity){
            int *pom = malloc((capacity*2) * sizeof(int));

            if(pom == NULL){
            free(a);
            return 1;
            }

            for(i = 0; i < 3 ; i ++){
                pom[i] = a[i];
            }

            a = pom;
            free(pom);
        }
    }
    free(a);
*/

    //tjhos is hashs table

    char x;
    char randSentence[3][3] = {
	{'a','d','g'},
    {'b','e','h'},
    {'c','f','i'}
	};


    int i,j,k;


    do{
        scanf("%c" , &x);
    }while (x < 'a' || x > 'z'); 

    if(x == 'a'){
        j=0;
        for(i = 0 ; i < 3 ; i ++){
            printf("%c" , randSentence[j][i]);
        }
    }
    else if(x == 'b'){
        j=1;
        for(i = 0 ; i < 3 ; i ++){
            printf("%c" , randSentence[j][i]);
        }
    }
    else if(x == 'c'){
        j=2;
        for(i = 0 ; i < 3 ; i ++){
            printf("%c" , randSentence[j][i]);
        }
    }
    printf("\n");
    for(i = 0 ; i < 3 ; i ++){
        if(x == randSentence[i][0]){
            for(j = 0 ; j < 3 ; j++){
                printf("%c" , randSentence[i][j]);

            }
        }
    }

}
