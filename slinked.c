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

struct node* delete_head(struct node *head){

    if(head == NULL){
        printf("List is alreadty empty!");
    }
    else{
        struct node *temp = head;
        head = head->link;
        free(temp);
        
        temp = NULL;
    }

    return head;
}

struct node* delete_tail1(struct node *head){

    if(head == NULL){
        printf("List is already empty!");
    }
    else if(head->link == NULL)
    {
        free(head);
        head = NULL;
    }
    else{
        struct node *temp = head;
        struct node *temp2 = head;
        while(temp->link != NULL){
            temp2 = temp;
            temp = temp->link;

        }
        temp2->link = NULL;
        free(temp);
        temp = NULL;
    }
    return head;
}

void delete_tail2(struct node *head)
{
    if(head == NULL){
        printf("List is already empty!");
    }
    else if (head->link == NULL){

        free(head);
        head = NULL;
    }else{
        struct node *temp = head;
        while(temp->link->link != NULL){
            temp = temp->link;
        }
        free(temp->link);
        temp->link = NULL;
    }
}

void delete_position(struct node **head, int position){

    struct node *current = *head;
    struct node *previous = *head;

    if(*head == NULL){
        printf("List is already empty!");

    }
    else if (position == 1){

        *head = current->link;
        free(current);
        current = NULL;
    }else{

        while(position != 1){
            previous = current;
            current = current->link;
            position--;

        }
        previous->link = current->link;
        free(current);
        current = NULL;
    }

}

struct node* delete_list(struct node *head){

    struct node *temp = head;

    while(temp != NULL){
        temp = temp->link;
        free(head);
        head = temp;
    }
    return head;
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

    int position = 2;

    extend_anywhere(head, data, position);

    struct node *temp = head;
    print_the_data(head);

    count_the_nodes(head);

    head = delete_head(head);
    current = head;

    print_the_data(head);
    count_the_nodes(head);

    delete_tail1(head);


    print_the_data(head);
    count_the_nodes(head);

    delete_tail2(head);

    print_the_data(head);
    count_the_nodes(head);

    delete_position(&head, position);
    current = head;

    print_the_data(head);
    count_the_nodes(head);

    head = delete_list(head);
    if(head == NULL)
    {
        printf("List is empty!");
        return 0;
    }

    temp = head;
    while (temp != NULL) {
        struct node *next = temp->link;
        free(temp);
        temp = next;
    }
    
    return 0;
}

