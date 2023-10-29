#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//Write the function that prints the record with the longest name in the list.

struct Student {
    char name[30];
    struct Student *next;
};
typedef struct Student student;
student *head=NULL; 

//The number of elements to be entered from the keyboard is determined.
void student_list() {
    int n, k;
    printf("How many people will you add to the list?\n");
    scanf("%d", &n);
    student *newNode = NULL;

    for (k = 0; k < n; k++) {
        if (k == 0) {
            newNode = (student *)malloc(sizeof(student));//Creating a new first node.
            head = newNode;
        } else {
            newNode->next = (student *)malloc(sizeof(student));//Creating a new node.
            newNode = newNode->next;
        }
        printf("Enter student name: ");
        scanf("%s", newNode->name);
    }
    newNode->next=NULL;
}
 char *name(student *head) {
    if (head==NULL) {
        return NULL;
    }
    //The length of the entered name is calculated.
	student *current=head;
    int longest_length=strlen(head->name);
    student *long1=head;

    	while (current!=NULL) {
        int lenght=strlen(current->name);
        if (lenght>longest_length) {
            longest_length=lenght;
            long1=current;
        }
        current=current->next;
    }
	return long1->name;
}
int main() {
    student_list();
	char *long_name=name(head);
	if (long_name!=NULL) {
        printf("Longest name: %s\n",long_name);
    } else {
        printf("List is empty!\n");
    }
	return 0;
}
