#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int find_nth_term(int n, int a, int b, int c)
{
   int f = a+b+c;

   if(n==1)
   {
      return a;
   }
   else if(n==2)
   {
      return b;
   }
   else if(n==3)
   {
      return c;
   }
   else if(n==4)
   {
      return f;
   }


   return find_nth_term(--n, b, c, f);
}

int main()
{
   int n, a, b, c;
   scanf("%d %d %d %d", &n, &a, &b, &c);

   int Tn = find_nth_term(n, a, b, c);

   printf("%d", Tn);

   return 0;
}

