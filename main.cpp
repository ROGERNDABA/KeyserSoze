
#include <opencv2/opencv.hpp>

using namespace cv;

// sdsdsds
int main() {
	VideoCapture cap(0);
	if (!cap.isOpened()) return -1;

	while (true) {
		Mat frame;

		cap >> frame;

		imshow("Capure Window", frame);

		if (waitKey(30) >= 0) break;
	}

	return 0;
}