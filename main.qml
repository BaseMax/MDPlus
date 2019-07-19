import QtQuick 2.3
import QtQuick.Controls 1.4
import QtQuick.Layouts 1.0
import SyntaxHighlighter 1.0
ApplicationWindow {
    id: windows
    width: 640
    height: 480
    color: "#f1f1f1"
    visible: true
    function update() {
        lines.text=processor.analyse(edit.text)
    }
    Component.onCompleted: {
        windows.update()
    }
        Row{
            width: parent.width
            height: parent.height
            anchors.fill: parent

            SyntaxHighlighter{
                id:processor
            }
            Text {
                id: lines
                width: parent.width / 2
                height: parent.height
                textFormat: Text.RichText
            }
            TextArea {
                id: edit
                width: parent.width / 2
                height: parent.height
                focus: true
                text: "#Hello\n# Hi!\n\nHow are you?\n"
                onLineCountChanged: windows.update()
                onHeightChanged: windows.update()
                onCursorPositionChanged: windows.update()
                //onEditingFinished: update()
            }
        }
}
