#include <stdio.h>

// Function to display result based on marks
void DisplayResult(int value)
{
    if (value < 35)
    {
        printf("You are fail\n");
    }
    else
    {
        printf("You are pass\n");
    }
}

int main()
{
    int Marks = 0; // Variable to store user input

    printf("Enter your marks: \n");
    
    scanf("%d", &Marks); // Corrected: Added '&' to pass the address of Marks

    DisplayResult(Marks); // Function call to check result

    printf("End of application\n");

    return 0;
}
