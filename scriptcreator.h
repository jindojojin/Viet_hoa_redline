#ifndef SCRIPTCREATOR_H
#define SCRIPTCREATOR_H

#include<QtXml>
#include<QString>
class ScriptCreator
{
public:
    ScriptCreator();
    /*
    * Hàm d? xóa 1 param trong script.
    */
    int delParam(QString name);
private:
    QDomDocument doc;
};

#endif // SCRIPTCREATOR_H
