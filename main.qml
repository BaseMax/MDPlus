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
                function update() {
                    lines.text=processor.analyse(edit.text)
                }
                onLineCountChanged: update()
                onHeightChanged: update()
                onCursorPositionChanged: update()
            }
        }
}
