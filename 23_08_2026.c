#include<stdio.h>
#include<conio.h>
#define SIZE 5

int array[SIZE];

int no,choice,pointer=-1;

void PUSH(int no)
{

}
void POP()
{

}
void DISPLAY()
{

}
int main()
{

    while(1)
    {
    printf("\n1.PUSH \n2.POP \n3.DISPLAY \n4.EXIT");

    printf("\nEnter the choice :");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
        printf("Enter the element that you want to add in Stack :");
        scanf("%d",&no);
        PUSH(no);  
    break;

    case 2:
            POP();
    break;
    case 3:
            DISPLAY();
    break;

    case 4:
            return 0            ;
    }

    }
}