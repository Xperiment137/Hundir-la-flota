
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void inic_tab_jugador(char tablero_jugador [12][12])
{
int i=0;
int  x=0;
int  y=0;
int  j=0;
int medida=4;
int barcos=0;
int aumento=1;
char q;
char nombres='P';
do
  {
barcos=barcos+aumento;
 while(barcos)
 {
printf("\nColoca tus barcos:(%d barcos de %d posiciones)",barcos,medida);
printf("\nIntrouce la coordenada X:");
scanf("%d",&x);
printf("\nIntrouce la coordenada Y:");
scanf("%d",&y);
printf("\n¿Quieres que este en vertical o en horizontal? (V/H):");
scanf(" %c",&q);
    switch(q)
    {
    case 'V':
    printf("¿Hacia arriba o hacia abajo? (ARRIBA-->U // ABAJO--->D):");
    scanf(" %c",&q);
     switch(q)
    {
     case 'U':
         if(y-medida+1>=0)
         {
         i=(y-medida+1);
          if(tablero_jugador[i][x]==' '||'0'&&tablero_jugador[i+1][x]==' '||'0'&&tablero_jugador[i+1][x+1]==' '||'0'&&tablero_jugador[i+1][x-1]==' '||'0'&&tablero_jugador[i-1][x-1]==' '||'0'&&tablero_jugador[i-1][x+1]==' '||'0')
          {

        for(i;i<=y;i++)
         {
          if( tablero_jugador[i][x]==' ')
               {
                    tablero_jugador[i-1][x]='0';

for(i;i<=y;i++)
         {
             tablero_jugador[i][x]=nombres;
            tablero_jugador[i+1][x]='0';
           tablero_jugador[i+1][x+1]='0';
            tablero_jugador[i+1][x-1]='0';
             tablero_jugador[i-1][x-1]='0';
              tablero_jugador[i-1][x+1]='0';
               }
               }
          }
             barcos--;
          }
           else
          {
              printf("Posicion ocupada");
          }
         }
         else
            {
             printf("\nImposible colocar el barco en esa posicion\n");
            }
            break;
            case 'D':
          if(y+medida-1<=11)
         {
         i=(y+medida-1);
         if(tablero_jugador[y][i]==' '&&tablero_jugador[y+1][i]==' '||'0'&&tablero_jugador[y+1][i+1]==' '||'0'&&tablero_jugador[y+1][i-1]==' '||'0'&&tablero_jugador[y-1][i-1]==' '||'0'&&tablero_jugador[y-1][i+1]==' '||'0')
          {

    for(y;y<=i;y++)
         {
          if( tablero_jugador[y][i]==' ')
               {
                     tablero_jugador[y-1][i]='0';
                   for(y;y<=i;y++)
         {

             tablero_jugador[y][i]=nombres;
            tablero_jugador[y+1][i]='0';
           tablero_jugador[y+1][i+1]='0';
            tablero_jugador[y+1][i-1]='0';
             tablero_jugador[y-1][i-1]='0';
              tablero_jugador[y-1][i+1]='0';
          }
               }
          }
             barcos--;
          }
           else
          {
              printf("Posicion ocupada");
          }
         }
         else
            {
             printf("\nImposible colocar el barco en esa posicion\n");
            }
            break;
            default:
            printf("\nOpcion no valida\n");
    }
         break;

    case 'H':
    printf("\n¿Hacia Izquierda o hacia Derecha? (I/D):");
    scanf(" %c",&q);
    switch(q)
    {
     case 'I':
         if((y-medida+1)>=0)
         {
        i=(y-medida+1);
        if(tablero_jugador[x][i]==' '&&tablero_jugador[x+1][i]==' '||'0'&&tablero_jugador[x+1][i+1]==' '||'0'&&tablero_jugador[x+1][i-1]==' '||'0'&&tablero_jugador[x-1][i-1]==' '||'0'&&tablero_jugador[x-1][i+1]==' '||'0')
          {

        for(i;i<=y;i++)
         {

          if( tablero_jugador[x][i]==' ')
               {
                    tablero_jugador[x-1][i]='0';
                   for(i;i<=y;i++)
         {
          tablero_jugador[x][i]=nombres;
           tablero_jugador[x][i+1]='0';
             tablero_jugador[x-1][i]='0';
           tablero_jugador[x+1][i+1]='0';
           tablero_jugador[x+1][i-1]='0';
             tablero_jugador[x-1][i-1]='0';
              tablero_jugador[x-1][i+1]='0';
          }
               }
          }
             barcos--;
          }
           else
          {
              printf("Posicion ocupada");
          }

         }
         else
            {
             printf("\nImposible colocar el barco en esa posicion\n");
            }
            break;
            case 'D':
          if((y+medida-1)<=11)
         {
             i=(y+medida-1);
         if(tablero_jugador[x][y]==' '&&tablero_jugador[x+1][y]==' '||'0'&&tablero_jugador[x+1][y+1]==' '||'0'&&tablero_jugador[x+1][y-1]==' '||'0'&&tablero_jugador[x-1][y-1]==' '||'0'&&tablero_jugador[x-1][y+1]==' '||'0')
          {

        for(y;y<=i;y++)
         {
          if( tablero_jugador[x][y]==' ')
               {
                     tablero_jugador[x-1][y]='0';
                     for(y;y<=i;y++)
         {

             tablero_jugador[x][y]=nombres;
           tablero_jugador[x][y+1]='0';
           tablero_jugador[x+1][y+1]='0';
            tablero_jugador[x+1][y-1]='0';
             tablero_jugador[x-1][y-1]='0';
              tablero_jugador[x-1][y+1]='0';
          }
               }
          }
             barcos--;
          }
           else
          {
              printf("Posicion ocupada");
          }
         }
         else
            {
             printf("\nImposible colocar el barco en esa posicion\n");
            }
             break;
            default:
                printf("\nOpcion no valida\n");
         }

}
  }
   medida--;
   nombres++;
   barcos;
   aumento++;

}
while(medida>0);
}
void inic_tab_maquina (char tablero_maquina[12][12])
{
    int a,b,j,i,x;
    if(rand()%2)
    {
        a=rand()%(12-3);
        b=rand()%12;
        for(i=0;i<6;i++)
            for(j=0;j<3;j++)
            {
                 if(a-1+i>=0 && b-1+j>=0 && a-1+i<12 && b-1+j<12)
                 tablero_maquina[a-1+i][b-1+j]='-';
            }
        for(i=0; i<4; i++)
        {
            tablero_maquina[a][b]='4';
            a++;
        }
    }
    else
    {
        a=rand()%12;
        b=rand()%(12-3);
        for(i=0;i<6;i++)
            for(j=0;j<3;j++)
            {
                 if(a-1+j>=0 && b-1+i>=0 && a-1+j<12 && b-1+i<12)
                 tablero_maquina[a-1+j][b-1+i]='-';
            }
        for(i=0; i<4; i++)
        {
            tablero_maquina[a][b]='4';
            b++;
        }
    }
for(x=0;x<2;x++)
    {
        if(rand()%2)
        {
             do
                {
                    a=rand()%(12-2);
                    b=rand()%12;
                }
                while(tablero_maquina[a][b]=='-' || tablero_maquina[a][b]=='4' || tablero_maquina[a][b]=='3' || tablero_maquina[a+2][b]=='-' || tablero_maquina[a+2][b]=='4' || tablero_maquina[a+2][b]=='3');
             for(i=0;i<5;i++)
            for(j=0;j<3;j++)
            {
                 if(a-1+i>=0 && b-1+j>=0 && a-1+i<12 && b-1+j<12)
                 tablero_maquina[a-1+i][b-1+j]='-';
            }
        for(i=0; i<3; i++)
        {
            tablero_maquina[a][b]='3';
            a++;
        }

    }
    else
    {
        do
                {
                    a=rand()%12;
                    b=rand()%(12-2);
                }
                while(tablero_maquina[a][b]=='-' || tablero_maquina[a][b]=='4' || tablero_maquina[a][b]=='3' || tablero_maquina[a][b+2]=='-' || tablero_maquina[a][b+2]=='4' || tablero_maquina[a][b+2]=='3');
                for(i=0;i<5;i++)
            for(j=0;j<3;j++)
            {
                 if(a-1+j>=0 && b-1+i>=0 && a-1+j<12 && b-1+i<12)
                 tablero_maquina[a-1+j][b-1+i]='-';
            }
        for(i=0; i<3; i++)
        {
            tablero_maquina[a][b]='3';
            b++;
        }
    }


    }
    for(x=0;x<3;x++)
    {
        if(rand()%2)
        {
             do
                {
                    a=rand()%(12-1);
                    b=rand()%12;
                }
                while(tablero_maquina[a][b]=='-' || tablero_maquina[a][b]=='4' || tablero_maquina[a][b]=='3' || tablero_maquina[a][b]=='2' || tablero_maquina[a+1][b]=='-' || tablero_maquina[a+1][b]=='4' || tablero_maquina[a+1][b]=='3' || tablero_maquina[a+1][b]=='2');
             for(i=0;i<4;i++)
        {
            tablero_maquina[a][b]='2';
            a++;
        }

    }
    else
    {
        do
                {
                    a=rand()%12;
                    b=rand()%(12-1);
                }
                while(tablero_maquina[a][b]=='-' || tablero_maquina[a][b]=='4' || tablero_maquina[a][b]=='3' || tablero_maquina[a][b]=='2'|| tablero_maquina[a][b+1]=='-' || tablero_maquina[a][b+1]=='4' || tablero_maquina[a][b+1]=='3' || tablero_maquina[a][b+1]=='2');
                for(i=0;i<4;i++)
            for(j=0;j<3;j++)
            {
                 if(a-1+j>=0 && b-1+i>=0 && a-1+j<12 && b-1+i<12)
                 tablero_maquina[a-1+j][b-1+i]='-';
            }
        for(i=0; i<2; i++)
        {
            tablero_maquina[a][b]='2';
            b++;
        }
    }


    }
    for(x=0;x<4;x++)
    {
        if(rand()%2)
        {
             do
                {
                    a=rand()%(12);
                    b=rand()%12;
                }
                while(tablero_maquina[a][b]=='-' || tablero_maquina[a][b]=='4' || tablero_maquina[a][b]=='3' || tablero_maquina[a][b]=='2' || tablero_maquina[a][b]=='1');
             for(i=0;i<3;i++)
            for(j=0;j<3;j++)
            {
                 if(a-1+i>=0 && b-1+j>=0 && a-1+i<12 && b-1+j<12)
                 tablero_maquina[a-1+i][b-1+j]='-';
            }

            tablero_maquina[a][b]='1';

        }


    else
    {
        do
                {
                    a=rand()%12;
                    b=rand()%(12);
                }
                while(tablero_maquina[a][b]=='-' || tablero_maquina[a][b]=='4' || tablero_maquina[a][b]=='3' || tablero_maquina[a][b]=='2'|| tablero_maquina[a][b]=='1');
                for(i=0;i<3;i++)
            for(j=0;j<3;j++)
            {
                 if(a-1+j>=0 && b-1+i>=0 && a-1+j<12&& b-1+i<12)
                 tablero_maquina[a-1+j][b-1+i]='-';
            }

            tablero_maquina[a][b]='1';
    }
    }
}

