#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setCentralWidget(ui->textEdit);   //sets it as central widget that we created
}

MainWindow::~MainWindow()
{
    delete ui;
}

//same thing as making this in with trigger thing in the what you get thing
void MainWindow::on_actionNew_triggered()
{
    //Clear screen
    currentFile.clear();
    //create a new text window
    ui->textEdit->setText(QString());
}

void MainWindow::on_actionopen_triggered()
{
    //open actual file
    QString fileName = QFileDialog::getOpenFileName(this, "Open the File");
    QFile file(fileName);  //object you are creating for reading and writing file
    currentFile = fileName;
    if (!file.open(QIODevice::ReadOnly | QFile::Text)) {
        QMessageBox::warning(this, "Warning", "Can NOT open file: " + file.errorString());
    }
    setWindowTitle(fileName);
    QTextStream in(&file);
    QString text = in.readAll();    //creates input stream
    ui->textEdit->setText(text);
    file.close();
}

void MainWindow::on_actionSave_triggered() {

    //Open window to save a file
     QString fileName = QFileDialog::getSaveFileName(this, "Save the File");

     //Create object to hold the file
     QFile file(fileName);  //object you are creating for reading and writing file

     //Open the file notify user if problem
     if (!file.open(QIODevice::WriteOnly | QFile::Text)) {
         QMessageBox::warning(this, "Warning", "Can NOT save file: " + file.errorString());
     }

     //store current file
     currentFile = fileName;

     //set window title to name of file
     setWindowTitle(fileName);

     //When writing to out we are actually writing to file on line 68 below
     QTextStream out(&file); //creates output stream

     //Copy text in textEdit widget convert to plain text
     QString text = ui->textEdit->toPlainText();

     //Write to file then close file
     out << text;
     file.close();

}

void MainWindow::on_actionExit_triggered()
{
    QApplication::quit();
}

void MainWindow::on_actionCopy_triggered()
{
    ui->textEdit->copy();
}

void MainWindow::on_actionPaste_triggered()
{
    ui->textEdit->paste();
}

void MainWindow::on_actionUndo_triggered()
{
    ui->textEdit->undo();
}

void MainWindow::on_actionRedo_triggered()
{
    ui->textEdit->redo();
}
