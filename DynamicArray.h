#ifndef DYNAMICARRAY_H
#define DYNAMICARRAY_H

template <typename T>
class DynamicArray {
private:
    T* data;
    int capacity;
    int currentSize;

    // Resizes the array when it gets full
    void resize() {
        capacity *= 2;
        T* newData = new T[capacity];
        for (int i = 0; i < currentSize; i++) {
            newData[i] = data[i];
        }
        delete[] data;
        data = newData;
    }

public:
    DynamicArray() : capacity(5), currentSize(0) {
        data = new T[capacity];
    }

    ~DynamicArray() {
        delete[] data;
    }

    void add(const T& item) {
        if (currentSize == capacity) resize();
        data[currentSize++] = item;
    }

    int getSize() const { return currentSize; }

    // Access elements like a normal array: arr[i]
    T& operator[](int index) {
        return data[index];

    }

        // 2. THE FIX: The const version (for reading only)
        const T& operator[](int index) const {
            return data[index];
        }


};

#endif