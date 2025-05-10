#pragma once
#include "biblioteca.h"

#ifndef PONTO_H
#define PONTO_H

#define NULO -9999999.0

typedef struct Ponto{
    float x;
    float y;
};

//Funções acessadas por outras, por isso devem ser posicionadas acima de todas as outras
void acessarPonto(Ponto* p, float x, float y, int q, int* pos);
int compara_float(float a, float b);
void acessarVazio(Ponto* p, int q, int* pos);

//Funções relacionadas ao TAD Ponto
void criarPonto(Ponto* p, int q, int* pos);
void calculaDist(Ponto* p, int q);
void apagarPonto(Ponto* p, int q);
void modifPonto(Ponto* p, int q);
void mostrarPontos(Ponto* p, int q);

#endif