#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //Stretch the text edit object to cover the entire space
    this->setCentralWidget(ui->blankSpace);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionNew_triggered()
{

}

void MainWindow::on_actionOpen_triggered()
{

}

void MainWindow::on_actionSave_triggered()
{

}

void MainWindow::on_actionSave_as_triggered()
{

}

void MainWindow::on_actionCut_triggered()
{
    //Application of the built-in cut function
    ui->blankSpace->cut();
}

void MainWindow::on_actionCopy_triggered()
{
    //Application of the built-in copy function
    ui->blankSpace->copy();
}

void MainWindow::on_actionPaste_triggered()
{
    //Application of the built-in paste function
    ui->blankSpace->paste();
}

void MainWindow::on_actionRedo_triggered()
{
    //Application of the built-in redo function
    ui->blankSpace->redo();
}

void MainWindow::on_actionUndo_triggered()
{
    //Application of the built-in undo function
    ui->blankSpace->undo();
}

void MainWindow::on_actionInformation_triggered()
{

}
