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
  int i;
  
  this->nz = _nz;
  this->ny = _ny;
  this->nx = _nx;

  	//alocando dinamicamente a matriz 3d
  	v (Voxel***) new Voxel[nz];
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
