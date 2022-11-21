//#include <iostream> // 실습10-1
//using namespace std;
//
//template <class T>
//bool equalArrays(T x[], T y[], int n) { // 배열이 같은지 확인하는 함수
//    for (int i = 0; i < n; ++i) {
//        if (x[i] != y[i])
//            return false;
//    }
//    return true;
//}
//
//int main() {
//    int x[] = { 1,10,100,5,4 }; // 비교할 두 int 배열
//    int y[] = { 1,10,100,5,4 };
//    double a[] = { 0.1,2.3,4.5 }; // 비교할 두 double 배열
//    double b[] = { 5.3,-2.1,12.5 };
//
//    if (equalArrays(x, y, 5))cout << "같다" << endl; // int 배열 비교
//    else cout << "다르다" << endl;;
//    if (equalArrays(a, b, 5))cout << "char 배열 같다" << endl; // double 배열 비교
//    else cout << "char 배열 다르다" << endl;
//}