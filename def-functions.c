/***********************************************************
*
** Allen Whearry Jr.
*
** instagram.com/NoRest4AWhearry
*
** Defining Functions:
*
** Practice defining functions by creating a Fahrenheit to 
** Celsius function and a Celsius to Fahrenheit function.
*
************************************************************/
#include <stdio.h>

//Prototypes
void FtoC(float f);
void CtoF(float c);

int main(void)
{
    FtoC(-459.67);
    FtoC(-50.0);
    FtoC(100.0);
    FtoC(212.0);
    
    CtoF(100.0);
    CtoF(9);
    CtoF(0);
    CtoF(-50);
    
}

// Create Functions
void FtoC(float f)
{
    float c = (f-32.0)*5.0/9.0;
    printf("%6.2f degrees Fahrenheit is %6.2f degrees Celsius.\n", f, c);
    // if want to return value change function type from "void" to "float" and add "return 0" on this line
}

void CtoF(float c)
{
    float f = c * 5.0/9.0 + 32.0;
    printf("%6.2f degrees Celsius is %6.2f degrees Fahrenheit.\n", c, f);
    // if want to return value change function type from "void" to "float" and add "return 0" on this line
}
