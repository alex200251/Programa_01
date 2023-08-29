#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <iostream>

class Neurona{
public:
    int id,posicion_x,posicion_y;
    int red,green,blue;
    float voltaje;

    Neurona *sig;
    Neurona();
    Neurona(int,float,int,int,int,int,int,Neurona*);
    void print()const{
        std::cout<<"Neurona_"<<id<<":\nVoltaje: "<<voltaje<<std::endl;
    }
};



class Admin{
private:
    Neurona *h;
public:
    Admin (){
        h=nullptr;
    }
    Admin (Neurona*ptr){
        h=ptr;
    }
    void agregar_inicio();
    void agregar_final();
    void mostrar();

};








QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_insert_id_textChanged(const QString &arg1);

    void on_insert_voltaje_textChanged(const QString &arg1);

    void on_pos_x_valueChanged(int arg1);



    void on_pos_y_valueChanged(int arg1);

    void on_set_red_valueChanged(int value);

    void on_set_green_valueChanged(int value);

    void on_set_blue_valueChanged(int value);

private:
    Ui::MainWindow *ui;
    Neurona n;
    Admin a;
};
#endif // MAINWINDOW_H
