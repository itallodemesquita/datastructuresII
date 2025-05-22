#include <stdio.h>
#include <stdlib.h>


typedef struct Node {
    int valor;
    struct Node *left;
    struct Node *right;
} Node;

Node* criarNo(int valor){
    Node* novo = malloc(sizeof(Node));
    if(novo){
        novo->right = NULL;
        novo->left = NULL;
        novo->valor = valor;
    }
    return novo;
}

Node* inserir(Node*raiz, int valor){
    if(raiz == NULL){
        return criarNo(valor);
    }
    if(raiz->valor > valor){
        raiz->left = inserir(raiz->left, valor);
        return raiz;
    }
    else{
        raiz->right = inserir(raiz->right, valor);
        return raiz;
    }
}

void preOrdem(Node* raiz){
    if(raiz!= NULL)   {
        printf("%d ", raiz->valor);
        preOrdem(raiz->left);
        preOrdem(raiz->right);
    }
}
// void posOrdem(Node* raiz){
    
// }
// void inOrdem(Node* raiz){
    
// }


int main(){
    Node *raiz = NULL;
    raiz = inserir(raiz, 20);
    raiz = inserir(raiz, 10);
    raiz = inserir(raiz, 18);
    raiz = inserir(raiz, 19);
    raiz = inserir(raiz, 17);
    raiz = inserir(raiz, 14);
    raiz = inserir(raiz, 41);
    raiz = inserir(raiz, 23);
    raiz = inserir(raiz, 15);
    raiz = inserir(raiz, 31);
}
