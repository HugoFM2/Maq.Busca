#include "Leitura.h"
#include <regex>
#include <set>
#include <map>
#include <fstream>  //lidar com arquivos


string Leitura(string filename)
{
  int i = 0;
	string line, a, palavra;
	set <string> words;
	smatch m;
	map <string,string> summary;
	regex pattern ("[a-zA-Z0-9]+-?[a-zA-Z0-9]*"); //esse é o padrão para detectar números e letras e possivelmente um hífen no meio (palavras)
  while (cin>>filename and filename != "0"){    //funciona enquanto nomes de arquivos estiverem sendo inseridos
    fstream file (filename);
    if (file.is_open()){                      //testa se o arquivo foi aberto com sucesso
        while (getline(file,line)){           //pega cada linha do arquivo
        while (regex_search(line,m,pattern)){  //testa o padr�o de palavras com cada linha do arquivo
          for (string x : m) {               //passa cada palavra encontrada pelo padr�o para a vari�vel x
          while(x[i]){                       //pega cada caractere da palavra separadamente
            x[i] = tolower(x[i]);          //transforma os caracteres em letra min�scula, se poss�vel
            if (isalnum(x[i]) == 0){       //testa se o caractere � uma letra min�scula, uma letra mai�scula ou n�mero. Se n�o for:
              x.erase(x.begin()+i);      //apaga o caractere (no caso s� pode ser um h�fen, devido ao padr�o de palavra)
              i--;                       //volta uma unidade no iterator porque o caractere retirado diminuiu a string
            }
            i++;                           //avan�a para o pr�ximo caractere
          }
          i = 0;                             //volta o iterator para o primeiro caractere da pr�xima palavra que vier
          words.insert(x);                   //insere a palavra, agora apenas com n�meros e letras min�sculas, no set "words"
          line = m.suffix().str();           /*faz com que a pr�xima vez que a linha for lida a Leitura de uma palavra
                             a leitura comece logo ap�s a palavra anterior. Caso contr�rio, daria um infinite loop
                             com a mesma palavra */
          }
        }
      }
      }
        file.close();
        set<string>::iterator iter;                          //define um iterator para deslocar pelo set "words"
    for(iter=words.begin(); iter!=words.end(); iter++){  //faz com que o iterator comece no in�cio do set e avance uma unidade por vez, at� o final
      if (summary.count(*iter) == 0){                  //teste se j� existe cada palavra do set como uma key no map "summary"
        summary[*iter] = filename;                   //se n�o houver, cria uma key com a palvra, tendo o valor como o nome do arquivo
        //cout << summary[filename];
      }
      else {
        summary[*iter] += "\n";                     //se houver, pega o valor e adiciona um "endl"
        summary[*iter] += filename;                 //e adiciona o nome do outro arquivo que tamb�m tem a palavra
        //cout << summary[*iter];
      }

    }
    words.clear();                                      //limpa o set "words" para que n�o confunda as palavras de um arquivo com de outro


    for(map<int,int>::iterator itr = summary.begin(); itr !=summary.end();++itr){
      cout "aa";
    }

  }

}


string Busca(string palavra){
/*
  while(cin>>palavra){                           //funciona enquanto palavras a serem buscadas forem inseridas
    cout<<summary[palavra]<<endl;              //retorna os valores a partir da key "palavra", no dicionario "summary
  }
  */
}
