#include <iostream>

using namespace std;

int rollDie(int low = 1, int high = 6) {
    assert(high >= low);
    return (rand() % (high - low + 1)) + low;
}

/*
 * a) O statement assert() verifica que o valor high é maior ou igual ao low. No caso
 * de não o ser, gera uma mensagem de erro.
 *
 * b) A função tem 3 diferentes signatures porque pode ser chamada pelo main() sem parâmetros
 * uma vez que já tem parâmetros pré-definidos, pode ser passado apenas o argumento
 * low ou apenas o argumento high.
 *
 * c) Não é possível pois a função já existente abrange a opção sem a passagem de parâmetros
 * fazendo com que a função int rollDie() seja ambígua.
 */
