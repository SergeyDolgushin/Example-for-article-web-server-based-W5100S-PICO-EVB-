#ifndef _WEB_PAGE_H_
#define _WEB_PAGE_H_

#define index_page "<!DOCTYPE html>\
                    <html lang='en'>\
                    <head>\
                        <meta charset='UTF-8'>\
                        <meta http-equiv='X-UA-Compatible' content='IE=edge'>\
                        <meta name='viewport' content='width=device-width, initial-scale=1.0'>\
                        <link rel='stylesheet' href='style.css'>\
                        <script>\
                            const request = new XMLHttpRequest();\
                            request.open('GET', 'http://192.168.100.150/get_netinfo.cgi');\
                            request.send();\
                            request.addEventListener('load', function() {\
                            const data = JSON.parse(this.responseText);\
                            console.log(data[0]);\
                            console.log(data[0].mac);\
                            let div1 = document.getElementsByClassName('box');\
                            console.log(div1);\
                            const html = `<h4 class=""box2-header"">MAC-адрес: ${data[0].mac}</h4>\
                            <h4 class=""box2-header"">IP-адрес: ${data[0].ip}</h4>\
                            <h4 class=""box2-header"">Шлюз: ${data[0].gw}</h4>\
                            <h4 class=""box2-header"">DNS-сервер: ${data[0].dns}</h4>\
           `;\
        div1[0].insertAdjacentHTML('afterBegin', html);\
                        });\
                        </script>\
                        <title>Document</title>\
                    </head>\
                    <body>\
                        <div class='accordion'>\
                            <input class='toggle-box' id='block-1' type='checkbox'>\
                            <label for='block-1'>НАСТРОЙКИ МОДУЛЯ W5100S-EVB-PICO</label>\
                            <div class='box'>\
                            </div>\
                            <input class='toggle-box' id='block-2' type='checkbox' >\
                            <label for='block-2'>Продукция компании Wiznet</label>\
                            <div class='box2'>\
                                <img class='product' src='https://efo.ru/storage/images/wiznet/Vendors%20page/mostec.jpg' alt=''>\
                                <img class='product' src='https://efo.ru/storage/images/wiznet/Vendors%20page/control.jpg' alt=''>\
                                <img class='product' src='https://efo.ru/storage/images/wiznet/Vendors%20page/mod.jpg' alt=''>\
                            </div>\
                            <input class='toggle-box' id='block-3' type='checkbox' checked>\
                            <label for='block-3'>Компания ЭФО - официальный дистрибьютор Wiznet в России</label>\
                            <div class='box3'>\
                                <h2 class='box3-header'>Простой веб-сервер</h2>\
                                <h2 class='box3-header'>на базе модуля Wiznet W5100S-EVB-PICO.</h2>\
                                <h3 class='box3-header'>Использование HTML, CSS и JavaScript</h3>\
                                <h3 class='box3-header'>для создания веб-интерфейса.</h3>\
                                <div class='image3'>\
                                    <img class = 'img-box3' src='https://efo.ru/storage/Products/Wiznet%20(pictures)/w5100s-evb-pic-pinout_v1-0b6175173e9620025ef8d641a9521bfc.png' alt=''>\
                                </div>\
                            </div>\
                        </div>\
        <script>\
        const labelcheck = document.querySelectorAll('.toggle-box');\
        console.log(labelcheck[0]);\
        \
        labelcheck.forEach((labelcheck) => {\
            labelcheck.addEventListener('click', () => {\
                console.log(labelcheck);\
                a();\
                labelcheck.checked = true;\
        });\
    });\
\
    function a() {\
        labelcheck.forEach(labelcheck => {\
            labelcheck.checked = false;\
    });\
}\
    </script>\
                    </body>\
                    </html>"

#endif // _WEB_PAGE_H_
