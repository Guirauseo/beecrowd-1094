#include <stdio.h>
 
int main(){
 int casos,C=0,R=0,S=0,cobaias=0,quantidade;
 char tipo;
 scanf("%d",&casos);
 while(casos>0)
{
scanf("%d %c",&quantidade,&tipo);
cobaias+=quantidade;
if(tipo=='C')
{
C+=quantidade;
}
else
if(tipo=='S')
{
S+=quantidade;
}
else
if(tipo=='R')
{
R+=quantidade;
}
casos--;
}
printf("Total: %d cobaias\n",cobaias);
printf("Total de coelhos: %d\n",C);
printf("Total de ratos: %d\n",R);
printf("Total de sapos: %d\n",S);
printf("Percentual de coelhos: %.2f %%\n",(float)C/cobaias*100);
printf("Percentual de ratos: %.2f %%\n",(float)R/cobaias*100);
printf("Percentual de sapos: %.2f %%\n",(float)S/cobaias*100);
return 0;
}
