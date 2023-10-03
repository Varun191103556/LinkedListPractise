#include <stdio.h>
#include <stdlib.h>
int i = 0;
 
// Node for Doubly Linked List
struct node {
    int data;
    struct node* prev;
    struct node* next;
 };
struct node *head;

void create()
{
    int data;
    struct node *temp,*last;
    temp =(struct node *)malloc(sizeof(struct node));
    printf("\n Enter value to node : ");
    scanf("%d", &data);
    temp->data = data;
    if(head == NULL){
        head = temp;
        head->prev = NULL;
        head->next = NULL;
    }
    else{
        last = head;
        while(last->next!=NULL){
            last = last->next;
        }
        last->next =temp;
        temp->prev = last;
        last = temp;
    }
    
    
}


void display(){
    struct node *temp;
    temp = head;
    while(temp!=NULL){
        printf("[%d]\n",temp->data);
        temp = temp-> next;
    }
}


void sort(){
    struct node *i,*j;
    i = head; 
    int t;
    for (i; i->next != NULL ; i = i->next){
        for(j=i->next ; j !=NULL;j = j->next){
            if(i->data > j-> data){
            t = i -> data;
            i->data = j->data;
            j->data = t;}
        }
    }
}
int main(){
    int n;
    printf("enter the number of elements in the dll : "); scanf("%d",&n);
    for(int i = 0; i<n;i++){
        create();
    }
    display();
    printf("After sorting the elements\n");
    sort();
    display();
    
}