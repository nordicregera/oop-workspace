#ifndef USBCONNECTION_H
#define USBCONNECTION_H

#include <stack>
#include <iostream>

class USBConnection {
private:
    int ID; // 每个 USBConnection 的唯一 ID
    static std::stack<int> ids; // 管理可用 ID 的栈

    // 私有构造函数
    USBConnection(int id) : ID(id) {}

public:
    // 静态函数用于创建 USBConnection 对象
    static USBConnection* CreateUsbConnection() {
        if (ids.empty()) {
            return nullptr; // 没有更多可用的 USB 端口
        } else {
            int newID = ids.top();
            ids.pop();
            return new USBConnection(newID); // 返回具有下一个可用 ID 的新对象
        }
    }

    // 析构函数用于将 ID 归还到栈中
    ~USBConnection() {
        ids.push(ID);
    }

    // 获取 ID
    int get_id() const {
        return ID;
    }

    // 初始化栈，ID 为 {1, 2, 3}
    static void initialize() {
        while (!ids.empty()) {
            ids.pop(); // 先清空栈
        }
        ids.push(3);
        ids.push(2);
        ids.push(1);
    }
};

// 静态成员的定义 (用于存储 ID 的栈)
std::stack<int> USBConnection::ids;

#endif // USBCONNECTION_H
