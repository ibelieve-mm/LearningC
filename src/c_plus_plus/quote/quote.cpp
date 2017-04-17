/**
 * Descriptions��c++�����õ��÷�
 * <p>
 * Author��ChenME
 * Date��2017/4/16
 * Email��ibelieve1210@163.com
 */

#include <iostream>

using namespace std;

/** *************************************************************************************************************** */
/** *************************************************************************************************************** */



/**
 * ��������1
 * @param a
 * @param b
 */
void exchangeFun1(int *a, int *b) {
    int c = 0;
    c = *a;
    *a = *b;
    *b = c;
}

/**
 * ��������2
 * @param a
 * @param b
 */
void exchangeFun2(int &a, int &b) {
    int c = 0;
    c = a;
    a = b;
    b = c;
}

/** *************************************************************************************************************** */
/** *************************************************************************************************************** */

/**
 * �ṹ��Coor
 */
typedef struct {
    int x;
    int y;
} Coor;

void yinyongDemo();

int main() {
    yinyongDemo();
    return 0;
}

/**
 * c++�����������÷�
 */
void yinyongDemo() {

    /**
     * �����������͵����ã�ע�����ñ����ʼ����
     */
    int var0 = 3;
    int &b = var0;
    b = 10;
    cout << "�����������͵����� - a��ֵΪ��" << var0 << endl;


    /**
     * �ṹ�������
     */
    Coor mCoor;
    Coor &c = mCoor;
    c.x = 20;
    c.y = 10;
    cout << "�ṹ������� - ����Ϊ��(" << mCoor.x << "," << mCoor.y << ")" << endl;

    /**
     * ָ�����͵�����
     * ���� *&ָ�������� = ָ��;
     */
    int var1 = 10;
    int *p = &var1;
    int *&q = p;
    *q = 20;
    cout << "ָ�����͵����� - " << var1 << endl;

    /**
     * �����ں���������ʹ��
     */
    int var2 = 10;
    int var3 = 20;
//    exchangeFun1(&var2, &var3);
    exchangeFun2(var2, var3);
    cout << "�����ں���������ʹ�� - exchangeFun(10,20)=" << var2 << "," << var3 << endl;
}