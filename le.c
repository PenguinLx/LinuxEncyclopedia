#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include<unistd.h>
#include <sys/stat.h>
#include "doc.h"



//TODO:deixar a documentação mais completa 
//TODO:começar a implementar pointers para otimizar o programa e não usar tanta memória ao executar

//DONE:MUDAR PARA A PASTA DOCUMENTOS DO USUÁRIO
//nome da pasta do diretório que vai ser criado
//diretório onde os arquivos .txt ficarão armazenados


int main(int argc, char const *argv[])
{
 const char *homeDir = getenv("HOME");//pegar o diretório home do usuário
   char fullPath[60]; 
         const char *docDir = "/Documents/LeTexts/";//o caminho o padrão
        //  se o idioma do sistema for português
        if (strcmp(getenv("LANG"), "pt_PT.UTF-8") == 0 || strcmp(getenv("LANG"), "pt_BR.UTF-8") == 0) {
            docDir = "/Documentos/LeTextos/";
            //o caminho muda para isso daqui
        }
        else{
             snprintf(fullPath, sizeof(fullPath), "%s%s", homeDir,docDir);
             //homedir e docdir sao escritos no fullpath com com o tamanho maximo de 60 caracteres que é o tamanho do char fullpath
             //o sizeof(FullPath) é o tamanho do fullpath pois o segundo argumento é o tamanho máximo de caracteres que serão escritos ao buffer(variavel fullpath)
        }

        snprintf(fullPath, sizeof(fullPath), "%s%s", homeDir, docDir);
        
        //const char *finalpath = fullPath;
        
      
        printf(fullPath);
 
      
      
    
    
    //TODO:implementar um check para ver se o diretório(Textos) já existe,se já existe imprimir que já existe,se não existe criar e imprimir que foi criada
    mkdir(fullPath, S_IRWXU);//S_IRWXU quer dizer leitura/escrita e execução permitidas
    sleep(0.5);
    //printf("Pasta \'Textos' criada com sucesso!\n");
printf("\n\nBem Vindo\n");
printf("Este é o Linux Encyclopedia(LE)\n\n");
printf("-h para a lista de comandos!\n\n");

FILE *fptr;
 sleep(1);

     for (int i = 1; i < argc; i++){

  if (strcmp(argv[i], "--pacotes") == 0 || strcmp(argv[i], "-p") == 0) {

        pkgPT();
        
         printf("Quer salvar em um arquivo?(S/N) ");
         char escolha;
         scanf("%c",&escolha);
         if (escolha == 's' || escolha == 'S'){
            printf("\nO arquivo foi salvo na pasta LeTextos em /Documentos\n");
         char fileName[30] = "PKG.txt";
         strcat(fullPath,fileName);
           fptr = freopen(fullPath,"w",stdout);
            pkgPT();
             fclose(fptr);
              
 
  }
  else
  {
    printf("\nOk,Não Salvando!\n");
  }
  
    }  else if (strcmp(argv[i], "--diretorios") == 0 || strcmp(argv[i], "-dir") == 0) {
        dirPT();
        printf("Quer salvar em um arquivo?(S/N) ");
         char escolha;
         scanf("%c",&escolha);
         if (escolha == 's' || escolha == 'S'){
            printf("\nO arquivo foi salvo na pasta LeTextos em /Documentos\n");
         char fileName[30] = "DIR.txt";
         strcat(fullPath,fileName);
           fptr = freopen(fullPath,"w",stdout);
            dirPT();
             fclose(fptr);
  }
       else
  {
    printf("\nOk,Não Salvando!\n");
  }
    }  
    
    else if (strcmp(argv[i], "--compilar") == 0 || strcmp(argv[i], "-comp") == 0) {
        compCPT();
         printf("\nQuer salvar em um arquivo?(S/N) ");

          char escolha;
         scanf("%c",&escolha);
         if (escolha == 's' || escolha == 'S'){
            printf("\nO arquivo foi salvo na pasta LeTextos em /Documentos\n");
         char fileName[30] = "COMPC.txt";
         strcat(fullPath,fileName);
           fptr = freopen(fullPath,"w",stdout);
            compCPT();
             fclose(fptr);
             

  }
       else
  {
    printf("\nOk,Não Salvando!\n");
  }
    }
    else if (strcmp(argv[i], "--gerenciardir") == 0 || strcmp(argv[i], "-gdir") == 0) {
        GdirPT();
            printf("\nQuer salvar em um arquivo?(S/N) ");

    char escolha;
         scanf("%c",&escolha);
         if (escolha == 's' || escolha == 'S'){
            printf("\nO arquivo foi salvo na pasta LeTextos em /Documentos\n");
         char fileName[30] = "GDIR.txt";
         strcat(fullPath,fileName);
           fptr = freopen(fullPath,"w",stdout);
            GdirPT();
             fclose(fptr);
  }
        else
  {
    printf("\nOk,Não Salvando!\n");
  }
         }
         
         else if (strcmp(argv[i], "--linux") == 0 || strcmp(argv[i], "-lx") == 0) {
         LinuxPT();
           printf("\nQuer salvar em um arquivo?(S/N) ");
            char escolha;
         scanf("%c",&escolha);
         if (escolha == 's' || escolha == 'S'){
          printf("\nO arquivo foi salvo na pasta LeTextos em /Documentos\n");
         char fileName[30] = "LINUX.txt";
         strcat(fullPath,fileName);
           fptr = freopen(fullPath,"w",stdout);
            LinuxPT();
             fclose(fptr);
  }   }
         else if (strcmp(argv[i], "--dicaslx") == 0 || strcmp(argv[i], "-dx") == 0) {
         DicasLxPT();
           printf("\nQuer salvar em um arquivo?(S/N) ");
            char escolha;
         scanf("%c",&escolha);
         if (escolha == 's' || escolha == 'S'){
          printf("\nO arquivo foi salvo na pasta LeTextos em /Documentos\n");
         char fileName[30] = "DICASLX.txt";
         strcat(fullPath,fileName);
           fptr = freopen(fullPath,"w",stdout);
            DicasLxPT();
             fclose(fptr);

  
  }

 else
  {
    printf("\nOk,Não Salvando!\n");
  } 
        
        
     } else if (strcmp(argv[i], "--help") == 0 || strcmp(argv[i], "-h") == 0) {
        helpPT();
   }
   
  
    else{
        printf("\nComando Desconhecido!");
        printf("\n-h para a lista de comandos!\n");
    }

    }  
     
 
    return 0;

}
