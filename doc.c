#include <stdio.h>
//aqui fica a implementação das funções,a definição das funções,o que as funções vão fazer
//TODO:adicionar os docs em inglês e fazer com que o usuaŕio possa escolher o idioma adicionando um parametro
char pkgPT(){

printf("Pacotes - obs:para mais informações use man + <pacote manager> no terminal para ter as informações completas dos gerenciadores de pacotes.\n\n");
printf("Instalação: \n\n");

printf("para instalar um pacote,depende de sua distro,aqui as mais conhecidas:\n\n");
printf("Ubuntu: sudo apt install <nome do pacote>\n\n Arch: sudo pacman -S <nome do pacote>\n\n Fedora: sudo dnf install <nome do pacote>\n\n Alpine: sudo apk add <nome do pacote>\n\n");

printf("Remover Pacotes:\n\n");

printf("Ubuntu: sudo apt remove <nome do pacote>\n\n Arch: sudo pacman -R <nome do pacote>\n\n Fedora: sudo dnf remove <nome do pacote>\n\n Alpine: sudo apk del <nome do pacote>\n\n");

} 

char dirPT(){

printf("Diretórios:\n\n");

printf("Os diretórios do linux funcionam de forma diferente do que o windows.\n No Linux os diretórios funcionam em forma de pasta como /home,/var,aqui está o que cada um deles faz: \n\n");

printf("\"/:\" O / é a raiz do sistema,onde todas as outras pastas vão estar.\n\n");

printf("/home: essa pasta é a pasta principal,é onde tudo vai estar como:Downloads,Documentos,Desktop,Imagens,Músicas e Videos.");

}

char compCPT(){
printf("Compilação de um programa C:\n\n");
printf("Para compilar um programa escrito em C será usado o compilador gcc(Gnu C Compiler) e o comando vai ser:\n\n gcc <arquivo c exemplo: le.c> -o <nome do arquivo compilado>\n obs:tenha certeza que gcc está instalado\n"); 

}

char GdirPT(){
printf("Gerenciamento de diretórios:\n\n");
printf("Mudar diretório(change directory)\n\n");
printf("cd <diretório>\n\nexemplo: cd Documentos/pdfs\n\n");

printf("Criar diretório:\n\n");
printf("mkdir <nome do diretorio>\n\n");

printf("Deletar Diretório:\n\n");
printf("rm -R <diretório>");

}

char LinuxPT(){
printf("O que é Linux?\n\n");

}
char helpPT(){
    printf("Help\n\n");

    printf("Comandos:\n\n");
    
    printf("Informações sobre pacotes:  --pacotes ou -p\n\n");

    printf("Informações sobre diretórios:  --diretorios ou -dir\n\n");

    printf("Informações de compilação de um programa C: --compilar ou -comp\n\n");

    printf("Informações sobre como gerenciar diretórios: --gerenciardir ou -gdir\n\n");

    printf("Informações sobre Linux: --linux ou -lx\n\n");

    printf("Salvar as informações escolhidas em um arquivo .txt(vai estar em /Documentos/LeTexto): --save ou -sv\n\n");

    printf("Mostrar essa tela de ajuda: --help ou -h");

    
}
