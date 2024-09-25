#include <stdio.h>
#include <stdlib.h>
#include "Queue.h"

void init_queue(LinkedQueue* q) {
	q->front = q->rear = NULL;

}

int is_empty(LinkedQueue* q) {
	return q->front == NULL;
}

void enqueue(LinkedQueue* q, element data) {
	QueueNode* temp = (QueueNode*)malloc(sizeof(QueueNode));
	temp->data = data;
	temp->link = NULL;
	if (is_empty(q)) {
		q->front = temp;
		q->rear = temp;
	}
	else {
		q->rear->link = temp;
		q->rear = temp;
	}
}

element dequeue(LinkedQueue* q)
{
	QueueNode* temp = q->front;
	element data;
	if (is_empty(q)) {		// 공백상태
		fprintf(stderr, "스택이 비어있음\n");
		exit(1);
	}
	else {
		data = temp->data; 	// 데이터를 꺼낸다.
		q->front = q->front->link; // front로 다음노드
		if (q->front == NULL) 	// 공백 상태
			q->rear = NULL;
		free(temp); 		// 동적메모리 해제
		return data; 		// 데이터 반환
	}
}

int queue_size(LinkedQueue* q) {
	QueueNode* temp = q->front;
	int count = 0;
	while (temp) {
		count++;
		temp = temp->link;
	}
	return count;
}
