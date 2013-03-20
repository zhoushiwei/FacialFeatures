#ifndef _DETECT_UTIL_HPP_
#define _DETECT_UTIL_HPP_

#include <utility>
#include <opencv2/opencv.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include "svm.h"

using namespace std;
using namespace cv;

void extract_line(const string & line, vector<float> & values);

void loadPointsFile(string path, vector<pair<Point2f, Point2f> > & canonicalPoints);

void align(const Mat & src, Mat & dst, pair<Point2f, Point2f> & points);

void retrieve_data(string positive_urls, string negative_urls, vector<vector<float> > & features, vector<float> & labels);

double predict_img(string model_url, const Mat& img);

void compute_hogimg(string positive_urls, string negative_urls);

void get_urls(const string& path, vector<string>& urls);

void compute_hog(const vector<string>& urls, vector<vector<float> >& features);

void train(vector<vector<float> >& features, vector<float>& labels, string& save_path);

void mean_stddev(vector<vector<float> >& features);

Mat get_hogdescriptor_visu(Mat& origImg, vector<float> feature);

#endif // _DETECT_UTIL_HPP_