/*1. Write a program to accept an integer and check if it is even or odd.

#include <stdio.h>

int main() {
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);

    (num % 2 == 0) ? printf("Even Number ") : printf("Odd Number ");

    // if (num % 2 == 0)
    // {

    //     printf("Even Number ");

    // }
    // else
    // {
    
    //     printf("Odd Number ");
    // }
    
    return 0;
}
*/

/*2. Write a program to accept a number and check if it is divisible by 5 and 7. 
#include <stdio.h>

int main() {
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);

    (num % 5 == 0 && num % 7 == 0) ? printf("Number is divisible by 5 & 7") : printf("Number is not divisible by 5 & 7");

    
    return 0;
}
*/


/*

3. Write a program, which accepts annual basic salary of an employee and calculates and 
displays the Income tax as per the following rules. 
Basic: < 1, 50,000 Tax = 0 
1, 50,000 to 3,00,000 Tax = 20% 
> 3,00,000 Tax = 30% 

#include <stdio.h>

int main() {
    float basicSalary, tax;

    // Input annual basic salary from the user
    printf("Enter annual basic salary of the employee: ");
    scanf("%f", &basicSalary);

    // Calculate income tax based on the provided rules
    if (basicSalary < 150000) {
        tax = 0;
    } else if (basicSalary >= 150000 && basicSalary <= 300000) {
        tax = 0.20 * basicSalary;
    } else {
        tax = 0.30 * basicSalary;
    }

    // Display the calculated income tax
    printf("Income tax: %.2f\n", tax);

    return 0;
}
*/

/*4. Accept a lowercase character from the user and check whether the character is a vowel or 
consonant. (Hint: a, e, i, o, u are vowels) 


#include <stdio.h>

int main() {
    char ch;

    // Input a lowercase character from the user
    printf("Enter a lowercase character: ");
    scanf(" %c", &ch);

    // Check if the character is a vowel or consonant
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        printf("%c is a vowel.\n", ch);
    } else {
        printf("%c is a consonant.\n", ch);
    }

    return 0;
}
*/

/*5. Write a C program to input angles of a triangle and check whether triangle is valid or not.
#include <stdio.h>

int main() {
    float angle1, angle2, angle3;

    // Input angles of the triangle
    printf("Enter the three angles of the triangle:\n");
    printf("Angle 1: ");
    scanf("%f", &angle1);
    printf("Angle 2: ");
    scanf("%f", &angle2);
    printf("Angle 3: ");
    scanf("%f", &angle3);

    // Check if the triangle is valid
    (angle1 + angle2 + angle3 == 180) ?  printf("The triangle is valid.\n") : printf("The triangle is not valid.\n");
    // if (angle1 + angle2 + angle3 == 180) {
    //     printf("The triangle is valid.\n");
    // } else {
    //     printf("The triangle is not valid.\n");
    // }

    return 0;
}
*/

/*6. Write a C program to check whether a entered character is uppercase or lowercase alphabet.
#include <stdio.h>

int main() {
    char ch;

  
    printf("Enter a  character: ");
    scanf(" %c", &ch);


    if (ch >= 'A' && ch <= 'Z') {
        printf("%c is a uppercase.\n", ch);
    }else if (ch >= 'a' && ch <= 'z') {
        printf("%c is a lowercase alphabet.\n", ch);
    } else {
        printf("%c is not an alphabet.\n", ch);
    }

    return 0;
}
*/

/*7. Write a C program to accept a character and invert the case of it. 

#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z') {
        ch = ch + 32;
    } else if (ch >= 'a' && ch <= 'z') {
        ch = ch - 32;
    }

    printf("The inverted case of the character is: %c", ch);

    return 0;
}
*/

/*8. Write a program to accept 3 numbers and compute minimum and maximum from them*/
#include <stdio.h>

int main() {
    float num1, num2, num3, minimum, maximum;

    // Input three numbers from the user
    printf("Enter three numbers: ");
    scanf("%f %f %f", &num1, &num2, &num3);

    // Assume first number as initial minimum and maximum
    minimum = num1;
    maximum = num1;

    // Update minimum and maximum if necessary
    if (num2 < minimum) {
        minimum = num2;
    }
    if (num3 < minimum) {
        minimum = num3;
    }
    if (num2 > maximum) {
        maximum = num2;
    }
    if (num3 > maximum) {
        maximum = num3;
    }

    // Print the minimum and maximum numbers
    printf("Minimum: %.2f\n", minimum);
    printf("Maximum: %.2f\n", maximum);

    return 0;
}
