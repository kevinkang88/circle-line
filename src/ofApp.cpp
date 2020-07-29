#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetWindowTitle("Line Gang");
    ofSetWindowShape(1280, 720);
    ofSetFrameRate(120);
    ofBackground(ofColor::white);
    
    gui.setup( "Parameters", "settings.xml");
    gui.add( scaleVaby.setup( "scaleVaby", 1, 1, 8));
}

//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    gui.draw();
    ofTranslate( ofGetWidth() / 2, ofGetHeight() / 2 );
    ofScale(scaleVaby);
    for(float i = 0; i < TWO_PI; i += 0.3) {
            
        ofPushMatrix();
        
        ofRotateRad(theta + i);
        
        ofFill();
        ofSetColor(ofColor::black);
        ofDrawLine(0, 0, 100, 0);
        
        for(float i = 0; i < TWO_PI; i += 0.2) {
            
            ofRotateRad(theta + i);
            
            ofFill();
            ofSetColor(ofColor::dimGray);
            ofDrawLine(0, 0, 100, 0);
            
        }
        
        ofPopMatrix();

    }
    
    
    theta += 0.01;
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

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

//--------------------------------------------------------------
