#ifndef VECTORS_VECTOR_H
#define VECTORS_VECTOR_H

#include <malloc.h>
#include <stdbool.h>

typedef struct vector {
    int *data;
    size_t size;
    size_t capacity;
} vector;

//1
vector createVector(size_t n);

//2
void reserve(vector *v, size_t newCapacity);

//3
void clear(vector *v);

//4
void shrinkToFit(vector *v);

//5
void deleteVector(vector *v);

//6
bool isEmpty(vector *v);

//7
bool isFull(vector *v);

//6
void pushBack(vector *v, int x);

//7
void popBack(vector *v);

//8
int *atVector(vector *v, size_t index);

//9
int *back(vector *v);

//10
int *front(vector *v);

#endif //VECTORS_VECTOR_H
