# ifndef WIDGET_H
# определить  WIDGET_H

# включить  < QWidget >
# включить  < QPainter >

QT_BEGIN_NAMESPACE
пространство имен  Ui { класс  Widget ; }
QT_END_NAMESPACE

 виджет класса : общедоступный  QWidget
{
    Q_OBJECT

публичный:
    Виджет (QWidget *parent = nullptr );
    ~ Виджет ();

частный:
    Пользовательский интерфейс::Виджет *ui;
защищено:
    пустота  paintEvent (QPaintEvent *);

};
# endif  // WIDGET_H
