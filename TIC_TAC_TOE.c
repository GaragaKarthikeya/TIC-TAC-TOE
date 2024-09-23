//Code for the game "TIC-TAC-TOE"
#include<stdio.h>
#include<string.h>
#include<time.h>
void printMatrix(char matrix[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%c ", matrix[i][j]);
            }
        printf("\n");  // Newline after each row
    }
}
int main() {
    printf("Welcome to the game TIC-TAC-TOE\n");
    printf("what is your name? ");
    int is[3]={0,1,2};
    int js[3]={0,1,2};
    char a[50];
    scanf("%s",a);
    printf("Well %s, How do you want to play?\nOption1:Human vs Human\nOption2:Human vs Computer\nOption3:Computer vs Computer\nEnter your desired option number ",a);
    int option;
    scanf("%d",&option);
    while(option != 1||option != 2||option !=3) {
        printf("Please enter either 1 2 or 3 only!\n");
        scanf("%d",&option);
        
    }
    if (option==1) {
        printf("0");
    }
    char grid[3][3];
    int i,j;
    
    
    printf("enter the position you want to enter the element in\n");
    printf("note that the positions should be in the range 0,2 and 0,2 and they should not be preoccupied");
    if(i<0||i>2||j<0||j>2)
    {
    printf("enter the correct values");
    }
    scanf("%d%d",&i,&j);
    printf ("enter x or o");
       scanf("%c",&grid[i][j]);
       printf("\n");
       printMatrix(grid);
       
        return 0;
    }
