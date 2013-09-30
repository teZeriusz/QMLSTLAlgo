#ifndef STLALGOS_H
#define STLALGOS_H

#include <QObject>

#include <QStringList>
#include <QVector>


class Algo: public QObject {
    //precondition
    //argo numbers
    //argos types?

    //name
    //output?
    //type - non-mod / mod / partitioning / sort / sort Oper / bin search / set operations / heap operations / min-max operations / numeric operations / c lib
};


class STLALgos : public QObject {
    Q_OBJECT

    Q_PROPERTY(QStringList algos READ algos NOTIFY algoChanged)
    Q_PROPERTY(QVector<int> container1 READ container1 WRITE setContainer1 NOTIFY container1Changed)
    Q_PROPERTY(QVector<int> container2 READ container2 WRITE setContainer2 NOTIFY container2Changed)

    Q_PROPERTY(QVector<int> outContainer READ outContainer WRITE setOutContainer NOTIFY outContainerChanged)
//add outContainer

    QStringList m_algos;
    QVector<int> m_container1;
    QVector<int> m_container2;

    QVector<int> m_outContainer;

public:
    explicit STLALgos(QObject *parent = 0);
    QStringList algos();

    QVector<int> container1();
    void setContainer1(QVector<int> in1);

    QVector<int> container2();
    void setContainer2(QVector<int> in2);

    QVector<int> outContainer();
    void setOutContainer(QVector<int> out);


signals:
    void algoChanged();
    void container1Changed();
    void container2Changed();
    void outContainerChanged();

public slots:
    void generateIn1Container();
    void generateIn2Container();

    void startAlgo();
};

#endif // STLALGOS_H
