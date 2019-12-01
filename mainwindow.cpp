#include <vector>
#include "mainwindow.h"
#include "ui_mainwindow.h"
static unsigned num;//Номер поточного нотатку
MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent),ui(new Ui::MainWindow) {
    ui->setupUi(this);
    this->setCentralWidget(ui->textEdit);
}
MainWindow::~MainWindow() {delete ui;}
static std::vector<QString> note,archive,home,just_note,com_a,com_b,com_c,proj2;
void MainWindow::show_note

void MainWindow::on_actionAdd_triggered()
void MainWindow::on_actionNew_triggered()
void MainWindow::on_actionAdd_to_archive_triggered()

void MainWindow::on_actionShow_note_triggered()
void MainWindow::on_actionAdd_in_home_triggered()
void MainWindow::on_actionproject2_triggered()
void MainWindow::on_actionComponent_A_triggered()
void MainWindow::on_actionComponent_B_triggered()
void MainWindow::on_actionComponent_C_triggered()
void MainWindow::on_actionJust_note_triggered()
void MainWindow::on_actionNext_triggered()
void MainWindow::on_actionBack_triggered()
void MainWindow::on_actionDelete_note_triggered()

void MainWindow::on_actionShow_all_Note_triggered()
void MainWindow::on_actionShow_archive_triggered()
void MainWindow::on_actionShow_home_triggered()
void MainWindow::on_actionShow_just_note_triggered()
void MainWindow::on_actionshow_project2_triggered()
void MainWindow::on_actionShow_component_A_triggered()
void MainWindow::on_actionShow_component_B_triggered()
void MainWindow::on_actionShow_component_C_triggered()
void MainWindow::on_actionComponent_A_2_triggered()
