#ifndef GEOTRANSFORM_H
#define GEOTRANSFORM_H

#include <QWidget>

namespace Ui {
class GeoTransform;
}

class GeoTransform : public QWidget
{
    Q_OBJECT

public:
    explicit GeoTransform(QWidget *parent = nullptr);
    ~GeoTransform();

private:
    Ui::GeoTransform *ui;
};

#endif // GEOTRANSFORM_H
