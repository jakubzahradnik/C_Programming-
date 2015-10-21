#include <stdio.h>

int potega(int liczba, int wykladnik)
{
    int wynik = 1;
    int i=0;

    for (i = 0; i<wykladnik; i++)
        wynik*=liczba;

    return wynik;
}


int main(void)
{
    int liczba2;
    scanf("%d",&liczba2);


    int liczba3, konclicz, dlugosc, suma, reszta;
    dlugosc=0;
    konclicz=liczba2;
    liczba3=liczba2;

    while(liczba2%10!=0){
        liczba2=liczba2/10;
        dlugosc=dlugosc+1;
    }

    suma=0;

    while(liczba3%10!=0){
        reszta=liczba3%10;
        liczba3=liczba3/10;
        suma=suma+(potega(reszta,dlugosc));
    }

    if(suma==konclicz){
        printf("TAK");
    }
    else
    {
        printf("NIE");
    }

    return 0;
}
