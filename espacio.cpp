//
//  espacio.cpp
//  constellations2
//
//  Created by Lautaro on 18/5/18.
//
//

#include "espacio.hpp"

Espacio::Espacio(){

}

void Espacio::setup(){
	for (int i = 0 ; i < 200; i++) {
		ofPoint nuevoPunto;
		nuevoPunto.x = ofRandom(ofGetWidth());
		nuevoPunto.y = ofRandom(ofGetHeight());
		puntos.push_back(nuevoPunto);
		puntosRestantes = puntos;
	}
};

void Espacio::dibujar(){
	for (int i = 0; i < puntos.size(); i++){
		ofDrawEllipse(puntos[i].x, puntos[i].y, 3, 3);
	}
		for(int c = 0; c < constelaciones.size(); c++){
			constelaciones[c].dibujar();
		}

}

void Espacio::crearConstelacion(){
	Constelacion nuevaConstelacion;
	constelaciones.push_back( nuevaConstelacion );
	cout << "Constelacion Creada" << endl;
}


void Espacio::agregarVertex(){
	float distAnterior = 20000;
	int aBorrar = 0;
	if( constelaciones[ constelaciones.size() - 1 ].conexion.size() == 0){
		float randomPosition = int(ofRandom( puntosRestantes.size()-1 ));
		agregarPoint = puntosRestantes[ randomPosition ];
		aBorrar = randomPosition;
	}else{
		agregarPoint = constelaciones[ constelaciones.size() -1 ].conexion[ constelaciones[ constelaciones.size() -1 ].conexion.size() - 1 ];
		for(int c = 0; c < puntosRestantes.size(); c++) {
			float dist = ofDist( agregarPoint.x, agregarPoint.y,  puntosRestantes[c].x, puntosRestantes[c].y );
			if(dist < distAnterior){
//				cout << "La distancia actual es: " + ofToString(dist) << endl;
//				cout << "La distancia anterior es:" + ofToString(distAnterior) << endl;
				cout << "Cambia agregar" << endl;
				distAnterior = dist;
				//agregarPoint = puntosRestantes[c];
				aBorrar = c;
			}
		}
		agregarPoint = puntosRestantes[ aBorrar ];
	}

	cout << "agrega vertex a cons" << endl;
	cout << "Indice que agrega: " + ofToString( agregarPoint ) << endl;
	puntosRestantes.erase( puntosRestantes.begin() + aBorrar );
	constelaciones[ constelaciones.size() -1 ].conexion.addVertex(agregarPoint);

}

void Espacio::Constelacion::dibujar(){
	conexion.draw();
	//cout << "dibuja" << endl;
}
