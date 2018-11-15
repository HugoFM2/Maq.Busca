#include "Funcoes.h"

void AbrirArquivo(set <string> &words,string filename){
	fstream file (filename);
	string Palavra;
	if (file.is_open()){                      //testa se o arquivo foi aberto com sucesso
		while(file >> Palavra){	//Adiciona todas as palavras do texto a string "Palavra"
			words.insert(Palavra);
		}
	}
	file.close();
}
void SubstituirString(string &Palavra) {
	regex pontuacao("(\\.|,|-|\\?)"); // detecta as pontuacoes
	Palavra = regex_replace(Palavra,pontuacao,""); // Remove pontuacao (ponto, virgula, hifen e exclamacao)
	for(int j = 0; j<Palavra.length();j++){ // Transformar todas as letras maiusculas em minusculas
		Palavra[j] = tolower(Palavra[j]);
	}
}
void SubstituirSet(set <string> &words) {
	set <string> temp; // Set temporario para guardar as palavras novas enquanto recria o set com as palavras modificadas
	for (set<string>::iterator i=words.begin(); i!=words.end(); ++i) {
		string Palavra;
		Palavra = *i;
		SubstituirString(Palavra);

		temp.insert(Palavra);
	}
	words.clear(); // limpa o set antigo
	words = temp;
	temp.clear(); // deleta o set temporario
}