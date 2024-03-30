#include <stdio.h>
//aqui fica a implementação das funções,a definição das funções,o que as funções vão fazer
//TODO:adicionar os docs em inglês e fazer com que o usuaŕio possa escolher o idioma adicionando um parametro
char pkgPT(){

printf("Pacotes - obs:para mais informações use man + <pacote manager> no terminal para ter as informações completas dos gerenciadores de pacotes.\n\n");
printf("Instalação: \n\n");

printf("para instalar um pacote,depende de sua distro,aqui as mais conhecidas:\n\n");
printf("Debian/Ubuntu: sudo apt install <nome do pacote>\n\n Arch: sudo pacman -S <nome do pacote>\n\n Fedora: sudo dnf install <nome do pacote>\n\n Alpine: sudo apk add <nome do pacote>\n\n");

printf("Remover Pacotes:\n\n");

printf("Debian/Ubuntu: sudo apt remove <nome do pacote>\n\n Arch: sudo pacman -R <nome do pacote>\n\n Fedora: sudo dnf remove <nome do pacote>\n\n Alpine: sudo apk del <nome do pacote>\n\n");

printf("Procurar Pacotes:\n\n");

printf("Debian/Ubuntu: sudo apt search <palavra-chave>\n\n Arch: sudo pacman -Ss <palavra-chave>\n\n");

} 

char dirPT(){

printf("Diretórios:\n\n");

printf("Os diretórios do linux funcionam de forma diferente do que o windows.\n No Linux os diretórios funcionam em forma de pasta como /home,/var,aqui está o que cada um deles faz: \n\n");

printf("\"/:\" O / é a raiz do sistema,onde todas as outras pastas vão estar.\n\n");

printf("/home: essa pasta é a pasta principal,é onde tudo vai estar como:Downloads,Documentos,Desktop,Imagens,Músicas e Videos.\n\n");

}

char compCPT(){
printf("Compilação de um programa C:\n\n");
printf("Para compilar um programa escrito em C será usado o compilador gcc(Gnu C Compiler) e o comando vai ser:\n\n gcc <arquivo c exemplo: le.c> -o <nome do arquivo compilado>\n obs:tenha certeza que gcc está instalado\n");

printf("Há a opção de usar o Clang como compilador da mesma forma: clang <arquivo c> -o <nome do arquivo compilado>\n");

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

printf("Linux é um Kernel,o que pode ser considerado o núcleo do sistema operacional,o kernel é o que faz a comunicação entre o hardware e o software\nLinux normalmente trabalha em conjunto com o GNU que é um conjunto de vários softwares que junto com linux forma um sistema operacional\n\n");

printf("As pessoas normalmente se referem ao GNU/LINUX somente por Linux,mas o GNU é o sistema operacional e o LINUX é o kernel,já que o  Sistema Operacional GNU precisa de um kernel para funcionar,o Linux é usado em conjunto à ele que formam um Sistema Operacional Completo! ");
}
char DicasLxPT(){
printf("Dicas de Linux\n\n");

printf("neofetch: Neofetch é um programa de terminal para você visualizar as informações da sua distribuição e de seu hardware com uma imagem feita em caracteres ASCII do símbolo de sua distro\n uso: neofetch\n");

printf("wget: O wget é um programa de cli para fazer downloads de arquivos da internet diretamente do terminal\n uso: wget <link>\n");

}
char helpPT(){
    printf("Help\n\n");

    printf("Comandos:\n\n");
    
    printf("Informações sobre pacotes:  --pacotes ou -p\n\n");

    printf("Informações sobre diretórios:  --diretorios ou -dir\n\n");

    printf("Informações de compilação de um programa C: --compilar ou -comp\n\n");

    printf("Informações sobre como gerenciar diretórios: --gerenciardir ou -gdir\n\n");

    printf("Informações sobre Linux: --linux ou -lx\n\n");

    printf("Mostrar essa tela de ajuda: --help ou -h");

    
}
