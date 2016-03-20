#include "ofxChaiScript.h"
#include "ofxChaiScriptCreate.h"

using namespace chaiscript;

ofxChaiScript::ofxChaiScript(){
    chai = ofxChaiScriptCreate();
}

void ofxChaiScript::exec(string cmd){
    chai->eval(cmd);
}
