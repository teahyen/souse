#include <iostream>
#include <fstream>
using namespace std;

struct insa {
    char name[20];
    int age;
    char address[20];
};

int main()
{
    insa man;
    ifstream fin;

    int pos;

    bool bFind = true;

    fin.open("..\13_12\insa.bin");

    if (fin.fail()) {
        cout << ("Error: file open error") << endl;
        return;
    }

    cout << "# ���Ͽ��� ���° ��ġ�� �����͸� �а� ��������? => ";
    cin >> pos;

    for (int i = 0; i < pos; i++) {
        fin.read((char*)&man, sizeof(man));
        if (!fin.good()) {
            bFind = false;
            break;
        }
    }
    if (bFind == true)
        cout << man.name << " " << man.age << " " << man.address << endl;
    else
        cout << "ã���� �ϴ� �����Ͱ� �����ϴ�." << endl;

    fin.close();

    return(0);
}