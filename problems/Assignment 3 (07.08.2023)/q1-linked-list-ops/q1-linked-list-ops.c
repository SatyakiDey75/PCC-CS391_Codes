#include <stdio.h>
#include <malloc.h>
struct node {
   int data;
   struct node *next;
};
struct node *start = NULL;
void create_list(int m) {
   struct node *temp, *q;
   temp = malloc(sizeof(struct node));
   temp -> data = m;
   temp -> next = NULL;
   if (start == NULL)
      start = temp;
   else {
      q=start;
      while (q -> next != NULL)
         q = q -> next;
      q -> next = temp;
   }
}
void count(){
   struct node *q;
   q = start;
   int c=0;
   while (q != NULL) {
      c++;
      q=q->next;
   }
   printf("No. of elements in linked list is: %d.\n",c);
}
void delpos() {
   int pos;
   printf("Enter position: ");
   scanf("%d",&pos);
   struct node *q, *temp;
   q=start;
   for (int c=0; c<pos-2; c++)
      q=q-> next;
   temp=q->next;
   q->next=temp->next;
   free(temp);
}
void delval() {
   int pos;
   printf("Enter element to be deleted: ");
   scanf("%d",&pos);
   struct node *q, *temp;
   if (start->data==pos){
      temp=start;
      start=temp->next;
      free(temp);
      return;
   }
   q=start;
   while (q->next->next!=NULL){
      if (q->next->data==pos){
         temp=q->next;
         q->next=temp->next;
         free(temp);
         return;
      }
      q=q-> next;
   }
   if (q->next->data==pos){
      temp=q->next;
      q->next=NULL;
      free(temp);
   }
   else
      printf("Element not found in linked list.\n");
   
}
void rev(){
   struct node *p1, *p2, *p3;
   p1=start;
   p2=p1->next;
   p3=p2->next;
   p1->next=NULL;
   p2->next=p1;
   while (p3 != NULL){
      p1=p2;
      p2=p3;
      p3=p2->next;
      p2->next=p1;
   }
   start=p2;
}
void display() {
   struct node *q;
   q = start;
   while (q != NULL) {
      printf("%d\t", q->data);
      q=q->next;
   }
   printf("\n");
}
int main() {
   // printf() displays the string inside quotation
   printf("Enter 1 to create node. \nEnter 2 to to display. \nEnter 3 to count elements. \nEnter 4 to delete by position. \n");
   printf("Enter 5 to delete by value. \nEnter 6 to reverse linked list. \nEnter 7 to exit.\n");
   int w=0,ch,m,pos,p;
   while (w==0) {
      printf("Enter choice: ");
      scanf("%d",&ch);
      switch (ch) {
         case 1:
            printf("Enter initial population: ");
            scanf("%d",&p);
            printf("Enter elements: ");
            for (int i=0;i<p;i++){
               scanf("%d",&m);
               create_list(m);
            }
            break;
         case 3:
            count();
            break;
         case 2:
            display();
            break;
         case 4:
            delpos();
            break;
         case 5:
            delval();
            break;
         case 6:
            rev();
            break;
         case 7:
            w=1;
            break;
         default:
            printf("Invalid Input\n");
      }
   }
   return 0;
}