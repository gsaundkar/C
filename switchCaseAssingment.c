

/* 1. Accept a single digit from the user and display it in words. For example, if digit entered is 9, display Nine. 
#include <stdio.h>
int main(){
    int singleDigit;
    printf("Enter the digit : ");
    scanf("%d",&singleDigit);
    switch (singleDigit)
    {
    case 1:
        printf("One");
        break;
    
    case 2:
        printf("Two");
        break;
    
    case 3:
        printf("Three");
        break;
    
    case 4:
        printf("Four");
        break;
    
    case 5:
        printf("Five");
        break;
    
    case 6:
        printf("Six");
        break;
    
    case 7:
        printf("Seven");
        break;
    
    case 8:
        printf("Eight");
        break;
    
    case 9:
        printf("Nine");
        break;
    
    default:
        printf("Invalid Digit");
        break;
    }


    return 0;
}
*/



/*2. Write a program, which accepts two integers and an operator as a character (+ - * / ), 
performs the corresponding operation and displays the result. 

#include <stdio.h>
int main(){
    int n1, n2;
    printf("Enter two number : ");
    scanf("%d %d",&n1,&n2);

    char choice;
    fflush(stdin);
    printf("Which Operation do you  want to perform +, -, *, /  => ");
    scanf("%c",&choice);
    switch (choice)
    {
    case '+':
        printf("Addition : %d", n1+n2);
        break;
    
    case '-':
        printf("Substraction : %d ", n1-n2);
        break;
    
    case '*':
        printf("Multiplication : %d", n1*n2);
        break;
    
    case '/':
        printf("Division : %.2f", (float)n1/n2);
        break;
    
    default:
        printf("Invalid Operation");
        break;
    }


    
    return 0;
}
*/

/*3. Accept two numbers in variables x and y from the user and perform the following operations 
Options 
Actions 
1. 
Equality Check if x is equal to y 
Less Than Check if x is less than y 
2. 
3. 
Quotient and Remainder Divide x by y and display the 
quotient and remainder 
4. 
Range : Accept a number and check if it lies between x and y (both inclusive)  
Swap : Interchange x and y

#include <stdio.h>
int main(){
    int x, y, num, temp ;
    printf("Enter two number : ");
    scanf("%d %d",&x,&y);

    int action;
    
    printf("Which Operation do you  want to perform 1, 2, 3, 4, 5  => ");
    scanf("%d",&action);
    switch (action)
    {
    case 1:
        (x==y)?printf("x is equal to y "):printf("x is not equal to y ");
        break;
    
    case 2:
        (x<y)?printf("x is less than y "):printf("x is not less than y ");
        break;
    
    case 3:
        printf("quotient = %.2f , reminder = %d",(float)x/y,x%y);
        break;
    
    case 4:
        printf("Enter The number : ");
        scanf("%d",&num);
       
        if (x>=num && y<=num)
        {
            printf("number is lies between x & y");
        }else if(x<=num && y>=num){
            printf("number is lies between x & y");
        }else{
            printf("number is not lies between x & y");
        }

        break;

    case 5:
        temp = x;
        x = y;
        y = temp;
        printf("x=%d, y=%d",x,y);
        break;
    
    
    default:
        printf("Invalid Action");
        break;
    }


    
    return 0;
}

*/

/*4. Accept radius from the user and write a program having menu with the following 
options and corresponding actions: 
Options 
Actions 
1. Area of Circle 
2.Circumference of Circle 
3. Volume of Sphere
#include <stdio.h>
int main(){
    int r;
    printf("Enter the radius of circle : ");
    scanf("%d",&r);

    int action;
    
    printf("Which Operation do you  want to perform 1:Area of Circle, 2:Circumference of Circle, 3:Volume of Sphere   => ");
    scanf("%d",&action);
    switch (action)
    {
    case 1:
        printf("Area of Circle = %f", 3.14*r*r);
        break;
    
    case 2:
        printf("Circumference of Circle = %f", 3.14*r*2);
        break;
    
    case 3:
        printf("Volume of Sphere = %f", 3.14*r*r*r*4);
        break;
    
    
    default:
        printf("Invalid Action");
        break;
    }


    
    return 0;
}
*/

/*5. Write a program having menu that has three options - add, subtract or multiply two fractions. 
The two fractions and the options are taken as input and the result is displayed as output. Each 
fraction is read as two integers, numerator and denominator. */
#include <stdio.h>

int main() {
    int num1, den1, num2, den2;
    char operation;

    printf("Enter the first fraction (numerator denominator): ");
    scanf("%d %d", &num1, &den1);

    printf("Enter the second fraction (numerator denominator): ");
    scanf("%d %d", &num2, &den2);

    printf("Enter the operation (+, -, *): ");
    scanf(" %c", &operation); // Notice the space before %c to consume any leading whitespace

    switch (operation) {
        case '+':
            printf("Result: %d/%d\n", num1 * den2 + num2 * den1, den1 * den2);
            break;
        case '-':
            printf("Result: %d/%d\n", num1 * den2 - num2 * den1, den1 * den2);
            break;
        case '*':
            printf("Result: %d/%d\n", num1 * num2, den1 * den2);
            break;
        default:
            printf("Invalid operation selected.\n");
    }

    return 0;
}

