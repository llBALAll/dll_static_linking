// simples programa pra usar a funcao da lib
// Eh necessario declarar apenas os prototipos das funcoes que ira utilizar;
// Codigo mais simples porem eh necessario linkar o executavel com o arquivo (.lib) da dll;
// Eh possivel ver a dependencia da dll (dumpbin.exe /dependents EXECUTAVEL.EXE);
// Caso haja uma modificacao interna das funcoes da lib mas nao no prototipo das funcoes 
// EH necessario recompilar o EXE que utiliza a lib para poder usufruir das novas alteracoes;

#include ".\libstatic\libstatic.h"

// passa o caminho da lib para o linker, dessa forma nao precisando editar o arquivo .bat de build incluindo o caminho da lib
#pragma comment(lib, ".\\libstatic\\libstatic.lib")

//void hello();

int main() {
	
	hello();

	return 0;
}