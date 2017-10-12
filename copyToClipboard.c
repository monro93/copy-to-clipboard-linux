#include <stdio.h>
#include <stdlib.h> 
#include <string.h>

int main(){
    char user[] = "user";
    char textToCopy[] = "test";
    char commandString[100];

    if(!strcmp(getenv("USER"), user))
        sprintf(commandString, "echo '%s' | xclip -selection clipboard", textToCopy);
            system(commandString);
    else{
        printf("invalid user\n");
            return 1;
    }
    return 0;
}
