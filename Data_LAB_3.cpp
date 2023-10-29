#include <stdio.h>
#include <stdlib.h> 
//Write a function that stores the student number, name and age,
// traverses all the nodes in the list, writes all the student information on the screen and counts it.
struct Student {
    int student_number;
    char name[30];
    int age;
    struct Student *next;
};
typedef struct Student student;

student *head=NULL; 

void student_list() {
    int n, k;
    printf("How many people will you add to the list?\n");
    scanf("%d", &n);
    student *newNode = NULL;
    for (k=0;k<n;k++) {
        if (k==0) {
            newNode=(student *)malloc(sizeof(student));//Creating a new first node.
            head=newNode;
        } else {
            newNode->next=(student *)malloc(sizeof(student));//Creating a new node.
            newNode=newNode->next;
        }
        printf("Enter student name: ");
        scanf("%s",newNode->name);
        printf("Enter student age: ");
        scanf("%d",&newNode->age);
        printf("Enter student number: ");
        scanf("%d",&newNode->student_number);
    }
    newNode->next=NULL;
}
//Elements are traversed in the  list.
void traverse_list(student *head) {
    int counter = 1;
    student *current = head; 
    while (current!=NULL) {
        printf("%d- Name:%s Age:%d Number:%d\n",counter,current->name,current->age,current->student_number);
        current=current->next; 
        counter++;
    }
}

int main() {
    student_list();
    traverse_list(head);
    
    return 0;
}
