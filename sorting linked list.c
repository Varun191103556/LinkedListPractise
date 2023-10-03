#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *next;
};
struct node *head =NULL;

void create(){
    int n;
    printf("Enter an element : ");
    scanf("%d",&n);
    struct node *temp,*ptr;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = n;
    temp->next = NULL;
    if(head == NULL){
        head = temp;
    }
    else {
        ptr = head;
        while(ptr->next!=NULL){
            ptr = ptr->next;
        }
        ptr->next = temp;
    }
}


void display(){
    struct node *temp;
    if(head == NULL){
        printf("The Linked list is empty");
    }
    else{
        temp = head;
        printf("The elements are:\n");
        while(temp!=NULL){
            printf("[%d]\n",temp->data);
            temp = temp->next;
        }
    }
}

void ascend(){
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

void descend(){
    struct node *i,*j;
    i = head;
    int t;
    for( i; i-> next!=NULL; i= i->next){
        for(j=i->next; j!= NULL; j = j-> next){
            if(i->data < j-> data){
                t = i->data;
                i-> data = j-> data;
                j-> data = t;
            }
        }
    }
}

int main()
{
    int cases;
    
    printf("Enter the number of elements you need");
    scanf("%d",&cases);
    for(int i = 0; i<cases;i++){
        create();
    }
    display();
    descend();
    display();
    
    

    return 0;
}
