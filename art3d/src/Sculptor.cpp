#include "Sculptor.h"

/*Sculptor::Sculptor()
{
    //ctor
}*/

Sculptor::~Sculptor()
{
    delete [] m[0][0];
    delete [] m[0];
    delete [] m;
}

Sculptor::Sculptor(int _nx, int _ny, int _nz){
  int i;
  
  this->nz = _nz;
  this->ny = _ny;
  this->nx = _nx;

  	//alocando dinamicamente a matriz 3d
  	m = (Voxel***) new Voxel[nz];
	m[0] = (Voxel**) new Voxel[nz*nx];
	m[0][0] = new Voxel[nz*nx*ny];
	
	//ajustando os endereços
	for(i=1;i<nz;i++){
		m[i] = m[i-1] + ny;
	}
	for(i=1; i<nz*ny;i++){
		m[0][i] = m[0][i-1] + nx;
	}

	//set padrao de cada elemento de Voxel
	for(i=0; i<nz; i++){
		for(j=0; j<ny; j++){
			for(k=0; k<nx; k++){
				m[i][j][k].r = 255;
				m[i][j][k].g = 255;
				m[i][j][k].b = 255;
				m[i][j][k].a = 1.0;
				m[i][j][k].isOn = false;
			}
		}
	}
}

void Sculptor::setColor(float r, float g, float b, float a){

}

void Sculptor::putVoxel(int x, int y, int z){

}

void Sculptor::cutVoxel(int x, int y, int z){

}

void Sculptor::putBox(int x0, int x1, int y0, int y1, int z0, int z1){

}

void Sculptor::cutBox(int x0, int x1, int y0, int y1, int z0, int z1){

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

}
