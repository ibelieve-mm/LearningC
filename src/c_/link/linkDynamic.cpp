/**
 * Descriptions：链表的使用
 * 动态链表
 * <p>
 * Author：ChenME
 * Date：2017/4/16
 * Email：ibelieve1210@163.com
 */

#include <iostream>
#include <malloc.h>

using namespace std;

struct Weapon {
    int price;
    int atk;
    struct Weapon *next;
};

struct Weapon *create() {
    struct Weapon *head;
    struct Weapon *p1, *p2;
    int n = 0;//记录当前链表中节点的个数
    p1 = p2 = (struct Weapon *) malloc(sizeof(struct Weapon));
    cin >> p1->price >> p1->atk;
    head = NULL;

    while (0 != p1->price) {
        n++;
        if (1 == n) {
            head = p1;
        } else {
            p2->next = p1;
        }

        p2 = p1;
        p1 = (struct Weapon *) malloc(sizeof(struct Weapon));
        cin >> p1->price >> p1->atk;
    }

    p2->next = NULL;
    return head;
}

void dynamicLinkInvoke() {

    struct Weapon *p;
    p = create();
    cout << "第一个值~~Price:" << p->price << "\tAtk:" << p->atk << endl;
}