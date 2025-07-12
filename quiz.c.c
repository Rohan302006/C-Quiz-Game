#include <stdio.h>
int main()
{
    int score = 0;
    printf("Welcome to the Ultimate Quiz Game by Rohan Hede!\nS.Y. B.Tech.(CSE)\n");
    char Q1ans, Q2ans, Q3ans, Q4ans, Q5ans,Q6ans,Q7ans,Q8ans,Q9ans,Q10ans;
    printf("\nQuestion:1\nWhat does int represent in C language ?\n");
    printf(" A: Integer \n B: Interface \n C: Input\n D: Instruction\n");
    printf("Choose from the above options \n");
    scanf(" %c",&Q1ans);
    if (Q1ans == 'A' || Q1ans == 'a')
    {
        printf("Correct Answer!\n");
        score++;
    }
    else
    {
        printf("You selected incorrect option\nThe correct option is: A\n");
    }

    printf("\n Question 2:\n Which symbol is used to comment a single line in C ?\n");
    printf("A: <--\n B: /*\n C: //\n D: #\n");
    printf("Choose from the above options \n");
    scanf(" %c",&Q2ans);
    if (Q2ans == 'C' || Q2ans == 'c')
    {
        printf("Correct Answer!\n");
        score++;
    }
    else
    {
        printf(" You selected Incorrect Option\n The correct option is: C \n");
    }

    printf("\n Question 3:Which one is used to take user input in C language ?\n");
    printf("A: printf()\n B: scanf()\n C:input()\n D: cin\n");
    printf("Choose from the above options \n");
    scanf(" %c",&Q3ans);
    if (Q3ans == 'B' || Q3ans == 'b')
    {
        printf("Correct Answer!\n");
        score++;
    }
    else
    {
        printf(" You selected Incorrect Option \n The correct option is: B\n");
    }

    printf(" \nQuestion 4:\n Which of the following is not a programing Language ?\n");
    printf("A: C++\n B: C\n C: Python\n D: HTML\n");
    printf("Choose from the above options \n");
    scanf(" %c",&Q4ans);
    if (Q4ans == 'D' || Q4ans == 'd')
    {
        printf("Correct Answer!\n");
        score++;
    }
    else
    {
        printf(" You selected Incorrect Option\n The correct option is: D\n");
    }

    printf("\n Question 5:\n Which tag is used in HTML for Heading ?\n");
    printf("A: <H1>/</H1>\n B: <BR>/</BR>\n C: <TD>/</TD>\n D: None of the above\n");
    printf("Choose from the above options \n");
    scanf(" %c",&Q5ans);
    if (Q5ans == 'A' || Q5ans == 'a')
    {
        printf("Correct Answer!\n");
        score++;
    }
    else
    {
        printf("You selected incorrect option\n The correct option is: A\n");
    }
    
        printf("\n Question 6:\n Which of the following is a loop structure in C ?\n");
    printf(" A: if\n B: switch\n C: for\n D: case\n");
    printf("Choose from the above options \n");
    scanf(" %c",&Q6ans);
    if (Q6ans == 'C' || Q6ans == 'c')
    {
        printf("Correct Answer!\n");
        score++;
    }
    else
    {
        printf("You selected incorrect option\n The correct option is: C\n");
    }

    printf("\n Question 7:\n Which header file is used to include input/output functions like printf and scanf in C ?\n");
    printf(" A: <math.h>\n B: <string.h>\n C: <conio.h>\n D: <stdio.h>\n");
    printf("Choose from the above options \n");
    scanf(" %c",&Q7ans);
    if (Q7ans == 'D' || Q7ans == 'd')
    {
        printf("Correct Answer!\n");
        score++;
    }
    else
    {
        printf("You selected incorrect option \n The correct option is: D\n");
    }

    printf("\nQuestion 8:\n What is the correct format specifier for float in printf() ?\n");
    printf("A: %%c \n B: %%f \n C: %%d \n  D: %%s\n");
    printf("Choose from the above options \n");
    scanf(" %c", &Q8ans);
    if (Q8ans == 'B' || Q8ans == 'b')
    {
        printf("Correct Answer!\n");
        score++;
    }
    else
    {
        printf("You selected incorrect option\n The correct option is: B\n");
    }

    printf("\nQuestion 9:\n Which keyword is used to declare a constant in C ?\n");
    printf(" A: const\n B: constant \n C: define \n D: final\n");
    printf("Choose from the above options \n");
    scanf(" %c", &Q9ans);
    if (Q9ans == 'A' || Q9ans == 'a')
    {
        printf("Correct Answer!\n");
        score++;
    }
    else
    {
        printf("You selected incorrect option\n The correct option is: A\n");
    }

    printf("\nQuestion 10:\n Which operator is used for comparison in C ?\n");
    printf(" A: =\n B: :=\n C: !==\n D: ==\n");
    printf("Choose from the above options \n");
    scanf(" %c", &Q10ans);
    if (Q10ans == 'D' || Q10ans == 'd')
    {
        printf("Correct Answer!\n");
        score++;
    }
    else
    {
        printf("You selected incorrect option\n The correct option is: D\n");
    }

    printf("\nYour final score is: %d out of 10\n", score);


    printf("\nCONGRATULATIONS!\n");
    printf("\nThanks for playing! You did great!\n");
    printf("\nAll questions are programming-related to help beginners revise core C concepts.");
    return 0;
}