#ifndef VECTORS_VECTOR_H
#define VECTORS_VECTOR_H

#include <malloc.h>
#include <stdbool.h>

typedef struct vector {
    int *data;
    size_t size;
    size_t capacity;
} vector;

//возвращает структуру-дескриптор векторов из n значений
vector createVector(size_t n);

//изменяет количество памяти, выделенное под хранение элементов вектора
void reserve(vector *v, size_t newCapacity);

//удаляет элементы из контейнера, но не освобождает выделенную память
void clear(vector *v);

//освобождает память, выделенную под неиспользованные элементы
void shrinkToFit(vector *v);

//освобождает память, выделенную вектору
void deleteVector(vector *v);

//возвращает true, если вектор v пустой,иначе false
bool isEmpty(vector *v);

//возвращает true, если вектор v полный,иначе false
bool isFull(vector *v);

//добавляет элемент x в конец вектора v
void pushBack(vector *v, int x);

//удаляет последний элемент из вектора v
void popBack(vector *v);

//возвращает указатель на index-ый элемент массива
int *atVector(vector *v, size_t index);

//возвращает указатель на последний элемент массива
int *back(vector *v);

//возвращает указатель на нулевой элемент массива
int *front(vector *v);

#endif //VECTORS_VECTOR_H
