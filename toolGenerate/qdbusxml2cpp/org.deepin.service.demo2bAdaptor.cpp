/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp ./deepin-service-manager/src/demo/plugin-qt/demo2/org.deepin.service.demo2b.xml -a ./deepin-service-manager/toolGenerate/qdbusxml2cpp/org.deepin.service.demo2bAdaptor -i ./deepin-service-manager/toolGenerate/qdbusxml2cpp/org.deepin.service.demo2b.h
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "./deepin-service-manager/toolGenerate/qdbusxml2cpp/org.deepin.service.demo2bAdaptor.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class Demo2bAdaptor
 */

Demo2bAdaptor::Demo2bAdaptor(QObject *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

Demo2bAdaptor::~Demo2bAdaptor()
{
    // destructor
}

uint Demo2bAdaptor::age() const
{
    // get the value of property Age
    return qvariant_cast< uint >(parent()->property("Age"));
}

void Demo2bAdaptor::setAge(uint value)
{
    // set the value of property Age
    parent()->setProperty("Age", QVariant::fromValue(value));
}

bool Demo2bAdaptor::locked() const
{
    // get the value of property Locked
    return qvariant_cast< bool >(parent()->property("Locked"));
}

AreaList Demo2bAdaptor::areas() const
{
    // get the value of property areas
    return qvariant_cast< AreaList >(parent()->property("areas"));
}

void Demo2bAdaptor::setAreas(AreaList value)
{
    // set the value of property areas
    parent()->setProperty("areas", QVariant::fromValue(value));
}

QString Demo2bAdaptor::msg() const
{
    // get the value of property msg
    return qvariant_cast< QString >(parent()->property("msg"));
}

void Demo2bAdaptor::setMsg(const QString &value)
{
    // set the value of property msg
    parent()->setProperty("msg", QVariant::fromValue(value));
}

QString Demo2bAdaptor::Hello()
{
    // handle method call org.deepin.service.demo2b.Hello
    QString out0;
    QMetaObject::invokeMethod(parent(), "Hello", Q_RETURN_ARG(QString, out0));
    return out0;
}

bool Demo2bAdaptor::Register(const QString &id, QString &result2)
{
    // handle method call org.deepin.service.demo2b.Register
    //return static_cast<YourObjectType *>(parent())->Register(id, result2);
}

bool Demo2bAdaptor::SetArea(const QString &id, AreaList area)
{
    // handle method call org.deepin.service.demo2b.SetArea
    bool result;
    QMetaObject::invokeMethod(parent(), "SetArea", Q_RETURN_ARG(bool, result), Q_ARG(QString, id), Q_ARG(AreaList, area));
    return result;
}

