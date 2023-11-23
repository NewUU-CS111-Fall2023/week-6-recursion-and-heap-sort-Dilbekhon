#include <iostream>
#include <vector>

class Heap {
private:
    std::vector<int> arr;

    void maxHeapify(int i, int heapSize) {
        int left = 2 * i + 1;
        int right = 2 * i + 2;
        int largest = i;

        if (left < heapSize && arr[left] > arr[largest]) {
            largest = left;
        }

        if (right < heapSize && arr[right] > arr[largest]) {
            largest = right;
        }

        if (largest != i) {
            std::swap(arr[i], arr[largest]);
            maxHeapify(largest, heapSize);
        }
    }

public:
    explicit Heap(std::vector<int>& inputArray) : arr(inputArray) {}

    void buildMaxHeap() {
        int n = arr.size();
        for (int i = n / 2 - 1; i >= 0; --i) {
            maxHeapify(i, n);
        }
    }

    void heapSort() {
        int n = arr.size();

        buildMaxHeap();

        for (int i = n - 1; i > 0; --i) {
            std::swap(arr[0], arr[i]);
            maxHeapify(0, i);
        }
    }

    void printHeap() {
        for (int num : arr) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    
    std::vector<int> input1 = {4, 10, 3, 5, 1};
    std::vector<int> input2 = {25, 17, 36, 2, 8, 19, 1};
    std::vector<int> input3 = {1, 2, 3, 4, 5};

    Heap heap1(input1);
    Heap heap2(input2);
    Heap heap3(input3);

    heap1.heapSort();
    heap1.printHeap();

    heap2.heapSort();
    heap2.printHeap();

    heap3.heapSort();
    heap3.printHeap();

    return 0;
}
