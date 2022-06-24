#include<stdio.h>
int main(){
    FILE *inputFile, *outputFile;
    inputFile = fopen("input2.txt","r");
    if(inputFile == NULL)
    {
        printf("No File Found\n");
        return 0;
    }

    outputFile = fopen("output.txt","w");

    while(1)
    {
        char ch = fgetc(inputFile);
        if(ch == EOF){
            break;
        }
        fputc(ch,outputFile);
    }
    return 0;
}
