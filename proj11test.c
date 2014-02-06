#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *inFile;
    char lastChar;
    int x,i, n = 0;
    char a[1000];
    
    inFile = fopen("a.txt", "r");
    x = fscanf(inFile, "%i", &x);
    while(x != -1)
    {   
        x=fscanf(inFile, "%c", &a[n]);
        n++;
    }
    
    lastChar = a[n-2];
    
    for(i=0; i < n; i++)
    {
        if(a[i] == ' ')
        {
            printf("%c", lastChar);
            i++;
        }
        printf("%c", a[i]);
    }
    
    printf("\n");
    fclose(inFile);
}