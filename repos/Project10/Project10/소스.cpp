#include <vector>
#include <iostream>

using namespace std;
void main()
{
	vector <int>::iterator iter;
	vector <int> v;

	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	
	iter = v.begin();

	cout << "첫번쨰 요소를 참조함 :" << *iter << endl;

	*iter = 20;
	cout << "첫 번째 요소의 값이 변경 되었음 : " << v[0] << endl;
	cout << "첫 번째 요소의 값이 변경 되었음 : " << *iter << endl;
	cout << "첫 번쨰 요소의 다음 요소를 사용함 : " << *iter << endl;
	cout << "\n 반복자를 이용하여 벡터의 요소 출력  : ";

	for (iter = v.begin(); iter != v.end(); iter++)
		cout << " " << *iter;
	cout << "\n";
}
}