#include <stdio.h>
#include <stdlib.h>
//Write a function that adds all odd numbers to the beginning of the list and all even numbers to the end of the list until -1 is entered from the keyboard.
struct node{
	int data;
	struct node *next;
};
//Function do that add new node.
void add_node(struct node **head,int x){
	struct node *new_node=(struct node*)malloc(sizeof(struct node));//First node
	new_node->data=x;
	new_node->next=NULL;
	if(*head==NULL){ //The first node can be odd or even. This does not matter.
		*head=new_node;
		}
	else if(new_node->data %2!=0){//This node is added to the end of the list
		struct node *current=new_node;
		current->data=x;
		current->next=*head;
	 	*head=current;
	}
	else{//This node is added to the beginning the list.
		struct node *current=*head ;
	 while (current->next != NULL) {
            current = current->next;
        }
        current->next = new_node;
    }
	
	}
	int main(){
	int value;
	struct node*head=NULL;
	printf("Enter data to add the list\n");
	while(1){ //The value is taken from the user until -1 is entered.
	 scanf("%d",&value); 
	 if(value == -1)
	  break;
	 add_node(&head,value);
}
	struct node*current=head;
	printf("List: ");//List is printed to the screen with this code.
	 while(current != NULL){
	  printf("%d->",current->data);
	   current=current->next;
	    } 
	return 0;
	}
	
	


