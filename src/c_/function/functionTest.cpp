/**
 * Descriptions：使用一个函数找出一个整形数组中的最大值和最小值
 * <p>
 * Author：ChenME
 * Date：2017/4/9
 * Email：ibelieve1210@163.com
 */

#include <iostream>

using namespace std;

int getMaxOrMinFun(int *arr, int count, bool isMax) {
    int temp = arr[0];
    for (int i = 1; i < count; i++) {
        if (isMax ? temp < arr[i] : temp > arr[i]) {
            temp = arr[i];
        }
    }
    return temp;
}

void funInvoke() {
    int arr[3] = {24, 5, 85};
    cout << getMaxOrMinFun(arr, 3, true) << endl;
    cout << getMaxOrMinFun(arr, 3, false) << endl;
}