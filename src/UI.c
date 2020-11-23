#include <stdio.h>
#include <stdlib.h>
#include "history.h"
#include "tokenizer.h"

void tokenazitator(char *userInput,List *list){
  printf("Input your string: \n>");
  fgets(userInput, 1000, stdin);
  add_history(list, userInput);
  char **tokens = tokenize(userInput);
  print_tokens(tokens);
  free_tokens(tokens);
}

void history_eyes(char *userInput, List *list){
  print_history(list);
  printf("Write the number of the token you want to see. \n>");
  fgets(userInput, 100, stdin);
  char *s = get_history(list, atoi(userInput));
  if(*s == '>'){ 
    printf("%i %s>",atoi(userInput),s);
  }
  else{
    printf("Result: %s", s);
    char **tokens = tokenize(s);
    print_tokens(tokens);
    free_tokens(tokens);
  }
}

void main(){
  char user_in[1000];
  List *list = init_history();
  printf("Hello there, welcome to the tokenizer 2020 v.2\n");
  
  while(1){
    printf("Choose from the following:\n\ta. Tokenize string\n\tb. View history\n\tc. Exit\n");
    printf(">");
    fgets(user_in, 1000, stdin);
    if(*user_in == 'a'){
      tokenazitator(user_in, list);
    }
    else if(*user_in == 'b'){
      history_eyes(user_in, list);
    }
    else{
      break;
    }
  }
  free_history(list);
  printf("Thanks for tokenizing, meet you later!");
}
