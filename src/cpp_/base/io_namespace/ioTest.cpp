/**
 * Descriptions：io测试
 * <p>
 * Author：ChenME
 * Date：2017/4/9
 * Email：ibelieve1210@163.com
 */

#include <iostream>

using namespace std;

void ioTestInvoke() {

    int x = 0;
    cout << "请输入一个整数：" << endl;
    cin >> x;
    cout << oct << "八进制形式：" << x << endl;//输出8进制形式
    cout << dec << "十进制形式：" << x << endl;//输出10进制形式
    cout << hex << "十六进制形式：" << x << endl;//输出16进制形式

    cout << endl;
    bool y = false;
    cout << "请输入一个布尔值（0或1）" << endl;
    cin >> y;
    cout << boolalpha << y << endl;//输出bool值
}