/*

Pencil - Traditional Animation Software
Copyright (C) 2005-2007 Patrick Corrieri & Pascal Naidon
Copyright (C) 2012-2017 Matthew Chiawen Chang

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; version 2 of the License.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

*/


#include "basedockwidget.h"

BaseDockWidget::BaseDockWidget(QWidget *pParent) 
: QDockWidget(pParent)
{
}

BaseDockWidget::BaseDockWidget( QWidget* pParent, Qt::WindowFlags flags )
: QDockWidget( pParent, flags )
{
}

BaseDockWidget::BaseDockWidget( QString strTitle, QWidget* pParent, Qt::WindowFlags flags )
: QDockWidget( strTitle, pParent, flags )
{

}

BaseDockWidget::~BaseDockWidget()
{
}
