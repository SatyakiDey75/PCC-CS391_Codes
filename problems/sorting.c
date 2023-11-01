// bubble sort

#include <stdio.h>
void bubblesort(int a[],int n) {
    int temp,i,j;
    for (i=0;i<n-1;i++) {
        int f=0;
        for (j=0;j<n-1-i;j++) {
            if (a[j]>a[j+1]) {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                f=1;
            }
        }
        if (f==0)
            break;
    }
}

int main() {
    int n;
    printf("Enter array length: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements: ");
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    bubblesort(arr,n);
    for (int i=0;i<n;i++)
        printf("%d\t",arr[i]);
    return 0;
}



// selection sort

#include <stdio.h>
void selectionsort(int a[],int n) {
    int min,i,j,temp;
    for (i=0;i<n-1;i++) {
        min=i;
        for (j=i+1;j<n;j++) {
            if (a[j]<a[min])
                min=j;
        }
        int temp=a[i];
        a[i]=a[min];
        a[min]=temp;
    }
}

int main() {
    int n;
    printf("Enter array length: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements: ");
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    selectionsort(arr,n);
    for (int i=0;i<n;i++)
        printf("%d\t",arr[i]);
    return 0;
}



// insertion sort

#include <stdio.h>
void insertionsort(int a[],int n) {
    int min,i,j,temp;
    for (i=1;i<n;i++) {
        temp=a[i];
        j=i-1;
        while (temp<=a[j]) {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
}

int main() {
    int n;
    printf("Enter array length: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements: ");
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    insertionsort(arr,n);
    for (int i=0;i<n;i++)
        printf("%d\t",arr[i]);
    return 0;
}




// merge sort

void merge(int a[], int l, int m, int u) {
    int n1=m-l+1,n2=u-m,h1[n1],h2[n2];
    for (int i=0;i<n1;i++)
        h1[i]=a[i+l];
    for (int i=0;i<n2;i++)  
        h2[i]=a[m+i+1];
    int i=0,j=0,k=l;
    while (i<n1 && j<n2) {
        if (h1[i]<=h2[j]){
            a[k]=h1[i];
            i++;
        }
        else {
            a[k]=h2[j];
            j++;
        }
        k++;
    }
    while (i<n1){
        a[k]=h1[i];
        i++;
        k++;
    }
    while (j<n2){
        a[k]=h2[j];
        j++;
        k++;
    }
}

#include <stdio.h>
void mergesort(int a[],int l,int u) {
    if (l<u) {
        int m=l+(u-l)/2;
        mergesort(a,l,m);
        mergesort(a,m+1,u);

        merge(a,l,m,u);
    }
    
}

int main() {
    int n;
    printf("Enter array length: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements: ");
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    mergesort(arr,0,n-1);
    for (int i=0;i<n;i++)
        printf("%d\t",arr[i]);
    return 0;
}
