#include <iostream>
#include <vector>
#include <cstdlib>
#include <opencv4/opencv2/opencv.hpp>
#include <opencv4/opencv2/highgui/highgui.hpp>

cv::Point2i determineWindowSize(std::vector<cv::Point2f> points)
{
    cv::Point2i maximum = cv::Point2i(INT_MIN, INT_MIN);

    for(int i=0; i<points.size(); i++)
    {
        int x = points[i].x;
        int y = points[i].y;

        maximum.x = x > maximum.x ? x : maximum.x;
        maximum.y = y > maximum.y ? y : maximum.y;
    }

    return maximum;
}

void drawFractal(float xRule, float yRule, std::vector<cv::Point2f> points, int iterations=10000)  // xRUle: Horizontal distance, yRule: Vertical distance, Point2f: Points of the fractal
{
    cv::Point2f lastposition = cv::Point2f(0,0);
    const int dieWalls = points.size();
    cv::Point2i upperRightCorner = determineWindowSize(points);

    cv::Mat image = cv::Mat(upperRightCorner.x, upperRightCorner.y, CV_8UC3, cv::Scalar::all(0));

    for(int i=0; i<iterations; i++)
    {
        int rnd = rand() % dieWalls;
        cv::Point2f pointTo = points.at(rnd);
        cv::Point2f diff = pointTo - lastposition;

        lastposition.x += xRule * diff.x;
        lastposition.y += yRule * diff.y;

        image.at<uchar>(lastposition.x, lastposition.y) = 255;
    }

    cv::imshow("Fractal", image);
    cv::waitKey();
}