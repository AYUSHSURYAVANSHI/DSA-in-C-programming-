#include <stdio.h>
#include <stdlib.h>
  
struct Node {
    int data;
    struct Node* next;
};
  
// This function prints contents of linked list starting
// from the given node
void printList(struct Node* n)
{
    while (n != NULL) {
        printf(" %d ", n->data);
        n = n->next;
    }
}
  void likedlistTravarsal(struct Node *ptr ){
    while(ptr  != NULL)
       {
        printf(" %d",ptr->data);

        ptr = ptr->next;

       }
  }
// Driver's code
int main()
{
    struct Node *head = NULL;
    struct Node *second = NULL;
    struct Node *third = NULL;
  
    // allocate 3 nodes in the heap
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
  
    head->data = 1; // assign data in first node
    head->next = second; // Link first node with second
  
    second->data = 2; // assign data to second node
    second->next = third;
  
    third->data = 3; // assign data to third node
    third->next = NULL;




    
//     void(){

//     }
//     ptr= head;

//     while(ptr != NULL){
//         printf("%d",ptr->data)
//     }

//     // Function call
//     printList(head);
   likedlistTravarsal(head);
   return 0;
}