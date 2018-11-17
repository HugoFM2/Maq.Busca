#include <iostream> //cin e cout
#include <fstream>  //lidar com arquivos
#include <regex>    //ferramente para procurar o padr�o de palavras
#include <stdio.h>  //necessário para tornar letras min�sculas
#include <ctype.h>  //idem
#include <set>      //container que armazena apenas uma c�pia, n�o tem repeti��o
#include <map>      //container do tipo key:value

using namespace std;

void AbrirArquivo(set <string> &words,string filename); // Abre o arquivo e coloca todas as palavras em um set
void SubstituirString(string &Palavra); // Formata a palavra para os parametros de busca
void SubstituirSet(set <string> &words); // Formata o set inteiro com as palavras formatadas
void SetToMap(set <string> set, map <string,string> &map,string chave);// Converte o set em map, sendo as palavras do set o valor e a string chave a chave
void PrintMap( map <string,string> map,string chave); // Imprime o valor dando-se sua chave
