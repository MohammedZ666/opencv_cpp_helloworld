#include <opencv2/highgui.hpp>
#include <iostream>
using namespace cv;
using namespace std;
int main() {
  
  string image_path = "image.jpg";
  Mat image = imread(image_path, IMREAD_COLOR);
  imshow( "Display window", image );
  if(image.empty())
  cout<<"Image could not be found: "<<image_path <<endl;
    
   
  int k = waitKey(0);
  if(k=='s'){
    
  }
  return 0;
}
