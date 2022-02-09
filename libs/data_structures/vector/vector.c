#include "vector.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

vector createVector(size_t n) {
    int *data = (int *) malloc(n * sizeof(int));
    if (n) {
        if (data == NULL) {
            fprintf(stderr, "bad alloc");
            exit(1);
        }
    } else
        data = NULL;
    return (vector) {data, 0, n};
}

void reserve(vector *v, size_t newCapacity) {
    if (newCapacity == 0)
        v->data = NULL;
    else
        v->data = (int *) realloc(v->data, sizeof(int) * newCapacity);
    v->capacity = newCapacity;
}

void clear(vector *v) {
    v->size = 0;
}

void shrinkToFit(vector *v) {
    v->capacity = v->size;
}

void deleteVector(vector *v) {
    free(v->data);
}

bool isEmpty(vector *v) {
    return v->size == 0;
}

bool isFull(vector *v) {
    return v->size == v->capacity;
}

void pushBack(vector *v, int x) {
    if (v->capacity == 0) {
        reserve(v, 1);
        v->capacity = 1;
    } else if (v->size == v->capacity) {
        reserve(v, v->capacity * 2);
        v->capacity *= 2;
    }
    v->data[v->size++] = x;
}

//7
void popBack(vector *v) {
    if (isEmpty(v))
        exit(1);
    v->size--;
}


int *atVector(vector *v, size_t index) {
    if (index >= v->size) {
        fprintf(stderr, "IndexError: a[index] is not exists");
        exit(1);
    }
    return &v->data[index];
}

//9
int *back(vector *v) {
    return atVector(v, v->size - 1);
}

//10
int *front(vector *v) {
    return atVector(v, 0);
}
