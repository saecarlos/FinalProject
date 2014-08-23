#ifndef FILEMANAGER_H
#define FILEMANAGER_H
#include <vector>
#include <string>
class FileManager{
    public:
        static std::vector<std::string> ReadFile(char* filename);
        static std::vector<std::string> ParseIniFile(char* filename,std::string section);
};
#endif
