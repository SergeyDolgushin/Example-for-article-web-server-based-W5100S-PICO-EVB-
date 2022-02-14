//******************************************************************* */
//запрос на веб-сервер раскомментировать при переносе на отладку W5100S-EVB-PICO

// const request = new XMLHttpRequest();
// request.open('GET', 'http://192.168.100.150/get_netinfo.cgi');
// request.send();
// request.addEventListener('load', function() {
//         const data = JSON.parse(this.responseText);
//         console.log(data);
//         let div1 = document.getElementsByClassName('box');
//         console.log(div1);
//         const html = `<h4 class="box2-header">MAC-адрес: ${"xx.xx.xx.xx.xx.xx.xx"}</h4>
//         <h4 class="box2-header">IP-адрес: ${"xxx.xxx.xxx.xxx"}</h4>
//         <h4 class="box2-header">Шлюз: ${"xxx.xxx.xxx.xxx"}</h4>
//         <h4 class="box2-header">DNS-сервер: ${"xxx.xxx.xxx.xxx"}</h4>`;
//         div1[0].insertAdjacentHTML('afterBegin', html);
        
// })

//************************************************************************ */
// для тестирования на ПК

let div1 = document.getElementsByClassName('box');
console.log(div1);
const html = `<h4 class="box2-header">MAC-адрес: ${"xx.xx.xx.xx.xx.xx.xx"}</h4>
<h4 class="box2-header">IP-адрес: ${"xxx.xxx.xxx.xxx"}</h4>
<h4 class="box2-header">Шлюз: ${"xxx.xxx.xxx.xxx"}</h4>
<h4 class="box2-header">DNS-сервер: ${"xxx.xxx.xxx.xxx"}</h4>`;
div1[0].insertAdjacentHTML('afterBegin', html);

// выбор вкладки
const labelcheck = document.querySelectorAll('.toggle-box');
labelcheck.forEach((labelcheck) => {
          labelcheck.addEventListener('click', () => {
          console.log(labelcheck);
          deselectall();
          labelcheck.checked = true;
      })
    })
// снятие "checked" со всех вкладок
function deselectall() {
        labelcheck.forEach(labelcheck => {
            labelcheck.checked = false;
    });
}