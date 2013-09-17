import QtQuick 2.1
import QtQuick.Controls 1.0
import QtQuick.Layouts 1.0



ApplicationWindow {
    id: window
    width: 400
    height: 300


    menuBar: MenuBar {
        Menu {
            title: "raz t"
            MenuItem {text: "raz"}
        }
        Menu {
            title: "dwa t"
            MenuItem {text: "dwa"}
        }
    }

    toolBar: ToolBar {
        RowLayout {
            anchors.fill: parent
            ToolButton {text: "toolbuttttton"}
        }
    }

    statusBar: StatusBar {
        RowLayout {
            Rectangle {
                width: 10
                height: 10

                color: "red"
            }
            Label {
                id: status
            }
        }
    }
    //main Row
    RowLayout {
        ColumnLayout {//data in vector/list - some shit about puting data to conteiners
            Label {
                text: "data"
            }
        }
        ColumnLayout {//algo and params to choose
            Label {
                text: "algo"
            }
        }
        ColumnLayout {//WHAT HERE - transformed output?
            Label {
                text: "output"
            }
        }
    }

//    TabView {
//        id: myContent
//        anchors.fill: parent
//    }
}
