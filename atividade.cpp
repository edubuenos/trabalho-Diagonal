#include "atividade.h"

int main () {
    srand(time(NULL));

    std::cout << "Atividade com Array " << LINHA << " X  " << COLUNA << "\n";

    int vetor[LINHA][COLUNA];

/*
       			//colunas
		    | 0 | 1 | 2 | 3 | 4 |
		    | 0 | 1 | 2 | 3 | 4 |
//linhas    | 0 | 1 | 2 | 3 | 4 |
		    | 0 | 1 | 2 | 3 | 4 |
		    | 0 | 1 | 2 | 3 | 4 | 
*/

			

	// o preechimento com números aleatórios no array
    for (int linha = 0; linha < LINHA; linha++) {
        for (int coluna = 0; coluna < COLUNA; coluna++) {
            vetor[linha][coluna] = rand() % 10;
            std::cout << "| " << vetor[linha][coluna] << " |";
        }
        std::cout << "\n";
    }
	
	std::cout << "\n";
	std::cout << "Soma Linhas\n";
    somaLinhas(vetor);
    
    std::cout << "\n";
	std::cout << "Soma Colunas\n";
    somaColunas(vetor);
    
    std::cout <<"\n";
    std::cout << "soma diagonal principal";
    somaDiagonalPrincipal(vetor);

    std::cout <<"\n";
    std::cout << "soma diagonal secundaria";
    somaDiagonalSecundaria(vetor);

    return 0;
}

int somaLinhas(int vetor[LINHA][COLUNA]) {
    // SOMA LINHAS
    int linhasSomadas[] = {0,0,0,0,0};
    for (int linha = 0; linha < LINHA; linha++) {
        for (int coluna = 0; coluna < COLUNA; coluna++) {
		    std::cout << "| " << vetor[linha][coluna] << " |";        	
            linhasSomadas[linha] += vetor[linha][coluna];
        }
        std::cout << " = " << linhasSomadas[linha] << "\n";
    }
    return 0;
}

int somaColunas(int vetor[LINHA][COLUNA]) {
    // SOMA COLUNAS
    int colunasSomadas[] = {0,0,0,0,0};
    for (int linha = 0; linha < LINHA; linha++) {
    	for (int coluna = 0; coluna < COLUNA; coluna++) {
    		std::cout << "| " << vetor[linha][coluna] << " |";  
    		colunasSomadas[coluna] += vetor[linha][coluna];
		}
		std::cout << "\n";		
	}	
	std::cout << "============================\n";		
	for (int i = 0; i < 5; i++) {
		std::cout << "| " << colunasSomadas[i] << " |"; 
	}
	
	
    return 0;
}

int somaDiagonalPrincipal(int vetor[LINHA][COLUNA]) {
    // SOMA DIAGONAL PRINCIPAL
    //int colunasSomadas[] = {0,0,0,0,0};
    int soma = 0;
	for (int coluna = 0; coluna < COLUNA; coluna++) {
		std::cout << "| " << vetor[coluna][coluna] << " |";  
		soma += vetor[coluna][coluna];
	}
	std::cout << "\n";		
	std::cout << "============================\n";		
	//for (int i = 0; i < 5; i++) {
		std::cout << "| " << soma << " |"; 
	//}
	
	
    return 0;
}

int somaDiagonalSecundaria(int vetor[LINHA][COLUNA]) {
    // Soma Diagonal Secundaria
    //int colunasSomadas[] = {0,0,0,0,0};
    int soma = 0;
    for (int linha = 0; linha < LINHA; linha++) {
		std::cout << "| " << vetor[linha][4-linha] << " |";  
		soma += vetor[linha][4-linha];
	}
	std::cout << "\n";		
	std::cout << "============================\n";		
	//for (int i = 0; i < 5; i++) {
		std::cout << "| " << soma << " |"; 
	//}
	
	
    return 0;
}

