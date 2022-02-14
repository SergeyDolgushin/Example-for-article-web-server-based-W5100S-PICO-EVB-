#ifndef _STYLE_CSS_3_H_
#define _STYLE_CSS_3_H_

#define style_css ".accordion{\
                            width: 800px;\
                            padding: 0;\
                            margin: 0 auto;\
                            background-color: #fcfcff;\
                        }\
                        body{\
                            background-color: #c9cace;\
                            }\
                        .toggle-box {\
                            display: none;\
                        }\
                        .toggle-box + label {\
                            background: #6c6e74;\
                            background: -webkit-linear-gradient(left,  #46b428 0%,#14556e 100%);\
                            color: #fff9f9;\
                            cursor: pointer;\
                            display: block;\
                            font: normal 14px Helvetica, Arial, sans-serif;\
                            line-height: 21px;\
                            padding: 8px 22px;\
                            margin-bottom: 0px;\
                            border-radius: 5px;\
                        }\
                        label a, a:hover{color: rgb(207, 207, 207);}\
                        .toggle-box + label:hover{opacity: 0.9;}\
                        .toggle-box + label:active{\
                            background: #14556e;\
                            background: -webkit-linear-gradient(top,  #224e16 0%, #164732 11%, #013031 84%, #083041 100%);\
                        }\
                        .toggle-box + label + div {\
                            display: none;\
                        }\
                        .toggle-box:checked + label + div {\
                            display: block;\
                        }\
                        .box {\
                            height: 70vh;\
                            padding-left: 20px;\
                        }\
                         .box2{\
                        text-align: center;\
                        padding-top: 50px;}\
                        .box3, .box2{\
                            height: 70vh;\
                        }\
                          .product{\
                        width: 30%;\
                        border-radius: 10px;\
                         }\
                        .box3-header {\
                            text-align: center;\
                        }\
                        h2.box3-header, h3.box3-header {\
                            font: bold 20px Helvetica, Arial, sans-serif;\
                            color: #14556e;\
                            padding-top: 8px;\
                            padding-bottom: 0px;\
                            margin: 0;\
                        }\
                          .image3 {\
                            display: flex;\
                            width: 100%;\
                            justify-content: center;\
                            padding-top: 50px;\
                            }\
                            .img-box3 {\
                            width: 30%;\
                            overflow: hidden;\
                            border-radius: 50%;\
                            }\
                        @media (max-width: 480px){\
                            .accordion {\
                                width: 100%;\
                            }\
                            .img-box3 {\
                                width: 50%;\
                                }\
                                h2.box3-header, h3.box3-header {\
                                font: bold 15px Helvetica, Arial, sans-serif;\
                                }\
                            }"
 
#endif // _STYLE_CSS_3_H_