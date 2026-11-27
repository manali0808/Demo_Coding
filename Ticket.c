#include<stdio.h>
int main()
{
    int choice,ticket,total_ticket=0;
    int price=150;
    do
    {
     printf("\n\t\t\tMovie Ticket Booking\t\t\t\n");
     printf("1.Booked Ticket\n");
     printf("2.View Total Booked\n");
     printf("3.Exit\n");
     printf("Enter your choice:");
     scanf("%d",&choice);
     switch(choice)
     {
        case 1:
        printf("Enter no. of Ticket:");
        scanf("%d",&ticket);
        if(ticket>0)
        {
            total_ticket=(price*ticket);
            printf("Booking Successful\n");
            printf("Amount=Rs.%d\n",total_ticket);
        }
        else
        {
        printf("Invalid ticket count\n");
        }
        break;
        case 2:
        printf("Total ticket boked=%d\n",ticket);
        break;
        case 3:
        printf("Exiting System\n");
        break;
        default:
        printf("Invalid Choice\n");
        }
    }
     while (choice!=3);
    return 0;
}