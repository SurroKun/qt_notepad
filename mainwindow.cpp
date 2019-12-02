#include <vector>
#include "mainwindow.h"
#include "ui_mainwindow.h"
static unsigned num;//Номер поточного нотатку
MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent),ui(new Ui::MainWindow) {
    ui->setupUi(this);
    this->setCentralWidget(ui->textEdit);
}
MainWindow::~MainWindow() {delete ui;}
static std::vector<QString> note,archive,home,com_a,com_b,com_c,proj2;//Вектора з нотатків
void MainWindow::show_note(std::vector<QString>& note){//Функція для відображення вмісту вектора з нотатків
    QString tmp="";
    for(auto a:note)tmp+=a+"\n════════════════════════════════════════════\n";
    ui->textEdit->setText(tmp);
}

void MainWindow::on_actionAdd_triggered() {note.push_back(ui->textEdit->toPlainText());}//Додавання нотатку
void MainWindow::on_actionNew_triggered() {ui->textEdit->setText(QString());}//Очищення екрану
void MainWindow::on_actionAdd_to_archive_triggered()//Додавання нотатку в архів
{
    if(!note.empty()){
    archive.push_back(note[num]);
       auto tmp=note.begin();
       for(unsigned i=0;i<num;i++)tmp++;
       note.erase(tmp);
    }
}

void MainWindow::on_actionShow_note_triggered()   {if(!note.empty())ui->textEdit->setText(note[num]);}//Відобрання поточного нотатку
void MainWindow::on_actionAdd_in_home_triggered() {if(!note.empty())home.push_back(note[num]);}//Додавання нотатку в home
void MainWindow::on_actionproject2_triggered()    {if(!note.empty())proj2.push_back(note[num]);}//Додавання нотатку в project2
void MainWindow::on_actionComponent_A_triggered() {if(!note.empty())com_a.push_back(note[num]);}//Додавання нотатку в project1>A
void MainWindow::on_actionComponent_B_triggered() {if(!note.empty())com_b.push_back(note[num]);}//Додавання нотатку в project1>B
void MainWindow::on_actionComponent_C_triggered() {if(!note.empty())com_c.push_back(note[num]);}//Додавання нотатку в project1>C
void MainWindow::on_actionNext_triggered()        {if(!note.empty())ui->textEdit->setText(note[num<note.size()-1?++num:num]);}//Збільшення номера поточного нотатку
void MainWindow::on_actionBack_triggered()        {if(!note.empty())ui->textEdit->setText(note[num>0?--num:num]);}//Зменшення номера поточного нотатку
void MainWindow::on_actionDelete_note_triggered()//Видалення поточного нотатку
{
    if(!note.empty()){
        auto tmp=note.begin();
        for(unsigned i=0;i<num;i++)tmp++;
        note.erase(tmp);
        if(num>0)--num;
    }
}
void MainWindow::on_actionShow_all_Note_triggered()     {show_note(note);}//Відображення контекстів
void MainWindow::on_actionShow_archive_triggered()      {show_note(archive);}//Відображення архіву
void MainWindow::on_actionShow_home_triggered()         {show_note(home);}//Відображення home
void MainWindow::on_actionshow_project2_triggered()     {show_note(proj2);}//Відображення project2
void MainWindow::on_actionShow_component_A_triggered()  {show_note(com_a);}//Відображення project1>A
void MainWindow::on_actionShow_component_B_triggered()  {show_note(com_b);}//Відображення project1>B
void MainWindow::on_actionShow_component_C_triggered()  {show_note(com_c);}//Відображення project1>C
