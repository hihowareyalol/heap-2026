#include "Heap.h"

void swap(int *array, int i, int j) {
    int tmp = array[i];
    array[i] = array[j];
    array[j] = tmp;
}

template<class T>
Heap<T>::Heap() {
    size = 0;
    max_size = DEFAULT_SIZE;
    elements = new T[max_size];
}

template<class T>
Heap<T>::Heap(int max_size) {
    size = 0;
    this->max_size = max_size;
    elements = new T[max_size];
}

template<class T>
void Heap<T>::ReheapUp(T value) {
    if (size >= max_size)
    {
        throw FullHeap();
    }

    elements[size] = value;

    //swap until parent is bigger
    int currInd = size;

    while (currInd != 0) {
        int parInd = (currInd - 1) / 2;
        //current is bigger than parent
        if (elements[currInd] > elements[parInd])
        {
            swap(elements, currInd, parInd);
        } else
        {
            //current is smaller than parent
            break;
        }
    }
    ++size;
}

template<class T>
T Heap<T>::ReheapDown() {
    T priority_value;

    return priority_value;
}