#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int marks_Summation(int marks[], int n, char gender)
{
    int total=0;

    if(gender == 'b')
    {
        for(int i=0; i<n; i+=2)
        {
            total+=marks[i];
        }
        return total;
    }

    else
    {
        for(int i=1; i<n; i+=2)
        {
            total+=marks[i];
        }
        return total;
    }
}

int main()
{
    int n, sum=0;
    char gender;

    scanf("%d", &n);

    int marks[n];

    for(int i=0; i<n; i++)
    {
        scanf("%d", &marks[i]);
    }

    scanf(" %c", &gender);

    sum = marks_Summation(marks, n, gender);

    printf("%d", sum);

    return 0;
}

