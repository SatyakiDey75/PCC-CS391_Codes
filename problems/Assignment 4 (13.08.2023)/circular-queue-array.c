#include <stdio.h>
#define M 5

int a[M];
int front=-1,rear=-1;

void enqueue(){
    if ((front == 0 && rear==M-1)||(rear==front-1))
        printf("Queue is full!\n");
    else{
        int d;
        printf("Enter element: ");
        scanf("%d",&d);
        if (front==-1){
            front=0;
            rear=0;
        }

        else if(rear==M-1 && front !=0)
            rear=0;
        else
            rear++;
        a[rear]=d;
    }
}

void display(){
    if (front==-1 && rear==-1)
        printf("Queue is Empty!\n");
    else{
        if(rear>=front){
            for (int i=front;i<=rear;i++)
                printf("%d\t",a[i]);
        }
        else{
            for (int i=front;i<=M-1;i++)
                printf("%d\t",a[i]);
            for (int i=0;i<=rear;i++)
                printf("%d\t",a[i]);
        }
         printf("\n");
    }
}

void dqueue(){
    if (front==-1 && rear==-1)
        printf("Underflow\n");
    else{
        printf("%d is deleted.\n",a[front]);

        if (front==M-1 && rear != front)
            front=0;
        else if(front == rear)
            front =-1,rear=-1;
        else
            front ++;
    }
}

int main() {
    int ch,w=0;
    printf("Enter 1 to Push.\n");
    printf("Enter 2 to Pop.\n");
    printf("Enter 3 to Display.\n");
    printf("Enter 4 to Exit.\n");
    while (w==0){
        printf("Enter choice: ");
        scanf("%d",&ch);
        switch (ch) {
            case 1:
                enqueue();
                break;
            case 2:
                dqueue();
                break;
            case 3:
                display();
                break;
            case 4:
                w=1;
                break;
            default:
                printf("Invalid Input");
        }
    }
    return 0;
}
