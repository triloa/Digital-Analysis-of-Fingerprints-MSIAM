#include "Usefull_functions.h"
#include <iostream>


using namespace std;


float iitof(int color){
  if(color<0 || 255<color){
    cout<<"invalid color"<<"\n";
    return(-1);}
    else return(float(color)/255);

  }

int iftoi(float color){
  if(color<0 || 1<color){
    cout<<"invalid color"<<"\n";
    return(-1);}
    else return(int(color*255));

}
