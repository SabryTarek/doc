Postman
=======



download:
    - Stable
    - Canary


~/.local/share/applications/Postman.desktop

Use the content below in the above file:

[Desktop Entry]
Encoding=UTF-8
Name=Postman
Exec=YOUR_INSTALL_DIR/Postman/app/Postman %U
Icon=YOUR_INSTALL_DIR/Postman/app/resources/app/assets/icon.png
Terminal=false
Type=Application
Categories=Development;




(postman-echo)[https://docs.postman-echo.com]
Postman Echo is service you can use to test your REST clients and make sample API calls. It provides endpoints for GET, POST, PUT, various auth mechanisms and other utility endpoints.

The four parts of an HTTP request is:
    - URL
    - method
    - headers
    - body


You can create and save a request from the:
    - Workspaces build view
    - New button
    - Launch screen


# Note: Postman automatically adds http:// to the beginning of the URL if no protocol is specified.


# Note: Parameters you enter in the URL bar or in the data editor will not automatically be URL-encoded. Right click a piece of selected text, and select "EncodeURIComponent" to manually encode the parameter value.






Some API endpoints use path variables. You can work with those in Postman. Below is an example of a URL with a path variable:

https://api.library.com/:entity/
To edit the path variable, click on Params to see it already entered as the key. Update the value as needed. For example, :entity can be “user” in this specific case. Postman also gives you suggestions to autocomplete the URL.



