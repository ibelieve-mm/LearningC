/**
 * Descriptions��λ����
 * <p>
 * Author��ChenME
 * Date��2017/4/16
 * Email��ibelieve1210@163.com
 */

/**
 * & ��λ��
 * | ��λ��
 * ^ ��λ���
 * ~ ��λȡ��
 * << ����
 * >> ����
 */

#include <iostream>

void andBitOperation();

void orBitOperation();

void xorBitOperation();

void leftMove();

using namespace std;


int main() {

    //������
    andBitOperation();

    // ��λ��
    orBitOperation();

    // ��λ���
    xorBitOperation();

    //��������
    leftMove();


    return 0;
}

void leftMove() {//���򣬸�λ��������λ��0

    cout << "\n�������㣺" << endl;

    // 1. ��һ��������2��n�η���
    int a = 3;  //00000000 00000000 00000000 00000011
    cout << "a����ǰ��" << a << endl;
    a = a << 4; //00000000 00000000 00000000 00110000
    cout << "a����4λ��" << a << endl;
}

void xorBitOperation() {

    cout << "\n��λ������㣺" << endl;

    int a = 9;      //00000000 00000000 00000000 00001001
    int b = 5;      //00000000 00000000 00000000 00000101
    int c = a ^b;   //00000000 00000000 00000000 00001100
    cout << a << " ^ " << b << " �Ľ���ǣ�" << c << endl;

    // 1. ��λ��ת
    cout << (a ^ 0xFF) << endl;

    // 2. ��ֵ����
    cout << "��ֵ����ǰ��a=" << a << ", b=" << b << endl;
    a = a ^ b;
    b = b ^ a;
    a = a ^ b;
    cout << "��ֵ������a=" << a << ", b=" << b << endl;
}

void orBitOperation() {

    cout << "\n��λ�����㣺" << endl;

    int a = 9;      //00000000 00000000 00000000 00001001
    int b = 5;      //00000000 00000000 00000000 00000101
    int c = a | b;  //00000000 00000000 00000000 00001101
    cout << a << " | " << b << " �Ľ���ǣ�" << c << endl;

    // 1. ����һ������ָ��λ
    cout << (a | 0xFF) << endl;
}

void andBitOperation() {

    cout << "\n��λ�����㣺" << endl;

    int a = 4;      //00000000 00000000 00000000 00000100
    int b = 7;      //00000000 00000000 00000000 00000111
    int c = a & b;  //00000000 00000000 00000000 00000100
    cout << a << " & " << b << " �Ľ���ǣ�" << c << endl;

    // 1. Ѹ������
    cout << (a & 0) << endl;

    // 2. �������ݵ�ָ��λ
    cout << (b & 2) << endl;

    // 3. �ж���ż�ԣ���һ����&1��������Ϊ1������Ϊ���������Ϊ0�������Ϊż����
    cout << (b & 1) << endl;
}