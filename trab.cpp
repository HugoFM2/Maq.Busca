#include "Funcoes.cpp"

int main(){

string filename,line, palavra, Palavra;
set <string> words;
map <string,string> summary;


    cout<<"*** MAQUINA DE BUSCAS ***\n"
		 		<<"Autores:- THALLYS FELIPE GONCALVES BARBOSA - 2018080622 - PDS2 - TF1\n"
				<<"	- HUGO FERREIRA MARQUES - 2018014573 - PDS2 - TF1\n\n\n"
    		<<"-> DIGITE EM SEQUENCIA O NOME DOS ARQUIVOS QUE DESEJA INCLUIR, EM SEGUIDA DIGITE 0 PARA INICIAR A BUSCA:\n\n";

	while (cin>>filename and filename != "0"){    //funciona enquanto nomes de arquivos estiverem sendo inseridos
		AbrirArquivo(words,filename);
		SubstituirSet(words);

		for(set<string>::iterator iter=words.begin(); iter!=words.end(); iter++){  //faz com que o iterator comece no in�cio do set e avance uma unidade por vez, at� o final
				summary[*iter] += "\n" + filename;                 //adiciona o nome do arquivo(valor) na "chave" palavra
		}
		words.clear();                                      //limpa o set "words" para que n�o confunda as palavras de um arquivo com de outro
 	}

    cout<<"\n-> DIGITE A PALAVRA QUE DESEJA BUSCAR: \n\n";
 	while(cin>>palavra){                           //funciona enquanto palavras a serem buscadas forem inseridas
 		cout<<summary[palavra]<<endl;              //retorna os valores a partir da key "palavra", no dicionario "summary
	 }
	return 0;
}
