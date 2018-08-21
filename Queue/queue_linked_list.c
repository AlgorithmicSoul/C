#include <iostream>

struct node {
    int data;
    node *next;
};

node * createNode(int data);
void insert(struct node **head, struct node *x);
void display(struct node *head);
void remove(struct node **head);

int main (void) {
  node *head = NULL;
  insert(&head, createNode(5));
  insert(&head, createNode(10));
  insert(&head, createNode(15));
  insert(&head, createNode(20));
  insert(&head, createNode(25));
  display(head);
  remove(&head); display(head);
  remove(&head); display(head);
  remove(&head); display(head);
  remove(&head); display(head);
  remove(&head); display(head);
  remove(&head); display(head);
  remove(&head); display(head);
  insert(&head, createNode(15));
  insert(&head, createNode(20));
  insert(&head, createNode(25));
  display(head);
  return 0;
}

node * createNode(int data) {
  node *temp = new node;
  temp->data = data;
  temp->next = NULL;
}

void insert(struct node **head, struct node *x) {
  if(*head==NULL) {
    *head = x;
  } else {
    node *h = *head;
    while (h->next != NULL) {
      h = h->next;
    }
    h->next = x;
  }
}

void display(struct node *head) {
  if (head == NULL) {
    printf("Empty  queue\n");
  } else {
    node *h = head;
    while(h!=NULL) {
      printf("%d ", h->data);
      h = h->next;
    }
    printf("\n");
  }
}

void remove(struct node **head) {
  if (*head == NULL) {
    printf("Empty  queue\n");
  } else {
    node *h = *head;
    if (h->next == NULL) {
      *head = NULL;
    } else *head = h->next;
  }
  // printf("%d is at head\n", (*head)->data);
}
