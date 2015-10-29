#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 1000
int check_anagram(char a[], char b[])
{
   int pierwsza[MAX] = {'\n'}, druga[MAX] = {'\n'}, j = 0;

   while (a[j] != '\n')
   {
      pierwsza[a[j]-'a']++;
      j++;
   }

   j = 0;

   while (b[j] != '\n')
   {
      druga[b[j]-'a']++;
      j++;
   }

   for (j = 0; j < MAX; j++)
   {
      if (pierwsza[j] != druga[j])
         return 0;
   }

   return 1;
}

int main()
{
    char a[MAX], b[MAX];
    int flaga;

    int t;
    scanf("%d\n", &t);

    if (t<=9)
        {
            while (t!=0)
                {
                    fgets(a,MAX,stdin);
                    fgets(b,MAX,stdin);
                    flaga = check_anagram(a, b);
                    
                    if (flaga == 1) printf("TAK\n");
                    else printf("NIE\n");
                    t--;

                }
        }





return 0;

}
