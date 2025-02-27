/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp ./deepin-service-manager/src/demo/libqdbusservice-demo/org.deepin.service.sdk.demo.xml -a ./deepin-service-manager/toolGenerate/qdbusxml2cpp/org.deepin.service.sdk.demoAdaptor -i ./deepin-service-manager/toolGenerate/qdbusxml2cpp/org.deepin.service.sdk.demo.h
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "./deepin-service-manager/toolGenerate/qdbusxml2cpp/org.deepin.service.sdk.demoAdaptor.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class DemoAdaptor
 */

DemoAdaptor::DemoAdaptor(QObject *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

DemoAdaptor::~DemoAdaptor()
{
    // destructor
}

QString DemoAdaptor::msg() const
{
    // get the value of property msg
    return qvariant_cast< QString >(parent()->property("msg"));
}

void DemoAdaptor::setMsg(const QString &value)
{
    // set the value of property msg
    parent()->setProperty("msg", QVariant::fromValue(value));
}

QString DemoAdaptor::Hello()
{
    // handle method call org.deepin.service.sdk.demo.Hello
    QString out0;
    QMetaObject::invokeMethod(parent(), "Hello", Q_RETURN_ARG(QString, out0));
    return out0;
}

bool DemoAdaptor::Register(const QString &id, QString &result2)
{
    // handle method call org.deepin.service.sdk.demo.Register
    //return static_cast<YourObjectType *>(parent())->Register(id, result2);
}

