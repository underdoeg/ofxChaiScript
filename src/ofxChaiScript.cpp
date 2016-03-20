#include "chaiscript/chaiscript_stdlib.hpp"
#include "ofxChaiScript.h"


using namespace chaiscript;

ofxChaiScript::ofxChaiScript():ChaiScript(Std_Lib::library()){

	module = ModulePtr(new Module());

	//
	module->add(fun(&ofGetFrameRate), "ofGetFrameRate");

	//math
	module->add(user_type<ofVec2f>(), "ofVec2f");
	module->add(user_type<ofVec3f>(), "ofVec3f");
	module->add(user_type<ofPoint>(), "ofPoint");

	//COLOR
	module->add(user_type<ofColor>(), "ofColor");

	//GRAPHICS
	module->add(fun(&ofPushStyle), "ofPushStyle");
	module->add(fun(&ofPopStyle), "ofPopStyle");

	module->add(fun<void,const ofColor&>(&ofSetColor), "ofSetColor");
	module->add(fun<void,const ofColor&,int>(&ofSetColor), "ofSetColor");
	module->add(fun<void,int,int,int>(&ofSetColor), "ofSetColor");
	module->add(fun<void,int,int,int,int>(&ofSetColor), "ofSetColor");
	module->add(fun<void,int>(&ofSetColor), "ofSetColor");
	module->add(fun(&ofSetHexColor), "ofSetHexColor");

	module->add(fun<void,const ofRectangle&>(&ofDrawRectangle), "ofDrawRectangle");
	module->add(fun<void,const ofPoint&,float,float>(&ofDrawRectangle), "ofDrawRectangle");
	module->add(fun<void,float,float,float,float>(&ofDrawRectangle), "ofDrawRectangle");
	module->add(fun<void,float,float,float,float, float>(&ofDrawRectangle), "ofDrawRectangle");


	add(module);
}
