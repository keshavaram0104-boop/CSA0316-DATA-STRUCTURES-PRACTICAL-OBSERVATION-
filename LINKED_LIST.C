#include <stdio.h>
int main()
{
    int a[100], i, n, target, found = 0;

    printf("\nEnter the number of elements: ");
    scanf("%d", &n);
    printf("\nEnter the array of elements: ");
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    printf("\nEnter the target value to search: ");
    scanf("%d", &target);

    for(i=0; i<n; i++){
        if(a[i] == target){
            printf("\n The element found at the index: %d", i);
            found = 1;
            break;
        }
    }
        if(found==0){
            printf("\n sorry your element not found in the list");
        }
        return 0;
