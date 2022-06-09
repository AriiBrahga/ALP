#include <iostream>

using namespace std;

int main() {
	float n1, n2, n3, n4, media;
	cout << "Digite as notas do aluno" << endl;
	cin >> n1 >> n2 >> n3 >> n4;
	media = (n1 + n2 + n3 + n4) / 4;
	if (media >= 7) {
		cout << "Aprovado sua media foi de: " << media << endl;
	} else if (media < 7) {
		cout << "Reprovado estude mais";
	}
	return 0;
}