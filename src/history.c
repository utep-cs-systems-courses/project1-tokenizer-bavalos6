#include <stdio.h>
#include <stdlib.h>
#include "history.h"
#include "tokenizer.h"

List* init_history(){
  List *hist = malloc(sizeof(List*));
  hist -> root = NULL; //Assign hist.root to NULL
  return hist;
}

void add_history(List *list, char *str){
  Item *lol =  malloc(sizeof(Item));
  int idCount = 0;
  if(list -> root == NULL){
    list -> root = lol;
  }
  else{
    struct s_Item *temp = list -> root;
    idCount++;
    while(temp -> next != NULL){
      idCount++;
      temp = temp -> next;
    }
    temp -> next = lol;
  }
  lol -> id = idCount;
  char *strCp = copy_str(str, word_terminator(str) - word_start(str));
  lol -> str = strCp;
  lol -> next = NULL;
}

char *get_history(List *list, int id){
  struct s_Item *temp = list -> root;
  while(temp != NULL && id != 0){
    temp = temp -> next;
    id--;
  }
  if(temp == NULL){
    return ">Non-existent ID";
  }
  else{
    return temp -> str;
  }
}

void print_history(List *list){
  struct s_Item *temp = list -> root;
  while(temp != NULL){
    printf("%i > %s\n",temp -> id,temp -> str);
    temp = temp -> next;
  }
}

void free_history(List *list){
  struct s_Item *temp = list -> root;
  struct s_Item *temp2;
  while(temp != NULL){
    free(temp -> str);
    temp2 = temp -> next;
    free(temp);
    temp = temp2;
  }
  free(list);
  list -> root = NULL;
}

/*void main(){
  List *ListaLoca = init_history();
  add_history(ListaLoca, "Rata Sucia");
  add_history(ListaLoca, "COMOOO?!");
  add_history(ListaLoca, "CAPULLO");
  char *Auron = get_history(ListaLoca, 2);
  printf("%s\n", Auron);
  print_history(ListaLoca);
  free_history(ListaLoca);
  print_history(ListaLoca);
  }*/
