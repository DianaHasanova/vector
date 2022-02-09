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

void test() {
    // test_pushBack_emptyVector();
    //test_pushBack_fullVector();
    test_popBack_notEmptyVector();
}

int main() {
    vector v = createVector(0);
    test();

    return 0;
}
