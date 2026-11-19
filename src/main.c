#include <stdio.h>
#include <string.h>

#define NBE_CHAR 4

int main(int argc, char *argv[]){
    printf("Welcome to DumbShell: \n");
    char command_brut[NBE_CHAR] = "";
    while (strcmp(command_brut, "exit")){
        printf(">> ");
        fflush(stdout); 
        fgets(command_brut, sizeof(command_brut),stdin);
        if (strlen(command_brut) > NBE_CHAR-1){
            int c;
            while ((c = getchar()) != '\n' && c != EOF){}
        }
         
    }
    return 0;
}
