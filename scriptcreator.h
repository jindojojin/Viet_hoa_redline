#ifndef SCRIPTCREATOR_H
#define SCRIPTCREATOR_H

#include<QtXml>
#include<QString>
class ScriptCreator
{
public:
    ScriptCreator();
    /*
    * H�m d? x�a 1 param trong script.
    */
    int delParam(QString name);
private:
    QDomDocument doc;
};

#endif // SCRIPTCREATOR_H
