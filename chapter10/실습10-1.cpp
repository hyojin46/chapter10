//#include <iostream> // �ǽ�10-1
//using namespace std;
//
//template <class T>
//bool equalArrays(T x[], T y[], int n) { // �迭�� ������ Ȯ���ϴ� �Լ�
//    for (int i = 0; i < n; ++i) {
//        if (x[i] != y[i])
//            return false;
//    }
//    return true;
//}
//
//int main() {
//    int x[] = { 1,10,100,5,4 }; // ���� �� int �迭
//    int y[] = { 1,10,100,5,4 };
//    double a[] = { 0.1,2.3,4.5 }; // ���� �� double �迭
//    double b[] = { 5.3,-2.1,12.5 };
//
//    if (equalArrays(x, y, 5))cout << "����" << endl; // int �迭 ��
//    else cout << "�ٸ���" << endl;;
//    if (equalArrays(a, b, 5))cout << "char �迭 ����" << endl; // double �迭 ��
//    else cout << "char �迭 �ٸ���" << endl;
//}