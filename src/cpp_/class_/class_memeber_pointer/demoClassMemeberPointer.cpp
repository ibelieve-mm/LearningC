/**
 * Descriptions：对象成员指针
 * <p>
 * Author：ChenME
 * Date：2017/4/22
 * Email：ibelieve1210@163.com
 */

#include <iostream>
#include "Line.h"

using namespace std;
using namespace class_member_pointer;

void classMemeberPointerInvoke() {
    Line *p = new Line(1, 3, 5, 7);

    cout << endl;

    p->printInfo();

    cout << endl;

    delete p;
    p = NULL;

    cout<<sizeof(p)<<endl;
    cout<<sizeof(Line)<<endl;
}