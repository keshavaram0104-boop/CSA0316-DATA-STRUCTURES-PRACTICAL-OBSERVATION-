//Binary search by using iteration method


#include<stdio.h>
int main(){
    int i, n, target, a[100];
    int low, high, mid, found = 0;
    
    printf("\nEnter the number of elements: ");
    scanf("%d", &n);

    printf("\nEnter the array of elements: ");
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    printf("\nEnter the target element: ");
    scanf("%d", &target);

    low = 0;
    high = n-1;
    while(low<=high){
        mid = (low + high)/2;
        if(a[mid] == target){
            printf("\nThe element found at the index: %d", mid);
            found = 1;
            break;
        }
        else if(target > a[mid]){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    

        }
        if(found == 0){
            printf("The target not found anywhere\n");

        }
        return 0;
    }


    

// Binary search by using recursion method

/*#include<stdio.h>
int binarysearch(int a[], int low, int high, int target){
    int mid;
    if(low<=high){
        mid = (low + high)/2;
        if(a[mid] == target){
            return mid;
        }
        else if(target > a[mid]){
            return binarysearch(a, mid + 1, high, target);
        }
        else{
            return binarysearch(a, low, mid - 1, target);
        }
    }
    return -1;
}

int main(){
    int i, n, target, a[100], result;
    printf("\nEnter the number of elements: ");
    scanf("%d", &n);

    printf("\nEnter the array of elements: ");
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    printf("\nEnter the target element: ");
    scanf("%d", &target);

    result = binarysearch(a, 0, n-1, target);
    if(result == -1){
        printf("Element not found");
    }
    else{
        printf("The element found at the index: %d", result);
    }
return 0;
}*/
