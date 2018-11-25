# Maq.Busca
Trabalho Pratico 2 de PDSII

  Thallys Felipe Gonçalves Barbosa - 2018080622 - PDS2 - TF1
  
  Hugo Ferreira Marques - 2018014573 - PDS2 - TF1


INSTRUÇÕES PARA EXECUÇÃO DA MÁQUINA DE BUSCA:

O Programa Maquina de Busca foi desenvolvido de forma que fosse o mais simples para o usuário utilizá-lo.
Antes de executar o programa é necessário checar se o compilador tem suporte a versão C++11, visto que algumas bibliotecas (ex.: <regex>) precisam dela.
Após a verificação da versão, o usuário precisa compilar o arquivo "trab.cpp" junto com o arquivo "Funcoes.cpp".
Uma janela de comandos se abrirá junto com as instruções para a busca de certas palavras em certos arquivos.
Na primeira etapa, é necessário que o usuário insira o nome do arquivo(com a extensão incluída, exemplo: hamlet.txt, e o arquivo precisa estar no mesmo diretório
do programa, no caso o arquivo trab.cpp) e caso ele deseja incluir novos arquivos
digitar enter e inserir o nome do outro arquivo. Quando ele desejar iniciar a busca, é necessário digitar 0 e enter.
Nessa próxima etapa, o usuário precisa digitar as palavras que deseja buscar.
Existem algumas restrições enquanto a busca, as palavras precisam ser enviadas uma a uma, não podem incluir nenhuma pontuação/acento, e todas as letras precisam estar com letra minuscula(exemplo, se você deseja
procurar pela palavra "Guarda-Chuva" deverá digitar no campo de busca a palavra "guardachuva"). Após cada inserção de palavra o usuário apertará a tecla
enter e, caso deseja procurar uma nova palavra inseri-la seguindo as mesmas instruções da primeira e, caso deseja encerrar o programa, deverá apenas fecha-lo.

INSTRUÇÕES PARA EXECUÇÃO DO TESTE DE UNIDADE:

Para executar o teste de unidade é necessário que o usuário tenha instalado o Framework CppUnit, para instalá-lo deve-se seguir as instruções do seguinte link (para Code::Blocks):
https://stackoverflow.com/questions/41924136/what-are-beginners-steps-for-cppunit-in-codeblocks
Após isso deve-se abrir o projeto e apenas executar a main.cpp, todos os testes construídos em cima do header func.h já estão funcionando perfeitamente.
