

#include"tmp.h"


void reconstruct()
{
	ifstream fin("q.txt");
	ofstream fout("result.txt");
	Mat dp = imread("d1.jpg", 0);
	double Q[4][4];
	for (int i=0;i<4;++i)
		for (int j = 0; j < 4; ++j)
			fin >> Q[i][j];
	double xx, yy, zz, ww;
	unsigned char dmin = 255, dmax = 0;
	for (int x = 0; x < dp.rows; ++x)
	{
		for (int y = 0; y < dp.cols; ++y)
		{
			int d = dp.at<unsigned char>(x, y);
			dmin = d < dmin ? d : dmin;
			dmax = d > dmax ? d : dmax;
			xx = Q[0][0] * x + Q[0][1] * y + Q[0][2] * d +Q[0][3];
			yy = Q[1][0] * x + Q[1][1] * y + Q[1][2] * d +Q[1][3];
			zz = Q[2][0] * x + Q[2][1] * y + Q[2][2] * d +Q[2][3];
			ww = Q[3][0] * x + Q[3][1] * y + Q[3][2] * d +Q[3][3];
			//fout << xx / ww << ' ' << yy / ww << ' ' << zz / ww << endl;
			if (d < 5)
				continue;
			fout << xx << ' ' << yy << ' ' <<10*zz / ww << endl;
		}
	}
	return;
}