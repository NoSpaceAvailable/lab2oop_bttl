#include "List.cpp"
#include <iostream>

/**
 * Hàm main làm các công việc sau:
 * - Tạo một danh sách rỗng.
 * - Nhập các lệnh từ người dùng:
 *  + 0: Thêm một giá trị vào danh sách.
 * + 1: Xóa một giá trị đầu tiên khỏi danh sách.
 * + 2: Xóa tất cả các giá trị khỏi danh sách.
 * + 3: Thay thế một giá trị tại một vị trí cho trước.
 * - Kết thúc khi người dùng nhập -1.
 * - In ra danh sách cuối cùng.
 */
int main() {
    List list;
    int n;

    while (true) {
        std::cout << "Enter command (-1 to end): ";
        std::cin >> n;

        if (n == -1) break;

        switch (n) {
            case 0: {
                double x;
                std::cout << "Enter value to add: ";
                std::cin >> x;
                list.add(x);
                break;
            }
            case 1: {
                double x;
                std::cout << "Enter value to remove (first occurrence): ";
                std::cin >> x;
                if (!list.removeFirst(x)) {
                    std::cout << "Value not found!" << std::endl;
                }
                break;
            }
            case 2: {
                double x;
                std::cout << "Enter value to remove (all occurrences): ";
                std::cin >> x;
                int count = list.removeAll(x);
                std::cout << "Removed " << count << " occurrences." << std::endl;
                break;
            }
            case 3: {
                int index;
                double y;
                std::cout << "Enter index and new value: ";
                std::cin >> index >> y;
                if (!list.replace(index, y)) {
                    std::cout << "Invalid index!" << std::endl;
                }
                break;
            }
            default:
                std::cout << "Invalid command!" << std::endl;
        }
    }

    std::cout << "Final list: ";
    list.printList();

    return 0;
}
