/*Written by baron06 || FoX_*//*Iki nick de benim...*/


#include <stdio.h>
#include <conio.h>

int main()
{
int i;
int ogr[5] = {0};
int top[6] = {0};
int secenek;

    for(i = 0; i < 5; i++)
    {
          
                printf("%d. ogrenci hangi topu sececeksin? ",i + 1);
                scanf("%d",&secenek);
                
                while(secenek <= 0 || secenek > 5){
                printf("1-5 arasinda bir sayi gir ");
                scanf("%d",&secenek);
                }
                
                if(top[secenek] != 0)
                {
                                do{
                                     printf("Yeniden gir ");
                                     scanf("%d",&secenek);
                                     
                                     while(secenek <= 0 || secenek > 5){
                                     printf("1-5 arasinda bir sayi gir ");
                                     scanf("%d",&secenek);
                                     }
                                     
                                     }while(top[secenek] != 0);
                                    
                }
                top[secenek] = 1;
                ogr[i] = secenek;
                
          
          
    }
    
    
    
for(i = 1;i <= 5; i++)
{
  printf("%d. ogrencinin sectigi top %d numarali toptur.\n",i,ogr[i - 1]);
}

getch();

return 0;

}
