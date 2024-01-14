#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include<unistd.h>
#include <sys/stat.h>
#include "doc.h"
//TODO:configurar o repositório do git e fazer commit do projeto quando chegar num nível aceitável


//DONE:criar uma pasta no início do programa onde vão ser armazenados os arquivos .txt que vão ser salvos
//DONE:função para escrever arquivos txt e pegar o conteúdo de outras funções implementado
//DONE:colocar os printfs das opções em funções separadas
//DONE:trocar goto por do while(evitar usar goto,já que não é uma boa prática)
//DONE:descobrir como escrever o texto de uma função inteira dentro de um arquivo
//DONE:chamar as funções por argumentos,exemplo:(pacotes) para ver os pacotes
//TODO:implementar um comando para baixar o texto de uma função(printfs) e colocar em um arquivo .txt
//TODO:deixar a documentação mais completa 
//TODO:começar a implementar pointers para otimizar o programa e não usar tanta memória ao executar


void dwFile(){
//tentando escrever a função dentro do arquivo
//a função está escrevendo certinho do jeito que precisa,só tenho que ver como fazer com argumentos agora (:
//TODO:talvez implementar um if para ver qual é a opção que o usuário escolheu tipo(pkg) para depois baixar a função escolhida
//TODO:ou colocar separado em cada um deles um if perguntando se quer ou não baixar o arquivo que dai executa o código de arquivo especifico para cada uma das funções lá dentro
    FILE *fileptr;
    //fileptr = fopen("texto.txt","w"); <-linha não mais neccessária
  //fileptr = freopen("G_diretorios.txt","w",stdout);
    //pkg();
    //dir();
    //compC();
    //Gdir();
    fclose(fileptr);

    freopen("/dev/tty", "w", stdout); //  no Linux,"/dev/tty"

    printf("O texto foi salvo em um arquivo .txt\n");
}
//DONE:MUDAR PARA A PASTA DOCUMENTOS DO USUÁRIO
//nome da pasta do diretório que vai ser criado
//diretório onde os arquivos .txt ficarão armazenados
//TODO:colocar as condições de downloads dos arquivos .txt

int main(int argc, char const *argv[])
{
 const char *homeDir = getenv("HOME");//pegar o diretório home do usuário
   char fullPath[60]; 
         const char *docDir = "/Documents/LeTexts";//o caminho o padrão
        //  se o idioma do sistema for português
        if (strcmp(getenv("LANG"), "pt_PT.UTF-8") == 0 || strcmp(getenv("LANG"), "pt_BR.UTF-8") == 0) {
            docDir = "/Documentos/LeTextos";
            //o caminho muda para isso daqui
        }
        else{
             snprintf(fullPath, sizeof(fullPath), "%s%s", homeDir,docDir);
        }

        snprintf(fullPath, sizeof(fullPath), "%s%s", homeDir, docDir);
        
        //const char *finalpath = fullPath;
        
        // Compara o primeiro argumento (argv[1]) com "-p"
        printf(fullPath);
 
        // Compara o primeiro argumento (argv[1]) com "-p"
      
    
    //dwFile();
    //TODO:implementar um check para ver se o diretório(Textos) já existe,se já existe imprimir que já existe,se não existe criar e imprimir que foi criada
    mkdir(fullPath, S_IRWXU);//S_IRWXU quer dizer leitura/escrita e execução permitidas
    sleep(0.5);
    //printf("Pasta \'Textos' criada com sucesso!\n");
printf("\n\nBem Vindo\n");
printf("Este é o Linux Encyclopedia(LE)\n\n");

 sleep(1);
//TODO:implementar a documentação de Linux() e colocar no switch case
// printf("\n");
// scanf(" %d",&escolha);

// switch (argv)
// {
// case 'pkg':
// pkg();
//     break;

// default:
//     break;
// }
  if (argc >= 2) {
    if (strcmp(argv[1], "--pacotes") == 0 || strcmp(argv[1], "-p") == 0) {
        pkgPT();
    } else if (strcmp(argv[1], "--diretorios") == 0 || strcmp(argv[1], "-dir") == 0) {
        dirPT();
    } else if (strcmp(argv[1], "--compilar") == 0 || strcmp(argv[1], "-comp") == 0) {
        compCPT();
    } else if (strcmp(argv[1], "--gerenciardir") == 0 || strcmp(argv[1], "-gdir") == 0) {
        GdirPT();
    } else if (strcmp(argv[1], "--linux") == 0 || strcmp(argv[1], "-lx") == 0) {
        LinuxPT();
    } else if (strcmp(argv[1], "--help") == 0 || strcmp(argv[1], "-h") == 0) {
        helpPT();
    } else {
        printf("Comando desconhecido\n");
        printf("-h para a lista de comandos");
    }
    //salvar os arquivos na pasta LeText ou LeTextos
    if (argc >= 3 && ((strcmp(argv[2], "--save") == 0 || strcmp(argv[2], "-sv") == 0) ||(strcmp(argv[3], "--save") == 0 || strcmp(argv[3], "-sv") == 0)) && (strcmp(argv[1], "--pacotes") == 0 || strcmp(argv[1], "-p") == 0)) {
        FILE *fileptr;
        char fileName[20] = "/pkg.txt";
        strcat(fullPath,fileName);
          fileptr = freopen(fullPath,"w",stdout);
    pkgPT();
    //dir();
    //compC();
    //Gdir();
    fclose(fileptr);

    freopen("/dev/tty", "w", stdout);
        
    }

    else if (argc >= 3 && ((strcmp(argv[2], "--save") == 0 || strcmp(argv[2], "-sv") == 0) ||(strcmp(argv[3], "--save") == 0 || strcmp(argv[3], "-sv") == 0)) && (strcmp(argv[1], "--diretorios") == 0 || strcmp(argv[1], "-dir") == 0)) {
        FILE *fileptr;
        char fileName[20] = "/diretorios.txt";
        strcat(fullPath,fileName);
          fileptr = freopen(fullPath,"w",stdout);
    //pkgPT();
    dirPT();
    //compC();
    //Gdir();
    fclose(fileptr);

    freopen("/dev/tty", "w", stdout);
        
    }
    
} else {
    printf("Faltam argumentos\n\n");
    printf("-h para lista de comandos");
}

 //ou colocar as condições de baixar arquivos todas juntas aqui
   
    return 0;

}
