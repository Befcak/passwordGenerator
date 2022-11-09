#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Strength password tester.
// String must be longer than 8 characters.
// Must have at least one lower, upper, and digit.
// No 3 chars in succession. 
// Notify user which req is not statisfy.

static int hasLower = 0;
static int hasUpper = 0;
static int hasInt = 0;
static int hasTriple = 0;

static void checkValue(char value)
{
    //printf("Value Checked = %c\n", value);
    if(hasUpper == 0 && value >= 65 && value <= 90)
        hasUpper = 1;
    if(hasLower == 0 && value >= 97 && value <= 122)
        hasLower = 1;
    if(hasInt == 0 && value >= 48 && value <= 57)
        hasInt = 1;
}

static int checkPassword(char *s)
{
    int length = strlen(s);
    if(length < 8)
    {
        printf("Password not long enough\n");
        return 0;
    }

    for(int i = 0; i < length; i++)
    {
        if((i+2) <= length)
        {
            if(s[i] == s[i+1] && s[i] == s[i+2])
            {
                printf("Three in a row\n");
                return 0;
            }
            else
                checkValue(s[i]);
        }
        else
        {
            if((i+2)==length)
            {
                checkValue(s[i]);
                checkValue(s[i+1]);
            }
            else
                checkValue(s[i]);
        } 
    }

    if(hasUpper == 0)
    {
        printf("Does not have upper.\n");
        return 0;
    }
    if(hasLower == 0)
    {
        printf("Does not have Lower.\n");
        return 0;
    }
    if(hasInt == 0)
    {
        printf("Does not have Int.\n");
        return 0;
    }
    printf("Password is good.\n");
    return 0;
}