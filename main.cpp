#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    cv::namedWindow( "Example3", cv::WINDOW_AUTOSIZE );
    cv::VideoCapture cap;
    cap.open( std::string(argv[1]) );
    cv::Mat frame;
    for(;;) {
        cap >> frame;
        if( frame.empty() ) break;
        cv::imshow( "Example3", frame );
        if( cv::waitKey(33) >= 0 ) break;
    }
    // Ran out of film
    return 0;

//    QApplication a(argc, argv);
//    MainWindow w;
//    w.show();

//    return a.exec();
}
