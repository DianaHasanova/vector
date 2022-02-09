#include <stdint.h>
#include <assert.h>
#include"libs/data_structures/vector/vector.h"

void test_popBack_notEmptyVector() {
    vector v = createVector(0);
    pushBack(&v, 10);

    assert(v.size == 1);
    popBack(&v);
    assert(v.size == 0);
    assert(v.capacity == 1);

    deleteVector(&v);
}

void test_pushBack_emptyVector() {
    vector v = createVector(0);
    pushBack(&v, 10);

    assert(v.data[0] == 10);
    assert(v.size == 1);
    assert(v.capacity == 1);

    deleteVector(&v);
}

void test_pushBack_fullVector() {
    vector v = createVector(3);
    v.size = 3;
    pushBack(&v, 10);

    assert(v.data[3] == 10);
    assert(v.size == 4);
    assert(v.capacity == 6);

    deleteVector(&v);
}

void test_shrinkToFit_() {
    vector v = createVector(3);
    v.size = 3;
    v.capacity = 5;
    shrinkToFit(&v);

    assert(v.capacity == 3);

    deleteVector(&v);
}

void test_shrinkToFit_fullVector() {
    vector v = createVector(0);
    shrinkToFit(&v);

    assert(v.capacity == 0);

    deleteVector(&v);
}

void test_isFull_full() {
    vector v = createVector(0);

    assert(isFull(&v) == true);

    deleteVector(&v);
}

void test_isFull_notFull() {
    vector v = createVector(5);
    v.size = 1;

    assert(isFull(&v) == false);

    deleteVector(&v);
}

void test_popBack_() {
    vector v = createVector(3);
    v.size = 3;
    popBack(&v);

    assert(back(&v) == &v.data[1]);

    deleteVector(&v);
}

void test_atVector_notEmptyVector() {
    vector v = createVector(3);
    v.size = 3;

    assert(atVector(&v, 2) == &v.data[2]);

    deleteVector(&v);
}

void test_back() {
    vector v = createVector(3);
    v.size=3;

    assert(back(&v) == &v.data[2]);

    deleteVector(&v);
}

void test_front(){
    vector v = createVector(2);
    v.size=2;

    assert(front(&v) == &v.data[0]);

    deleteVector(&v);
}

void test() {
    test_pushBack_emptyVector();
    test_pushBack_fullVector();
    test_popBack_notEmptyVector();
    test_shrinkToFit_();
    test_shrinkToFit_fullVector();
    test_isFull_full();
    test_isFull_notFull();
    test_popBack_();
    test_atVector_notEmptyVector();
    test_back();
    test_front();
}

int main() {
    vector v = createVector(0);
    test();

    return 0;
}
