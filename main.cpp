#include <torch/script.h>
#include <torch/torch.h>
#include <ATen/ATen.h>
#include <opencv2/opencv.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/core.hpp>
#include <iostream>
#include <memory>
#include <string>
#include <vector>
using namespace cv;
using namespace std;
using namespace at;
int main() {
    Mat image;
    image = imread("/home/chl/work_files/c_learn/test/ha.jpeg", 1 );

    if ( !image.data )
    {
        printf("No image data \n");
        return -1;
    }
    namedWindow("Display Image", WINDOW_AUTOSIZE );
    imshow("Display Image", image);

    waitKey(0);

    std::cout << "Hello, World!" << std::endl;
    at::Tensor a = at::ones({2,2}, at::kInt);
    std::cout<< a << "\n";

    std::cout<< "ok\n";
    return 0;
}