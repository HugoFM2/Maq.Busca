#include "Funcoes.cpp"

int main(){

  std::string filename,line, palavra;
  std::set <std::string> words;
  std::map <std::string,std::string> summary;

      std::cout<<"*** MAQUINA DE BUSCAS ***\n"
		 		   <<"Autores:- THALLYS FELIPE GONCALVES BARBOSA - 2018080622 - PDS2 - TF1\n"
				   <<"	- HUGO FERREIRA MARQUES - 2018014573 - PDS2 - TF1\n\n\n"
    		   <<"-> DIGITE EM SEQUENCIA O NOME DOS ARQUIVOS QUE DESEJA INCLUIR, EM SEGUIDA DIGITE 0 PARA INICIAR A BUSCA:\n\n";

  while (std::cin>>filename and filename != "0"){    //funciona enquanto nomes de arquivos estiverem sendo inseridos
		AbrirArquivo(words,filename);
		SubstituirSet(words);
    SetToMap(words,summary,filename);
		words.clear();                                      //limpa o set "words" para que n�o confunda as palavras de um arquivo com de outro
 	}

    std::cout<<"\n-> DIGITE A PALAVRA QUE DESEJA BUSCAR: \n\n";
 	    while(std::cin>>palavra){                           //funciona enquanto palavras a serem buscadas forem inseridas
 		     PrintMap(summary,palavra);
	    }
	return 0;
}
