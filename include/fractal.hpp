#include <iostream>
#include <vector>
#include <cstdlib>
#include <opencv4/opencv2/opencv.hpp>
#include <opencv4/opencv2/highgui/highgui.hpp>

cv::Point2i determineWindowSize(std::vector<cv::Point2f> points);
void drawFractal(float xRule, float yRule, std::vector<cv::Point2f> points, int iterations=10000);