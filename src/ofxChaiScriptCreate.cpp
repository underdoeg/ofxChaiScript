#include "chaiscript/chaiscript_stdlib.hpp"
#include "ofxChaiScriptCreate.h"
#include "ofxChaiScriptBindings.h"

using namespace chaiscript;

std::unique_ptr<chaiscript::ChaiScript> ofxChaiScriptCreate(){
    auto chai = std::unique_ptr<ChaiScript>(new ChaiScript(Std_Lib::library()));
    chai->add(ofxChaiScriptBindOf());
    return chai;
}
