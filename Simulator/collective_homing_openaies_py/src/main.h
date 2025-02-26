/* 
 * Evorobot* - A software for running evolutionary robotics experiments
 * Copyright (C) 2005 
 * LARAL, Institute of Cognitive Science and Technologies, CNR, Roma, Italy 
 * http://laral.istc.cnr.it

 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 */


#ifndef MAIN_H
#define MAIN_H

//#include <QMainWindow>
#include <QWidget>
#include <QGridLayout>
#include <QApplication>
#include <QScrollArea>

#include <QPen>
#include <QPainter>



class WorldWidget : public QWidget
{
    Q_OBJECT

public:

    WorldWidget(QWidget *parent = 0);

public slots:

protected:
    void paintEvent(QPaintEvent *event);

private:
    QPen pen;
    QBrush brush;
};


class ActWidget : public QWidget
{
    Q_OBJECT

public:

    ActWidget(QWidget *parent = 0);

public slots:

protected:
    void paintEvent(QPaintEvent *event);

private:
    QPen pen;
    QBrush brush;
};

/*
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow();

protected:

private slots:

private:
};

class Window : public QWidget
{
    Q_OBJECT

public:
    Window( MainWindow* main);

private slots:

private:

};
*/

#endif
