/**
 * 1. Accept the radius from user and compute the area and circumference of a circle. 

#include <stdio.h>
int main(){
    int radiusOfCircle;
    printf("Enter Radius of Circle : ");
    scanf("%d",&radiusOfCircle);
    float pi = 3.14;
    float areaOfCircle = pi * radiusOfCircle * radiusOfCircle;
    float circumferenceOfCircle = 2 * pi *radiusOfCircle;
    printf("Area of a Circle : %f\n", areaOfCircle); 
    printf("Circumference of a Circle : %f", circumferenceOfCircle); 

    return 0;
}

*/

/*
2. Accept a character from user and display ASCII value of it. 


#include <stdio.h>
int main(){
    char character;
    printf("Enter character : ");
    scanf("%c",&character);

    printf("ASCII value of character : %d\n", character); 


    return 0;
}


*/

/*
3. Accept marks of 5 subjects (out of 100) of a student and display total marks and 
compute the percentage also. 



#include <stdio.h>
int main(){
    int marksOfSubject1;
    printf("Enter the marks of subject 1 out of 100 : ");
    scanf("%d",&marksOfSubject1);
    
    int marksOfSubject2 ;
    printf("Enter the marks of subject 2 out of 100 : ");
    scanf("%d",&marksOfSubject2);
    
    int marksOfSubject3;
    printf("Enter the marks of subject 3 out of 100 : ");
    scanf("%d",&marksOfSubject3);
    
    int marksOfSubject4;
    printf("Enter the marks of subject 4 out of 100 : ");
    scanf("%d",&marksOfSubject4);
    
    int marksOfSubject5;
    printf("Enter the marks of subject 5 out of 100 : ");
    scanf("%d",&marksOfSubject5);
    

    float toatlMarksOfStudent = marksOfSubject1 + marksOfSubject2 + marksOfSubject3 + marksOfSubject4 + marksOfSubject5;
    printf("Total marks of student %.f/500. \n", toatlMarksOfStudent); 
    float marksInPercentage = toatlMarksOfStudent / 5 ;
    printf("Total marks of student in percentage %.2f. ", marksInPercentage); 

    return 0;
}

*/

/*4. Accept the basic salary of an employee and compute the net salary after adding earnings and 
subtracting deductions. 
PF is 2 % of basic Tax is 3 % of basic HRA is 5 % basic DA is 8 % of basic 


#include <stdio.h>

int main() {
    float basicSalary, pf, tax, hra, da, earnings, deductions, netSalary;

    // Input Basic Salary
    printf("Enter the basic salary of the employee: ");
    scanf("%f", &basicSalary);

    // Calculate PF, Tax, HRA, and DA
    pf = 0.02 * basicSalary;
    tax = 0.03 * basicSalary;
    hra = 0.05 * basicSalary;
    da = 0.08 * basicSalary;

    // Calculate Earnings and Deductions
    earnings = pf + hra + da;
    deductions = tax + pf;

    // Calculate Net Salary
    netSalary = basicSalary + earnings - deductions;

    // Print Net Salary
    printf("Net Salary: %.2f\n", netSalary);

    return 0;
}

*/

/*
    5. Accept two numbers and swap two numbers using 
    i) Third variable 
    ii) By performing arithmetic operations. 

#include <stdio.h>
int main(){
    int number1, number2, number3;
    printf("Enter Number 1 : ");
    scanf("%d",&number1);
    printf("Enter Number 2 : ");
    scanf("%d",&number2);
    printf("Two numbers : %d %d\n", number1, number2); 

    number3 = number1;
    number1 = number2;
    number2 = number3;

    
    printf("Swapped two numbers : %d %d", number1, number2); 

    printf("\n----By performing arithmetic operations-------\n"); 

    number1 = number1 + number2; //15
    number2 = number1 - number2; // 5
    number1 = number1 - number2; //10

    printf("Swapped Two numbers : %d %d", number1, number2); 


    return 0;
}

*/

/*6. Accept dimensions of a cylinder and print the surface area and volume (Hint: surface area = 2πr 
2 + 2πrh, volume = π r 2 h). Define a constant variable pi=3.14. 

#include <stdio.h>
int main(){
    float radius, height;
    const float pi = 3.14f;
    printf("Enter Radius of cylinder : ");
    scanf("%f",&radius);
    printf("Enter height of cylinder : ");
    scanf("%f",&height);

    float surfaceAreaOfCylinder = (2 * pi * radius) + (2*pi*height) ;
    float volumeOfCylinder = (2 * pi * radius * height) ;

    printf("Surface area of cylinder : %f\n", surfaceAreaOfCylinder); 
    printf("Volume of cylinder : %f\n", volumeOfCylinder); 


    return 0;
}

*/
/*7. Accept temperatures in Fahrenheit (F) and print it in Celsius(C) and Kelvin (K) (Hint: C=5/9(F
32), K = C + 273.15) */

#include <stdio.h>

int main() {
    float fahrenheit, celsius, kelvin;

    // Input temperature in Fahrenheit
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    // Convert Fahrenheit to Celsius
    celsius = (5.0 / 9.0) * (fahrenheit - 32.0);

    // Convert Celsius to Kelvin
    kelvin = celsius + 273.15;

    // Print the temperatures in Celsius and Kelvin
    printf("Temperature in Celsius: %.2f\n", celsius);
    printf("Temperature in Kelvin: %.2f\n", kelvin);

    return 0;
}