int disparo(char tablero_maquina [12][12],char tablero_jugador [12][12],  int barcos_jugador[4],int barcos_maquina[4], int turno)
{
    int i,j,impactos,impactos2;

if(turno)
    {
    printf("Coordenada X:");
   scanf("%d",&i);
     printf("Coordenada Y:");
    scanf("%d",&j);

            if(tablero_maquina [i][j]!='_'&&tablero_maquina [i][j]!='0'&&tablero_jugador[i][j]!='A')
            {
                printf("\nTOCADO  X:%d   Y:%d\n",i,j);
                tablero_maquina [i][j]='x';
                mostrar_tab_maquina(tablero_maquina);
                  impactos++;

            }
             else
            {
            tablero_maquina [i][j]='A';
            printf("\nAgua\n");
            }

        }
    else
    {
 i=rand()%12;
 j=rand()%12;
            if(tablero_jugador [i][j]!=' '&&tablero_jugador[i][j]!='0'&&tablero_jugador[i][j]!='A')
            {
                printf("\nNOS HAN DADO X:%d   Y:%d\n",i,j);
                tablero_jugador[i][j]='x';
                mostrar_tab_jugador(tablero_jugador);
                impactos2++;
            }
             else
            {
                printf("\nEL enemigo ha fallado vilmente....\n");
                 tablero_jugador [i][j]='A';
            }
                if(impactos2==4||impactos2==10||impactos2==16||impactos2==20)
                {
                    if(tablero_jugador[i][j]=='x'&&tablero_jugador[i+1][j]=='x'&&tablero_jugador[i+2][j]=='x'&&tablero_jugador[i+3][j]=='x')
                       {
                        tablero_jugador[i][j]=='X';
                        tablero_jugador[i+1][j]=='X';
                        tablero_jugador[i+2][j]=='X';
                        tablero_jugador[i+3][j]=='X';
                       }
                     if(tablero_jugador[i][j]=='x'&&tablero_jugador[i][j+1]=='x'&&tablero_jugador[i][j+2]=='x'&&tablero_jugador[i][j+3]=='x')
                       {
                        tablero_jugador[i][j]=='X';
                        tablero_jugador[i][j+1]=='X';
                        tablero_jugador[i][j+2]=='X';
                        tablero_jugador[i][j+3]=='X';
                }
                  tablero_jugador[i][j]='x';
            }


    }

if(barcos_jugador[i]!=0&&barcos_maquina[i]!=0)
{
    return(0);
}
if(barcos_maquina[i]==0)
{
  return(1);
}
if(barcos_jugador[i]==0)
{
   return(2);
}
}



