#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofVec2f f;
    ofVec3f d;
    f = d;

    chai.exec(R"(
            var vecTest = ofVec2f(10, 20);
            var vecTest2 = ofVec2f();
            vecTest2 = vecTest;
    )");
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    chai.exec(R"(
			ofPushStyle();
			ofSetColor(255, 0, 0);
            ofDrawRectangle(vecTest, 200, 200);
			ofPopStyle();
	)");
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
