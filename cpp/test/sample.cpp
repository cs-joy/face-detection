#include <opencv2/opencv.hpp>
using namespace cv;

int main(void) {

	// Read image in GrayScale mode
	Mat image = imread("boy.jpg", 0);

	// Save grayscale image
	imwrite("boyGray.jpg", image);

	// To display the image
	imshow("Grayscale Image", image);
	waitKey(0);

	return 0;
}

// source to install ocv: https://learnopencv.com/install-opencv-on-windows/