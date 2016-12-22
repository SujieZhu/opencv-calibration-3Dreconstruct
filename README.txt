项目用途
此项目用途为利用双摄像头视差测距并重建3D模型

开发环境
WINDOWS8+VS2015+OPENCV3.1

项目结构
项目包含两个.cpp文件和两个.h文件
main.cpp
主函数，调用了StereoCalib()函数和reconstruct()函数
calib.h
声明并实现了StereoCalib()函数，该函数用于读取棋盘格图片、标定双摄像机参数和计算视差图并将保存结果
tmp.h
声明了reconstrucct()函数，该函数用于将视差图还原成3D模型并将结果输出到一个txt文档中，内容为所有点的3D坐标
tmp.cpp
reconstrucct()函数的实现

data文件夹中为棋盘格图片，路径位于list.txt文件中
result.txt文件为3D模型云点坐标
