#include <stdio.h>

struct node {
  int data;
  int priority;
  node *next;
};

node * createNode(int data, int priority);
void insert(struct node **head, struct node *x);
void display(struct node *head);
void remove(struct node **head);

int main (void) {
  node *head = NULL;
  insert(&head, createNode(5,10));
  insert(&head, createNode(10,8));
  insert(&head, createNode(15,6));
  insert(&head, createNode(20,4));
  insert(&head, createNode(25,2));
  insert(&head, createNode(7,9));
  insert(&head, createNode(7,12));
  insert(&head, createNode(99,12));
  insert(&head, createNode(26,2));
  display(head);
  remove(&head); display(head);
  remove(&head); display(head);
  remove(&head); display(head);
  remove(&head); display(head);
  remove(&head); display(head);
  remove(&head); display(head);
  remove(&head); display(head);
  remove(&head); display(head);
  remove(&head); display(head);
  insert(&head, createNode(99,12)); display(head);
  insert(&head, createNode(26,2)); display(head);
  return 0;
}

node * createNode(int data, int priority) {
  node *temp = new node;
  temp->data = data;
  temp->priority = priority;
  temp->next = NULL;
}

void insert(struct node **head, struct node *x) {
  if(*head==NULL) {
    *head = x;
  } else {
    node *h = *head; node *prev;
    if(x->priority>h->priority) {
      x->next = *head;
      *head = x;
    } else {
        while(h->next!=NULL && h->priority>=x->priority) {
          prev = h;
          h = h->next;
        }
        // printf("priority: %d\n", h->priority);
        if (h->next==NULL) h->next = x;
        else {
          x->next = h;
          prev->next = x;
        }
    }
  }
}

void display(struct node *head) {
  if (head == NULL) {
    printf("Empty priority queue\n");
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
    printf("Empty priority queue\n");
  } else {
    node *h = *head;
    if (h->next == NULL) {
      *head = NULL;
    } else *head = h->next;
  }
  // printf("%d is at head\n", (*head)->data);
}
