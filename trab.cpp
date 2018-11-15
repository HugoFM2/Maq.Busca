#include <iostream> //cin e cout
#include <fstream>  //lidar com arquivos
#include <string>   //cadeia de caracteres
#include <regex>    //ferramente para procurar o padr�o de palavras
#include <stdio.h>  //necessário para tornar letras min�sculas
#include <ctype.h>  //idem
#include <set>      //container que armazena apenas uma c�pia, n�o tem repeti��o
#include <map>      //container do tipo key:value

using namespace std;

int main(){

	int i = 0;
	string filename,line, a, palavra,Palavra;
	set <string> words;
	smatch m;
	map <string,string> summary;
	regex pontuacao("(\\.|,|-|\\?)"); // detecta as pontuacoes

    cout<<"*** MAQUINA DE BUSCAS - THALLYS FELIPE GONCALVES BARBOSA - 2018080622 - PDS2 - TF1 ***\n\n\n";
    cout<<"-> DIGITE EM SEQUENCIA O NOME DOS ARQUIVOS QUE DESEJA INCLUIR, EM SEGUIDA DIGITE 0:\n\n";
	while (cin>>filename and filename != "0"){    //funciona enquanto nomes de arquivos estiverem sendo inseridos
		fstream file (filename);
		if (file.is_open()){                      //testa se o arquivo foi aberto com sucesso
 	   	while(file >> Palavra){	//Adiciona todas as palavras do texto a string "Palavra"
				Palavra = regex_replace(Palavra,pontuacao,""); // Remove pontuacao (ponto, virgula e hifen)
				for(int j = 0; j<Palavra.length();j++){ // Transformar todas as letras maiusculas em minusculas
					Palavra[j] = tolower(Palavra[j]);
				}
				words.insert(Palavra);

			}
		}
  	    file.close();

  	    set<string>::iterator iter;                          //define um iterator para deslocar pelo set "words"
		for(iter=words.begin(); iter!=words.end(); iter++){  //faz com que o iterator comece no in�cio do set e avance uma unidade por vez, at� o final
				summary[*iter] += "\n";                     //se houver, pega o valor e adiciona um "endl"
				summary[*iter] += filename;                 //e adiciona o nome do outro arquivo que tamb�m tem a palavra
		}
		words.clear();                                      //limpa o set "words" para que n�o confunda as palavras de um arquivo com de outro
 	}

    cout<<"\n-> DIGITE A PALAVRA QUE DESEJA BUSCAR: \n\n";
 	while(cin>>palavra){                           //funciona enquanto palavras a serem buscadas forem inseridas
 		cout<<summary[palavra]<<endl;              //retorna os valores a partir da key "palavra", no dicionario "summary
	 }
	return 0;
}
