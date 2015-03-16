#include <iostream>
using namespace std;
		//variables for words
		string adj1;
		string adj2;
		string n1;
		string v1;
		string n2;
		string n3;
		string v2;
		string n4;

int main() {

		//asking for words
		cout <<"adjective:";
		cin >> adj1;

		cout <<"noun:";
		cin >> n1;

		cout <<"adjective:";
		cin >> adj2;

		cout <<"verb:";
		cin >> v1;

		cout <<"noun:";
		cin >> n2;

		cout <<"noun:";
		cin >> n3;

		cout <<"verb:";
		cin >> v2;

		cout <<"noun:";
		cin >> n4;

		//say story with variable values
		cout <<"Copper\n";
		cout <<"Copper is a very " << adj1 << ", " << n1 << ".\n";
		cout <<"It can be used to " << v1 <<  " a " << n2;
		cout <<" and " << v2;
		cout << " a " << n3;
		cout <<".";
		cout <<"It also is a very " << adj2 << " " << n4 << ".";


	}


