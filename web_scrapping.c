#include <stdio.h>
#include<curl/curl.h>

int main(int argc, char const *argv[]){
//C web scrapping: https://www.zenrows.com/blog/web-scraping-c#extract-data
//documentação: https://curl.se/libcurl/c/curl_easy_init.html

CURL *curl = curl_easy_init();
//curl = curl_easy_setopt();
    printf("Hello, World");

    return 0;
}
