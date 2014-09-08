#include "EngineManager.h"

//========================================================================
int main(int argc,char* argv[]){
    std::vector<std::string> settings;
	if(argc>1){
        for(int i=1;i<argc;i++){
            std::string temp1=argv[i];
            std::string::size_type pos1=temp1.find_first_of("=",0);
            std::string::size_type pos2=temp1.find_first_of("x",pos1);
            std::string temp2=temp1.substr(pos1+1,pos2-pos1-1);
            settings.push_back(temp2);
            pos1=pos2;
            pos2=temp1.find_first_of(" \n",pos1);
            temp2=temp1.substr(pos1+1,pos2-pos1-1);
            settings.push_back(temp2);
        }
    }else{
        settings=FileManager::ParseIniFile("config.ini","settings");
	}
	std::cout<<"resx: "<<settings[0]<<std::endl;
	std::cout<<"resy: "<<settings[1]<<std::endl;
	LoggerManager::PrintString("Error",0x0c);

	ofSetupOpenGL(1024,768,OF_WINDOW);			// <-------- setup the GL context

	// this kicks off the running of my app
	// can be OF_WINDOW or OF_FULLSCREEN
	// pass in width and height too:
	ofRunApp(new myApplication());
}
