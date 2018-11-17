#include "Funcoes.cpp"

int main(){

string filename,line, palavra;
set <string> words;
map <string,string> summary;


    cout<<"*** MAQUINA DE BUSCAS ***\n"
		 		<<"Autores:- THALLYS FELIPE GONCALVES BARBOSA - 2018080622 - PDS2 - TF1\n"
				<<"	- HUGO FERREIRA MARQUES - 2018014573 - PDS2 - TF1\n\n\n"
    		<<"-> DIGITE EM SEQUENCIA O NOME DOS ARQUIVOS QUE DESEJA INCLUIR, EM SEGUIDA DIGITE 0 PARA INICIAR A BUSCA:\n\n";

	while (cin>>filename and filename != "0"){    //funciona enquanto nomes de arquivos estiverem sendo inseridos
		AbrirArquivo(words,filename);
		SubstituirSet(words);
    SetToMap(words,summary,filename);
		words.clear();                                      //limpa o set "words" para que n�o confunda as palavras de um arquivo com de outro
 	}

    cout<<"\n-> DIGITE A PALAVRA QUE DESEJA BUSCAR: \n\n";
 	while(cin>>palavra){                           //funciona enquanto palavras a serem buscadas forem inseridas
 		PrintMap(summary,palavra);
	 }
	return 0;
}
