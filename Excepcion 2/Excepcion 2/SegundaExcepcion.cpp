#include <iostream>

using namespace std;

class MiExcepcion :public exception {

public:
	const char* what();


};

const char* MiExcepcion::what() {
	return "Error en el sistema";


}

int main() {
	cout << "Estamos trabajando con mi excepcion" << endl;

	cout << endl;

	try {
	
		int num = -1;
		if (num < 0) {
			throw MiExcepcion();//Creacion de Objeto Automatico
		}
		


	}
	catch (MiExcepcion& e) {
		cout << e.what() << endl;
	}
	system("pause");
	return 0;

}