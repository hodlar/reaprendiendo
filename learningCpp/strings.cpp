#include <iostream>
#include <string>

using namespace std;

int residuo(string num){
	int s = 0, i, n;
	for(i = 0; i < 8; i++)
	{
		n = (int)num[i];
		n = n - 48;
		s = s + (i*n);
	}
	n = s % 11;
	return n;
}

int main()
{
	char opcion = 'y', h;
	int res;
	string num;

	
	while(opcion == 'y'){
		cout << "Teclea numero" << endl;
		getline(cin >> ws, num);
		res = residuo(num);
		if(res < 10){
			h = (char) res;
			num+= (h+48);
		}
		else{
			num+= "X";
		}

		cout << "nuevo Num " << num << endl;
		cout << "repetimos? (y/n)" << endl;
		cin >> opcion;
	}
	

	/*
	cout << "basura " << endl;
	cin.getline(name1, 10);
	cout << "basura1 es" << name1 << endl;
	cout << "la letra plz  " << endl;
	cin.getline(opcion, 1);
	cout << "la letra " << opcion << endl;
	cout << "basura 1 again plz" << endl;
	cin.getline(name1, 10);
	cout << "basura1 again " << name1 << endl;
	*/
	return 0;
}
