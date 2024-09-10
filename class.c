#include <stdio.h>
#include <stdlib.h>

struct node {
    int num;
    struct node* next;
};


struct node* newnode(struct node* head, int data) {
    head = malloc(sizeof(struct node));  
    head->num = data;  
    head->next = NULL;
    return head; 
}


void printList(struct node* head) {
    struct node* newhead = head;
    while (head != NULL) {  
        printf("%d ", head->num);  
        head = head->next;  
    }
}

int main(void) {
    struct node* ahmed = newnode(NULL, 3);  
    ahmed->next = newnode(NULL, 4);  
    printList(ahmed);  
    return 0;
}
