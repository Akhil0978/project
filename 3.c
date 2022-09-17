#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
void gameRule(); //function for game loop
int readkey();  //to read entered key
int main()
{
    int z=100,a[4][4];
    char str[20];
    printf("Enter Player Name : ");
    gets(str);
    system("cls");

         gameRule(a);
         system("cls"); //to clear screen
         printf("Player name : %s                                  Move remaining : %d",str,z);
         crtmatrix(a);
         int key = readkey(); // this will return ascii code of user entered key

            switch (key) // maping
            {
            case 101: // ascii of E

            case 69: // ascii of e
                printf("\a\a\a\a\a\a\n     Thanks for Playing ! \n\a");
                printf("\nHit 'Enter' to exit the game \n");
                key = readkey();
                return 0;
            }
}
void gameRule()
{

    int i, j, k = 1;
    int a[4][4];
    printf("\t\t  MATRIX PUZZLE\n");
    printf("\n");
    printf("                 RULE OF THIS GAME                 \n");
    printf("\n1.You can move only 1 step at a time by arrow key " );
    printf("\n\tMove Up   : by Up arrow key ");
    printf("\n\tMove Down : by Down arrow key");
    printf("\n\tMove Left : by Left arrow key");
    printf("\n\tMove Right: by Right arrow key");

    printf("\n2.You can move number at empty position only " );
    printf("\n");
    printf("\n3. For each valid move : your total number of move will decreased by 1 \n" );
    printf("4. Wining situation : ");
    printf( " Number in a 4*4 matrix should be in order from 1 to 15 " );
    printf("\n\n            winning situation:         \n");

    printf("----------------\n");
    int b[15],n=0;
    for(i=0;i<15;i++)
        b[i]=i+1;

    for (i = 0; i < 4; i++) //Winning situation matrix
    {
        printf("| ");
        for (j = 0; j < 4; j++)
        {
            a[i][j]=b[n++];
            if (i==3 && j==3)
                printf(" ");
            else
                printf(" %2d",a[i][j]);
        }
        printf("\n");
    }

    printf("----------------\n");
    printf("\n5.You can exit the game at any time by pressing 'E' or 'e' ");

    printf("\nSo Try to win in minimum no of move \n");

    printf("\nEnter any key to start.....   ");
    int x=readkey();
}
int readkey()
{
    char c;
    c = _getch();
    if (c == -32)
        c = _getch();

    return c;
}
void crtmatrix(int a[][4])
{
      int i,j;
      printf("\n\n\n\n");
      srand(time(NULL));
      printf("----------------\n");
      for(i=0;i<4;i++)
      {
          for(j=0;j<4;j++)
          {
              a[i][j]=rand()%15 + 1; // +1 because 0 na aaaye
              if(i==3 && j==3)
                printf(" ");
              else
                printf(" %2d",a[i][j]);
          }
          printf("\n");
      }
      printf("----------------\n");
}
