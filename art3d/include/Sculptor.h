#ifndef SCULPTOR_H
#define SCULPTOR_H

struct Voxel{
    float r, g, b; // cores: vermelho, verde e azul
    float a; //transparencia
    bool isOn; // "aparecer"
};

/**
 * @brief The Sculptor class
 */

class Sculptor
{
    private:
      Voxel ***v; // 3D matrix
      int nx,ny,nz; // Dimensions
      float r,g,b,a; // Current drawing color
    public:
      /**
       * @brief Sculptor é o construtor da classe Sculptor
       * @param _nx é o numero de linhas da matriz 3d
       * @param _ny é o número de colunas da matriz 3d
       * @param _nz é o número de planos da matriz 3d
       */
      Sculptor(int _nx, int _ny, int _nz);
      ~Sculptor();
      /**
       * @brief setColor é o metódo para definir a cor que será usada na criação da estrutura.
       * @param r é o parametro para o vermelho - 0 até 1.
       * @param g é o parametro para o verde - 0 até 1.
       * @param b é o parametro para o azul - 0 até 1.
       * @param a é o parametro para o alfa (visibilidade) - 0 até 1.
       */
      void setColor(float r, float g, float b, float a);
      /**
       * @brief putVoxel
       * @param x
       * @param y
       * @param z
       */
      void putVoxel(int x, int y, int z);
      /**
       * @brief cutVoxel
       * @param x
       * @param y
       * @param z
       */
      void cutVoxel(int x, int y, int z);
      /**
       * @brief putBox
       * @param x0
       * @param x1
       * @param y0
       * @param y1
       * @param z0
       * @param z1
       */
      void putBox(int x0, int x1, int y0, int y1, int z0, int z1);
      /**
       * @brief cutBox
       * @param x0
       * @param x1
       * @param y0
       * @param y1
       * @param z0
       * @param z1
       */
      void cutBox(int x0, int x1, int y0, int y1, int z0, int z1);
      /**
       * @brief putSphere
       * @param xcenter
       * @param ycenter
       * @param zcenter
       * @param radius
       */
      void putSphere(int xcenter, int ycenter, int zcenter, int radius);
      /**
       * @brief cutSphere
       * @param xcenter
       * @param ycenter
       * @param zcenter
       * @param radius
       */
      void cutSphere(int xcenter, int ycenter, int zcenter, int radius);
      /**
       * @brief putEllipsoid
       * @param xcenter
       * @param ycenter
       * @param zcenter
       * @param rx
       * @param ry
       * @param rz
       */
      void putEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);
      /**
       * @brief cutEllipsoid
       * @param xcenter
       * @param ycenter
       * @param zcenter
       * @param rx
       * @param ry
       * @param rz
       */
      void cutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);
      /**
       * @brief writeOFF
       * @param filename
       */
      void writeOFF(const char* filename);
};

#endif // SCULPTOR_H
