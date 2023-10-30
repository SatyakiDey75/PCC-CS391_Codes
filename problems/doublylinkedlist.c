#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head=0 , *tail=0;

void insertAtEnd(int x) {
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->prev = 0;
    newnode->next = 0;

    if (head == 0) {
        head = newnode;
        tail = newnode;
    }
    else {
        newnode->prev = tail;
        tail->next = newnode;
        tail = newnode;
    }
}

void insertAtBeg(int x){
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->prev=0;
    newnode->next=0;
    newnode->data=x;

    if (head==0){
        head=newnode;
        tail=newnode;
    }
    else{
        newnode->next=head;
        head->prev=newnode;
        head=newnode;
    }
}

void insertAtPos(int x, int pos){
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->prev=0;
    newnode->next=0;
    newnode->data=x;
    struct node *temp=head;
    int c=1;
    if(pos==1){
        insertAtBeg(x);
        return;
    }

    while(c!=pos-1){
        temp=temp->next;
        c=c+1;
    }
    newnode->prev=temp;
    newnode->next=temp->next;
    temp->next->prev=newnode;
    temp->next=newnode;
}

void deleteFromEnd(){
    struct node *temp=tail;
    tail->prev->next=0;
    tail=tail->prev;
    free(temp);
}

void deleteFromPos(int pos){
    struct node *temp=head;
    if(pos==1){
        deleteFromBeg();
        return;
    }
    int c=1;
    while(c!=pos){
        temp=temp->next;
        c++;
    }
    temp->next->prev=temp->prev;
    temp->prev->next=temp->next;
    free(temp);
}

void deleteFromBeg(){
    struct node *temp=head;
    head=temp->next;
    temp->next->prev=0;
    free(temp);
}

void reverse(){
    struct node *current=head,*nextnode;
    while(current!=0){
        nextnode=current->next;
        current->next=current->prev;
        current->prev=nextnode;
        current=nextnode;
    }
    //Swapping the head and tail
    current=head;
    head=tail;
    tail=current;
}

void display(){
    struct node *temp=head;
    while(temp!=0){
        printf("%d ", temp->data);
        temp=temp->next;
    }
    printf("\n");
}

void search(int x){
    struct node *temp=head;
    while (temp!= 0) {
        if (temp->data == x) {
            printf("Item Found\n");
            return;
        }
        temp=temp->next;
    }
    printf("Item Not found\n");

}

void main(){
    int ch, a;
    while (1) {
        printf("Press 1 to insert elements at beginning\n");
        printf("Press 2 to insert elements at end\n");
        printf("Press 3 to insert elements at any position\n");
        printf("Press 4 to display elements\n");
        printf("Press 5 to delete from beginning\n");
        printf("Press 6 to delete from ending\n");
        printf("Press 9 to delete from any position \n");
        printf("Press 7 to search an element\n");
        printf("Press 8 to reverse the list\n");
        printf("Press 0 to exit\n");
        printf("Enter choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                printf("Enter element to be inserted: ");
                scanf("%d", &a);
                insertAtBeg(a);
                break;

            case 2:
                printf("Enter element to be inserted: ");
                scanf("%d", &a);
                insertAtEnd(a);
                break;

            case 3:
                int pos;
                printf("Enter element to be inserted: ");
                scanf("%d", &a);
                printf("Enter postion: ");
                scanf("%d", &pos);
                insertAtPos(a,pos);
                printf("After insertion--");
                display();

            case 4:
                printf("The elements are: ");
                display();
                break;

            case 5:
                printf("After deletion: ");
                deleteFromBeg();
                display();
                break;

            case 6:
                printf("After deletion: ");
                deleteFromEnd();
                display();
                break;

            case 7:
                printf("Enter element: ");
                scanf("%d", &a);
                search(a);
                break;

            case 8:
                printf("Elements after reversing-");
                reverse();
                display();
                break;

            case 9:
                printf("Enter position-");
                scanf("%d", &a);
                deleteFromPos(a);
                display();
                break;

            case 0:
                printf("Thank You!\n");
                exit(0);
                break;

            default:
                printf("Wrong choice\n");
                break;
        }
        printf("\n");
    }
}
