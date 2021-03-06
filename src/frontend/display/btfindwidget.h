/*********
*
* In the name of the Father, and of the Son, and of the Holy Spirit.
*
* This file is part of BibleTime's source code, http://www.bibletime.info/
*
* Copyright 1999-2020 by the BibleTime developers.
* The BibleTime source code is licensed under the GNU General Public License
* version 2.0.
*
**********/

#ifndef BTFINDIDGET_H
#define BTFINDIDGET_H

#include <QWidget>


class QCheckBox;
class QLineEdit;
class QString;
class QToolButton;

class BtFindWidget: public QWidget {

    Q_OBJECT

public: /* Methods: */

    BtFindWidget(QWidget * parent = nullptr);

    void showAndSelect();

    bool caseSensitive() const;

    QString text() const;

private: /* Methods: */

    void retranslateUi();

Q_SIGNALS:

    void findPrevious(QString const & text, bool caseSensitive);
    void findNext(QString const & text, bool caseSensitive);
    void highlightText(QString const & text, bool caseSensitive);

private: /* Fields: */

    QLineEdit * m_textEditor;
    QToolButton * m_nextButton;
    QToolButton * m_previousButton;
    QCheckBox * m_caseCheckBox;

};

#endif
