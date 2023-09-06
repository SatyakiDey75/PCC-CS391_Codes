#include <stdio.h>
int main() {
    int l,t,del,ins,el,p;
    printf("Enter full length of array: ");
    scanf("%d",&l);
    int a[100];
    
    printf("Enter elements: ");
    for (int i=0;i<l;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter position of element you want to delete: ");
    scanf("%d",&del);
    if (del<=l){
        for (int i=del-1;i<l-1;i++){
            a[i]=a[i+1];
        }
        printf("Final array after deletion:\n");
        for(int i=0;i<l-1;i++)
            printf("%d\t",a[i]);
    }
    else
        printf("Invalid Input");
        
    printf("Enter position where you want to insert element: ");
    scanf("%d",&ins);
    printf("Enter the element: ");
    scanf("%d",&el);
    ins-=1;
    if (ins<=l-1){
        t=a[ins];
        a[ins]=el;
        for (int i=ins;i<l-1;i++){
            p=a[i];
            a[i]=t;
            t=p;
        }
        printf("Final array after insertion:\n");
        for(int i=0;i<l;i++)
            printf("%d\t",a[i]);
    }
    else
        printf("Invalid Input");
    return 0;
}
