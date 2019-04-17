
    #include<stdio.h>
#include<math.h>

int main()
{    
    printf("Enter the end to which the head is moving (0 - for lower end(zero) and 1 - for upper end)\n");
    scanf("%d",&end);
    switch(end)
    {
        case 0:
            for(i=0;i<j;i++)
            {        
                a[x]=lower[i];    
                x++;            
            }
            a[x]=0; 
            x++;
            for(i=0;i<k;i++)
            {        
                a[x]=upper[i];
                x++;                
            }
        break;
        case 1:
            for(i=0;i<k;i++)
            {        
                a[x]=upper[i];    
                x++;            
            }
            a[x]=ub; 
            x++;
            for(i=0;i<j;i++)
            {        
                a[x]=lower[i];
                x++;                
            }
	    break;
    }}
