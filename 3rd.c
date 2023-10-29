#include <stdio.h>
#include <stdlib.h>

// Structure to represent a node in the linked list
typedef struct node {
  int data;
  struct node *next;
} Node;

// Function to add a node to the end of the linked list
void add_to_end(Node **head, int data) {
  Node *new_node = malloc(sizeof(Node));
  new_node->data = data;
  new_node->next = NULL;

  Node *current = *head;
  if (*head == NULL) {
    *head = new_node;
    return;
  }

  while (current->next != NULL) {
    current = current->next;
  }

  current->next = new_node;
}

// Function to print the linked list

void
 
print_list(Node *head)
 
{
  Node *current = head;
  while (current != NULL) {
    printf("%d->", current->data);
    current = current->next;
  }

  printf("\n");
}

// Main function
int main() {
  Node *head = NULL;

  // Add numbers from 54 to 102 to the linked list
  for (int i = 54; i <= 102; i += 4) {
    add_to_end(&head, i);
  }

  // Print the linked list
  print_list(head);

  return 0;
}
