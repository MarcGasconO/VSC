#include <cstdio>

char historialGanadores[100];
int contadorHistorial = 0;

void imprimirTablero(char *tablero) {

    for (int i = 0; i < 9; ++i) {

        printf("%c", *(tablero + i));
        if ((i + 1) % 3 == 0) {

            printf("\n");
        }
    }
}

int verificarVictoria(char *tablero, char jugador) {

    for (int i = 0; i < 3; ++i) {

        if ((*(tablero + i * 3) == jugador && *(tablero + i * 3 + 1) == jugador && *(tablero + i * 3 + 2) == jugador) ||
            (*(tablero + i) == jugador && *(tablero + i + 3) == jugador && *(tablero + i + 6) == jugador)) {

            return 1;
        }
    }
    if ((*(tablero) == jugador && *(tablero + 4) == jugador && *(tablero + 8) == jugador) ||
        (*(tablero + 2) == jugador && *(tablero + 4) == jugador && *(tablero + 6) == jugador)) {

        return 1;
    }
    return 0;
}

int verificarEmpate(char *tablero) {

    for (int i = 0; i < 9; ++i) {

        if (*(tablero + i) != 'X' && *(tablero + i) != 'O') {

            return 0;
        }
    }
    return 1;
}

void cambiarJugador(char *jugadorActual) {

    *jugadorActual = (*jugadorActual == 'X') ? 'O' : 'X';
}

void registrarPartida(char ganador) {

    if (contadorHistorial < 100) {

        historialGanadores[contadorHistorial++] = ganador;
    }
}

void mostrarHistorial() {

    int ganadasX = 0;
    int ganadasO = 0;
    int empates = 0;
    for (int i = 0; i < contadorHistorial; ++i) {

        if (historialGanadores[i] == 'X') {

            ganadasX++;
        } else if (historialGanadores[i] == 'O') {

            ganadasO++;
        } else {

            empates++;
        }
    }
    printf("X:%d O:%d E:%d\n", ganadasX, ganadasO, empates);
}

void jugarPartida() {

    char tablero[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
    char jugadorActual = 'X';
    int juegoTerminado = 0;

    while (!juegoTerminado) {

        imprimirTablero(tablero);
        int eleccion;
        printf("%c:", jugadorActual);
        scanf("%d", &eleccion);

        if (eleccion >= 1 && eleccion <= 9 && *(tablero + eleccion - 1) != 'X' && *(tablero + eleccion - 1) != 'O') {

            *(tablero + eleccion - 1) = jugadorActual;
            if (verificarVictoria(tablero, jugadorActual)) {

                imprimirTablero(tablero);
                printf("Gana %c\n", jugadorActual);
                registrarPartida(jugadorActual);
                juegoTerminado = 1;
            } else if (verificarEmpate(tablero)) {

                imprimirTablero(tablero);
                printf("Empate\n");
                registrarPartida('E');
                juegoTerminado = 1;
            } else {

                cambiarJugador(&jugadorActual);
            }
        }
    }
}

int main() {

    char jugarDeNuevo;
    do {

        jugarPartida();
        printf("Otra?(s/n):");
        scanf(" %c", &jugarDeNuevo);
    } while (jugarDeNuevo == 's');
    mostrarHistorial();
    return 0;
}