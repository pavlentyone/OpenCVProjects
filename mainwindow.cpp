#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;

    cv::destroyAllWindows();
}

void MainWindow::on_pushButton_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this, "/home/pavlenty/QtProgects/GIIT_1/img", "*.jpg");
//    cv::Mat img = cv::imread(fileName.toStdString());
//    if(!img.empty()){
//        cv::namedWindow("img", cv::WINDOW_GUI_EXPANDED);
//        cv::imshow("img", img);
//        cv::waitKey(0);
//    }
    cv::namedWindow("img", cv::WINDOW_GUI_EXPANDED);
    cv::VideoCapture cap();
    const char* temp = fileName.toStdString().c_str();
    cap.open(std::string(temp));

    cv::Mat frame;

    while(true){
        cap >> frame;
        if(frame.empty())
            break;
        cv::imshow("img", frame);

    }
}
