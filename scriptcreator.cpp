#include "scriptcreator.h"

ScriptCreator::ScriptCreator()
{
    this->doc("script");
}

int ScriptCreator::delParam(QString name) {
    QDomNodeList nList = this->doc.elementsByTagName("param");
    QDomElement e;
    for(int i=0; i<nList.length(); i++) {
        QDomElement temp = nList.at(i).toElement();
        if(temp.attribute("name", "") == name) {
            // n?u node dó không có con, thì xóa
            if(!temp.hasChildNodes()) {
                temp.clear();
            } else {
            // n?u node dó có con thì chuy?n con v? false
                temp.firstChild().firstChild().clear();
                QDomText t = doc.createTextNode("false");
                temp.firstChild().appendChild(t);
            }
        }
    }
}
