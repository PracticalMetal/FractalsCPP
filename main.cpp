#include "include/fractal.hpp"

int main()
{
    std::vector<cv::Point2f> points;
    points.push_back(cv::Point2f(0,0));
    points.push_back(cv::Point2f(1000,0));
    points.push_back(cv::Point2f(500,866));

    drawFractal(0.5, 0.5, points);

    return 0;
}