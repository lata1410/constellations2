#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	viaLactea.setup();
	viaLactea.crearConstelacion();
	for(int i = 0; i < viaLactea.constelaciones[0].cantidadDeEstrellas; i++){
		viaLactea.agregarVertex();
	}
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	viaLactea.dibujar();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	if (key == 'm') {
		viaLactea.crearConstelacion();
		for(int i = 0; i < viaLactea.constelaciones[viaLactea.constelaciones.size()-1].cantidadDeEstrellas; i++){
			viaLactea.agregarVertex();
		}
	}
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
