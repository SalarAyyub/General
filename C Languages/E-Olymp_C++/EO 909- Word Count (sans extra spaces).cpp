#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <conio.h>

using namespace std;

char* sensansxtraspaces(char *s)
{
    char *p;
    int i=0, j=0;

    p = (char*)malloc(strlen(s)+1);

    while(*(s+i))
    {
        while(*(s+i) == ' ')
        {
            i++;
        }
        while(*(s+i)!=' ' && *(s+i)!='\0')
        {
            *(p+j) = *(s+i);
            i++;
            j++;
        }
        if(*(s+i)== '\0' && *(p+j-1)== ' ')
        {
            j--;
        }
        *(p+j)=*(s+i);
        j++;
    }

    return(p);

}

int wordCount(char* s)
{
    int i=0, count=0;

    while(*(s+i))
    {
        if(*(s+i)== ' ')
        {
            count++;
        }
        i++;
    }

    return(count+1);
}

int main()
{
    char sen[250];
    cin.getline(sen,250);

    strcpy(sen, sensansxtraspaces(sen));
    int words = wordCount(sen);
    cout<<words;

    getch();

    return 0;
}


