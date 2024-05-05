# escultor_part1

> Classe "Sculptor" para criar esculturas digitais em formato OFF

**projeto da disciplina:**

![departamento-disciplina1](https://img.shields.io/badge/dca-Programação_avançada-blue?style=for-the-badge)

**Tecnologias Ultilizadas**: 
- ![c++-logo](https://img.shields.io/badge/c++-black?style=for-the-badge&logo=cpp&logoColor=white)
- ![qt-logo](https://img.shields.io/badge/qt_creator-green?style=for-the-badge&logo=qt&logoColor=white)

## 🎯 Objetivo

O objetivo deste projeto é desenvolver um **escultor digital** capaz de gerar modelos tridimensionais em formato **OFF**. A aplicação permitirá aos usuários criar e manipular **objetos 3D** de forma intuitiva, utilizando diferentes ferramentas de escultura, como adição, remoção e modelagem de formas básicas. O escultor digital também oferecerá a possibilidade de aplicar **cores** aos modelos criados e exportá-los para o formato OFF, amplamente utilizado em software de modelagem 3D e impressão 3D.

## 📝 Estrutura base da classe Sculptor

Aqui estará a definição da classe **Sculptor**, com todos os seus **atributos** e **metódos**:

```c++
class Sculptor
{
    private:
      Voxel ***v; // 3D matrix
      int nx,ny,nz; // Dimensions
      float r,g,b,a; // Current drawing color
    public:
      Sculptor(int _nx, int _ny, int _nz);
      ~Sculptor();
     
      void setColor(float r, float g, float b, float a);

      void putVoxel(int x, int y, int z);

      void cutVoxel(int x, int y, int z);

      void putBox(int x0, int x1, int y0, int y1, int z0, int z1);

      void cutBox(int x0, int x1, int y0, int y1, int z0, int z1);
      
      void putSphere(int xcenter, int ycenter, 
      void cutSphere(int xcenter, int ycenter, 
      void putEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);

      void cutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);
      
      void writeOFF(const char* filename);
};
```

## 🎨 Exemplo de uso

Usando os comandos fornecidos pela classe **Sculptor** vamos desenhar o personagem do jogo **mario** em uma especie de plano 3D. Para isso usamos os seguintes comandos:

```c++
#include <iostream>
#include "Sculptor.h"
#include <iostream>

using namespace std;

int main()
{
    Sculptor mario(24,32,1);
    //chapeu e camisa
    mario.setColor(1.0,0,0,1.0);
    mario.putBox(0,1,3,8,0,0);
    mario.putVoxel(1,2,0);
    mario.putBox(1,1,9,11,0,0);
    mario.putBox(8,9,1,3,0,0);
    mario.cutVoxel(9,0,0);
    mario.putVoxel(10,2,0);
    mario.putBox(7,7,2,3,0,0);
    mario.putBox(7,8,5,6,0,0);
    mario.putBox(7,7,7,8,0,0);
    mario.putBox(8,9,8,10,0,0);
    mario.putVoxel(9,11,0);
    mario.putVoxel(10,9,0);
    //pele
    mario.setColor(1.0,0.95,0.45,1.0);
    mario.putBox(2,6,5,7,0,0);
    mario.putBox(5,6,3,4,0,0);
    mario.putBox(3,4,2,2,0,0);
    mario.putVoxel(3,4,0);
    mario.putBox(6,6,8,10,0,0);
    mario.putVoxel(4,8,0);
    mario.putBox(2,3,9,9,0,0);
    mario.putBox(3,4,10,11,0,0);
    mario.putVoxel(4,12,0);
    mario.putBox(10,12,0,1,0,0);
    mario.putVoxel(11,2,0);
    mario.putBox(10,12,10,11,0,0);
    mario.putVoxel(11,9,0);
    //olho e bigode
    mario.setColor(0,0,0,1.0);
    mario.putBox(2,3,8,8,0,0);
    mario.putBox(5,5,8,11,0,0);
    mario.putVoxel(4,9,0);
    //cabelo
    mario.setColor(1,0.6,0.2,1.0);
    mario.putBox(3,5,1,1,0,0);
    mario.putBox(2,2,2,4,0,0);
    mario.putBox(3,4,3,3,0,0);
    mario.putVoxel(4,4,0);
    mario.putVoxel(5,2,0);
    //sapato
    mario.putBox(14,15,1,3,0,0);
    mario.putVoxel(15,0,0);
    mario.putBox(14,15,8,10,0,0);
    mario.putVoxel(15,11,0);
    //macacao
    mario.setColor(0,0,1.0,1.0);
    mario.putBox(7,9,4,4,0,0);
    mario.putBox(9,9,5,7,0,0);
    mario.putVoxel(8,7,0);
    mario.putBox(10,12,5,6,0,0);
    mario.putBox(11,13,3,4,0,0);
    mario.putBox(11,13,7,8,0,0);
    mario.putVoxel(10,3,0);
    mario.putVoxel(10,8,0);
    mario.putBox(12,13,2,2,0,0);
    mario.putBox(12,13,9,9,0,0);
    //botao
    mario.setColor(0,1.0,1.0,1.0);
    mario.putVoxel(10,4,0);
    mario.putVoxel(10,7,0);

 
   
 mario.writeOFF("mario.off");

    return 0;
}

```
Usando o método **writeOFF()** salvamos os dados alterados da matriz principal da classe Scupltor em um arquivo **OFF**. Usando qualquer visualizador de arquivos OFF (o ultilizado foi o [online 3D viewer](https://3dviewer.net/)) podemos observar o seguinte resultado:

## 👁️ visualização
  ![](mario.gif)

## 🆕 Updates

Acompanhe todas as fases do projeto **Sculptor**:

- [🔨 Parte 2 - criando um arquivo de configuração](https://github.com/CarlosG18/escultor_part2)

- [🔨 Parte 3 - criando uma interface com o qt creator](https://github.com/CarlosG18/escultor_part3)

## 🔍 Mais detalhes

[link](https://agostinhobritojr.github.io/curso/progav-dca1202/escultor.html) para a página do criador (Agostinho Brito Jr) original do projeto.