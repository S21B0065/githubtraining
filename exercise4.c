//documentation section 
/* Exercise 4 - Insertion Operations */

//pre-processor section 
#include<stdio.h>

//global variable section 

haiii
//main function section 
int main(){
    //write here your program
char LA[] = {'a', 'e', 'i', 'o'};
    int N = 4;
    int i = 0;
    int index = 4;
    char value = 'u';

    for(i = 0; i < N; i++){
    printf("LA[%d] = %c \n", i, LA[i]);

    }

    N++;

    LA[N-1] = value;

    printf("Output : \n");

    for(i = 0; i < N; i++){
        printf("LA[%d] = %c\n", i, LA[i]);
    }

    return 0;
}
    
