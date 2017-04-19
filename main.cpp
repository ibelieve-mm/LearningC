/**
 * Descriptions：对象成员
 * <p>
 * Author：ChenME
 * Date：2017/4/19
 * Email：ibelieve1210@163.com
 */

#include <iostream>
#include "src/cpp_/class_/class_member/Line.h"


using namespace std;

int main() {
    Line *p = new Line(1,2,3,4);

    p->printInfo();

    delete (p);
    p = NULL;

    return 0;
}