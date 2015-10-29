#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main()
{
    int n;
    while (getchar()!=EOF)
    {
        ++n;
    }
    char na= (int)n;
    char *tablica = new char[n];
    int i=0;
    while( scanf("%c", &tablica[i]) == 1 )
    {
        if( tablica[i]=='\n' )
        {
            break;
        }
        ++i;
    }
    int g=0,m=0,s=0,t=0;
    for(int n=0; n<=i; n++)
    {
        g=tablica[n];
        if((g==48)||(g==49)||g==50)
        {
            if((g==50)&&(tablica[n+1]>51)){
            }else{
            g=tablica[n+1];
            if((g>=48)&&(g<=57))
            {
                m=tablica[n+3];
                if((m>=48)&&(m<=53))
                {
                    m=tablica[n+4];
                    if((m>=48)&&(m<=57))
                    {
                        s=tablica[n+6];
                        if((s>=48)&&(s<=53))
                        {
                            s=tablica[n+7];
                            if((s>=48)&&(s<=57))
                            {
                                t=tablica[n+8];
                                if((t=='.')&&((tablica[n+9]>=48)&&tablica[n+9]<=57)){
                                printf("<godzina>");
                                n+=12;
                                }else{
                                printf("<godzina>");
                                n+=8;
                                }
                            }
                        }
                    }
                }
            }
            }
        }

        printf("%c",tablica[n]);
    }

    return 0;
}
