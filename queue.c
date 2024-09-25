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
	if (is_empty(q)) {		// �������
		fprintf(stderr, "������ �������\n");
		exit(1);
	}
	else {
		data = temp->data; 	// �����͸� ������.
		q->front = q->front->link; // front�� �������
		if (q->front == NULL) 	// ���� ����
			q->rear = NULL;
		free(temp); 		// �����޸� ����
		return data; 		// ������ ��ȯ
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
