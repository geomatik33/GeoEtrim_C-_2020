#include "geotransform.h"
#include "ui_GeoTransform.h"

GeoTransform::GeoTransform(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GeoTransform)
{
    ui->setupUi(this);
}

GeoTransform::~GeoTransform()
{
    delete ui;
}
