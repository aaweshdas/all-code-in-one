#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node*next;
};
int main()
{
    struct node*head;
    int choice;
    print("enter your choise ");
    scanf("%d",&choise);
    while(choice!=4)
    switch ()
    {
    case1:
        begin();
        break;
    case2:
        last();
        break;

    case3:
        anyposition();
        break;

    case4:
        display();
        break;
    case6:
        exit;
        break;
    
    }
    

    void begin()
    {
        head=NULL;
        head=(struct node*)malloc(sizeof(struct node));
        head->data=45;
        head->next=NULL;
    
        printf("head->");
        scanf("%d", &item);
        head->data=item;
       
        printf("%d",head->data);
    }
   
}