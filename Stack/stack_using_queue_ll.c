#include <iostream>

struct node {
    int data;
    node *next;
};

node * createNode(int data);
void insert(struct node **head, struct node *x);
void display(struct node *head);
void remove(struct node **head);
void remove_as_stack(struct node **head);
int size(struct node **head);

int main (void) {
  node *queue1 = NULL;
  insert(&queue1, createNode(5));
  insert(&queue1, createNode(10));
  insert(&queue1, createNode(15));
  insert(&queue1, createNode(20));
  insert(&queue1, createNode(25));
  display(queue1);
  remove_as_stack(&queue1); display(queue1);
  insert(&queue1, createNode(25)); display(queue1);
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

void remove_as_stack(struct node **head) {
  if (*head == NULL) printf("Empty queue\n");
  else {
    node *q1, *q2;
    q1 = *head; int q1_size = size(&q1)-1;
    while (q1_size--) {
      insert(&q1, createNode(q1->data));
      remove(&q1);
      display(q1);
    }
    remove(&q1);
    *head = q1;
  }
}

int size(struct node **head) {
  int count = 0;
  if (*head == NULL) return count;
  else {
    node *h = *head;
    while (h != NULL) {
      count++;
      h = h->next;
    }
    return count;
  }
}
