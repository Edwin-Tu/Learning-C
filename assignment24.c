#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main (void){
    int filedescriptor;

    filedescriptor = open("estfile.tst",O_WRONLY | O_CREAT, S_IRWXU);

    if (filedescriptor < 0){
        printf("The open operation failed...");
        return -1;
    }else{
        printf("The open operation succeeded!");
        return 0;
    }
}