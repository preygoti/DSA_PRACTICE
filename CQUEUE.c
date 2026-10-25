#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void enqueu(int no)
{

}

void dequeu()
{

}

void display()
{

}

int main()
{

    int choice,no;



    while(1)
    {
    
    printf("1.enqueue\n");
    printf("2.dequeue\n");
    printf("3.display\n");
    printf("4.exit\n");

    printf("select  your choice :");
    scanf("%d",&choice);


        switch(choice)
        {
            case 1:
            {
            printf("enter a number :");
            scanf("%d",&no);

            enqueu(no);
            break;
            }

             case 2:
            {
        

            dequeu();
            break;
            }

             case 3:
            {
    

            display();
            break;
            }

             case 4:
            {
    
                return 0;
            }

              default:
            {
    
                printf("please select valid choice ");
            }

        }
    }

}