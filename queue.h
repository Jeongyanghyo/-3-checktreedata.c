#pragma once
#include "LevelTraversal.h"

typedef TreeNode* element;
typedef struct QueueNode { 	// 노드 타입
	element data;
	struct QueueNode* link;
} QueueNode;


typedef struct {
	QueueNode* front, * rear;
	//int size; 큐사이즈 전역함수 생성
}LinkedQueue;

extern void init_queue(LinkedQueue* q);
extern int is_empty(LinkedQueue* q);
extern void enqueue(LinkedQueue* q, element item);
extern element dequeue(LinkedQueue* q);
extern int queue_size(LinkedQueue* q);