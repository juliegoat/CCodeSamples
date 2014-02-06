#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    int i, n, m;
    
    scanf("%i", &n);
    
    if((n > 0) && (n < 100))
    {
        float arrayInput[n];
        
        for(i=0; i<n; i++)
        {
            scanf("%f", &arrayInput[i]);
        }
        
        scanf("%i", &m);
        scanf("%f", &arrayInput[m]);
        
        for(i=0; i<n; i++)
        {
            printf("%.2f ", arrayInput[i]);
        }
    }
    else printf("Enter a positive integer less than 100...");
}