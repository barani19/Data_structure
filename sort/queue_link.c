#include <stdio.h>
#include <stdlib.h>

/* Structure to represent a node in the queue */
struct node {
  int data;
  struct node* next;
};

/* Structure to represent the queue */
struct queue {
  struct node* front;
  struct node* rear;
};

/* Function to create a new node */
struct node* newNode(int data) {
  struct node* node = (struct node*)malloc(sizeof(struct node));
  node->data = data;
  node->next = NULL;
  return node;
}

/* Function to create a new queue */
struct queue* createQueue() {
  struct queue* queue = (struct queue*)malloc(sizeof(struct queue));
  queue->front = NULL;
  queue->rear = NULL;
  return queue;
}

/* Function to enqueue an element to the queue */
void enqueue(struct queue* queue, int data) {
  struct node* node = newNode(data);
  if (queue->rear == NULL) {
    queue->front = node;
    queue->rear = node;
  } else {
    queue->rear->next = node;
    queue->rear = node;
  }
}

/* Function to dequeue an element from the queue */
int dequeue(struct queue* queue) {
  if (queue->front == NULL) {
    return -1;
  } else {
    int data = queue->front->data;
    queue->front = queue->front->next;
    if (queue->front == NULL) {
      queue->rear = NULL;
    }
    return data;
  }
}

/* Function to display the queue */
void displayQueue(struct queue* queue) {
  struct node* node = queue->front;
  while (node != NULL) {
    printf("%d ", node->data);
    node = node->next;
  }
  printf("\n");
}

int main() {
  struct queue* queue = createQueue();
  enqueue(queue, 1);
  enqueue(queue, 2);
  enqueue(queue, 3);
  displayQueue(queue);
  printf("Dequeued element: %d\n", dequeue(queue));
  displayQueue(queue);
  return 0;
}

