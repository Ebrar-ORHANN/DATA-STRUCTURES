#include <stdio.h>
#include<stdlib.h>
#include <string.h>
//Write the function that searches records by student name in the list.

struct student {
	char name [30];
	struct student *next;
};
//The match between the names on the list and the searched name is checked.
struct student *search_student(struct student*head,char *search_name){
	struct student *current=head;
	while (current!=NULL){
		if(strcmp(current->name,search_name)==0){
			return current;
		}
		current=current->next;
	}
}
	struct student *insert_student(struct student *head,char *name) {
    struct student *new_student=(struct student*)malloc(sizeof(struct student));//Creating a new node.
    strcpy(new_student->name,name);
    new_student->next=head;
    return new_student;
}
	
	int main(){
	struct student *head=NULL;
	//Adding elements to the list.
	head=insert_student(head,"A");
	head=insert_student(head,"B");
	head=insert_student(head,"C");
	//The desired value is determined.
	char*search_name="C";
	
	struct student*found=search_student(head,search_name);
	if(found==NULL){
		printf("Student %s not found.\n",search_name);
	}
	else{
		printf("Student %s found.\n",search_name);
	}
	return 0;	
	
	
}

