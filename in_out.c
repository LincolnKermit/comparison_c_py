#include <stdlib.h>
#include <stdio.h>

int main(){
    // set variable choice to char
    char choice;
    printf("\n disk usage checker \n");
    printf("Ready? (y/n): \n");
    scanf("%c", &choice);
    if (choice == 'y'){
        system("clear");
        // does not work on windows obviously...
        printf("Disk usage powered by disk utility manager.\n \n");
        // using system() and df -h command to get disk usage
        system("df -h");
    }
    else {
        printf("Exiting...\n");
    }
    // end of program
    return 0;
}