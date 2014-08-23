#include "RenderManager.h"
#include "ofGraphics.h"
#include "ofImage.h"
void RenderManager::DrawCircle(float x,float y,float r){
    ofCircle(x,y,r);
}
void RenderManager::DrawEllipse(float x,float y,float w,float h){
    ofEllipse(x,y,w,h);
}
void RenderManager::DrawLine(float x1,float y1,float x2,float y2){
    ofLine(x1,y1,x2,y2);
}
void RenderManager::DrawRectangle(float x,float y,float w,float h){
    ofRect(x,y,w,h);
}
void RenderManager::DrawTriangle(float x1,float y1,float x2,float y2,float x3,float y3){
    ofTriangle(x1,y1,x2,y2,x3,y3);
}
void RenderManager::DrawTexture(std::string filename,float x,float y,float w,float h){
    ofImage myImage;
    myImage.loadImage(filename);
    myImage.draw(x,y,w,h);
}
