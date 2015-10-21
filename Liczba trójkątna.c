#include <stdio.h>
#include <math.h>
#include<limits.h>
int ile_dzielnikow(int liczbatrojkatna)
{

    int licznik=2;
    float pierw=sqrt(liczbatrojkatna);
    int dzielnik=1;

    if(liczbatrojkatna>1)
    {
    while(licznik<pierw)
    {
        if(liczbatrojkatna%licznik==0)
        {
            dzielnik=dzielnik+1;
        }
        licznik++;
    }
        dzielnik=dzielnik*2;
        if((liczbatrojkatna/licznik)==licznik){
            dzielnik=dzielnik+1;
        }

    }

    return dzielnik;
}


int main(void)
{
    int p;
    scanf("%d",&p);
    int tn,dzielnik=0,o=0;
    if(p==0)
    {
        printf("BRAK");
    }
    else
    {
        for(int n=1; n<=78000; n++) /* tutaj dalem 78000 bo 78000*78000+78000 to prawie int max :D nie wiedzialem do kladnie jak to zrobic */
        {
            o=o+1;
            tn=(n*n+n)/2;
            dzielnik=ile_dzielnikow(tn);
            if(dzielnik>=p)
            {
                printf("%d %d %d",o,tn,dzielnik);
                break;
            }
        }
        if(dzielnik<p)
        {
            printf("BRAK");
        }
    }
    return 0;
}
