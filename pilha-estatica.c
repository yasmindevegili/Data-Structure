#include <stdio.h>

int main(){
    typedef struct{
        
        int topo;
        int tamanho;
        /*int vetor[MAX]; atribuicao estatica*/
        int **vetor /*alocação dinamica*/
        
    } Pilha;
    
    Pilha* criar(int tamanho){
        Pilha *pilha = malloc(sizeof(Pilha));
        pilha->tamanho = tamanho;
        pilha->topo = 0;
        pilha->vetor = malloc(sizeof(int)*tamanho);
        
        return pilha;
    }
    
    int cheia(Pilha *pilha){
        return pilha->topo == pilha->tamanho
        
    }
    
    void empilhar(Pilha* pilha, int valor){
        if (!cheia(pilha)){
            pilha->vetor[pilha->topo++] = valor;
            
        }
    }
    
    
    return 0;
}
