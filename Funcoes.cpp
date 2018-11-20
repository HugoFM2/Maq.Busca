#include "Funcoes.h"

void AbrirArquivo(std::set <std::string> &words,std::string filename){
	try{ // parte protegia do codigo, caso o arquivo nao esteja aberto entra no catch
	std::fstream file (filename);
	std::string Palavra;
	if (file.is_open()){                      //testa se o arquivo foi aberto com sucesso
		while(file >> Palavra){	   //Adiciona todas as palavras do texto a string "Palavra"
			words.insert(Palavra);
		}
		file.close();
	}else {throw 1;}
}catch(int erro){std::cout<<"*ATENCAO*: O ultimo arquivo digitado nao foi encontrado, verifique se o mesmo existe e tente novamente.\n";} // mensagem exibida caso nao consiga abrir o arquivo
}

void SubstituirString(std::string &Palavra) {
	std::regex pontuacao("(\\.|,|!|-|\\?)"); // detecta as pontuacoes
	Palavra = std::regex_replace(Palavra,pontuacao,""); // Remove pontuacao (ponto, virgula, hifen e exclamacao)
	for(int j = 0; j<Palavra.length();j++){ // Transformar todas as letras maiusculas em minusculas
		Palavra[j] = tolower(Palavra[j]);
	}
}

void SubstituirSet(std::set <std::string> &words) {
	std::set <std::string> temp; // Set temporario para guardar as palavras novas enquanto recria o set com as palavras modificadas
	for (std::set<std::string>::iterator i=words.begin(); i!=words.end(); ++i) {
		std::string Palavra;
		Palavra = *i;
		SubstituirString(Palavra);

		temp.insert(Palavra);
	}
	words.clear(); // limpa o set antigo
	words = temp;
	temp.clear(); // deleta o set temporario
}


void SetToMap(std::set <std::string> words, std::map <std::string,std::string> &summary,std::string chave) {
	for (std::set<std::string>::iterator i=words.begin(); i!=words.end(); ++i) {  //faz com que o iterator comece no inicio do set e avance uma unidade por vez, ate o final
			summary[*i] += chave + "\n";
	}
}

void PrintMap( std::map <std::string,std::string> map,std::string chave) {
	std::cout<<map[chave]<<std::endl; //printa na tela os documentos em relaçao a determinada chave
}
