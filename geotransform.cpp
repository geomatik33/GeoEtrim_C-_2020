#include "geotransform.h"

GeoTransform::GeoTransform()
{

using namespace Emgu::CV;
using namespace Emgu::Util;
using namespace Emgu::CV::Structure;

namespace GeoEtrim
{

    GeoTransform::GeoTransform()
    {
        InitializeComponent();
    }

DataTable *GeoTransform::point_total_table = new DataTable();
DataTable *GeoTransform::point_check_table = new DataTable();
double GeoTransform::mr = 0;
double GeoTransform::mc = 0;
double GeoTransform::vrow_total = 0;
double GeoTransform::vcol_total = 0;
double GeoTransform::col_max = 0;
double GeoTransform::col_min = 0;
double GeoTransform::row_max = 0;
double GeoTransform::row_min = 0;
std::vector<double> GeoTransform::mo(1);
int GeoTransform::iteration = 0;
bool GeoTransform::new_data_active = true;
bool GeoTransform::data_clear_active = false;
bool GeoTransform::form_active = false;
Color GeoTransform::vektor_back;
Color GeoTransform::vektor_canves;
Color GeoTransform::vektor_color;
Color GeoTransform::wind_back;
Color GeoTransform::wind_canves;
Color GeoTransform::wind_color;
Color GeoTransform::date_back;
std::wstring GeoTransform::title_font_name;
std::wstring GeoTransform::values_font_name;
int GeoTransform::title_font_size = 0;
int GeoTransform::values_font_size = 0;
int GeoTransform::decimal_points = 0;
}

void GeoTransform::image_dzyn()
{

    pictureBox1->BackColor = vektor_back;
    pictureBox2->BackColor = wind_back;
    dataGridView1->ColumnHeadersDefaultCellStyle->Font = new Font(title_font_name, title_font_size);
    dataGridView1->DefaultCellStyle->Font = new Font(values_font_name, values_font_size);
    dataGridView1->DefaultCellStyle->Format = L"f" + std::to_wstring(decimal_points);

    int i;
    Bitmap *bmp = new Bitmap(image_mini->Width + 100, image_mini->Height + 100);
    Graphics *g = Graphics::FromImage(bmp);
    SolidBrush tempVar(vektor_canves);
    g->FillRectangle(&tempVar, 0, 0, bmp->Width, bmp->Height);
    if (checkBox2->Checked == true)
    {
        g->DrawImage(image_mini, Point(50, 50));
    }
    else
    {
        Pen tempVar2(Color::Black, 2);
        g->DrawRectangle(&tempVar2, 50, 50, image_mini->Width, image_mini->Height);
    }

    Rgb tempVar3(wind_canves);
    Image<Rgb*, unsigned char> *img = new Image<Rgb*, unsigned char>(bmp->Width, bmp->Height, &tempVar3);
    float r, c, r2, c2, vr, vc;
    Pen tempVar4(Color::Black, static_cast<float>(numericUpDown4->Value));
    g->DrawLine(&tempVar4, 50, 25, 50 + static_cast<float>(numericUpDown3->Value) * static_cast<float>(numericUpDown8->Value), 25);
    std::wstring s = std::to_wstring(numericUpDown8->Value) + L" Pixel";
    System::Drawing::Font tempVar5(L"Consolas", 9);
    SolidBrush tempVar6(Color::Black);
    g->DrawString(s, &tempVar5, &tempVar6, 60 + static_cast<float>(numericUpDown3->Value) * static_cast<float>(numericUpDown8->Value), 25);
    float max_row = 1, max_col = 1;
    float max_row_2 = 1, max_col_2 = 1;
    if (point_check_table->Rows->Count != 0)
    {
        if (scale_control == 1)
        {
            std::vector<float> array_points(point_check_table->Rows->Count);
            for (i = 0; i < point_check_table->Rows->Count; i++)
            {

                array_points[i] = std::stof(point_check_table->Rows[i][2]->ToString());
            }
            max_row = 1000 / array_points.Max();
            for (i = 0; i < point_check_table->Rows->Count; i++)
            {

                array_points[i] = std::stof(point_check_table->Rows[i][3]->ToString());
            }
            max_col = 1000 / array_points.Max();
        }
    }

    if (point_check_table->Rows->Count != 0)
    {

        if (point_check_table->Rows[1][21]->ToString() != L"")
        {
            if (scale_control == 1)
            {
                std::vector<float> array_points(point_check_table->Rows->Count);
                for (i = 0; i < point_check_table->Rows->Count; i++)
                {

                    array_points[i] = std::stof(point_check_table->Rows[i][21]->ToString());
                }
                max_row_2 = 1000 / array_points.Max();
                for (i = 0; i < point_check_table->Rows->Count; i++)
                {

                    array_points[i] = std::stof(point_check_table->Rows[i][22]->ToString());
                }
                max_col_2 = 1000 / array_points.Max();
            }
        }
    }
    for (i = 0; i < point_check_table->Rows->Count; i++)
    {


        r = 50 + std::stof(point_check_table->Rows[i][2]->ToString()) * max_row / (down_Scale - 1);

        c = 50 + std::stof(point_check_table->Rows[i][3]->ToString()) * max_col / (down_Scale - 1);
        float scl_line = static_cast<float>(numericUpDown7->Value);
        SolidBrush tempVar7(vektor_color);
        g->FillEllipse(&tempVar7, c - (scl_line / 2), r - (scl_line / 2), scl_line, scl_line);

        if (point_check_table->Rows[i][21]->ToString() != L"")
        {


            r2 = (50 + std::stof(point_check_table->Rows[i][21]->ToString()) * max_row_2 / (down_Scale - 1));

            c2 = (50 + std::stof(point_check_table->Rows[i][22]->ToString()) * max_col_2 / (down_Scale - 1));
            vr = (r2 - r) * static_cast<float>(numericUpDown3->Value); // for vector scale
            vc = (c2 - c) * static_cast<float>(numericUpDown3->Value); // for vector scale
            r2 = vr + r;
            c2 = vc + c;
            Pen tempVar8(vektor_color, static_cast<float>(numericUpDown4->Value));
            g->DrawLine(&tempVar8, c, r, c2, r2);

            vr = (vr / static_cast<float>(numericUpDown3->Value)) * static_cast<float>(numericUpDown5->Value);
            vc = (vc / static_cast<float>(numericUpDown3->Value)) * static_cast<float>(numericUpDown5->Value);
            Rgb tempVar9(wind_color);
            CvInvoke::Line(img, Point(static_cast<int>(bmp->Width / 2), static_cast<int>(bmp->Height / 2)), Point(FloatingPointToInteger::ToInt32((bmp->Width / 2) + vc), FloatingPointToInteger::ToInt32((bmp->Height / 2) + vr)), (&tempVar9)->MCvScalar, FloatingPointToInteger::ToInt32(numericUpDown6->Value));
        }
    }
    pictureBox1->Image = bmp;
    pictureBox2->Image = img->Bitmap;
}
}

