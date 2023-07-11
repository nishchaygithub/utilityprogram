#include <stdio.h>
#include <math.h>
// calculator program
void calculator()
{
    printf("Calculator program\n");
    int num1, num2;
    int choice1;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("Select an operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice1);

    switch (choice1)
    {
    case 1:
        printf("Result: %d + %d = %d\n", num1, num2, num1 + num2);
        break;
    case 2:
        printf("Result: %d - %d = %d\n", num1, num2, num1 - num2);
        break;
    case 3:
        printf("Result: %d * %d = %d\n", num1, num2, num1 * num2);
        break;
    case 4:
        if (num2 != 0)
        {
            printf("Result: %d / %d = %d\n", num1, num2, num1 / num2);
        }
        else
        {
            printf("Error: Division by zero\n");
        }
        break;
    default:
        printf("Error: Invalid choice\n");
    }
}
// program for square and cube
void squareAndCube()
{
    printf("Square and Cube program\n");
    int number;
    int square, cube;

    printf("Enter a number: ");
    scanf("%d", &number);

    square = number * number;
    cube = number * number * number;

    printf("Square of %d is: %d\n", number, square);
    printf("Cube of %d is: %d\n", number, cube);
}
// program for 2d shape area
void area2D()
{
    printf("Area of 2D Shapes program\n");
    int choice;
    float base, height, radius, length, width;
    float area;

    do
    {
        printf("\nMenu\n");
        printf("1. Calculate the area of a triangle\n");
        printf("2. Calculate the area of a rectangle\n");
        printf("3. Calculate the area of a square\n");
        printf("4. Calculate the area of a circle\n");
        printf("5. Calculate the area of a parallelogram\n");
        printf("6. Exit\n");
        printf("Enter your choice (1-6): ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the base of the triangle: ");
            scanf("%f", &base);
            printf("Enter the height of the triangle: ");
            scanf("%f", &height);
            area = 0.5 * base * height;
            printf("The area of the triangle is: %.2f\n", area);
            break;
        case 2:
            printf("Enter the length of the rectangle: ");
            scanf("%f", &length);
            printf("Enter the width of the rectangle: ");
            scanf("%f", &width);
            area = length * width;
            printf("The area of the rectangle is: %.2f\n", area);
            break;
        case 3:
            printf("Enter the side length of the square: ");
            scanf("%f", &length);
            area = length * length;
            printf("The area of the square is: %.2f\n", area);
            break;
        case 4:
            printf("Enter the radius of the circle: ");
            scanf("%f", &radius);
            area = 3.14159 * radius * radius;
            printf("The area of the circle is: %.2f\n", area);
            break;
        case 5:
            printf("Enter the base of the parallelogram: ");
            scanf("%f", &base);
            printf("Enter the height of the parallelogram: ");
            scanf("%f", &height);
            area = base * height;
            printf("The area of the parallelogram is: %.2f\n", area);
            break;
        case 6:
            printf("Exiting program and going back to main menu\n");
            break;
        default:
            printf("Invalid choice\n");
        }
    } while (choice != 6);
}
// program for 3d shape area
void area3D()
{
    printf("Area of 3D Shapes program\n");
    int choice;
    float base, height, radius, length, width, depth;
    float area, volume;

    do
    {
        printf("\nMenu\n");
        printf("1. Calculate the area of a triangle\n");
        printf("2. Calculate the area of a rectangle\n");
        printf("3. Calculate the area of a square\n");
        printf("4. Calculate the area of a circle\n");
        printf("5. Calculate the area of a parallelogram\n");
        printf("6. Calculate the volume of a cube\n");
        printf("7. Calculate the volume of a sphere\n");
        printf("8. Calculate the volume of a cylinder\n");
        printf("9. Exit\n");
        printf("Enter your choice (1-9): ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the base of the triangle: ");
            scanf("%f", &base);
            printf("Enter the height of the triangle: ");
            scanf("%f", &height);
            area = 0.5 * base * height;
            printf("The area of the triangle is: %.2f\n", area);
            break;
        case 2:
            printf("Enter the length of the rectangle: ");
            scanf("%f", &length);
            printf("Enter the width of the rectangle: ");
            scanf("%f", &width);
            area = length * width;
            printf("The area of the rectangle is: %.2f\n", area);
            break;
        case 3:
            printf("Enter the side length of the square: ");
            scanf("%f", &length);
            area = length * length;
            printf("The area of the square is: %.2f\n", area);
            break;
        case 4:
            printf("Enter the radius of the circle: ");
            scanf("%f", &radius);
            area = 3.14159 * radius * radius;
            printf("The area of the circle is: %.2f\n", area);
            break;
        case 5:
            printf("Enter the base of the parallelogram: ");
            scanf("%f", &base);
            printf("Enter the height of the parallelogram: ");
            scanf("%f", &height);
            area = base * height;
            printf("The area of the parallelogram is: %.2f\n", area);
            break;
        case 6:
            printf("Enter the length of the side of the cube: ");
            scanf("%f", &length);
            volume = length * length * length;
            printf("The volume of the cube is: %.2f\n", volume);
            break;
        case 7:
            printf("Enter the radius of the sphere: ");
            scanf("%f", &radius);
            volume = (4.0 / 3.0) * 3.14159 * radius * radius * radius;
            printf("The volume of the sphere is: %.2f\n", volume);
            break;
        case 8:
            printf("Enter the radius of the base of the cylinder: ");
            scanf("%f", &radius);
            printf("Enter the height of the cylinder: ");
            scanf("%f", &height);
            volume = 3.14159 * radius * radius * height;
            printf("The volume of the cylinder is: %.2f\n", volume);
            break;
        case 9:
            printf("Exiting program\n");
            break;
        default:
            printf("Invalid choice\n");
        }
    } while (choice != 9);
}
// program for checking +ve and -ve
void checkPositiveNegative()
{
    {
        int num;
        printf("Positive/Negative Checker program\n");
        printf("Enter a number: ");
        scanf("%d", &num);

        if (num > 0)
        {
            printf("%d is positive.\n", num);
        }
        else if (num < 0)
        {
            printf("%d is negative.\n", num);
        }
        else
        {
            printf("The number is zero.\n");
        }
    }
}
// program to check odd even
void checkOddEven()
{
    printf("Odd/Even Checker program\n");
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("%d is even.\n", num);
    }
    else
    {
        printf("%d is odd.\n", num);
    }
}
// program to find percentage
void calculatePercentage()
{
    printf("Percentage Calculator program\n");
    void calculatePercentage();
    {
        float totalMarks, obtainedMarks, percentage;
        printf("Percentage Calculator program\n");
        printf("Enter total marks: ");
        scanf("%f", &totalMarks);
        printf("Enter obtained marks: ");
        scanf("%f", &obtainedMarks);

        percentage = (obtainedMarks / totalMarks) * 100;

        printf("Percentage: %.2f%%\n", percentage);
    }
}
// program to find Factorial
void calculateFactorial()
{
    int number;
    int factorial = 1;

    printf("Factorial Calculator program\n");
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number < 0)
    {
        printf("Factorial is not defined for negative numbers.\n");
    }
    else
    {
        for (int i = 1; i <= number; i++)
        {
            factorial *= i;
        }
        printf("Factorial of %d is: %d\n", number, factorial);
    }
}
// program to gen table
void generateTable()
{
    int number, range;

    printf("Table Generation program\n");
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("Enter the range: ");
    scanf("%d", &range);

    printf("Table of %d up to %d:\n", number, range);
    for (int i = 1; i <= range; i++)
    {
        printf("%d x %d = %d\n", number, i, number * i);
    }
}
void arithmeticOperations()
{
    int choice;
    int exit = 0;

    while (!exit)
    {
        printf("\nArithmetic Operations\n");
        printf("1. Calculator\n");
        printf("2. Square and Cube\n");
        printf("3. Area of 2D Shapes\n");
        printf("4. Area of 3D Shapes\n");
        printf("5. Check Positive/Negative\n");
        printf("6. Check Odd/Even\n");
        printf("7. Calculate Percentage\n");
        printf("8. Calculate Factorial\n");
        printf("9. Generate Table\n");
        printf("10. Back to Main Menu\n");
        printf("Enter your choice (1-10): ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            calculator();
            break;
        case 2:
            squareAndCube();
            break;
        case 3:
            area2D();
            break;
        case 4:
            area3D();
            break;
        case 5:
            checkPositiveNegative();
            break;
        case 6:
            checkOddEven();
            break;
        case 7:
            calculatePercentage();
            break;
        case 8:
            calculateFactorial();
            break;
        case 9:
            generateTable();
            break;
        case 10:
            printf("Returning to Main Menu\n");
            exit = 1;
            break;
        default:
            printf("Invalid choice\n");
        }
    }
}
// program for marksheet
void markSheetGeneration()
{
    printf("Mark-sheet Generation program\n");

    // Variables to store student information
    char name[50];
    int rollNumber;
    float subject1, subject2, subject3, subject4, subject5;
    float totalMarks, averageMarks;

    // Get student information from the user
    printf("Enter student name: ");
    scanf("%s", name);
    printf("Enter roll number: ");
    scanf("%d", &rollNumber);
    printf("Enter marks for subject 1: ");
    scanf("%f", &subject1);
    printf("Enter marks for subject 2: ");
    scanf("%f", &subject2);
    printf("Enter marks for subject 3: ");
    scanf("%f", &subject3);
    printf("Enter marks for subject 4: ");
    scanf("%f", &subject4);
    printf("Enter marks for subject 5: ");
    scanf("%f", &subject5);

    // Calculate total marks and average marks
    totalMarks = subject1 + subject2 + subject3 + subject4 + subject5;
    averageMarks = totalMarks / 5;

    // Display the mark sheet
    printf("\nMark Sheet\n");
    printf("Name: %s\n", name);
    printf("Roll Number: %d\n", rollNumber);
    printf("Subject 1: %.2f\n", subject1);
    printf("Subject 2: %.2f\n", subject2);
    printf("Subject 3: %.2f\n", subject3);
    printf("Subject 4: %.2f\n", subject4);
    printf("Subject 5: %.2f\n", subject5);
    printf("Total Marks: %.2f\n", totalMarks);
    printf("Average Marks: %.2f\n", averageMarks);
}
// program to check vowel
void vowelChecker()
{ {
    char ch;
    int isVowel = 0;

    printf("Enter a character: ");
    scanf("%c", &ch);

    switch (ch) {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            isVowel = 1;
            break;
    }

    if (isVowel) {
        printf("%c is a vowel.\n", ch);
    } else {
        printf("%c is not a vowel.\n", ch);
    }
}
}
// program to find temp
void temperatureCalculator()
{
    printf("Temperature Calculator program\n");

    int choice;
    float temperature, convertedTemperature;

    printf("Menu:\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Enter temperature in Celsius: ");
        scanf("%f", &temperature);
        convertedTemperature = (temperature * 9 / 5) + 32; // Add 32 here
        printf("Temperature in Fahrenheit: %.2f\n", convertedTemperature);
        break;
    case 2:
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &temperature);
        convertedTemperature = (temperature - 32) * 5 / 9;
        printf("Temperature in Celsius: %.2f\n", convertedTemperature);
        break;
    default:
        printf("Invalid choice\n");
    }
}
// program to  calculate interest
void interestCalculator()
{
    printf("Simple and Compound Interest Calculator program\n");

    int choice;
    float principal, rate, time, interest, amount;

    printf("Menu:\n");
    printf("1. Simple Interest\n");
    printf("2. Compound Interest\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Enter principal amount: ");
        scanf("%f", &principal);
        printf("Enter interest rate (in percentage): ");
        scanf("%f", &rate);
        printf("Enter time period (in years): ");
        scanf("%f", &time);

        interest = (principal * rate * time) / 100;
        amount = principal + interest;

        printf("Simple Interest: %.2f\n", interest);
        printf("Total Amount: %.2f\n", amount);
        break;

    case 2:
        printf("Enter principal amount: ");
        scanf("%f", &principal);
        printf("Enter interest rate (in percentage): ");
        scanf("%f", &rate);
        printf("Enter time period (in years): ");
        scanf("%f", &time);

        amount = principal * pow((1 + rate / 100), time);
        interest = amount - principal;

        printf("Compound Interest: %.2f\n", interest);
        printf("Total Amount: %.2f\n", amount);
        break;

    default:
        printf("Invalid choice\n");
        break;
    }
}
//program to find table
void tableGeneration()
{
    printf("Table Generation program\n");

    int number;
    printf("Enter a number to generate its table: ");
    scanf("%d", &number);

    printf("Table of %d:\n", number);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", number, i, number * i);
    }
}

