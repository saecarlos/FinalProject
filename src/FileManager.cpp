#include "FileManager.h"
#include <string.h>
#include <fstream>
#include <iostream>
#define SETTINGS 2
std::vector<std::string> FileManager::ReadFile(char* filename){
    char* file=new char[strlen(filename)+1];
    strcpy(file,filename);
    std::ifstream iFile;
    iFile.open(file,std::ios::in);
    std::string line;
    std::vector<std::string> data;
    if(iFile.is_open()){
        while(std::getline(iFile,line)){
            data.push_back(line);
        }
    }else{
        std::cout<<"Error opening file: "<<file<<std::endl;
    }
    delete [] file;
    return data;
}
std::vector<std::string> FileManager::ParseIniFile(char* filename,std::string section){
    std::vector<std::string> values;
    std::vector<std::string> rawData;
    rawData=ReadFile(filename);
    if(!rawData.empty()){
        for(int i=0;i<rawData.size();i++){
            if(rawData[i]=="["+section+"]"){
                for(int j=i+1;j<=i+SETTINGS;j++){
                    std::string::size_type lastPos=rawData[j].find_first_of("=",0);
                    std::string::size_type pos=rawData[j].find_first_of("\n",lastPos);
                    std::string temp=rawData[j].substr(lastPos+1,pos-lastPos-1);
                    values.push_back(temp);
                }
            }
        }
    }else{
        std::cout<<"No data in file: "<<filename<<std::endl;
    }
    return values;
}
