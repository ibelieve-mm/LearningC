/**
 * Descriptions：链表的使用
 * 静态链表
 * <p>
 * Author：ChenME
 * Date：2017/4/16
 * Email：ibelieve1210@163.com
 */

#include <iostream>

using namespace std;

struct Weapon {
    int price;
    int atk;
    struct Weapon *next;
};

int main() {

    struct Weapon a, b, c, *head;

    a.price = 100;
    a.atk = 100;

    b.price = 200;
    b.atk = 200;

    c.price = 300;
    c.atk = 300;

    head = &a;
    a.next = &b;
    b.next = &c;
    c.next = NULL;

    struct Weapon *p;
    p = head;
    while (NULL != p) {
        cout << "Price:" << p->price << "\tAtk:" << p->atk << endl;
        p = p->next;
    }


    return 0;
}