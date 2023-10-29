#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Add 100 randomly generated numbers to the list, write the c code that sorts all the numbers entered from largest to smallest and prints them on the screen.
struct Node {
    int data;
    struct Node* next;
};
//Function do that add new node.
struct Node* addNode(struct Node* head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = head;
    return newNode;
	}
	
	void printList(struct Node* head) {//Values are printed in the list.
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}
    void buble_sort(int dizi[],int n)//The entered numbers are sorted from smallest to largest.
	{
	    int temp2;
    	for(int i=0;i<n;i++){
    		for(int k=0;k<n-1;k++){
    			if(dizi[k]>dizi[k+1]){
    				temp2=dizi[k];
    				dizi[k]=dizi[k+1];
    				dizi[k+1]=temp2;
    				}
				}
			}
		}
       
int main() {
	struct Node* head = NULL;
	srand(time(NULL));
	int counter=100;
	int number;
	for (int i=0;i<counter;i++){//The value range of the resulting random numbers is determined.
        number=rand()%1000;
        head = addNode(head,number);
    }
    int numbers[counter];
    struct Node* current=head;
    for(int i=0;i<counter;i++) {
        numbers[i]=current->data;
        current=current->next;
    }
    buble_sort(numbers,counter);
    for (int i=0;i<counter;i++) {
        printf("%d\n",numbers[i]);
    }
    return 0;
}

		


