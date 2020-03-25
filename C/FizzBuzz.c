#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main(int argc, char *argv[]){
    int a = 3;
    int b = 5;
    int start = 1;
    int end = 100;
    
    int i;
    for(i = start; i <= end; i++){
        char output[10] = "";
        bool divisible = false;
        if(i % a == 0){
            strcat(output, "Fizz ");
            divisible = true;
        }
        if(i % b == 0){
            strcat(output, "Buzz");
            divisible = true;
        }
        if(!divisible){
            printf("%d\n", i);
        } else {
            printf("%s\n", output);
        }
    }
    return 0;
}

