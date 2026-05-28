#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int* gradingStudents(int grades[], int n)
{
    static int result[60];

    for(int i=0; i<n; i++)
    {
        if(grades[i] >= 38)
        {
            if(grades[i] % 5 == 3)
            {
                grades[i]+=2;
                result[i] = grades[i];
            }
            else if(grades[i] % 5 == 4)
            {
                grades[i]+=1;
                result[i] = grades[i];
            }
            else
            {
                result[i] = grades[i];
            }
        }
        else
        {
            result[i] = grades[i];
        }

    }

    return result;
}

int main()
{
    int n;
    scanf("%d", &n);

    int grades[n];

    for(int i=0; i<n; i++)
    {
        scanf("%d", &grades[i]);
    }

    int* results = gradingStudents(grades,n);

    for(int i=0; i<n; i++)
    {
        printf("%d\n", results[i]);
    }

   return 0;
}
