#include "Funcoes.h"
void Substituir(string &Palavra){ // Transforma as palavras para o formato suportado
  regex pontuacao("(\\.|,|-|\\?)");
  Palavra = regex_replace(Palavra,pontuacao,""); // Remove pontuacao (ponto, virgula e hifen)
  for(int j = 0; j<Palavra.length();j++){ // Transformar todas as letras maiusculas em minusculas
    Palavra[j] = tolower(Palavra[j]);
  }
}

void LerArquivo(vector<string> &Palavras,string arquivo){ // Le o arquivo, substitui pro formato e coloca no vetor
  fstream file;
  file.open(arquivo);
  string Palavra;
  while(file >> Palavra){
    Palavras.push_back(Palavra);
  }
  file.close();
}

void SubstituirVetor(vector<string> &vector){ // Transforma todo o vetor para o formato suportado
  for (int i = 0; i != vector.size(); ++i) {
    Substituir(vector[i]);
  }
}

void Vector_to_Map(map<string,string> &map,vector<string> vector,string valor){
  for (int i = 0; i != vector.size(); ++i){
    if (map[vector[i]].find(valor) == string::npos ) { // procura se o nome do arquivo (valor) ja foi adicionado a chave
      map[vector[i]]+=valor + " ";
    }
  }
}
