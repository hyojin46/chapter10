//#include <iostream> //�ǽ�10-5
//#include <map>
//#include <string>
//using namespace std;
//
//int main() {
//    map<string, string> dic; //�������̳� ����
//
//    while (1) {
//        char menu;
//        string name, mean;
//        cout << "=========================================" << endl;
//        cout << "�ܾ� �߰� : 1, �ܾ� �׽�Ʈ : 2, ���� : 3 " << endl;
//        cout << "=========================================" << endl;
//        cout << "�ϳ��� �����ϼ��� : ";
//        cin >> menu;
//
//        switch (menu) {
//        case '1':
//            cout << "�߰��� �ܾ�: ";
//            cin>>name;
//            cout << "�߰��� �ǹ�: ";
//            cin>>mean;
//            cout << endl;
//            dic.insert(make_pair(name, mean));
//            break;
//        case '2':
//            cout << "�ܾ �Է��Ͻÿ�: ";
//            cin>> name;
//            mean = dic.at(name);
//            cout<<name<<"�� �ǹ̴�"<<mean<<endl;
//            cout << endl;
//            break;
//        case '3':
//            cout << "����Ϸ��� �ƹ�Ű�� �����ʽÿ� . . .";
//            return 0;
//        }
//    }
//}
//
