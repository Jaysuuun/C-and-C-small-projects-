#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct node {

    char data[128];

    struct node *link;
};

void print_the_data(struct node *head){
    if(head == NULL)
        printf("Linked list is empty!");

    struct node *ptr = NULL;
    ptr = head;

    while(ptr != NULL){
        printf("Name: %s\n", ptr->data);
        ptr = ptr->link;
    }

}

void count_the_nodes(struct node *head){
    int count = 0;

    if(head == NULL)
        printf("Linked list is empty!");

    struct node *ptr = NULL;
    ptr = head;

    while (ptr != NULL){
        count++;
        ptr = ptr->link;
    }

    printf("Number of Nodes: %d\n", count);
}

void extend_the_node_at_the_end(struct node *head, const char *data){
    if(head == NULL) {
        printf("Linked list is empty! Cannot add node.\n");
        return;  
    }
    
    struct node *ptr = head;
    struct node *temp = (struct node*)malloc(sizeof(struct node));

    strcpy(temp->data, data);
    temp->link = NULL;

    while(ptr->link != NULL){
        ptr = ptr->link;
    }
    ptr->link = temp;
}

struct node* extend_the_front(struct node* head, const char *dat){
    
    struct node *ptr = malloc(sizeof(struct node));
    strcpy(ptr->data, dat);
    ptr->link = NULL;

    ptr->link = head;
    head = ptr;
    return head;
}

void extend_anywhere(struct node* head, const char *data, int pos){

    struct node *ptr = head;
    struct node *ptr2 = malloc(sizeof(struct node));
    strcpy(ptr2->data, data);
    ptr2->link = NULL;

    pos--;

    while(pos != 1)
    {
        ptr = ptr->link;
        pos--;
    }
    ptr2->link = ptr->link;
    ptr->link = ptr2;
}


int main(){
    struct node *head = malloc(sizeof(struct node));
    strcpy(head->data, "Bob");  
    head->link = NULL;

    struct node *current = malloc(sizeof(struct node));
    strcpy(current->data, "Jason");
    current->link = NULL;
    head->link = current;

    current = malloc(sizeof(struct node));
    strcpy(current->data, "Waga");
    current->link = NULL;
    head->link->link = current;

    extend_the_node_at_the_end(head, "Legaspi");

    char data[128] = "Damn";

    head = extend_the_front(head, data);
    current = head;

    int position = 4;

    extend_anywhere(head, data, position);

    struct node *temp = head;
    while (temp != NULL) {
        printf("Name: %s\n", temp->data);
        temp = temp->link;
    }

    count_the_nodes(head);
   
    temp = head;
    while (temp != NULL) {
        struct node *next = temp->link;
        free(temp);
        temp = next;
    }
    
    return 0;
}