//secret program
void secretProgram()
{
printf("Secret program\n");
printf("This is a secret program. You have unlocked it!\n");
printf("You can add your own code here to create a hidden functionality or game.\n");
printf("Let your imagination run wild and have fun exploring the secrets!\n");
}

int main()
{
    int choice;
    int exit = 0;

    while (!exit)
    {
        printf("Hello My Friend Its Uni bot here You can ask me anything from below");
            printf("\nMenu\n");
        printf("1. Arithmetic Operations\n");
        printf("2. Mark-sheet Generation\n");
        printf("3. Vowel Checker\n");
        printf("4. Temperature Calculator\n");
        printf("5. Simple and Compound Interest Calculator\n");
        printf("6. Table Generation\n");
        printf("7. Secret\n");
        printf("8. Exit\n");
        printf("Enter your choice (1-8): ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            arithmeticOperations();
            break;
        case 2:
            markSheetGeneration();
            break;
        case 3:
            vowelChecker();
            break;
        case 4:
            temperatureCalculator();
            break;
        case 5:
            interestCalculator();
            break;
        case 6:
            tableGeneration();
            break;
        case 7:
            secretProgram();
            break;
        case 8:
            printf("Exiting program\n");
            exit = 1;
            break;
        default:
            printf("Invalid choice\n");
        }
    }

    return 0;
}
