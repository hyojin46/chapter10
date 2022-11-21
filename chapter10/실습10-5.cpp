//#include <iostream> //실습10-5
//#include <map>
//#include <string>
//using namespace std;
//
//int main() {
//    map<string, string> dic; //맵컨테이너 생성
//
//    while (1) {
//        char menu;
//        string name, mean;
//        cout << "=========================================" << endl;
//        cout << "단어 추가 : 1, 단어 테스트 : 2, 종료 : 3 " << endl;
//        cout << "=========================================" << endl;
//        cout << "하나를 선택하세요 : ";
//        cin >> menu;
//
//        switch (menu) {
//        case '1':
//            cout << "추가할 단어: ";
//            cin>>name;
//            cout << "추가할 의미: ";
//            cin>>mean;
//            cout << endl;
//            dic.insert(make_pair(name, mean));
//            break;
//        case '2':
//            cout << "단어를 입력하시오: ";
//            cin>> name;
//            mean = dic.at(name);
//            cout<<name<<"의 의미는"<<mean<<endl;
//            cout << endl;
//            break;
//        case '3':
//            cout << "계속하려면 아무키나 누르십시오 . . .";
//            return 0;
//        }
//    }
//}
//
