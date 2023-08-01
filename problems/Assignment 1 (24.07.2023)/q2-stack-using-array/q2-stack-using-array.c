#include <stdio.h>
#define M 5

int a[M];
int top=-1;

void push(){
    if (top==M-1)
        printf("Stack Overflow!\n");
    else{
        int d;
        printf("Enter the element: ");
        scanf("%d",&d);
        top+=1;
        a[top]=d;
    }
}

void display(){
    if (top==-1)
        printf("Stack Empty!\n");
    else{
        for (int i=0;i<=top;i++)
            printf("%d\t",a[i]);
        printf("\n");
    }
}

void pop(){
    if (top==-1)
        printf("Stack Underflow!\n");
    else{
        printf("%d is deleted.\n",a[top]);
        top--;
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
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                w=1;
                break;
            default:
                printf("Invalid Input\n");
        }
    }
    return 0;
}