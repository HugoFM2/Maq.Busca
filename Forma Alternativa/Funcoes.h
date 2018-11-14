#include <iostream>
#include <fstream>  //lidar com arquivos
#include <vector>
#include <regex>    //ferramente para procurar o padrão de palavras
#include <map>
using namespace std;

void Substituir(string &Palavra); // Substitui da palavra as maiusculas para as minusculas e remove o hifen
void SubstituirVetor(vector<string> &vector); // Substitui cada palavra do vetor

void LerArquivo(vector<string> &Palavras,string arquivo);

void Vector_to_Map(map<string,string> &map,vector<string> vector,string valor); // Converte  vector para  map e adiciona o nome do arquivo(caso nao tenha) para o valor
