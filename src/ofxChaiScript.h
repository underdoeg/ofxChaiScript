#ifndef OFX_CHAI_SCRIPT
#define OFX_CHAI_SCRIPT

#include "chaiscript/chaiscript.hpp"
#include "ofMain.h"

class ofxChaiScript{

public:
	ofxChaiScript();

    void exec(std::string);

    chaiscript::ModulePtr module;
    std::unique_ptr<chaiscript::ChaiScript> chai;
};

#endif
