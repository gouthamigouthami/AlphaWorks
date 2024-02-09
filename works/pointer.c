#include <stdio.h>
#include <stdlib.h>

/*int main(){
    int *ptr;
    printf("\n%p", ptr);
    ptr = (int*)malloc(sizeof(int));
    if(ptr==NULL){
        printf("\nNot allocated");
    } else {
        printf("\nallocated");
    }
    printf("\n%p", ptr);
    free(ptr);
    printf("\n%p", ptr);
    ptr = NULL;
    printf("\n%p", ptr);
    return 0;
}*/


int main(){
    void *ptr;

    printf("\n%p", ptr);
    int a = 10;
    char b = 'A';
    ptr = &a;
    printf("\n%p - %d", ptr, *(int*)ptr);
    ptr = &b;
    printf("\n%p - %c", ptr, *(char*)ptr);
    return 0;
}
