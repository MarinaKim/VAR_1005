#include"var.h"

int main() {
	int n;
	cout << "enter the task num:";
	cin >> n;

	switch (n) {
	case 1: {
		var a(10);
		a = 15;
		a = 2.5;
		/*a = "hi";*/
		a.show();
	}break;

	case 2: {
		var a = "hello";
		a = 2.5;
		a.show();
	}break;

	case 3: {
		var a = "hello";
		var c = a + 10;
		c.show();
	}break;

	case 4: {
		/*var a = 15;*/
		var b = "hello";
		var c = 7.8;
		var d = "50";
		b = d + 15;
		b.show();
	}break;
	case 5: {
		var a = "25.5";
		/*var c = a+ 30;*/
		var c = a + 30;
		/*a.show();*/
		cout << endl;
		c.show();
		cout << endl;
		cout << "-----------------------------------------------" << endl;
	}break;
	case 6: {
		var d = 10;
		var m = d + "120";
		m.show();
		cout << "-----------------------------------------------" << endl;
		
	}break;
	case 7: {
		
	}break;
	}
	system("pause");
	return 0;
}