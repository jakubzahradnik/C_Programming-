#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include <stdio.h>

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
    int bufor1,bufor2;
    int t;
    scanf("%d\n", &t);

    if (t<=9)
        {
            while (t!=0)
                {
                    fgets(a,MAX,stdin);
                    fgets(b,MAX,stdin);
                    flaga = check_anagram(a, b);
                    bufor1=flaga;
                    bufor2=bufor1;
                    bufor1=flaga;
                    t--;
                }
        }
        if (bufor1 == 1) printf("TAK\n");
                    else printf("NIE\n");
        if (bufor2 == 1) printf("TAK\n");
                    else printf("NIE\n");

return 0;

}
