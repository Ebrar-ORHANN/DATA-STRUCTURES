#include <stdio.h>
#include<stdlib.h>
#include <string.h>
//Write the function that searches records by student name in the list.

struct student {
	char name [30];
	struct student *next;
};
struct student *search_student(struct student*head,char *search_name){
	struct student *current=head;
	while (current!=NULL){
		if(strcmp(current->name,search_name)==0){
			return current;
		}
		current=current->next;
	}
}    //Function creates new node.
	struct student *insert_student(struct student *head,char *name) {
    struct student *new_student=(struct student*)malloc(sizeof(struct student));
    strcpy(new_student->name,name);
    new_student->next=head;
    return new_student;

}//Function that deletes the node after the selected node.
void delete_node(struct student* head,char* search_name) {
    struct student* current=head;
    while (current!=NULL&&current->next!=NULL) {
        if (strcmp(current->name,search_student) == 0) {
            struct student* temp = current->next;
            current->next = current->next->next;
            free(temp);
            return;
        }
        current = current->next;
    }
}
	

int main(){
	struct student *head=NULL;
	//Adding elements to the list.
	head=insert_student(head,"A");
	head=insert_student(head,"B");
	head=insert_student(head,"C");
	
	char*search_name="A";
	
	struct student*found=search_student(head,search_name);
	if(found==NULL){
		printf("Student %s not found.\n",search_name);
	}
	else{
		printf("Student %s found.\n",search_name);
		
	}
	if (found->next->next = NULL){
	 printf("The found node is the last node.");}
	 else{
	 
        delete_node(head,search_name);
        printf("Node %s deleted.\n", search_name);
        }
    
	return 0;	
}
	
	


