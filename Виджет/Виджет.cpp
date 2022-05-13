# включить  " widget.h "
# включить  " ui_widget.h "

Виджет::Виджет (QWidget *parent)
    : QWidget (родительский)
    , пользовательский интерфейс ( новый пользовательский интерфейс:: виджет)
{
    ui-> setupUi ( это );
}

Виджет::~Виджет ()
{
    удалить интерфейс;
}

void  Widget::paintEvent (QPaintEvent *event) {

художник QPainter ( это );

художник. drawText ( rect (), tr ( " Студент:Гаврилова Анна  \ nГруппа:БИСО-02-20 " ));
художник. drawText ( 435 , 120 , " Корень " );
художник. drawText ( 610 , 355 , " 1.3.2 " );
художник. drawText ( 460 , 355 , " 1.3.1 " );
художник. drawText ( 260 , 355 , " 1.2.1 " );
художник. drawText ( 410 , 355 , " 1.2.2 " );

художник. drawText ( 540 , 230 , " 1.3 " );
художник. drawText ( 340 , 230 , " 1.2 " );
художник. drawRect ( 400 , 100 , 100 , 40 );
QVector<QLine> vectorLine;
    vectorLine << QLine ( 400 , 120 , 350 , 120 );
    vectorLine << QLine ( 500 , 120 , 550 , 120 );
    vectorLine << QLine ( 550 , 120 , 550 , 200 );
    vectorLine << QLine ( 350 , 120 , 350 , 200 );
    vectorLine << QLine ( 300 , 200 , 400 , 200 );
    vectorLine << QLine ( 300 , 200 , 280 , 230 );
    vectorLine << QLine ( 300 , 250 , 280 , 230 );
    vectorLine << QLine ( 300 , 250 , 400 , 250 );
    vectorLine << QLine ( 420 , 230 , 400 , 250 );
    vectorLine << QLine ( 420 , 230 , 400 , 200 );

    vectorLine << QLine ( 500 , 200 , 600 , 200 );
    vectorLine << QLine ( 500 , 200 , 480 , 230 );
    vectorLine << QLine ( 500 , 250 , 480 , 230 );
    vectorLine << QLine ( 500 , 250 , 600 , 250 );
    vectorLine << QLine ( 620 , 230 , 600 , 250 );
    vectorLine << QLine ( 620 , 230 , 600 , 200 );

    vectorLine << QLine ( 480 , 230 , 475 , 230 );
    vectorLine << QLine ( 620 , 230 , 625 , 230 );

    vectorLine << QLine ( 280 , 230 , 275 , 230 );
    vectorLine << QLine ( 420 , 230 , 425 , 230 );

    vectorLine << QLine ( 425 , 330 , 425 , 230 );
    vectorLine << QLine ( 275 , 230 , 275 , 330 );

    vectorLine << QLine ( 475 , 330 , 475 , 230 );
    vectorLine << QLine ( 625 , 330 , 625 , 230 );

    художник. DrawLines (векторная линия);
   художник. нарисоватьЭллипс ( 605 , 330 , 40 , 40 );
    художник. нарисоватьЭллипс ( 455 , 330 , 40 , 40 );
    художник. нарисоватьЭллипс ( 255 , 330 , 40 , 40 );
     художник. нарисоватьЭллипс ( 405 , 330 , 40 , 40 );
}
