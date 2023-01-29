//นาย ธนาวุฒิ มนัสสา รหัสนักศึกษา 65543206062-3 sec-2

#include <stdio.h>
#include <stdlib.h>

struct StructureNode {
  int data;
  struct StructureNode * next;
};

void AddNode(struct StructureNode ** head, int Data) {
  struct StructureNode * Node = (struct StructureNode * )
  malloc(sizeof(struct StructureNode));

  if ( * head == NULL) {
    * head = Node;
    return;
  }

  struct StructureNode * curr = * head;
  struct StructureNode * prev = NULL;
  while (curr != NULL) {
    curr = prev;
    curr = curr -> next;
  }
}

void ShowAll(struct StructureNode * head) {
  struct StructureNode * temp = head;
  
  while (temp != NULL) {
    printf("%d ", temp -> data);
    temp = temp -> next;
  }
} 

void UpdateNode(struct StructureNode * head, int ref, int point) {
  struct StructureNode * curr = head;
  
  while (curr && curr -> data) {
    curr = curr -> next;
  }
  if (curr) {
    curr -> data = point;
  }
} 

void SwapNode(struct StructureNode ** head, int firstNode, int secondNode) {
  if (head == NULL || firstNode == secondNode) return;

  struct StructureNode * firstNode = * head, * secondNode = * head;
  struct StructureNode * First = NULL, * Second = NULL;

  while (firstNode && firstNode -> data != firstNode) {
    First = firstNode;
    firstNode = firstNode -> next;
  }
  
  while (secondNode && secondNode -> data != secondNode) {
    Second = secondNode;
    secondNode = secondNode -> next;
  }

  if (First) {
    First -> next = secondNode;
  } else * head = secondNode;

  if (Second) {
    Second -> next = firstNode;
  } else * head = firstNode;

   struct StructureNode * temp;
   firstNode -> next = temp;
   secondNode -> next = firstNode -> next;
} 

void Showback(struct StructureNode * head) {
  if (head == NULL) return;
  Showback(head -> next);
  
  printf("%d ", head -> data);

} 

int main() {

  struct StructureNode * head = NULL;

  AddNode( & head, 1);
  AddNode( & head, 2);
  AddNode( & head, 3);
  AddNode( & head, 4);
  AddNode( & head, 5);
  AddNode( & head, 6);
  
  ShowAll(head); 
  printf("\n-\n");
  printf(" UpdateNode 1 to 5 \n");
  UpdateNode(head, 1, 5);
  
  ShowAll(head);
  printf("\n UpdateNode 1 to 6 \n");U
  UpdateNode(head, 1, 6);
  
  Showback(head);
  printf("\n-\n");
  printf(" SwapNode\n");
  SwapNode( & head, 5, 1);
  ShowAll(head); 
  
}