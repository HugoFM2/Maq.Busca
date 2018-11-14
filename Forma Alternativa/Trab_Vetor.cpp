#include "Funcoes.cpp"

int main(){

  vector<string> words; // vetor com as palavras do arquivo
  map<string,string> Dicionario; // a primeira string é a chave, ou seja, a palavra , e a segunda é o valor, ou seja, o nome do arquivo(pode ter mais de um)
  string arquivo;
  cout << "-> DIGITE EM SEQUENCIA O NOME DOS ARQUIVOS QUE DESEJA INCLUIR, EM SEGUIDA DIGITE 0:\n\n";
  while (cin >> arquivo and arquivo != "0" ) {    //funciona enquanto nomes de arquivos estiverem sendo inseridos
    words.clear();// limpa o vetor antes de comecar uma nova busca
    LerArquivo(words,arquivo);
    SubstituirVetor(words);
    Vector_to_Map(Dicionario,words,arquivo);
  }
  cout << "\n-> DIGITE A PALAVRA QUE DESEJA BUSCAR: \n\n";
  string palavra;
  while(cin >> palavra){                           //funciona enquanto palavras a serem buscadas forem inseridas
    cout << Dicionario[palavra] << endl;              //retorna os valores a partir da key "palavra", no dicionario "summary
  }

}
