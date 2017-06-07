#ifndef VRAAG_H
#define VRAAG_H

#include <QObject>

class vraag : public QObject
{
    Q_OBJECT
public:
    explicit vraag(QObject *parent = 0);

    QString vraagquote;

    QByteArray antwoorden[3];

    int juistevraag;


signals:

public slots:
};

#endif // VRAAG_H
