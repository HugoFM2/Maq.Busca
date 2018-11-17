#include "MyFirstTestCase.h"
#include "func.h"

UnitTestsPDS::UnitTestsPDS()
{
    //ctor
}

UnitTestsPDS::~UnitTestsPDS()
{
    //dtor
}

void UnitTestsPDS::testNoFile(){ //testa o metodo AbrirArquivo() quando nao encontra um arquivo
    string filename="doesntexist.txt"; //nome de arquivo inexistente
    set<string> words; //declara o set que entra na funçao
    set<string> temp; //cria um set vazio
    AbrirArquivo(words, filename);
    CPPUNIT_ASSERT(words==temp); //algo for inserido no set words dentro do metodo, o teste falha
}

void UnitTestsPDS::testWithFile(){ //testa se o metodo AbrirArquivo() esta abrindo corretamente e atribuindo corretamente ao set
    string filename2("exist.txt"); //insere o nome de um arquivo exitente
    set<string> words;
    set<string> temp; //coloca o conteudo esperado que words tenha apos abrir o aruqivo com sucesso
    temp.insert("palavra");
    AbrirArquivo(words, filename2);
    CPPUNIT_ASSERT(words==temp); //testa se o metodo abriu o arquivo corretamente e passou corretamente pro set
}

void UnitTestsPDS::testAlteracaoString(){ //testa se o metodo SubstituirString() esta removendo as pontuacoes e transformando em minuscula corretamente
    string palavra; //palavra que sera testada nas assertivas
    string expected; //palavra alterada para testar se o metodo alterou corretamente

    palavra="CACHORRO";
    expected="cachorro";
    SubstituirString(palavra);
    CPPUNIT_ASSERT_EQUAL(expected, palavra);

    palavra="b02oRR$@#%?ach8a";
    expected="borracha";
    SubstituirString(palavra);
    CPPUNIT_ASSERT_EQUAL(expected, palavra);

    palavra="012345TESTENUMERO6789";
    expected="testenumero";
    SubstituirString(palavra);
    CPPUNIT_ASSERT_EQUAL(expected, palavra);

    palavra="@#$oI%&";
    expected="oi";
    SubstituirString(palavra);
    CPPUNIT_ASSERT_EQUAL(expected, palavra);

    palavra="QU3em?";
    expected="quem";
    SubstituirString(palavra);
    CPPUNIT_ASSERT_EQUAL(expected, palavra);

    palavra="GU4ARDa-CHUV7A";
    expected="guardachuva";
    SubstituirString(palavra);
    CPPUNIT_ASSERT_EQUAL(expected, palavra);

    palavra="+98754FI.,M6512!@#$%&*";
    expected="fim";
    SubstituirString(palavra);
    CPPUNIT_ASSERT_EQUAL(expected, palavra);
}

void UnitTestsPDS::testSubstSet(){ //testa se o método esta recebendo corretamente o set e alterando ele pra um set sem os caracteres especiais
    set<string> errado; //set a ser alterado
    errado.insert("palavra1");
    errado.insert("123456ALCE@");
    set<string> correto; //set esperado
    correto.insert("palavra");
    correto.insert("alce");
    CPPUNIT_ASSERT(!(errado==correto)); //teste antes da substituicao
    SubstituirSet(errado);
    CPPUNIT_ASSERT(errado==correto); //pos substituicao

}

void UnitTestsPDS::testSetToMap(){ //testa se o metodo de transferir o set para o map e atrelar ao nome do arquivo esta funcionando corretamente
    set<string> temp;//set com palavras aleatorias para o teste
    temp.insert("ovo");
    temp.insert("manteiga");
    string filename="nomedearquivoteste"; //nome de arquivo para teste
    map<string,string> index;
    SetToMap(temp, index, filename);
    CPPUNIT_ASSERT(index["ovo"]==filename+"\n");
    CPPUNIT_ASSERT(index["manteiga"]==filename+"\n");
    CPPUNIT_ASSERT_ASSERTION_FAIL(CPPUNIT_ASSERT(index["manteiga"]==filename));//testa se a funcao esta inserindo o espaco entre os nomes de arquivo corretamente
}

