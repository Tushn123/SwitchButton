#include "widget.h"
#include "ui_widget.h"
#include "QDebug"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    connect(ui->widget, &switchbutton::statusChanged, this, &Widget::switchButton_Status);

}

bool Widget::switchButton_Status(bool checked)
{
    qDebug()<<checked;
}

Widget::~Widget()
{
    delete ui;
}

