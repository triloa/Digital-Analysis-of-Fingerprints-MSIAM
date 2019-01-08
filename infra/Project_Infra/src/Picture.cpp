#include "Picture.h"
#include "Usefull_functions.h"
using namespace cv;




Picture::Picture(const std::string& filename){
  picture=cv::imread(filename);
}

Picture::Picture(const cv::Mat& pic){
  picture=pic.clone();
}

float Picture::get_intensity(unsigned int i, unsigned int j)const{
  return Usefull_functions::iitof((int)picture.at<uchar>(i,j));
}

void Picture::set_intensity(unsigned int i, unsigned int j,float intensity){
  if ((intensity<0)||(intensity>1)){
    cerr<<"Wrong intensity value, she must belong to [0,1]"<<endl;
  }
  picture.at<uchar>(i,j)=Usefull_functions::iftoi(intensity);
}