void mostrar_tab_maquina(char tablero_maquina [12][12])
{
    int i,j;
     printf("\n");
  printf("\t\tHUNDIR LA FLOTA");
    for(j=0;j<3;j++){
            printf("\n");
}
        for(j=0;j<12;j++)
         {
            printf("   %d",j);
         }
         printf("\n");
         for(j=0;j<13;j++)
         {
            printf("----");
}
        printf("\n");
       for(i=0;i<12;i++)
      {
            printf("%d ",i);

       for(j=0;j<12;j++)
        {
              printf(" ");
              printf("%c",tablero_maquina [i][j]);
              if(tablero_maquina [i][j]=='x')
              {
                  printf("%c",tablero_maquina [i][j]);
              }
              printf(" |");
}
                printf(" ");
                printf("\n");
                printf("-");
        for(j=0;j<13;j++)
         {
                printf("----");
}
                printf("\n");
}
                printf("    ");

                printf("\n");
}
void mostrar_tab_jugador (char tablero_jugador [12][12])
{
    int i,j;
    for(j=0;j<3;j++){
            printf("\n");
}
        for(j=0;j<12;j++)
         {
            printf("   %d",j);
         }
         printf("\n");
         for(j=0;j<13;j++)
         {
            printf("----");
}
        printf("\n");
       for(i=0;i<12;i++)
      {
            printf("%d ",i);

       for(j=0;j<12;j++)
        {
              printf(" ");
              printf("%c",tablero_jugador [i][j]);
              printf(" |");
}
                printf(" ");
                printf("\n");
                printf("-");
        for(j=0;j<13;j++)
         {
                printf("----");
}
                printf("\n");
}
                printf("    ");

                printf("\n");
}

