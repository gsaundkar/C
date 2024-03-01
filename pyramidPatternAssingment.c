
/* 1.
 * 
 *  *
 *  *  *
 *  *  *  *
 *  *  *  *  *

#include <stdio.h>
int main(){
    int n = 5;
    for (int i = 1; i <=5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf(" * ");
        }
        printf("\n");
        
    }
     
    return 0;
}
*/


/* 2.
 1 
 2  2
 3  3  3
 4  4  4  4
 5  5  5  5  5


#include <stdio.h>
int main(){
    int n = 5;
    for (int i = 1; i <=5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf(" %d ",i);
        }
        printf("\n");
        
    }
     
    return 0;
}

*/

/*
 1 
 1  2
 1  2  3
 1  2  3  4
 1  2  3  4  5

#include <stdio.h>
int main(){
    int n = 5;
    for (int i = 1; i <=5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf(" %d ",j);
        }
        printf("\n");
        
    }
     
    return 0;
}
*/


/*3
 A
 A B
 A B C
 A B C D
 A B C D E

#include <stdio.h>
int main(){
    char n = 'E';
    for (char i = 'A'; i <= n; i++)
    {
        for (int j = 'A'; j <= i; j++)
        {
            printf(" %c", j);
        }
        printf("\n");
        
    }
     
    return 0;
}
*/



/*
 *****
  ****
   ***
    **
     *

#include <stdio.h>
int main(){
    int rows = 5, i,k,j;
    for (i = 1; i <= rows; i++)   
    {  
        for (j = 1; j <= i; j++)   
        {  
            printf(" ");   
        }  
        for (k = i; k <= rows; k++)  
        {  
            printf("*"); // print the Star  
        }  
        printf ("\n");   
    }  
     
    return 0;
}
*/


