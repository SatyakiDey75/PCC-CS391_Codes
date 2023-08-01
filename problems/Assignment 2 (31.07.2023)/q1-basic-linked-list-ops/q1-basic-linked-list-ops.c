#include <stdio.h>
#include <malloc.h>

struct node {
    int data;
    struct node *next;
};
struct node *start = NULL;

void create_list (int m) {
    struct node *a, *temp, *q;
    temp = malloc(sizeof(struct node));
    temp -> data = m;
    temp -> next = NULL;
    if (start == NULL)
        start = temp;
    else {
        q = start;
        while ( q -> next != NULL)
            q = q -> next;
        q -> next = temp;
    }
}

void disp() {
    struct node *q;
    
    if (start == NULL)
        printf("No linked list created.\n");
    else {
        q=start;
        while (q!=NULL){
            printf("%d\t",q->data);
            q=q->next;
        }
        printf("\n");
    }
}

void add_begin() {
    if (start == NULL)
        printf("No linked list created.\n");
    else {
        int m;
        printf("Enter Element: ");
        scanf("%d",&m);
        struct node *q, *temp;
        temp = malloc(sizeof(struct node));
        temp -> data =m;
        temp -> next = start;
        start = temp;
    }
}



void main() {
    printf("Enter 1 to create node:\n");
    printf("Enter 2 to insert at 1st position:\n");
    printf("Enter 3 to display:\n");
    printf("Enter 4 to exit:\n");
    int ch,w=0,m,p;
    while (w==0){
        printf("Enter choice: ");
        scanf("%d",&ch);
        switch (ch) {
            case 1:
                printf("Enter initial population: ");
                scanf("%d",&p);
                printf("Enter Elements: ");
                for (int i=0;i<p;i++){
                    scanf("%d",&m);
                    create_list(m);
                }
                break;
            case 2:
                add_begin();
                break;
            case 3:
                disp();
                break;
            case 4:
                w=1;
                break;
            default:
                printf("Invalid Input");
        }
    }
}