#pragma once


namespace KinectViz {

inline void blendAndSetPixel(ColorImage &img, int x, int y, ColorPixel color, float alpha = 1.0f);
void drawLine(ColorImage &image, int p1x, int p1y, int p2x, int p2y, ColorPixel color, float alpha = 1.0f);

}