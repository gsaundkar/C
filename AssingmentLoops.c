/*1. Write a program that accepts numbers continuously as long as the number is positive and 
prints the sum of the given numbers. 

#include <stdio.h>
int main(){

    int num,sum = 0;
    printf("Enter numbers continuously. Enter a negative number to stop.\n ");
    
    while (1 )
    {
        printf("Enter the number : ");
        scanf("%d",&num);
        if (num<0)
        {
            break;
        }
        sum += num;
    }
    printf("Sum of the numbers: %d\n", sum);
    return 0;
}
*/


/*2. Write a program to accept two integers x and n and compute x raised to n.
#include <stdio.h>

// Function to calculate x raised to the power of n
int power(int x, int n) {
    int result = 1;
    for (int i = 0; i< n ; i++)
    {
        result *= x;
    }
    return result;
    
}

int main() {
    int x, n;
    int result;

    printf("Enter the base (x): ");
    scanf("%d", &x);

    printf("Enter the exponent (n): ");
    scanf("%d", &n);

    result = power(x, n);

    printf("%d raised to the power of %d is: %d\n", x, n, result);

    return 0;
}
*/

/*Write a program to accept a character, an integer n and display the next n characters. 
#include <stdio.h>
int main(){
    char ch;
    printf("Enter the character : ");
    scanf(" %c",&ch);

    int n ;
    printf("Enter the number : ");
    scanf(" %d",&n);

    for (int i = 0; i < n; i++)
    {
        // if(ch=='z' || ch=='Z')
        // {
        //     printf("large limit\n");
        // }
        ch += 1;
        printf("%c ", ch);
    }
    
    return 0;
}

*/

/*4. Write a program to calculate factorial of a 
number. For e.g. factorial of 5 = 5! = 5*4*3*2*1 = 120 

#include <stdio.h>
int main() {
    int n, i;
    unsigned long long fact = 1;
    printf("Enter an integer: ");
    scanf("%d", &n);

    // shows error if the user enters a negative integer
    if (n < 0)
        printf("Error! Factorial of a negative number doesn't exist.");
    else {
        for (i = 1; i <= n; ++i) {
            fact *= i;
        }
        printf("Factorial of %d = %llu", n, fact);
    }

    return 0;

}
*/

/*5. Write a program to calculate factors of a given number. 

#include <stdio.h>
int main() {
    int n = 16;
    for (int i = 1; i <= n; i++)
    {
        if (n%i==0)
        {
            printf(" %d ", i);
        }
        
    }

    return 0;
}
*/

/*6. Accept two numbers and calculate GCD of them. 
#include<stdio.h>
int main(){
    int n1,n2, gcd;
    printf("Enter two numbers : ");
    scanf("%d %d", &n1, &n2);
    for (int i = 1; i <= n1 && i<=n2 ; i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            
            gcd = i;
        }
        
    }
    printf("GCD = %d", gcd);
    


    return 0;

}
*/

/*7. Write a menu driven program to do following operations : 
a) Compute area of circle 
b) Compute area of rectangle 
c) Compute area of triangle 
d) Exit 
Display menu, ask choice to the user, depending on choice accept the parameters and 
perform the operation. Continue this process until user selects exit option. 

#include <stdio.h>
int main() {
    int r, l, b, h;
    const float pi = 3.14f;
    char ch;
    do
    {
        printf("\n------------------------------------\n");
        printf("\nMenu:\n");
        printf("a : Compute area of circle.\n");
        printf("b : Compute area of rectangle.\n");
        printf("c : Compute area of triangle.\n");
        printf("d : Exit.\n");
        printf("Enter Your Choice : ");
        scanf(" %c", &ch);
        switch (ch)
        {
        case 'a' :
            printf("Enter the radius : ");
            scanf("%d",&r);
            printf("Area of circle = %f \n",(float) pi*r*r);
            break;
        
        case 'b' :
            printf("Enter the length : ");
            scanf("%d",&l);
            printf("Enter the breath : ");
            scanf("%d",&b);
            printf("Enter the height : ");
            scanf("%d",&h);
            printf("Area of rectangle = %d \n", l*b*h);
            break;
        
        case 'c' :
            printf("Enter the length : ");
            scanf("%d",&l);
            printf("Enter the height : ");
            scanf("%d",&h);
            printf("Area of triangle = %f \n", (float)0.5*l*h);
            break;
        
        case 'd' :
            printf("Exiting...\n");
            break;
        
        default:
            printf("Invalid Choice.");
            
        }
    } while (ch != 'd');
    

    return 0;
}
*/

/*8. Write a program to print all prime numbers between 1 to n.
#include <stdio.h>
#include <stdbool.h>

bool isPrime(int i){
    if (i==1 || i==0)
    {
        return false;
    }
    for (int j = 2; j < i; j++)
    {
        if (i % j == 0)
        {
            return false;
        }
        
    }
    return true;
}

int main() {
    int n = 50;
    for (int i = 1; i <= n; i++)
    {
        if (isPrime(i))
        {
            printf(" %d ", i);
        }
        
    }
    

    return 0;
}

*/

