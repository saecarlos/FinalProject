#ifndef RENDERMANAGER_H
#define RENDERMANAGER_H
#include <string>
class RenderManager{
    public:
        void DrawCircle(float x,float y,float r);
        void DrawEllipse(float x,float y,float w,float h);
        void DrawLine(float x1,float y1,float x2,float y2);
        void DrawRectangle(float x,float y,float w,float h);
        void DrawTriangle(float x1,float y1,float x2,float y2,float x3,float y3);
        void DrawTexture(std::string filename,float x,float y,float w,float h);
};
#endif
