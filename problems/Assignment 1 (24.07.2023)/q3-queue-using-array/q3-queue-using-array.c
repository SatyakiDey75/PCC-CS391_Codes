#include <stdio.h>
#define M 5

int a[M];
int front=-1,rear=-1;

void enqueue(){
    if (rear==M-1)
        printf("Queue is full!\n");
    else{
        int d;
        if (front==-1)
            front=0;
        printf("Enter the element: ");
        scanf("%d",&d);
        rear+=1;
        a[rear]=d;
    }
}

void display(){
    if (front==-1 || front>rear)
        printf("Queue is Empty!\n");
    else{
        for (int i=front;i<=rear;i++)
            printf("%d\t",a[i]);
        printf("\n");
    }
}

void dqueue(){
    if (front==-1 || front>rear)
        printf("Queue is Empty!\n");
    else{
        printf("%d is deleted.\n",a[front]);
        front++;
    }
}

int main() {
    int t,del,ch,ins,el,w=0;
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