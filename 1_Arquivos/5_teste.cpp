#include <iostream>
#include <string>
#include <fstream>
using namespace std;

/* Exercicio 5: implemente um programa que escriva
*  uma string num arquivo em c++
*/

int main(int argc, char *argv[])
{
	string nome = "Omar Latorre";
	ofstream out("arquivo.txt");
	out << nome;
	out.close();
	
	return 0;
}