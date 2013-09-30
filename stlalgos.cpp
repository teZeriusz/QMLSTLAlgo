#include "stlalgos.h"
#include <random>
#include <algorithm>
#include <iterator>


STLALgos::STLALgos(QObject *parent) :
    QObject(parent) {
}


QStringList STLALgos::algos() {
    return m_algos;
}


QVector<int> STLALgos::container1() {
    return m_container1;
}


void STLALgos::setContainer1(QVector<int> in1) {
    m_container1 = in1;
}


QVector<int> STLALgos::container2() {
    return m_container2;
}


void STLALgos::setContainer2(QVector<int> in2) {
    m_container2 = in2;
}


QVector<int> STLALgos::outContainer() {
    return m_outContainer;
}


void STLALgos::setOutContainer(QVector<int> out) {
    m_outContainer = out;
}

//TODO write me!
void STLALgos::generateIn1Container() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dist(-99, 99);

    //TODO get that number from qml!
    generate_n(std::back_inserter(m_container1), 20, bind(dist, gen));
}

//TODO write me!
void STLALgos::generateIn2Container() {

}

//TODO write me!
void STLALgos::startAlgo() {

}
