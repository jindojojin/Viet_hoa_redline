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
            // n?u node d� kh�ng c� con, th� x�a
            if(!temp.hasChildNodes()) {
                temp.clear();
            } else {
            // n?u node d� c� con th� chuy?n con v? false
                temp.firstChild().firstChild().clear();
                QDomText t = doc.createTextNode("false");
                temp.firstChild().appendChild(t);
            }
        }
    }
}
