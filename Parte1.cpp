/*

O sistema recebe como entrada um conjunto de arquivos de texto, que devem ser lidos, palavra após palavra,
para construir o índice invertido. Detalhes:
• Você pode assumir que os arquivos contém apenas caracteres que são letras (a-z e A- Z), números
(0-9), e caracteres de pontução (",", ".", "?", etc.).
• Você pode assumir que o texto nao tem acentos nem "ç".
• Apos ler cada palavra, você deve (i) transformar todas as letras maiúsculas em minúsculas e (ii) apagar
todos os caracteres que não são letras ou números. Por exemplo, depois de ler "Guarda-Chuva?", você
deve transformá-la em "guardachuva", antes de inseri-la no índice invertido. Desta forma, a mesma
palavra apresentada com letras minúsculas ou maiúsculas, ou que estão adjacentes a pontuação, não
serão diferenciadas.

*/
#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>
#include <ctype.h>
using namespace std;

int main() {
string palavras[5];
fstream inputStream;
inputStream.open("d2.txt");
string text;
int num_palavras = 0;
for(num_palavras=0; inputStream>>text;num_palavras++) // conta as palavras e registra no vetor 'palavras' todas elas
{
  for(int j = 0; j<text.length();j++){ // Transformar todas as letras maiusculas em minusculas
    text[j] = tolower(text[j]);
  }
palavras[num_palavras]=text;

}
cout << palavras[4];

inputStream.close();
return 0;
}
