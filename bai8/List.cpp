#include "List.h"

/**
 * Constructor của lớp List.
 */
List::List() : array(nullptr), size(0) {}

/**
 * Destructor của lớp List.
 */
List::~List() {
    delete[] array;
}

/**
 * Hàm thay đổi kích thước của mảng.
 * @param newSize kích thước mới của mảng.
 */
void List::resizeArray(unsigned int newSize) {
    double* newArray = new double[newSize];
    for (unsigned int i = 0; i < size && i < newSize; ++i) {
        newArray[i] = array[i];
    }
    delete[] array;
    array = newArray;
    size = newSize;
}

/**
 * Hàm thêm một giá trị vào cuối danh sách.
 * @param x giá trị cần thêm.
 */
void List::add(double x) {
    resizeArray(size + 1);
    array[size - 1] = x;
}

/**
 * Hàm xóa giá trị đầu tiên x khỏi danh sách.
 * @param x giá trị cần xóa.
 * @return true nếu x được xóa thành công, ngược lại trả về false.
 */
bool List::removeFirst(double x) {
    for (unsigned int i = 0; i < size; ++i) {
        if (array[i] == x) {
            for (unsigned int j = i; j < size - 1; ++j) {
                array[j] = array[j + 1];
            }
            resizeArray(size - 1);
            return true;
        }
    }
    return false;
}

/**
 * Hàm xóa tất cả các giá trị x khỏi danh sách.
 * @param x giá trị cần xóa.
 * @return số lượng giá trị x đã bị xóa.
 */
int List::removeAll(double x) {
    int removed = 0;
    for (unsigned int i = 0; i < size;) {
        if (array[i] == x) {
            for (unsigned int j = i; j < size - 1; ++j) {
                array[j] = array[j + 1];
            }
            resizeArray(size - 1);
            ++removed;
        } else {
            ++i;
        }
    }
    return removed;
}

/**
 * Hàm thay thế giá trị tại vị trí index bằng giá trị y.
 * @param index vị trí cần thay thế.
 * @param y giá trị mới.
 * @return true nếu thay thế thành công, ngược lại trả về false.
 */
bool List::replace(int index, double y) {
    if (index >= 0 && index < static_cast<int>(size)) {
        array[index] = y;
        return true;
    }
    return false;
}

/**
 * Hàm in ra danh sách.
 * Danh sách được in ra dưới dạng một dãy số nằm trong cặp ngoặc vuông.
 */
void List::printList() const {
    std::cout << "[";
    for (unsigned int i = 0; i < size; ++i) {
        std::cout << array[i];
        if (i < size - 1) std::cout << ",";
    }
    std::cout << "]" << std::endl;
}
