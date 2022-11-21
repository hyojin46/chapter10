//#include <iostream> //예제10-7
//#include <string>
//using namespace std;
//
//template <class T>
//class MyStack
//{
//    int tos;  //top of stack
//    T data[100];  //t타입의 배열, 스택 크기는 100
//
//public:
//    MyStack();
//    void push(T element);  //T타입의 원소 element를 data[]배열에 삽입
//    T pop();  //스택의 탭에 있는 데이터를 data[]배열에서 리턴
//};
//
//template <class T>
//MyStack<T>::MyStack() { tos = -1; }  //생성자 스택은 비어 있음
//
//template <class T>
//void MyStack<T>::push(T element)
//{
//    if (tos == 99)  //overflow발생!
//    {
//        cout << "stack full";
//        return;
//    }
//    tos++;
//    data[tos] = element;
//}
//
//template <class T>
//T MyStack<T>::pop()
//{
//    T retData;
//    if (tos == -1)  //underflow발생!!
//    {
//        cout << "stack empty";
//        return 0;  //생략 가능
//    }
//    retData = data[tos--];
//    return retData;
//}
//
//class Point
//{
//    int x, y;
//public:
//    Point(int x = 0, int y = 0) { this->x = x; this->y = y; }  
//        void show() { cout << "(" << x << ", " << y << ")\n"; }
//};
//
//
//int main()
//{
//    MyStack<int*> ipStack;  //int *만 저장하는 스택
//    int* p = new int[3];
//    for (int i = 0; i < 3; i++) p[i] = i * 10;  //0, 10, 20으로 초기화
//
//
//    ipStack.push(p);  //포인터 푸시
//    int* q = ipStack.pop();  //포인터 팝
//    for (int i = 0; i < 3; i++) cout << q[i] << ' ';
//    cout << "\n";
//    delete[]p;  //p 소멸
//
//    MyStack<Point> pointStack;  //Point 객체만 저장하는 스택
//    Point a(2, 3), b;
//    pointStack.push(a);  //Point 객체 푸시, 복사되어 저장
//    b = pointStack.pop();  //Point 객체 팝
//    b.show();
//
//    MyStack<Point*> pStack;  //Point *만 저장하는 스택
//    pStack.push(new Point(10, 20));  //동적 생성 Point 객체 푸시, 
//    Point* pPoint = pStack.pop();//Point 객체의 포인터 팝
//    pPoint->show();
//
//    MyStack<string> stringStack;  //문자열만 저장하는 스택
//    string s = "C++";
//    stringStack.push(s);
//    stringStack.push("java");
//    cout << stringStack.pop() << " ";
//    cout << stringStack.pop() << "\n";
//}