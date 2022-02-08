#include "vector.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

vector createVector(size_t n) {
    int *data = NULL;
    if (n)
        data = (int *) malloc(n * sizeof(int));
    if (data == NULL) {
        fprintf(stderr, "bad alloc");
        exit(1);
    }
    return (vector) {data, 0, n};
}

void reserve(vector *v, size_t newCapacity) {

}

//3
void clear(vector *v) {

}

//4
void shrinkToFit(vector *v) {

}

//5
void deleteVector(vector *v) {

}

//6
void pushBack(vector *v, int x) {

}

//7
void popBack(vector *v) {

}

//8
int *atVector(vector *v, size_t index) {

}

//9
int *back(vector *v) {

}

//10
int *front(vector *v) {

}