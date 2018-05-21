//
//  conexion.hpp
//  constellations2
//
//  Created by Lautaro on 18/5/18.
//
//

#ifndef espacio_hpp
#define espacio_hpp

#include <stdio.h>
#include "ofMain.h"

class Espacio {
public:
	
	Espacio();
	vector<ofPoint> puntos;
	vector<ofPoint> puntosRestantes;
	ofPoint agregarPoint;
	class Constelacion{
	public:
		int cantidadDeEstrellas = int(ofRandom(3, 7));
		void dibujar();
		ofPolyline conexion;
	};
	vector<Constelacion> constelaciones;
	void dibujar(), setup(), crearConstelacion(), agregarVertex();


};
#endif /* conexion_hpp */
