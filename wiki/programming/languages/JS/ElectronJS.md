Electron
=========

const { app, BrowserWindow } = require('electron')
const path = require('path')
const url = require('url')
 
app.on('ready', () => {
  // إنشاء نافذة طولها 800 وعرضها 600.
  const win = new BrowserWindow({ width: 800, height: 600 })
 
  // تحميل واستدعاء الملف index.html
  win.loadURL(
    url.format({
      pathname: path.join(__dirname, 'index.html'),
      protocol: 'file:',
      slashes: true
    })
  )
});





<!DOCTYPE html>
<html>
  <head>
    <meta charset="UTF-8">
    <title>Electron app</title>
  </head>
  <body>
    <h1>Hello World!</h1>
  </body>
</html>


-------------------------------------------------------------------------------------------

ref: https://www.tutomena.com/web-development/javascript/electron-framework/

-------------------------------------------------------------------------------------------
https://www.youtube.com/playlist?list=PLL2zWZTDFZziscYhlxlP7dLtzgiEbxymP