#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>

long long int silnia (long long int a)
{
    int i=1;
    if (a<2)
    {
        return i;
    }else
    {
        return a*silnia(a-1);
    }
}
long long int pierwsza(long long int p)
{
	long long int i;
    for (i=2;i<p;i++)
    {
        if (p%i==0) return 0;
    }
    return 1;
}
int main()
{
long int k,n;
long int newton,newton2,newton3,newton4;
printf("Dane 1: ");
scanf("%ld", &n);
printf("Dane 2: ");
scanf("%ld", &k);
if (k==0) return 1;
if (k<=n)
{
    newton=silnia(n);
    newton2=silnia(k);
    newton3=silnia(n-k);
    newton4=newton/(newton2*newton3);

}else
{
    printf("\nZle liczby\n");
}
printf("\n");
printf("Symbol: ");
printf("%ld",newton4);
printf("\n");
printf("\n");

int i,ile=0;

printf("Wynik: \n");
for (i=n; i>=2; i--)
{
    if (pierwsza(i)==1)
    {
        if (newton4%i==0)
        {
            ++ile;
            printf ("%d",i);
            printf("\t");
            printf("%d", ile);
            printf("\n");
        }ile=0;
    }
}

return 0;
}
