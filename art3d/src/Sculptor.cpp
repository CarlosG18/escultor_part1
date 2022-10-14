#include <iostream>
#include <fstream>
#include "Sculptor.h"

/*Sculptor::Sculptor()
{
    //ctor
}*/

Sculptor::~Sculptor()
{
    delete [] v[0][0];
    delete [] v[0];
    delete [] v;
}

Sculptor::Sculptor(int _nx, int _ny, int _nz){


  int i,j,k;

  this->nz = _nz;
  this->ny = _ny;
  this->nx = _nx;

  	//alocando dinamicamente a matriz 3d
  	v = (Voxel***) new Voxel[nz];
	v[0] = (Voxel**) new Voxel[nz*nx];
	v[0][0] = new Voxel[nz*nx*ny];

	//ajustando os endereços
	for(i=1;i<nz;i++){
		v[i] = v[i-1] + ny;
	}
	for(i=1; i<nz*ny;i++){
		v[0][i] = v[0][i-1] + nx;
	}

	//set padrao de cada elemento de Voxel
	for(i=0; i<nz; i++){
		for(j=0; j<ny; j++){
			for(k=0; k<nx; k++){
				v[i][j][k].r = 255;
				v[i][j][k].g = 255;
				v[i][j][k].b = 255;
				v[i][j][k].a = 1.0;
				v[i][j][k].isOn = false;
			}
		}
	}
}

void Sculptor::setColor(float r, float g, float b, float a){
    this->r = r;
    this->g = g;
    this->b = b;
    this->a = a;
}

void Sculptor::putVoxel(int x, int y, int z){
    v[z][y][x].isOn = true;
    v[z][y][x].r = r;
    v[z][y][x].g = g;
    v[z][y][x].b = b;
    v[z][y][x].a = a;
}

void Sculptor::cutVoxel(int x, int y, int z){
    v[z][y][x].isOn = false;
}

void Sculptor::putBox(int x0, int x1, int y0, int y1, int z0, int z1){
    int i,j,k;

    for(k=z0; k<=z1; k++){
        for(j=y0; j<=y1; j++){
            for(i=x0; i<=x1; i++){
                v[k][j][i].isOn = true;
                v[k][j][i].r = r;
                v[k][j][i].g = g;
                v[k][j][i].b = b;
                v[k][j][i].a = a;
            }
        }
    }
}

void Sculptor::cutBox(int x0, int x1, int y0, int y1, int z0, int z1){
    int i,j,k;

    for(k=z0; k<z1; k++){
        for(j=y0; j<y1; j++){
            for(i=x0; i<x1; i++){
                v[k][j][i].isOn = false;
            }
        }
    }
}

void Sculptor::putSphere(int xcenter, int ycenter, int zcenter, int radius){

}

void Sculptor::cutSphere(int xcenter, int ycenter, int zcenter, int radius){

}

void Sculptor::putEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz){

}

void Sculptor::cutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz){

}

void Sculptor::writeOFF(const char* filename){
    int i,j,k,cont = 0;

    std::ofstream file;
    file.open(filename);

    file << "OFF" << std::endl;

    for(k=0;k<nz;k++){
        std::cout << " face - " << k << std::endl;
        for(j=0;j<ny;j++){
            for(i=0;i<nx;i++){
            std::cout << v[k][j][i].isOn;
                if(v[k][j][i].isOn == true){
                    cont++;
                    file << k-0.5 << " " << j+0.5 << " " << i-0.5 << std::endl;
                }
            }
        }
    }
    std::cout << " contador - " << cont;
    file.close();
}

void Sculptor::print_pro(int x, int y, int z){
    std::cout << "propriedades do elemento de voxel v[" << z << "][" << y << "][" << x << "] = " << "isOn = " << v[z][y][x].isOn << " r = " << v[z][y][x].r << " g = " << v[z][y][x].g << " b = " << v[z][y][x].b << " a = " << v[z][y][x].a;
}

