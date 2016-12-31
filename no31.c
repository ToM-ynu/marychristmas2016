#include<stdio.h>
#include<string.h>
#include<curl/curl.h>
#include<stdlib.h>
int main(int argc, char*argv[]){
  CURL *curl;
  curl=curl_easy_init();
  curl_easy_setopt(curl,CURLOPT_URL,argv[1]);
  curl_easy_setopt(curl,CURLOPT_SSL_VERIFYPEER,0);

  curl_easy_perform(curl);

  curl_easy_cleanup(curl);

  return EXIT_SUCCESS;
}
