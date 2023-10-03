#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

struct Node * head = NULL;

void create(){
    
    struct Node *ptr,*temp;
    temp = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter a element to enter in the list\n");
    int n; scanf("%d",&n);
    temp->data = n;
    temp->next =NULL;
    if(head==NULL)
        {
                head=temp;
        }
        else
        {
                ptr=head;
                while(ptr->next!=NULL)
                {
                        ptr=ptr->next;
                }
                ptr->next=temp;
        }
}


void display(){
    struct Node *temp;
    if(head == NULL){
        printf("The Linked list is empty");
    }
    else{
        temp = head;
        printf("The elements are:\n");
        while(temp!=NULL){
            printf("%d\n",temp->data);
            temp = temp->next;
        }
    }
}

void insert(){
    int n;
    printf("Enter the element :");
    scanf("%d",&n);
    struct Node *new_node;
    new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data =  n;
    new_node->next = head;
    head = new_node;
}


void delete(){
    printf("The delete element :%d",head->data);
    head =  head->next;
}

void delete_pos(){
    struct Node *ptr,*temp;
    int n;
    printf("Delete element at position/;\n");
    scanf("%d",&n);
    ptr = head;
    for(int i=0;i<n-1;i++)
    {
        ptr = ptr->next;
        
    }
    ptr->next =  ptr-> next->next;
}


void insert_1(){
    struct Node *temp , *ptr;
    temp = (struct Node *)malloc(sizeof(struct Node));
    int n,i;
    printf("Enter the number :"); scanf("%d",&n); printf("At position :"); scanf("%d",&i);
    temp->data = n;
    temp -> next =NULL;
    ptr = head;
    for (int j =0 ;j<i-1;j++){
        ptr = ptr->next;
        
    }
    temp->next = ptr->next;
    ptr->next = temp;
    
    
}
int main()
{
    int nn;
    printf("Enter the number of nodes you want in the list");
    scanf("%d",&nn);
    for(int i=0;i<nn;i++){
        create();
    }
    display();
    insert();
    display();
    
    

    return 0;
}