int main()
{
    char tablero_maquina [12][12];
    char tablero_jugador [12][12];
    int barcos_jugador[4]={1,2,3,4};
      int barcos_maquina[4]={1,2,3,4};
    int i,j;
    int turno=rand()%2;
    srand(time(NULL));
    for(i=0;i<12;i++)
    {
        for(j=0;j<12;j++)
        {
        tablero_jugador [i][j]= ' ';
        }
    }
    for(i=0;i<12;i++)
    {
        for(j=0;j<12;j++)
        {
        tablero_maquina [i][j]= '_';
        }
    }
  inic_tab_jugador(tablero_jugador);
inic_tab_maquina(tablero_maquina);
do
{

if(turno)
    {
    mostrar_tab_jugador(tablero_jugador);
    printf("\nIntroduce las coordenadas de disparo:\n");
  disparo(tablero_maquina,tablero_jugador, barcos_jugador,barcos_maquina,turno);
  turno=0;
    }
    else
    {
      disparo(tablero_maquina,tablero_jugador,barcos_jugador,barcos_maquina,turno);
       turno=1;
    }
}while(barcos_jugador[i]!=0||barcos_jugador[i]!=0);
if(disparo(tablero_maquina,tablero_jugador, barcos_jugador,barcos_maquina,turno)==1)
{
    printf("HAS GANADO!");
mostrar_tab_maquina(tablero_maquina);
 mostrar_tab_jugador(tablero_jugador);
}
if(disparo(tablero_maquina,tablero_jugador, barcos_jugador,barcos_maquina,turno)==2)
{
   printf("HAS PERDIDO!");
mostrar_tab_maquina(tablero_maquina);
 mostrar_tab_jugador(tablero_jugador);
}
else
{
     printf("La batalla continua....");
}
 system("PAUSE");
 return 0;


}
