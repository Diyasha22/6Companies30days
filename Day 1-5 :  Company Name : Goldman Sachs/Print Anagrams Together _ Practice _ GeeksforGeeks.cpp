<!DOCTYPE html>
<!-- saved from url=(0070)https://practice.geeksforgeeks.org/problems/print-anagrams-together/1# -->
<html lang="en"><head><meta http-equiv="Content-Type" content="text/html; charset=UTF-8"><style id="ace-dracula">.ace-dracula .ace_gutter {background: #282a36;color: rgb(144,145,148)}.ace-dracula .ace_print-margin {width: 1px;background: #44475a}.ace-dracula {background-color: #282a36;color: #f8f8f2}.ace-dracula .ace_cursor {color: #f8f8f0}.ace-dracula .ace_marker-layer .ace_selection {background: #44475a}.ace-dracula.ace_multiselect .ace_selection.ace_start {box-shadow: 0 0 3px 0px #282a36;border-radius: 2px}.ace-dracula .ace_marker-layer .ace_step {background: rgb(198, 219, 174)}.ace-dracula .ace_marker-layer .ace_bracket {margin: -1px 0 0 -1px;border: 1px solid #a29709}.ace-dracula .ace_marker-layer .ace_active-line {background: #44475a}.ace-dracula .ace_gutter-active-line {background-color: #44475a}.ace-dracula .ace_marker-layer .ace_selected-word {box-shadow: 0px 0px 0px 1px #a29709;border-radius: 3px;}.ace-dracula .ace_fold {background-color: #50fa7b;border-color: #f8f8f2}.ace-dracula .ace_keyword {color: #ff79c6}.ace-dracula .ace_constant.ace_language {color: #bd93f9}.ace-dracula .ace_constant.ace_numeric {color: #bd93f9}.ace-dracula .ace_constant.ace_character {color: #bd93f9}.ace-dracula .ace_constant.ace_character.ace_escape {color: #ff79c6}.ace-dracula .ace_constant.ace_other {color: #bd93f9}.ace-dracula .ace_support.ace_function {color: #8be9fd}.ace-dracula .ace_support.ace_constant {color: #6be5fd}.ace-dracula .ace_support.ace_class {font-style: italic;color: #66d9ef}.ace-dracula .ace_support.ace_type {font-style: italic;color: #66d9ef}.ace-dracula .ace_storage {color: #ff79c6}.ace-dracula .ace_storage.ace_type {font-style: italic;color: #8be9fd}.ace-dracula .ace_invalid {color: #F8F8F0;background-color: #ff79c6}.ace-dracula .ace_invalid.ace_deprecated {color: #F8F8F0;background-color: #bd93f9}.ace-dracula .ace_string {color: #f1fa8c}.ace-dracula .ace_comment {color: #6272a4}.ace-dracula .ace_variable {color: #50fa7b}.ace-dracula .ace_variable.ace_parameter {font-style: italic;color: #ffb86c}.ace-dracula .ace_entity.ace_other.ace_attribute-name {color: #50fa7b}.ace-dracula .ace_entity.ace_name.ace_function {color: #50fa7b}.ace-dracula .ace_entity.ace_name.ace_tag {color: #ff79c6}.ace-dracula .ace_invisible {color: #626680;}.ace-dracula .ace_indent-guide {background: url(data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAEAAAACCAYAAACZgbYnAAAAEklEQVQImWNgYGBgYHB3d/8PAAOIAdULw8qMAAAAAElFTkSuQmCC) right repeat-y}
/*# sourceURL=ace/css/ace-dracula */</style><style class="vjs-styles-defaults">
      .video-js {
        width: 300px;
        height: 150px;
      }

      .vjs-fluid {
        padding-top: 56.25%
      }
    </style><style id="autocompletion.css">.ace_editor.ace_autocomplete .ace_marker-layer .ace_active-line {    background-color: #CAD6FA;    z-index: 1;}.ace_dark.ace_editor.ace_autocomplete .ace_marker-layer .ace_active-line {    background-color: #3a674e;}.ace_editor.ace_autocomplete .ace_line-hover {    border: 1px solid #abbffe;    margin-top: -1px;    background: rgba(233,233,253,0.4);    position: absolute;    z-index: 2;}.ace_dark.ace_editor.ace_autocomplete .ace_line-hover {    border: 1px solid rgba(109, 150, 13, 0.8);    background: rgba(58, 103, 78, 0.62);}.ace_completion-meta {    opacity: 0.5;    margin: 0.9em;}.ace_editor.ace_autocomplete .ace_completion-highlight{    color: #2d69c7;}.ace_dark.ace_editor.ace_autocomplete .ace_completion-highlight{    color: #93ca12;}.ace_editor.ace_autocomplete {    width: 300px;    z-index: 200000;    border: 1px lightgray solid;    position: fixed;    box-shadow: 2px 3px 5px rgba(0,0,0,.2);    line-height: 1.4;    background: #fefefe;    color: #111;}.ace_dark.ace_editor.ace_autocomplete {    border: 1px #484747 solid;    box-shadow: 2px 3px 5px rgba(0, 0, 0, 0.51);    line-height: 1.4;    background: #25282c;    color: #c1c1c1;}
/*# sourceURL=ace/css/autocompletion.css */</style><style>.ace_snippet-marker {    -moz-box-sizing: border-box;    box-sizing: border-box;    background: rgba(194, 193, 208, 0.09);    border: 1px dotted rgba(211, 208, 235, 0.62);    position: absolute;}</style><style>    .error_widget_wrapper {        background: inherit;        color: inherit;        border:none    }    .error_widget {        border-top: solid 2px;        border-bottom: solid 2px;        margin: 5px 0;        padding: 10px 40px;        white-space: pre-wrap;    }    .error_widget.ace_error, .error_widget_arrow.ace_error{        border-color: #ff5a5a    }    .error_widget.ace_warning, .error_widget_arrow.ace_warning{        border-color: #F1D817    }    .error_widget.ace_info, .error_widget_arrow.ace_info{        border-color: #5a5a5a    }    .error_widget.ace_ok, .error_widget_arrow.ace_ok{        border-color: #5aaa5a    }    .error_widget_arrow {        position: absolute;        border: solid 5px;        border-top-color: transparent!important;        border-right-color: transparent!important;        border-left-color: transparent!important;        top: -5px;    }</style><style id="ace-tm">.ace-tm .ace_gutter {background: #f0f0f0;color: #333;}.ace-tm .ace_print-margin {width: 1px;background: #e8e8e8;}.ace-tm .ace_fold {background-color: #6B72E6;}.ace-tm {background-color: #FFFFFF;color: black;}.ace-tm .ace_cursor {color: black;}.ace-tm .ace_invisible {color: rgb(191, 191, 191);}.ace-tm .ace_storage,.ace-tm .ace_keyword {color: blue;}.ace-tm .ace_constant {color: rgb(197, 6, 11);}.ace-tm .ace_constant.ace_buildin {color: rgb(88, 72, 246);}.ace-tm .ace_constant.ace_language {color: rgb(88, 92, 246);}.ace-tm .ace_constant.ace_library {color: rgb(6, 150, 14);}.ace-tm .ace_invalid {background-color: rgba(255, 0, 0, 0.1);color: red;}.ace-tm .ace_support.ace_function {color: rgb(60, 76, 114);}.ace-tm .ace_support.ace_constant {color: rgb(6, 150, 14);}.ace-tm .ace_support.ace_type,.ace-tm .ace_support.ace_class {color: rgb(109, 121, 222);}.ace-tm .ace_keyword.ace_operator {color: rgb(104, 118, 135);}.ace-tm .ace_string {color: rgb(3, 106, 7);}.ace-tm .ace_comment {color: rgb(76, 136, 107);}.ace-tm .ace_comment.ace_doc {color: rgb(0, 102, 255);}.ace-tm .ace_comment.ace_doc.ace_tag {color: rgb(128, 159, 191);}.ace-tm .ace_constant.ace_numeric {color: rgb(0, 0, 205);}.ace-tm .ace_variable {color: rgb(49, 132, 149);}.ace-tm .ace_xml-pe {color: rgb(104, 104, 91);}.ace-tm .ace_entity.ace_name.ace_function {color: #0000A2;}.ace-tm .ace_heading {color: rgb(12, 7, 255);}.ace-tm .ace_list {color:rgb(185, 6, 144);}.ace-tm .ace_meta.ace_tag {color:rgb(0, 22, 142);}.ace-tm .ace_string.ace_regex {color: rgb(255, 0, 0)}.ace-tm .ace_marker-layer .ace_selection {background: rgb(181, 213, 255);}.ace-tm.ace_multiselect .ace_selection.ace_start {box-shadow: 0 0 3px 0px white;}.ace-tm .ace_marker-layer .ace_step {background: rgb(252, 255, 0);}.ace-tm .ace_marker-layer .ace_stack {background: rgb(164, 229, 101);}.ace-tm .ace_marker-layer .ace_bracket {margin: -1px 0 0 -1px;border: 1px solid rgb(192, 192, 192);}.ace-tm .ace_marker-layer .ace_active-line {background: rgba(0, 0, 0, 0.07);}.ace-tm .ace_gutter-active-line {background-color : #dcdcdc;}.ace-tm .ace_marker-layer .ace_selected-word {background: rgb(250, 250, 255);border: 1px solid rgb(200, 200, 250);}.ace-tm .ace_indent-guide {background: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAEAAAACCAYAAACZgbYnAAAAE0lEQVQImWP4////f4bLly//BwAmVgd1/w11/gAAAABJRU5ErkJggg==") right repeat-y;}
/*# sourceURL=ace/css/ace-tm */</style><style id="ace_editor.css">.ace_br1 {border-top-left-radius    : 3px;}.ace_br2 {border-top-right-radius   : 3px;}.ace_br3 {border-top-left-radius    : 3px; border-top-right-radius:    3px;}.ace_br4 {border-bottom-right-radius: 3px;}.ace_br5 {border-top-left-radius    : 3px; border-bottom-right-radius: 3px;}.ace_br6 {border-top-right-radius   : 3px; border-bottom-right-radius: 3px;}.ace_br7 {border-top-left-radius    : 3px; border-top-right-radius:    3px; border-bottom-right-radius: 3px;}.ace_br8 {border-bottom-left-radius : 3px;}.ace_br9 {border-top-left-radius    : 3px; border-bottom-left-radius:  3px;}.ace_br10{border-top-right-radius   : 3px; border-bottom-left-radius:  3px;}.ace_br11{border-top-left-radius    : 3px; border-top-right-radius:    3px; border-bottom-left-radius:  3px;}.ace_br12{border-bottom-right-radius: 3px; border-bottom-left-radius:  3px;}.ace_br13{border-top-left-radius    : 3px; border-bottom-right-radius: 3px; border-bottom-left-radius:  3px;}.ace_br14{border-top-right-radius   : 3px; border-bottom-right-radius: 3px; border-bottom-left-radius:  3px;}.ace_br15{border-top-left-radius    : 3px; border-top-right-radius:    3px; border-bottom-right-radius: 3px; border-bottom-left-radius: 3px;}.ace_editor {position: relative;overflow: hidden;font: 12px/normal 'Monaco', 'Menlo', 'Ubuntu Mono', 'Consolas', 'source-code-pro', monospace;direction: ltr;text-align: left;-webkit-tap-highlight-color: rgba(0, 0, 0, 0);}.ace_scroller {position: absolute;overflow: hidden;top: 0;bottom: 0;background-color: inherit;-ms-user-select: none;-moz-user-select: none;-webkit-user-select: none;user-select: none;cursor: text;}.ace_content {position: absolute;box-sizing: border-box;min-width: 100%;contain: style size layout;}.ace_dragging .ace_scroller:before{position: absolute;top: 0;left: 0;right: 0;bottom: 0;content: '';background: rgba(250, 250, 250, 0.01);z-index: 1000;}.ace_dragging.ace_dark .ace_scroller:before{background: rgba(0, 0, 0, 0.01);}.ace_selecting, .ace_selecting * {cursor: text !important;}.ace_gutter {position: absolute;overflow : hidden;width: auto;top: 0;bottom: 0;left: 0;cursor: default;z-index: 4;-ms-user-select: none;-moz-user-select: none;-webkit-user-select: none;user-select: none;contain: style size layout;}.ace_gutter-active-line {position: absolute;left: 0;right: 0;}.ace_scroller.ace_scroll-left {box-shadow: 17px 0 16px -16px rgba(0, 0, 0, 0.4) inset;}.ace_gutter-cell {position: absolute;top: 0;left: 0;right: 0;padding-left: 19px;padding-right: 6px;background-repeat: no-repeat;}.ace_gutter-cell.ace_error {background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABAAAAAQCAMAAAAoLQ9TAAABOFBMVEX/////////QRswFAb/Ui4wFAYwFAYwFAaWGAfDRymzOSH/PxswFAb/SiUwFAYwFAbUPRvjQiDllog5HhHdRybsTi3/Tyv9Tir+Syj/UC3////XurebMBIwFAb/RSHbPx/gUzfdwL3kzMivKBAwFAbbvbnhPx66NhowFAYwFAaZJg8wFAaxKBDZurf/RB6mMxb/SCMwFAYwFAbxQB3+RB4wFAb/Qhy4Oh+4QifbNRcwFAYwFAYwFAb/QRzdNhgwFAYwFAbav7v/Uy7oaE68MBK5LxLewr/r2NXewLswFAaxJw4wFAbkPRy2PyYwFAaxKhLm1tMwFAazPiQwFAaUGAb/QBrfOx3bvrv/VC/maE4wFAbRPBq6MRO8Qynew8Dp2tjfwb0wFAbx6eju5+by6uns4uH9/f36+vr/GkHjAAAAYnRSTlMAGt+64rnWu/bo8eAA4InH3+DwoN7j4eLi4xP99Nfg4+b+/u9B/eDs1MD1mO7+4PHg2MXa347g7vDizMLN4eG+Pv7i5evs/v79yu7S3/DV7/498Yv24eH+4ufQ3Ozu/v7+y13sRqwAAADLSURBVHjaZc/XDsFgGIBhtDrshlitmk2IrbHFqL2pvXf/+78DPokj7+Fz9qpU/9UXJIlhmPaTaQ6QPaz0mm+5gwkgovcV6GZzd5JtCQwgsxoHOvJO15kleRLAnMgHFIESUEPmawB9ngmelTtipwwfASilxOLyiV5UVUyVAfbG0cCPHig+GBkzAENHS0AstVF6bacZIOzgLmxsHbt2OecNgJC83JERmePUYq8ARGkJx6XtFsdddBQgZE2nPR6CICZhawjA4Fb/chv+399kfR+MMMDGOQAAAABJRU5ErkJggg==");background-repeat: no-repeat;background-position: 2px center;}.ace_gutter-cell.ace_warning {background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABAAAAAQCAMAAAAoLQ9TAAAAmVBMVEX///8AAAD///8AAAAAAABPSzb/5sAAAAB/blH/73z/ulkAAAAAAAD85pkAAAAAAAACAgP/vGz/rkDerGbGrV7/pkQICAf////e0IsAAAD/oED/qTvhrnUAAAD/yHD/njcAAADuv2r/nz//oTj/p064oGf/zHAAAAA9Nir/tFIAAAD/tlTiuWf/tkIAAACynXEAAAAAAAAtIRW7zBpBAAAAM3RSTlMAABR1m7RXO8Ln31Z36zT+neXe5OzooRDfn+TZ4p3h2hTf4t3k3ucyrN1K5+Xaks52Sfs9CXgrAAAAjklEQVR42o3PbQ+CIBQFYEwboPhSYgoYunIqqLn6/z8uYdH8Vmdnu9vz4WwXgN/xTPRD2+sgOcZjsge/whXZgUaYYvT8QnuJaUrjrHUQreGczuEafQCO/SJTufTbroWsPgsllVhq3wJEk2jUSzX3CUEDJC84707djRc5MTAQxoLgupWRwW6UB5fS++NV8AbOZgnsC7BpEAAAAABJRU5ErkJggg==");background-position: 2px center;}.ace_gutter-cell.ace_info {background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABAAAAAQCAAAAAA6mKC9AAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAAAJ0Uk5TAAB2k804AAAAPklEQVQY02NgIB68QuO3tiLznjAwpKTgNyDbMegwisCHZUETUZV0ZqOquBpXj2rtnpSJT1AEnnRmL2OgGgAAIKkRQap2htgAAAAASUVORK5CYII=");background-position: 2px center;}.ace_dark .ace_gutter-cell.ace_info {background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABAAAAAQBAMAAADt3eJSAAAAJFBMVEUAAAChoaGAgIAqKiq+vr6tra1ZWVmUlJSbm5s8PDxubm56enrdgzg3AAAAAXRSTlMAQObYZgAAAClJREFUeNpjYMAPdsMYHegyJZFQBlsUlMFVCWUYKkAZMxZAGdxlDMQBAG+TBP4B6RyJAAAAAElFTkSuQmCC");}.ace_scrollbar {contain: strict;position: absolute;right: 0;bottom: 0;z-index: 6;}.ace_scrollbar-inner {position: absolute;cursor: text;left: 0;top: 0;}.ace_scrollbar-v{overflow-x: hidden;overflow-y: scroll;top: 0;}.ace_scrollbar-h {overflow-x: scroll;overflow-y: hidden;left: 0;}.ace_print-margin {position: absolute;height: 100%;}.ace_text-input {position: absolute;z-index: 0;width: 0.5em;height: 1em;opacity: 0;background: transparent;-moz-appearance: none;appearance: none;border: none;resize: none;outline: none;overflow: hidden;font: inherit;padding: 0 1px;margin: 0 -1px;contain: strict;-ms-user-select: text;-moz-user-select: text;-webkit-user-select: text;user-select: text;white-space: pre!important;}.ace_text-input.ace_composition {background: transparent;color: inherit;z-index: 1000;opacity: 1;}.ace_composition_placeholder { color: transparent }.ace_composition_marker { border-bottom: 1px solid;position: absolute;border-radius: 0;margin-top: 1px;}[ace_nocontext=true] {transform: none!important;filter: none!important;perspective: none!important;clip-path: none!important;mask : none!important;contain: none!important;perspective: none!important;mix-blend-mode: initial!important;z-index: auto;}.ace_layer {z-index: 1;position: absolute;overflow: hidden;word-wrap: normal;white-space: pre;height: 100%;width: 100%;box-sizing: border-box;pointer-events: none;}.ace_gutter-layer {position: relative;width: auto;text-align: right;pointer-events: auto;height: 1000000px;contain: style size layout;}.ace_text-layer {font: inherit !important;position: absolute;height: 1000000px;width: 1000000px;contain: style size layout;}.ace_text-layer > .ace_line, .ace_text-layer > .ace_line_group {contain: style size layout;position: absolute;top: 0;left: 0;right: 0;}.ace_hidpi .ace_text-layer,.ace_hidpi .ace_gutter-layer,.ace_hidpi .ace_content,.ace_hidpi .ace_gutter {contain: strict;will-change: transform;}.ace_hidpi .ace_text-layer > .ace_line, .ace_hidpi .ace_text-layer > .ace_line_group {contain: strict;}.ace_cjk {display: inline-block;text-align: center;}.ace_cursor-layer {z-index: 4;}.ace_cursor {z-index: 4;position: absolute;box-sizing: border-box;border-left: 2px solid;transform: translatez(0);}.ace_multiselect .ace_cursor {border-left-width: 1px;}.ace_slim-cursors .ace_cursor {border-left-width: 1px;}.ace_overwrite-cursors .ace_cursor {border-left-width: 0;border-bottom: 1px solid;}.ace_hidden-cursors .ace_cursor {opacity: 0.2;}.ace_smooth-blinking .ace_cursor {transition: opacity 0.18s;}.ace_animate-blinking .ace_cursor {animation-duration: 1000ms;animation-timing-function: step-end;animation-name: blink-ace-animate;animation-iteration-count: infinite;}.ace_animate-blinking.ace_smooth-blinking .ace_cursor {animation-duration: 1000ms;animation-timing-function: ease-in-out;animation-name: blink-ace-animate-smooth;}@keyframes blink-ace-animate {from, to { opacity: 1; }60% { opacity: 0; }}@keyframes blink-ace-animate-smooth {from, to { opacity: 1; }45% { opacity: 1; }60% { opacity: 0; }85% { opacity: 0; }}.ace_marker-layer .ace_step, .ace_marker-layer .ace_stack {position: absolute;z-index: 3;}.ace_marker-layer .ace_selection {position: absolute;z-index: 5;}.ace_marker-layer .ace_bracket {position: absolute;z-index: 6;}.ace_marker-layer .ace_active-line {position: absolute;z-index: 2;}.ace_marker-layer .ace_selected-word {position: absolute;z-index: 4;box-sizing: border-box;}.ace_line .ace_fold {box-sizing: border-box;display: inline-block;height: 11px;margin-top: -2px;vertical-align: middle;background-image:url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABEAAAAJCAYAAADU6McMAAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAAJpJREFUeNpi/P//PwOlgAXGYGRklAVSokD8GmjwY1wasKljQpYACtpCFeADcHVQfQyMQAwzwAZI3wJKvCLkfKBaMSClBlR7BOQikCFGQEErIH0VqkabiGCAqwUadAzZJRxQr/0gwiXIal8zQQPnNVTgJ1TdawL0T5gBIP1MUJNhBv2HKoQHHjqNrA4WO4zY0glyNKLT2KIfIMAAQsdgGiXvgnYAAAAASUVORK5CYII="),url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAEAAAA3CAYAAADNNiA5AAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAACJJREFUeNpi+P//fxgTAwPDBxDxD078RSX+YeEyDFMCIMAAI3INmXiwf2YAAAAASUVORK5CYII=");background-repeat: no-repeat, repeat-x;background-position: center center, top left;color: transparent;border: 1px solid black;border-radius: 2px;cursor: pointer;pointer-events: auto;}.ace_dark .ace_fold {}.ace_fold:hover{background-image:url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABEAAAAJCAYAAADU6McMAAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAAJpJREFUeNpi/P//PwOlgAXGYGRklAVSokD8GmjwY1wasKljQpYACtpCFeADcHVQfQyMQAwzwAZI3wJKvCLkfKBaMSClBlR7BOQikCFGQEErIH0VqkabiGCAqwUadAzZJRxQr/0gwiXIal8zQQPnNVTgJ1TdawL0T5gBIP1MUJNhBv2HKoQHHjqNrA4WO4zY0glyNKLT2KIfIMAAQsdgGiXvgnYAAAAASUVORK5CYII="),url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAEAAAA3CAYAAADNNiA5AAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAACBJREFUeNpi+P//fz4TAwPDZxDxD5X4i5fLMEwJgAADAEPVDbjNw87ZAAAAAElFTkSuQmCC");}.ace_tooltip {background-color: #FFF;background-image: linear-gradient(to bottom, transparent, rgba(0, 0, 0, 0.1));border: 1px solid gray;border-radius: 1px;box-shadow: 0 1px 2px rgba(0, 0, 0, 0.3);color: black;max-width: 100%;padding: 3px 4px;position: fixed;z-index: 999999;box-sizing: border-box;cursor: default;white-space: pre;word-wrap: break-word;line-height: normal;font-style: normal;font-weight: normal;letter-spacing: normal;pointer-events: none;}.ace_folding-enabled > .ace_gutter-cell {padding-right: 13px;}.ace_fold-widget {box-sizing: border-box;margin: 0 -12px 0 1px;display: none;width: 11px;vertical-align: top;background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAUAAAAFCAYAAACNbyblAAAANElEQVR42mWKsQ0AMAzC8ixLlrzQjzmBiEjp0A6WwBCSPgKAXoLkqSot7nN3yMwR7pZ32NzpKkVoDBUxKAAAAABJRU5ErkJggg==");background-repeat: no-repeat;background-position: center;border-radius: 3px;border: 1px solid transparent;cursor: pointer;}.ace_folding-enabled .ace_fold-widget {display: inline-block;   }.ace_fold-widget.ace_end {background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAUAAAAFCAYAAACNbyblAAAANElEQVR42m3HwQkAMAhD0YzsRchFKI7sAikeWkrxwScEB0nh5e7KTPWimZki4tYfVbX+MNl4pyZXejUO1QAAAABJRU5ErkJggg==");}.ace_fold-widget.ace_closed {background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAMAAAAGCAYAAAAG5SQMAAAAOUlEQVR42jXKwQkAMAgDwKwqKD4EwQ26sSOkVWjgIIHAzPiCgaqiqnJHZnKICBERHN194O5b9vbLuAVRL+l0YWnZAAAAAElFTkSuQmCCXA==");}.ace_fold-widget:hover {border: 1px solid rgba(0, 0, 0, 0.3);background-color: rgba(255, 255, 255, 0.2);box-shadow: 0 1px 1px rgba(255, 255, 255, 0.7);}.ace_fold-widget:active {border: 1px solid rgba(0, 0, 0, 0.4);background-color: rgba(0, 0, 0, 0.05);box-shadow: 0 1px 1px rgba(255, 255, 255, 0.8);}.ace_dark .ace_fold-widget {background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAUAAAAFCAYAAACNbyblAAAAHklEQVQIW2P4//8/AzoGEQ7oGCaLLAhWiSwB146BAQCSTPYocqT0AAAAAElFTkSuQmCC");}.ace_dark .ace_fold-widget.ace_end {background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAUAAAAFCAYAAACNbyblAAAAH0lEQVQIW2P4//8/AxQ7wNjIAjDMgC4AxjCVKBirIAAF0kz2rlhxpAAAAABJRU5ErkJggg==");}.ace_dark .ace_fold-widget.ace_closed {background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAMAAAAFCAYAAACAcVaiAAAAHElEQVQIW2P4//+/AxAzgDADlOOAznHAKgPWAwARji8UIDTfQQAAAABJRU5ErkJggg==");}.ace_dark .ace_fold-widget:hover {box-shadow: 0 1px 1px rgba(255, 255, 255, 0.2);background-color: rgba(255, 255, 255, 0.1);}.ace_dark .ace_fold-widget:active {box-shadow: 0 1px 1px rgba(255, 255, 255, 0.2);}.ace_inline_button {border: 1px solid lightgray;display: inline-block;margin: -1px 8px;padding: 0 5px;pointer-events: auto;cursor: pointer;}.ace_inline_button:hover {border-color: gray;background: rgba(200,200,200,0.2);display: inline-block;pointer-events: auto;}.ace_fold-widget.ace_invalid {background-color: #FFB4B4;border-color: #DE5555;}.ace_fade-fold-widgets .ace_fold-widget {transition: opacity 0.4s ease 0.05s;opacity: 0;}.ace_fade-fold-widgets:hover .ace_fold-widget {transition: opacity 0.05s ease 0.05s;opacity:1;}.ace_underline {text-decoration: underline;}.ace_bold {font-weight: bold;}.ace_nobold .ace_bold {font-weight: normal;}.ace_italic {font-style: italic;}.ace_error-marker {background-color: rgba(255, 0, 0,0.2);position: absolute;z-index: 9;}.ace_highlight-marker {background-color: rgba(255, 255, 0,0.2);position: absolute;z-index: 8;}
/*# sourceURL=ace/css/ace_editor.css */</style>
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Print Anagrams Together | Practice | GeeksforGeeks</title>
    <link rel="icon" href="https://media.geeksforgeeks.org/img-practice/favicon-1600291663.png" type="image/x-icon">
      
    
    <meta name="keywords" content="programming,coding,online, code online, online judge, practice, run code, test, expected outcome, programming competition, programming contest, online programming, online computer programming">
    <meta name="description" content="Given an array of strings, return all groups of strings that are anagrams. The groups must be created in order of their appearance in the original array. Look at the sample case for clarification.


Example 1:


Input:
N = 5
words[] = {act,go ">
    <meta name="viewport" content="width=device-width, initial-scale=1, maximum-scale=1">
    <meta property="og:image" content="https://media.geeksforgeeks.org/img-practice/gfg_200X200.png">
    <meta property="og:image:alt" content="GeeksforGeeks">
    <meta property="og:image:type" content="image/png">
    <meta property="og:image:width" content="200">
    <meta property="og:image:height" content="200">
    
    <link rel="stylesheet" href="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/bootstrap.min.css" media="all" onload="if(media!=&#39;all&#39;)media=&#39;all&#39;">
    <link rel="stylesheet" type="text/css" href="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/style-2.8.css" media="all" onload="if(media!=&#39;all&#39;)media=&#39;all&#39;">
    <link rel="stylesheet" type="text/css" href="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/animate.min.css" media="all" onload="if(media!=&#39;all&#39;)media=&#39;all&#39;">
    <link href="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/css" rel="stylesheet" media="all" onload="if(media!=&#39;all&#39;)media=&#39;all&#39;"> 
    <link rel="stylesheet" href="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/all.css" integrity="sha384-DNOHZ68U8hZfKXOrtjWvjxusGo9WQnrNx2sqG0tfsghAvtVlRW3tvkXWZh58N9jp" crossorigin="anonymous" media="all" onload="if(media!=&#39;all&#39;)media=&#39;all&#39;"> 
    <link href="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/font-awesome.min.css" rel="stylesheet" media="all" onload="if(media!=&#39;all&#39;)media=&#39;all&#39;">
    <link rel="stylesheet" href="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/bootstrap-select.min.css" media="all" onload="if(media!=&#39;all&#39;)media=&#39;all&#39;">
    <link rel="stylesheet" href="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/jquery.datetimepicker.min.css" media="all" onload="if(media!=&#39;all&#39;)media=&#39;all&#39;">
    <link rel="stylesheet" type="text/css" href="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/cookieconsent.min.css" media="all" onload="if(media!=&#39;all&#39;)media=&#39;all&#39;">
    <link href="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/common.css" rel="stylesheet" type="text/css">
    <link rel="stylesheet" href="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/vja0nps.css" media="all" onload="if(media!=&#39;all&#39;)media=&#39;all&#39;">
    <link rel="stylesheet" href="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/header-footer.css">

    <!-- Google Tag Manager -->
    <script type="text/javascript" async="" src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/f.txt"></script><script type="text/javascript" async="" src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/f.txt"></script><script type="text/javascript" async="" src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/js"></script><script async="" src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/uwt.js.download"></script><script type="text/javascript" async="" src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/insight.min.js.download"></script><script type="text/javascript" async="" src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/js(1)"></script><script type="text/javascript" async="" src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/js(2)"></script><script type="text/javascript" async="" src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/analytics.js.download"></script><script src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/2320390688070878" async=""></script><script src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/sdk.js.download" async="" crossorigin="anonymous"></script><script id="facebook-jssdk" src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/sdk.js(1).download"></script><script async="" src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/fbevents.js.download"></script><script async="" src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/gtm.js.download"></script><script>(function(w,d,s,l,i){w[l]=w[l]||[];w[l].push({'gtm.start':
    new Date().getTime(),event:'gtm.js'});var f=d.getElementsByTagName(s)[0],
    j=d.createElement(s),dl=l!='dataLayer'?'&l='+l:'';j.async=true;j.src=
    'https://www.googletagmanager.com/gtm.js?id='+i+dl;f.parentNode.insertBefore(j,f);
    })(window,document,'script','dataLayer','GTM-TH3MQN4');</script>
    <!-- Google Tag Manager (noscript) -->
    <noscript><iframe src="https://www.googletagmanager.com/ns.html?id=GTM-TH3MQN4"
    height="0" width="0" style="display:none;visibility:hidden"></iframe></noscript>
    <!-- End Google Tag Manager (noscript) -->        

    <!-- Hotjar Tracking Code for https://practice.geeksforgeeks.org -->
    <script>
        (function(h,o,t,j,a,r){
            h.hj=h.hj||function(){(h.hj.q=h.hj.q||[]).push(arguments)};
            h._hjSettings={hjid:2410676,hjsv:6};
            a=o.getElementsByTagName('head')[0];
            r=o.createElement('script');r.async=1;
            r.src=t+h._hjSettings.hjid+j+h._hjSettings.hjsv;
            a.appendChild(r);
        })(window,document,'https://static.hotjar.com/c/hotjar-','.js?sv=');
    </script><script async="" src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/hotjar-2410676.js.download"></script>

    <!-- Start VWO Async SmartCode -->
    <script type="text/javascript">
        window._vwo_code = window._vwo_code || (function(){
            var account_id=566131,
            settings_tolerance=2000,
            library_tolerance=2500,
            use_existing_jquery=false,
            is_spa=1,
            hide_element='body',/* DO NOT EDIT BELOW THIS LINE */
f=false,d=document,code={use_existing_jquery:function(){return use_existing_jquery;},library_tolerance:function(){return library_tolerance;},finish:function(){if(!f){f=true;var a=d.getElementById('_vis_opt_path_hides');if(a)a.parentNode.removeChild(a);}},finished:function(){return f;},load:function(a){var b=d.createElement('script');b.src=a;b.type='text/javascript';b.innerText;b.onerror=function(){_vwo_code.finish();};d.getElementsByTagName('head')[0].appendChild(b);},init:function(){
window.settings_timer=setTimeout(function () {_vwo_code.finish() },settings_tolerance);var a=d.createElement('style'),b=hide_element?hide_element+'{opacity:0 !important;filter:alpha(opacity=0) !important;background:none !important;}':'',h=d.getElementsByTagName('head')[0];a.setAttribute('id','_vis_opt_path_hides');a.setAttribute('type','text/css');if(a.styleSheet)a.styleSheet.cssText=b;else a.appendChild(d.createTextNode(b));h.appendChild(a);this.load('https://dev.visualwebsiteoptimizer.com/j.php?a='+account_id+'&u='+encodeURIComponent(d.URL)+'&f='+(+is_spa)+'&r='+Math.random());return settings_timer; }};window._vwo_settings_timer = code.init(); return code; }());
    </script><script src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/j.php" type="text/javascript"></script>

    <!-- End VWO Async SmartCode -->

    <!-- DO NOT MODIFY -->
    <!-- Quora Pixel Code (JS Helper) 
    <script>
            !function(q,e,v,n,t,s){if(q.qp) return; n=q.qp=function(){n.qp?n.qp.apply(n,arguments):n.queue.push(arguments);}; n.queue=[];t=document.createElement(e);t.async=!0;t.src=v; s=document.getElementsByTagName(e)[0]; s.parentNode.insertBefore(t,s);}(window, 'script', 'https://a.quora.com/qevents.js');
            qp('init', '54ba43eaeb644b908aa476d8e9f908c2');
            qp('track', 'ViewContent');
    </script>
    <noscript><img height="1" width="1" style="display:none" src="https://q.quora.com/_/ad/54ba43eaeb644b908aa476d8e9f908c2/pixel?tag=ViewContent&noscript=1"/></noscript>
    End of Quora Pixel Code -->


    <!-- Facebook Pixel Code -->
    <script>
        !function(f,b,e,v,n,t,s)
        {if(f.fbq)return;n=f.fbq=function(){n.callMethod?
        n.callMethod.apply(n,arguments):n.queue.push(arguments)};
        if(!f._fbq)f._fbq=n;n.push=n;n.loaded=!0;n.version='2.0';
        n.queue=[];t=b.createElement(e);t.async=!0;
        t.src=v;s=b.getElementsByTagName(e)[0];
        s.parentNode.insertBefore(t,s)}(window, document,'script',
        'https://connect.facebook.net/en_US/fbevents.js');
        fbq('init', '2320390688070878');
        fbq('track', 'PageView');
    </script>
    <noscript><img height="1" width="1" style="display:none"
        src="https://www.facebook.com/tr?id=2320390688070878&ev=PageView&noscript=1"
    /></noscript>
    <!-- End Facebook Pixel Code -->

    <script async="">
        window.fbAsyncInit = function() {
            FB.init({
              appId      : '534961220012939',
              xfbml      : true,
              version    : 'v2.5'
            });
        };

        (function(d, s, id) {
            var js, fjs = d.getElementsByTagName(s)[0];
            if (d.getElementById(id)) {return;}
            js = d.createElement(s); js.id = id;
            js.src = "//connect.facebook.net/en_US/sdk.js";
            fjs.parentNode.insertBefore(js, fjs);
        }(document, 'script', 'facebook-jssdk'));
    </script>

    <!-- Global site tag (gtag.js) - Google Analytics -->
    <script async="" src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/js(3)"></script>
    <script>
        window.dataLayer = window.dataLayer || [];
        function gtag(){dataLayer.push(arguments);}
        gtag('js', new Date());
        gtag('config', 'UA-71763465-1', { 'optimize_id': 'GTM-WDSZVB6'});
        gtag('config', 'AW-474915276');
        gtag('config', 'AW-796001856');
        function gtagHelperFunction (action,eventCategory) {
            gtag("event", action, {
                event_category: eventCategory,
                event_label: window.location.href,
            })
        }
    </script>

        <script src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/jquery.min.js.download"></script>
    <script src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/bootstrap.min.js.download"></script>
    <script async="" src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/jquery.datetimepicker.full.min.js.download"></script>  
    <script async="" src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/bootstrap-select.min.js.download"></script>        
    <script async="" src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/cookieconsent.min.js.download"></script>
    <script async="" src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/typeahead.jquery.min.js.download"></script>
    <script async="" src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/bloodhound.min.js.download"></script>
    <script async="" src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/header-footer.js.download"></script>
    <meta property="og:title" content="Print Anagrams Together | Practice | GeeksforGeeks ">
<script>document.title="Print Anagrams Together | Practice | GeeksforGeeks";var def_lang ="";</script>    
    <script>
        function openGuestLoginModal() {
           if ($('.login-modal-btn')) {
                function openModalforGuests() {
                    setTimeout(function() {
                      $('.login-modal-btn').click();
                    }, 5000)
                }

                function setCookie() {
                    var guest = document.cookie.indexOf('guest=');
                    if (guest == -1) {
                        date = new Date();
                        date.setTime(date.getTime() + (2 * 24 * 60 * 60 * 1000));
                        expires = "; expires=" + date.toGMTString();
                        document.cookie = "guest=yes" + expires + "; path=/";
                        openModalforGuests()
                    }
                }
                var callGuestModal = !1;
                if (localStorage.getItem('guestPageCount')) {
                    localStorage.setItem('guestPageCount', parseInt(localStorage.getItem('guestPageCount')) + 1);
                        if (parseInt(localStorage.getItem('guestPageCount')) > 2) {
                            callGuestModal = !0;
                            localStorage.removeItem('guestPageCount')
                        }
                } else if (!localStorage.getItem('guestPageCount') && document.cookie.indexOf('guest=') == -1) {
                    localStorage.setItem('guestPageCount', 1)
                }
                if (callGuestModal) {
                    setCookie()
                }
                if (!callGuestModal) {
                    setTimeout(function() {
                        setCookie()
                    }, 5000)
                }
            }
        }
        
        $(document).ready(function() {
            $('body').on('click', '.login-modal-btn', function(e){
                e.preventDefault();
                if($('.login-modal-include').children().length==0){
                    $('.login-modal-include').html(loginModalHtmlTemplate);
                    if($('.login-modal-btn').hasClass('sign_up_button_custom')) {
                        removejscssfile("auth.min.css", "css");
                        $(".login-register-div").addClass("w-100");
                    }
                    $( this ).off(e );
                    $('.login-modal-btn').click();
                }
            })
            // openGuestLoginModal();
            $('[data-toggle="popover"]').popover(); 

            $('body').on('click', 'a > #popover--button', function(e) {e.preventDefault(); return true;});
            
            var queries = document.querySelectorAll('.mediaquerydependent'),
            all = queries.length,
            cur = null,
            attr = null;
            while (all--) {
                cur = queries[all];
                if (cur.dataset.media &&
                    window.matchMedia(cur.dataset.media).matches) {
                    for (attr in cur.dataset) {
                        if (attr !== 'media') {
                            cur.setAttribute(attr, cur.dataset[attr]);
                        }
                    }
                }
            }

            window.addEventListener("load", function(){
                window.cookieconsent.initialise({
                    "palette": {
                        "popup": {
                          "background": "#3c404d",
                          "text": "#d6d6d6",
                          "font-size": "12px"
                        },
                        "button": {
                          "background": "#8bed4f"
                        }
                    },
                    "theme": "classic",
                        onStatusChange: function(status) {
                        
                        },
                        "content": {
                        "message": "We use cookies to ensure you have the best browsing experience on our website. By using our site, you acknowledge that you have read and understood our <a href=\"https://www.geeksforgeeks.org/cookie-policy/\" class=\"cc-link\" target=\"_blank\">Cookie Policy</a> & ",
                        "link": "Privacy Policy",
                        "href": "https://www.geeksforgeeks.org/privacy-policy/"
                        },
                    cookie: {
                        name : "geeksforgeeks_consent_status",
                    }
                })
            }); 
        });
    </script> 
    <script async="" src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/modules.abdb699049ac72095a49.js.download" charset="utf-8"></script><style type="text/css">iframe#_hjRemoteVarsFrame {display: none !important; width: 1px !important; height: 1px !important; opacity: 0 !important; pointer-events: none !important;}</style><script src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/tag-5872a63cce3b0af13933e8c33be03543.js.download" crossorigin="anonymous" type="text/javascript"></script><link rel="stylesheet" type="text/css" href="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/prettify.css"><style>.cke{visibility:hidden;}</style><script src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/theme-dracula.js.download"></script><script src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/mode-javascript.js.download"></script><script src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/mode-c_cpp.js.download"></script><style type="text/css" data-fbcssmodules="css:fb.css.base css:fb.css.dialog css:fb.css.iframewidget css:fb.css.customer_chat_plugin_iframe">.fb_hidden{position:absolute;top:-10000px;z-index:10001}.fb_reposition{overflow:hidden;position:relative}.fb_invisible{display:none}.fb_reset{background:none;border:0;border-spacing:0;color:#000;cursor:auto;direction:ltr;font-family:"lucida grande", tahoma, verdana, arial, sans-serif;font-size:11px;font-style:normal;font-variant:normal;font-weight:normal;letter-spacing:normal;line-height:1;margin:0;overflow:visible;padding:0;text-align:left;text-decoration:none;text-indent:0;text-shadow:none;text-transform:none;visibility:visible;white-space:normal;word-spacing:normal}.fb_reset>div{overflow:hidden}@keyframes fb_transform{from{opacity:0;transform:scale(.95)}to{opacity:1;transform:scale(1)}}.fb_animate{animation:fb_transform .3s forwards}
.fb_dialog{background:rgba(82, 82, 82, .7);position:absolute;top:-10000px;z-index:10001}.fb_dialog_advanced{border-radius:8px;padding:10px}.fb_dialog_content{background:#fff;color:#373737}.fb_dialog_close_icon{background:url(https://static.xx.fbcdn.net/rsrc.php/v3/yq/r/IE9JII6Z1Ys.png) no-repeat scroll 0 0 transparent;cursor:pointer;display:block;height:15px;position:absolute;right:18px;top:17px;width:15px}.fb_dialog_mobile .fb_dialog_close_icon{left:5px;right:auto;top:5px}.fb_dialog_padding{background-color:transparent;position:absolute;width:1px;z-index:-1}.fb_dialog_close_icon:hover{background:url(https://static.xx.fbcdn.net/rsrc.php/v3/yq/r/IE9JII6Z1Ys.png) no-repeat scroll 0 -15px transparent}.fb_dialog_close_icon:active{background:url(https://static.xx.fbcdn.net/rsrc.php/v3/yq/r/IE9JII6Z1Ys.png) no-repeat scroll 0 -30px transparent}.fb_dialog_iframe{line-height:0}.fb_dialog_content .dialog_title{background:#6d84b4;border:1px solid #365899;color:#fff;font-size:14px;font-weight:bold;margin:0}.fb_dialog_content .dialog_title>span{background:url(https://static.xx.fbcdn.net/rsrc.php/v3/yd/r/Cou7n-nqK52.gif) no-repeat 5px 50%;float:left;padding:5px 0 7px 26px}body.fb_hidden{height:100%;left:0;margin:0;overflow:visible;position:absolute;top:-10000px;transform:none;width:100%}.fb_dialog.fb_dialog_mobile.loading{background:url(https://static.xx.fbcdn.net/rsrc.php/v3/ya/r/3rhSv5V8j3o.gif) white no-repeat 50% 50%;min-height:100%;min-width:100%;overflow:hidden;position:absolute;top:0;z-index:10001}.fb_dialog.fb_dialog_mobile.loading.centered{background:none;height:auto;min-height:initial;min-width:initial;width:auto}.fb_dialog.fb_dialog_mobile.loading.centered #fb_dialog_loader_spinner{width:100%}.fb_dialog.fb_dialog_mobile.loading.centered .fb_dialog_content{background:none}.loading.centered #fb_dialog_loader_close{clear:both;color:#fff;display:block;font-size:18px;padding-top:20px}#fb-root #fb_dialog_ipad_overlay{background:rgba(0, 0, 0, .4);bottom:0;left:0;min-height:100%;position:absolute;right:0;top:0;width:100%;z-index:10000}#fb-root #fb_dialog_ipad_overlay.hidden{display:none}.fb_dialog.fb_dialog_mobile.loading iframe{visibility:hidden}.fb_dialog_mobile .fb_dialog_iframe{position:sticky;top:0}.fb_dialog_content .dialog_header{background:linear-gradient(from(#738aba), to(#2c4987));border-bottom:1px solid;border-color:#043b87;box-shadow:white 0 1px 1px -1px inset;color:#fff;font:bold 14px Helvetica, sans-serif;text-overflow:ellipsis;text-shadow:rgba(0, 30, 84, .296875) 0 -1px 0;vertical-align:middle;white-space:nowrap}.fb_dialog_content .dialog_header table{height:43px;width:100%}.fb_dialog_content .dialog_header td.header_left{font-size:12px;padding-left:5px;vertical-align:middle;width:60px}.fb_dialog_content .dialog_header td.header_right{font-size:12px;padding-right:5px;vertical-align:middle;width:60px}.fb_dialog_content .touchable_button{background:linear-gradient(from(#4267B2), to(#2a4887));background-clip:padding-box;border:1px solid #29487d;border-radius:3px;display:inline-block;line-height:18px;margin-top:3px;max-width:85px;padding:4px 12px;position:relative}.fb_dialog_content .dialog_header .touchable_button input{background:none;border:none;color:#fff;font:bold 12px Helvetica, sans-serif;margin:2px -12px;padding:2px 6px 3px 6px;text-shadow:rgba(0, 30, 84, .296875) 0 -1px 0}.fb_dialog_content .dialog_header .header_center{color:#fff;font-size:16px;font-weight:bold;line-height:18px;text-align:center;vertical-align:middle}.fb_dialog_content .dialog_content{background:url(https://static.xx.fbcdn.net/rsrc.php/v3/y9/r/jKEcVPZFk-2.gif) no-repeat 50% 50%;border:1px solid #4a4a4a;border-bottom:0;border-top:0;height:150px}.fb_dialog_content .dialog_footer{background:#f5f6f7;border:1px solid #4a4a4a;border-top-color:#ccc;height:40px}#fb_dialog_loader_close{float:left}.fb_dialog.fb_dialog_mobile .fb_dialog_close_icon{visibility:hidden}#fb_dialog_loader_spinner{animation:rotateSpinner 1.2s linear infinite;background-color:transparent;background-image:url(https://static.xx.fbcdn.net/rsrc.php/v3/yD/r/t-wz8gw1xG1.png);background-position:50% 50%;background-repeat:no-repeat;height:24px;width:24px}@keyframes rotateSpinner{0%{transform:rotate(0deg)}100%{transform:rotate(360deg)}}
.fb_iframe_widget{display:inline-block;position:relative}.fb_iframe_widget span{display:inline-block;position:relative;text-align:justify}.fb_iframe_widget iframe{position:absolute}.fb_iframe_widget_fluid_desktop,.fb_iframe_widget_fluid_desktop span,.fb_iframe_widget_fluid_desktop iframe{max-width:100%}.fb_iframe_widget_fluid_desktop iframe{min-width:220px;position:relative}.fb_iframe_widget_lift{z-index:1}.fb_iframe_widget_fluid{display:inline}.fb_iframe_widget_fluid span{width:100%}
.fb_mpn_mobile_landing_page_slide_out{animation-duration:200ms;animation-name:fb_mpn_landing_page_slide_out;transition-timing-function:ease-in}.fb_mpn_mobile_landing_page_slide_out_from_left{animation-duration:200ms;animation-name:fb_mpn_landing_page_slide_out_from_left;transition-timing-function:ease-in}.fb_mpn_mobile_landing_page_slide_up{animation-duration:500ms;animation-name:fb_mpn_landing_page_slide_up;transition-timing-function:ease-in}.fb_mpn_mobile_bounce_in{animation-duration:300ms;animation-name:fb_mpn_bounce_in;transition-timing-function:ease-in}.fb_mpn_mobile_bounce_out{animation-duration:300ms;animation-name:fb_mpn_bounce_out;transition-timing-function:ease-in}.fb_mpn_mobile_bounce_out_v2{animation-duration:300ms;animation-name:fb_mpn_fade_out;transition-timing-function:ease-in}.fb_customer_chat_bounce_in_v2{animation-duration:300ms;animation-name:fb_bounce_in_v2;transition-timing-function:ease-in}.fb_customer_chat_bounce_in_from_left{animation-duration:300ms;animation-name:fb_bounce_in_from_left;transition-timing-function:ease-in}.fb_customer_chat_bounce_out_v2{animation-duration:300ms;animation-name:fb_bounce_out_v2;transition-timing-function:ease-in}.fb_customer_chat_bounce_out_from_left{animation-duration:300ms;animation-name:fb_bounce_out_from_left;transition-timing-function:ease-in}.fb_invisible_flow{display:inherit;height:0;overflow-x:hidden;width:0}@keyframes fb_mpn_landing_page_slide_out{0%{margin:0 12px;width:100% - 24px}60%{border-radius:18px}100%{border-radius:50%;margin:0 24px;width:60px}}@keyframes fb_mpn_landing_page_slide_out_from_left{0%{left:12px;width:100% - 24px}60%{border-radius:18px}100%{border-radius:50%;left:12px;width:60px}}@keyframes fb_mpn_landing_page_slide_up{0%{bottom:0;opacity:0}100%{bottom:24px;opacity:1}}@keyframes fb_mpn_bounce_in{0%{opacity:.5;top:100%}100%{opacity:1;top:0}}@keyframes fb_mpn_fade_out{0%{bottom:30px;opacity:1}100%{bottom:0;opacity:0}}@keyframes fb_mpn_bounce_out{0%{opacity:1;top:0}100%{opacity:.5;top:100%}}@keyframes fb_bounce_in_v2{0%{opacity:0;transform:scale(0, 0);transform-origin:bottom right}50%{transform:scale(1.03, 1.03);transform-origin:bottom right}100%{opacity:1;transform:scale(1, 1);transform-origin:bottom right}}@keyframes fb_bounce_in_from_left{0%{opacity:0;transform:scale(0, 0);transform-origin:bottom left}50%{transform:scale(1.03, 1.03);transform-origin:bottom left}100%{opacity:1;transform:scale(1, 1);transform-origin:bottom left}}@keyframes fb_bounce_out_v2{0%{opacity:1;transform:scale(1, 1);transform-origin:bottom right}100%{opacity:0;transform:scale(0, 0);transform-origin:bottom right}}@keyframes fb_bounce_out_from_left{0%{opacity:1;transform:scale(1, 1);transform-origin:bottom left}100%{opacity:0;transform:scale(0, 0);transform-origin:bottom left}}@keyframes slideInFromBottom{0%{opacity:.1;transform:translateY(100%)}100%{opacity:1;transform:translateY(0)}}@keyframes slideInFromBottomDelay{0%{opacity:0;transform:translateY(100%)}97%{opacity:0;transform:translateY(100%)}100%{opacity:1;transform:translateY(0)}}</style><script src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/f(1).txt"></script><script src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/f(2).txt"></script><script type="text/javascript" src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/config.js.download"></script><link id="doubtSupportCss" rel="stylesheet" type="text/css" href="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/comment.css" media="all"><style type="text/css">.MathJax_Hover_Frame {border-radius: .25em; -webkit-border-radius: .25em; -moz-border-radius: .25em; -khtml-border-radius: .25em; box-shadow: 0px 0px 15px #83A; -webkit-box-shadow: 0px 0px 15px #83A; -moz-box-shadow: 0px 0px 15px #83A; -khtml-box-shadow: 0px 0px 15px #83A; border: 1px solid #A6D ! important; display: inline-block; position: absolute}
.MathJax_Menu_Button .MathJax_Hover_Arrow {position: absolute; cursor: pointer; display: inline-block; border: 2px solid #AAA; border-radius: 4px; -webkit-border-radius: 4px; -moz-border-radius: 4px; -khtml-border-radius: 4px; font-family: 'Courier New',Courier; font-size: 9px; color: #F0F0F0}
.MathJax_Menu_Button .MathJax_Hover_Arrow span {display: block; background-color: #AAA; border: 1px solid; border-radius: 3px; line-height: 0; padding: 4px}
.MathJax_Hover_Arrow:hover {color: white!important; border: 2px solid #CCC!important}
.MathJax_Hover_Arrow:hover span {background-color: #CCC!important}
</style><style type="text/css">#MathJax_About {position: fixed; left: 50%; width: auto; text-align: center; border: 3px outset; padding: 1em 2em; background-color: #DDDDDD; color: black; cursor: default; font-family: message-box; font-size: 120%; font-style: normal; text-indent: 0; text-transform: none; line-height: normal; letter-spacing: normal; word-spacing: normal; word-wrap: normal; white-space: nowrap; float: none; z-index: 201; border-radius: 15px; -webkit-border-radius: 15px; -moz-border-radius: 15px; -khtml-border-radius: 15px; box-shadow: 0px 10px 20px #808080; -webkit-box-shadow: 0px 10px 20px #808080; -moz-box-shadow: 0px 10px 20px #808080; -khtml-box-shadow: 0px 10px 20px #808080; filter: progid:DXImageTransform.Microsoft.dropshadow(OffX=2, OffY=2, Color='gray', Positive='true')}
#MathJax_About.MathJax_MousePost {outline: none}
.MathJax_Menu {position: absolute; background-color: white; color: black; width: auto; padding: 2px; border: 1px solid #CCCCCC; margin: 0; cursor: default; font: menu; text-align: left; text-indent: 0; text-transform: none; line-height: normal; letter-spacing: normal; word-spacing: normal; word-wrap: normal; white-space: nowrap; float: none; z-index: 201; box-shadow: 0px 10px 20px #808080; -webkit-box-shadow: 0px 10px 20px #808080; -moz-box-shadow: 0px 10px 20px #808080; -khtml-box-shadow: 0px 10px 20px #808080; filter: progid:DXImageTransform.Microsoft.dropshadow(OffX=2, OffY=2, Color='gray', Positive='true')}
.MathJax_MenuItem {padding: 2px 2em; background: transparent}
.MathJax_MenuArrow {position: absolute; right: .5em; padding-top: .25em; color: #666666; font-size: .75em}
.MathJax_MenuActive .MathJax_MenuArrow {color: white}
.MathJax_MenuArrow.RTL {left: .5em; right: auto}
.MathJax_MenuCheck {position: absolute; left: .7em}
.MathJax_MenuCheck.RTL {right: .7em; left: auto}
.MathJax_MenuRadioCheck {position: absolute; left: 1em}
.MathJax_MenuRadioCheck.RTL {right: 1em; left: auto}
.MathJax_MenuLabel {padding: 2px 2em 4px 1.33em; font-style: italic}
.MathJax_MenuRule {border-top: 1px solid #CCCCCC; margin: 4px 1px 0px}
.MathJax_MenuDisabled {color: GrayText}
.MathJax_MenuActive {background-color: Highlight; color: HighlightText}
.MathJax_MenuDisabled:focus, .MathJax_MenuLabel:focus {background-color: #E8E8E8}
.MathJax_ContextMenu:focus {outline: none}
.MathJax_ContextMenu .MathJax_MenuItem:focus {outline: none}
#MathJax_AboutClose {top: .2em; right: .2em}
.MathJax_Menu .MathJax_MenuClose {top: -10px; left: -10px}
.MathJax_MenuClose {position: absolute; cursor: pointer; display: inline-block; border: 2px solid #AAA; border-radius: 18px; -webkit-border-radius: 18px; -moz-border-radius: 18px; -khtml-border-radius: 18px; font-family: 'Courier New',Courier; font-size: 24px; color: #F0F0F0}
.MathJax_MenuClose span {display: block; background-color: #AAA; border: 1.5px solid; border-radius: 18px; -webkit-border-radius: 18px; -moz-border-radius: 18px; -khtml-border-radius: 18px; line-height: 0; padding: 8px 0 6px}
.MathJax_MenuClose:hover {color: white!important; border: 2px solid #CCC!important}
.MathJax_MenuClose:hover span {background-color: #CCC!important}
.MathJax_MenuClose:hover:focus {outline: none}
</style><style type="text/css">.MathJax_Preview .MJXf-math {color: inherit!important}
</style><style type="text/css">.MJX_Assistive_MathML {position: absolute!important; top: 0; left: 0; clip: rect(1px, 1px, 1px, 1px); padding: 1px 0 0 0!important; border: 0!important; height: 1px!important; width: 1px!important; overflow: hidden!important; display: block!important; -webkit-touch-callout: none; -webkit-user-select: none; -khtml-user-select: none; -moz-user-select: none; -ms-user-select: none; user-select: none}
.MJX_Assistive_MathML.MJX_Assistive_MathML_Block {width: 100%!important}
</style><style type="text/css">#MathJax_Zoom {position: absolute; background-color: #F0F0F0; overflow: auto; display: block; z-index: 301; padding: .5em; border: 1px solid black; margin: 0; font-weight: normal; font-style: normal; text-align: left; text-indent: 0; text-transform: none; line-height: normal; letter-spacing: normal; word-spacing: normal; word-wrap: normal; white-space: nowrap; float: none; -webkit-box-sizing: content-box; -moz-box-sizing: content-box; box-sizing: content-box; box-shadow: 5px 5px 15px #AAAAAA; -webkit-box-shadow: 5px 5px 15px #AAAAAA; -moz-box-shadow: 5px 5px 15px #AAAAAA; -khtml-box-shadow: 5px 5px 15px #AAAAAA; filter: progid:DXImageTransform.Microsoft.dropshadow(OffX=2, OffY=2, Color='gray', Positive='true')}
#MathJax_ZoomOverlay {position: absolute; left: 0; top: 0; z-index: 300; display: inline-block; width: 100%; height: 100%; border: 0; padding: 0; margin: 0; background-color: white; opacity: 0; filter: alpha(opacity=0)}
#MathJax_ZoomFrame {position: relative; display: inline-block; height: 0; width: 0}
#MathJax_ZoomEventTrap {position: absolute; left: 0; top: 0; z-index: 302; display: inline-block; border: 0; padding: 0; margin: 0; background-color: white; opacity: 0; filter: alpha(opacity=0)}
</style><style type="text/css">.MathJax_Preview {color: #888}
#MathJax_Message {position: fixed; left: 1em; bottom: 1.5em; background-color: #E6E6E6; border: 1px solid #959595; margin: 0px; padding: 2px 8px; z-index: 102; color: black; font-size: 80%; width: auto; white-space: nowrap}
#MathJax_MSIE_Frame {position: absolute; top: 0; left: 0; width: 0px; z-index: 101; border: 0px; margin: 0px; padding: 0px}
.MathJax_Error {color: #CC0000; font-style: italic}
</style><link rel="stylesheet" type="text/css" href="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/editor.css"><script type="text/javascript" src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/en-gb.js.download"></script><style type="text/css">.MJXp-script {font-size: .8em}
.MJXp-right {-webkit-transform-origin: right; -moz-transform-origin: right; -ms-transform-origin: right; -o-transform-origin: right; transform-origin: right}
.MJXp-bold {font-weight: bold}
.MJXp-italic {font-style: italic}
.MJXp-scr {font-family: MathJax_Script,'Times New Roman',Times,STIXGeneral,serif}
.MJXp-frak {font-family: MathJax_Fraktur,'Times New Roman',Times,STIXGeneral,serif}
.MJXp-sf {font-family: MathJax_SansSerif,'Times New Roman',Times,STIXGeneral,serif}
.MJXp-cal {font-family: MathJax_Caligraphic,'Times New Roman',Times,STIXGeneral,serif}
.MJXp-mono {font-family: MathJax_Typewriter,'Times New Roman',Times,STIXGeneral,serif}
.MJXp-largeop {font-size: 150%}
.MJXp-largeop.MJXp-int {vertical-align: -.2em}
.MJXp-math {display: inline-block; line-height: 1.2; text-indent: 0; font-family: 'Times New Roman',Times,STIXGeneral,serif; white-space: nowrap; border-collapse: collapse}
.MJXp-display {display: block; text-align: center; margin: 1em 0}
.MJXp-math span {display: inline-block}
.MJXp-box {display: block!important; text-align: center}
.MJXp-box:after {content: " "}
.MJXp-rule {display: block!important; margin-top: .1em}
.MJXp-char {display: block!important}
.MJXp-mo {margin: 0 .15em}
.MJXp-mfrac {margin: 0 .125em; vertical-align: .25em}
.MJXp-denom {display: inline-table!important; width: 100%}
.MJXp-denom > * {display: table-row!important}
.MJXp-surd {vertical-align: top}
.MJXp-surd > * {display: block!important}
.MJXp-script-box > *  {display: table!important; height: 50%}
.MJXp-script-box > * > * {display: table-cell!important; vertical-align: top}
.MJXp-script-box > *:last-child > * {vertical-align: bottom}
.MJXp-script-box > * > * > * {display: block!important}
.MJXp-mphantom {visibility: hidden}
.MJXp-munderover {display: inline-table!important}
.MJXp-over {display: inline-block!important; text-align: center}
.MJXp-over > * {display: block!important}
.MJXp-munderover > * {display: table-row!important}
.MJXp-mtable {vertical-align: .25em; margin: 0 .125em}
.MJXp-mtable > * {display: inline-table!important; vertical-align: middle}
.MJXp-mtr {display: table-row!important}
.MJXp-mtd {display: table-cell!important; text-align: center; padding: .5em 0 0 .5em}
.MJXp-mtr > .MJXp-mtd:first-child {padding-left: 0}
.MJXp-mtr:first-child > .MJXp-mtd {padding-top: 0}
.MJXp-mlabeledtr {display: table-row!important}
.MJXp-mlabeledtr > .MJXp-mtd:first-child {padding-left: 0}
.MJXp-mlabeledtr:first-child > .MJXp-mtd {padding-top: 0}
.MJXp-merror {background-color: #FFFF88; color: #CC0000; border: 1px solid #CC0000; padding: 1px 3px; font-style: normal; font-size: 90%}
.MJXp-scale0 {-webkit-transform: scaleX(.0); -moz-transform: scaleX(.0); -ms-transform: scaleX(.0); -o-transform: scaleX(.0); transform: scaleX(.0)}
.MJXp-scale1 {-webkit-transform: scaleX(.1); -moz-transform: scaleX(.1); -ms-transform: scaleX(.1); -o-transform: scaleX(.1); transform: scaleX(.1)}
.MJXp-scale2 {-webkit-transform: scaleX(.2); -moz-transform: scaleX(.2); -ms-transform: scaleX(.2); -o-transform: scaleX(.2); transform: scaleX(.2)}
.MJXp-scale3 {-webkit-transform: scaleX(.3); -moz-transform: scaleX(.3); -ms-transform: scaleX(.3); -o-transform: scaleX(.3); transform: scaleX(.3)}
.MJXp-scale4 {-webkit-transform: scaleX(.4); -moz-transform: scaleX(.4); -ms-transform: scaleX(.4); -o-transform: scaleX(.4); transform: scaleX(.4)}
.MJXp-scale5 {-webkit-transform: scaleX(.5); -moz-transform: scaleX(.5); -ms-transform: scaleX(.5); -o-transform: scaleX(.5); transform: scaleX(.5)}
.MJXp-scale6 {-webkit-transform: scaleX(.6); -moz-transform: scaleX(.6); -ms-transform: scaleX(.6); -o-transform: scaleX(.6); transform: scaleX(.6)}
.MJXp-scale7 {-webkit-transform: scaleX(.7); -moz-transform: scaleX(.7); -ms-transform: scaleX(.7); -o-transform: scaleX(.7); transform: scaleX(.7)}
.MJXp-scale8 {-webkit-transform: scaleX(.8); -moz-transform: scaleX(.8); -ms-transform: scaleX(.8); -o-transform: scaleX(.8); transform: scaleX(.8)}
.MJXp-scale9 {-webkit-transform: scaleX(.9); -moz-transform: scaleX(.9); -ms-transform: scaleX(.9); -o-transform: scaleX(.9); transform: scaleX(.9)}
.MathJax_PHTML .noError {vertical-align: ; font-size: 90%; text-align: left; color: black; padding: 1px 3px; border: 1px solid}
</style><script src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/f(3).txt"></script><script src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/f(4).txt"></script><script type="text/javascript" src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/styles.js.download"></script><link rel="stylesheet" type="text/css" href="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/scayt.css"><link rel="stylesheet" type="text/css" href="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/dialog.css"><link rel="stylesheet" type="text/css" href="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/tableselection.css"><link rel="stylesheet" type="text/css" href="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/wsc.css"><link rel="stylesheet" type="text/css" href="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/copyformatting.css"><script src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/iframeResizer.js.download" type="text/javascript"></script><style></style><script type="text/javascript" src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/custom_config-1.0.js.download"></script><script type="text/javascript" src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/plugin.js.download"></script><script type="text/javascript" src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/plugin.js(1).download"></script><script type="text/javascript" src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/plugin.js(2).download"></script><script type="text/javascript" src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/plugin.js(3).download"></script><script type="text/javascript" src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/plugin.js(4).download"></script><script type="text/javascript" src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/plugin.js(5).download"></script><script type="text/javascript" src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/plugin.js(6).download"></script><script type="text/javascript" src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/plugin.js(7).download"></script><link rel="stylesheet" type="text/css" href="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/default.css"><script type="text/javascript" src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/en-gb.js(1).download"></script><script type="text/javascript" src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/en-gb.js(2).download"></script><script type="text/javascript" src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/highlight.pack.js.download"></script><script type="text/javascript" src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/wscbundle.js.download"></script><script type="text/javascript" id="" src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/local.js.download" charset="UTF-8"></script><link rel="stylesheet" type="text/css" href="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/wsc(1).css"><link rel="stylesheet" type="text/css" href="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/all(1).css"></head>
<body style="margin: 0;" class="header-body" data-new-gr-c-s-check-loaded="14.1043.0" data-gr-ext-installed="" data-new-gr-c-s-loaded="14.1043.0"><div role="dialog" aria-live="polite" aria-label="cookieconsent" aria-describedby="cookieconsent:desc" class="cc-window cc-banner cc-type-info cc-theme-classic cc-bottom cc-color-override-74746687 cc-invisible" style="display: none;"><!--googleoff: all--><span id="cookieconsent:desc" class="cc-message">We use cookies to ensure you have the best browsing experience on our website. By using our site, you acknowledge that you have read and understood our <a href="https://www.geeksforgeeks.org/cookie-policy/" class="cc-link" target="_blank">Cookie Policy</a> &amp;  <a aria-label="learn more about cookies" role="button" tabindex="0" class="cc-link" href="https://www.geeksforgeeks.org/privacy-policy/" target="_blank">Privacy Policy</a></span><div class="cc-compliance"><a aria-label="dismiss cookie message" role="button" tabindex="0" class="cc-btn cc-dismiss">Got it!</a></div><!--googleon: all--></div><div id="MathJax_Message" style="display: none;"></div>
    <i id="utoken" style="display:none">fd61f360832120b04161a59928f2664a21a3d42731363431333035373135</i>
   
   <!-- For Detecting Ad Blocker -->
    <div class="ad-banner">
    </div>
  
    <div class="header-top__notification display-none">
        <div class="header-top__text">
            Geeksforgeeks
        </div>
        <div class="header-top__times">
            <i class="material-icons">close</i>
        </div>
    </div>

    <div class="header-hellobar-container stick-me">
        
        <div class="header-main__wrapper">
        <a href="https://practice.geeksforgeeks.org/home/" class="header-main__logo">
            <div class="_logo">
                <svg xmlns="http://www.w3.org/2000/svg" width="76.533" height="39.026" viewBox="0 0 76.533 39.026">
                    <path d="M2380.7,6597.866a12.252,12.252,0,0,0-.261-1.513l-30.726-.027a12.545,12.545,0,0,1,.908-3.443,12.337,12.337,0,0,1,2.739-4.044,12.151,12.151,0,0,1,4.018-2.581,12.634,12.634,0,0,1,14.3,3.051l4.852-4.748a18.176,18.176,0,0,0-6.131-4.331,20.037,20.037,0,0,0-8.112-1.564,20.25,20.25,0,0,0-7.671,1.459,19.158,19.158,0,0,0-6.261,4.07,19.584,19.584,0,0,0-4.226,6.184,18.7,18.7,0,0,0-1.487,5.947h-.2a18.674,18.674,0,0,0-1.489-5.947,19.544,19.544,0,0,0-4.226-6.184,19.133,19.133,0,0,0-6.261-4.07,21.354,21.354,0,0,0-15.783.1,18.2,18.2,0,0,0-6.131,4.331l4.853,4.748a13.264,13.264,0,0,1,14.3-3.051,12.131,12.131,0,0,1,4.017,2.581,12.323,12.323,0,0,1,2.74,4.044,12.527,12.527,0,0,1,.908,3.443l-30.726.027a12.256,12.256,0,0,0-.261,1.513,15,15,0,0,0-.1,1.773,20.713,20.713,0,0,0,1.1,6.783,15.709,15.709,0,0,0,3.443,5.686,17.309,17.309,0,0,0,6,4.123,20.587,20.587,0,0,0,7.983,1.46,20.226,20.226,0,0,0,7.669-1.46,19.086,19.086,0,0,0,6.261-4.07,19.506,19.506,0,0,0,4.226-6.184,18.163,18.163,0,0,0,1.153-3.629h.871a18.27,18.27,0,0,0,1.151,3.629,19.545,19.545,0,0,0,4.226,6.184,19.111,19.111,0,0,0,6.261,4.07,20.241,20.241,0,0,0,7.671,1.46,20.572,20.572,0,0,0,7.981-1.46,17.282,17.282,0,0,0,6-4.123,15.717,15.717,0,0,0,3.445-5.686,20.726,20.726,0,0,0,1.1-6.783A15.259,15.259,0,0,0,2380.7,6597.866Zm-46.245,5.608a12.1,12.1,0,0,1-2.766,4.043,12.467,12.467,0,0,1-4.043,2.583,14.378,14.378,0,0,1-9.939.052,11.776,11.776,0,0,1-3.522-2.218,8.459,8.459,0,0,1-1.8-2.374,13.476,13.476,0,0,1-1.173-3.208l23.658,0A11.487,11.487,0,0,1,2334.457,6603.475Zm38.236,2.086a8.466,8.466,0,0,1-1.8,2.374,11.771,11.771,0,0,1-3.522,2.218,14.378,14.378,0,0,1-9.939-.052,12.491,12.491,0,0,1-4.044-2.583,12.088,12.088,0,0,1-2.765-4.043,11.427,11.427,0,0,1-.415-1.126h11.92v0h11.739A13.509,13.509,0,0,1,2372.692,6605.561Z" transform="translate(-2304.273 -6578.666)" fill="#2f8d46"></path>
                </svg>
                <svg xmlns="http://www.w3.org/2000/svg" width="107.168" height="22.01" viewBox="0 0 107.168 22.01">
                <path xmlns="http://www.w3.org/2000/svg" id="Path_407" data-name="Path 407" d="M-2099.961-1967.559a6.921,6.921,0,0,1,7.112-7.2c3.924,0,6.905,2.833,6.905,7.17,0,.384-.029.8-.06,1.239h-10.977a3.95,3.95,0,0,0,4.25,3.394,4.493,4.493,0,0,0,3.9-2.007l2.3,1.151a6.974,6.974,0,0,1-6.314,3.542A6.961,6.961,0,0,1-2099.961-1967.559Zm3.01-1.121h8.115a3.76,3.76,0,0,0-3.983-3.394A3.863,3.863,0,0,0-2096.951-1968.681Zm-17.763,1.151a7.175,7.175,0,0,1,7.436-7.23,6.91,6.91,0,0,1,5.371,2.361l-1.919,1.8a4.523,4.523,0,0,0-3.393-1.445,4.461,4.461,0,0,0-4.6,4.514,4.486,4.486,0,0,0,4.6,4.544,4.527,4.527,0,0,0,3.393-1.445l1.919,1.8a6.913,6.913,0,0,1-5.371,2.361A7.2,7.2,0,0,1-2114.715-1967.53Zm-31.985,0a7.175,7.175,0,0,1,7.436-7.23,6.906,6.906,0,0,1,5.37,2.361l-1.918,1.8a4.523,4.523,0,0,0-3.393-1.445,4.461,4.461,0,0,0-4.6,4.514,4.724,4.724,0,0,0,1.085,2.988,4.441,4.441,0,0,0,3.518,1.556,4.527,4.527,0,0,0,3.393-1.445l1.918,1.8a6.909,6.909,0,0,1-5.37,2.361A7.2,7.2,0,0,1-2146.7-1967.53Zm-17.911,0c0-4.1,2.921-7.23,6.817-7.23a5.382,5.382,0,0,1,4.78,2.419v-2.066h2.892v13.781h-2.892v-2.331a5.584,5.584,0,0,1-4.9,2.686C-2161.513-1960.27-2164.611-1963.281-2164.611-1967.53Zm2.921,0a4.4,4.4,0,0,0,4.279,4.544,4.473,4.473,0,0,0,4.367-4.544,4.513,4.513,0,0,0-4.426-4.514A4.383,4.383,0,0,0-2161.689-1967.53Zm40.66,6.9v-13.781h2.892v13.781Zm-8.586,0v-11.361h-2.479v-2.42h2.479v-5.164h2.891v5.164h2.951v2.42h-2.951v11.361Zm-45.264,0v-13.781h2.921v3.1c.708-2.419,2.1-3.452,3.866-3.452a5.305,5.305,0,0,1,2.36.5l-.5,2.745a4.88,4.88,0,0,0-2.036-.473c-2.508,0-3.689,2.686-3.689,6.4v4.957Zm-17.232,0v-20.332h8.144c4.368,0,6.2,3.217,6.2,6.433,0,3.246-1.83,6.374-6.2,6.374h-5.1v7.525Zm3.039-10.3h4.928c2.361,0,3.334-1.8,3.334-3.6s-.944-3.658-3.217-3.658h-5.046Zm67.513-8.5a1.915,1.915,0,0,1,1.976-1.859,1.9,1.9,0,0,1,1.977,1.859,1.9,1.9,0,0,1-1.977,1.859A1.915,1.915,0,0,1-2121.56-1979.422Z" transform="translate(2192.612 1981.781)" fill="#0f2b3c" stroke="rgba(0,0,0,0)" stroke-width="1"></path>
            </svg>
            </div>
        </a>
        <div class="header-main__container">
            <span class="hamburger-menu" style="display: none;"> <!-- sidebar on tab and mobile view -->
                <span class="gfg-burger-1"></span>
                <span class="gfg-burger-2"></span>
                <span class="gfg-burger-3"></span>
            </span>
            <ul class="header-main__list" style="display: none;">
            
                <li class="header-main__list-item" aria-expanded="false" data-expandable="false">
                    <a href="https://practice.geeksforgeeks.org/explore" class="remove-anchor__decoration" target="_self">Problems</a>
                </li>
                <li class="header-main__list-item" data-parent="true" aria-expanded="false" data-expandable="true">
                    <a href="https://practice.geeksforgeeks.org/courses" class="remove-anchor__decoration" target="_self">Courses</a>
                </li>
                <li class="header-main__list-item" aria-expanded="false" data-expandable="false">
                    <a href="https://practice.geeksforgeeks.org/jobs" class="remove-anchor__decoration" target="_self">Get Hired</a>
                </li>
                <li class="header-main__list-item" aria-expanded="false" data-expandable="false">
                    <a href="https://practice.geeksforgeeks.org/events" class="remove-anchor__decoration" target="_self">Events</a>
                </li>
                <li class="header-main__list-item" aria-expanded="false" data-expandable="false">
                    <a href="https://practice.geeksforgeeks.org/problem-of-the-day" class="remove-anchor__decoration" target="_self" title="Problem of the Day"><img src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/Group5191-1616757810.svg" alt="logo" style="padding-bottom:1%;display:inherit;">POTD</a>
                </li>
                                
                
            </ul>
            <ul class="header-main__left-list" data-type="0" data-nl="false">
                <li class="header-main__left-list-item header-search p-relative  login" id="search-bar" aria-expanded="false" data-expandable="false" style="display: none;">
                    <form id="gcse-form" data-sm="false" class="p-relative">
                        <input class="gcse-search-input__wrapper" id="gcse-search-input" aria-expanded="false">
                        <i class="material-icons hide-search">close</i> 
                        <button type="submit" class="gcse-search__btn not-expanded">
                        <span class="material-icons gcse-search__icon">search</span>
                        </button>
                    </form>
                </li>
                                    <li class="header-main__left-list-item header-score" title="Score" style="margin-right: 1.6rem; cursor: pointer;">
                        <a href="https://practice.geeksforgeeks.org/leaderboard" style="color:#52626c;text-decoration:none;" target="_blank">
                        <img width="25" height="25" src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/header-points-1605114253.svg">
                        <span class="userScore">232</span>
                        <img class="scoreUp" style="display:none;" src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/score_up-1605171496.svg" width="12" height="12">
                        <img class="scoreDown" style="display:none;" src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/score_down-1605171720.svg" width="12" height="12">
                        </a>
                    </li>
                                        <li class="header-main__left-list-item notify" id="header-notification" aria-expanded="false" data-expandable="false">
                    <a class="header--notification__trigger header--nav__link"><span class="material-icons notification-icon">notifications_none</span></a>
                        <div class="header--notification__badge" style=""></div>
                        <div class="header--notification__content" style="display: none;">
                            <div class="header--notification__top">
                                <strong>Notifications</strong>
                                <a class="notification--archive pull-right">Archive All</a>
                            </div>
                            <div class="header--notification__list">
                                <center><div class="header--loader"></div></center>
                            </div>
                            <div class="notifications--show__all">
                                <a class="notifications--showMore" href="https://practice.geeksforgeeks.org/notifications/">Show All</a>
                            </div>
                        </div>
                    </li>
                    <li class="header-main__left-list-item total-bits" title="Bits">
                        <span id="total-updated-bits">
                                                            <img width="25" height="25" src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/Group5264-1616832723.svg">0                                                    </span>
                    </li>
                                                <li class="header-main__left-list-item" style="margin-top: auto;margin-bottom: auto;" aria-expanded="false" data-expandable="true">
                    <div id="total_bits"></div>
                </li>
                <li class="header-main__left-list-item" style="margin-top: auto;margin-bottom: auto;" aria-expanded="false" data-expandable="true">
                    <div class="header-main__profile">
                        <img class="header--user__avatar" src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/user_web-1598433228.svg">
                    </div>
                    <ul class="mega-dropdown">
                                                <li>
                            <a class="remove-anchor__decoration" href="https://practice.geeksforgeeks.org/myCourses">
                                <span class="material-icons">book</span>
                                <span>My Courses</span>
                            </a>
                        </li>
                                                <li>
                            <a class="remove-anchor__decoration" href="https://auth.geeksforgeeks.org/user/diyashabose/practice/">
                                <span class="material-icons">person</span>
                                <span>My Profile</span>
                            </a>
                        </li>
                        <li>
                            <a class="remove-anchor__decoration" href="https://auth.geeksforgeeks.org/edit-profile.php">
                                <span class="material-icons">edit</span>
                                <span>Edit Profile</span>
                            </a>
                        </li>
                        <li>
                            <a class="remove-anchor__decoration" href="https://practice.geeksforgeeks.org/leaderboard">
                                <span class="material-icons">leaderboard</span>
                                <span>Leaderboard</span>
                            </a>
                        </li>
                        <li>
                            <a class="remove-anchor__decoration" href="https://practice.geeksforgeeks.org/transactions">
                                <span class="material-icons">restore</span>
                                <span>My Transactions</span>
                            </a>
                        </li>
                        <li>
                            <a class="remove-anchor__decoration" href="https://practice.geeksforgeeks.org/logout.php/?to=https://practice.geeksforgeeks.org%2Fproblems%2Fprint-anagrams-together%2F1">
                                <span class="material-icons">exit_to_app</span>
                                <span>Logout</span>
                            </a>
                        </li>
                    </ul>
                </li>
                            </ul>
        </div>
        <div class="gfg-overlay display-none" id="gfg-overlay"></div>
        <div class="header-sidebar__wrapper">
            <ul class="header-sidebar__list">
                                <li class="header-sidebar__list-item" style="text-align:center;">
                    <img style="max-width: 100px; margin-bottom: 10px;" class="header--user__avatar" src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/user_web-1598433228.svg">
                    <div style="display: flex; justify-content: start; margin-bottom: 20px;">
                        <a style="margin-left: 40px; display:flex; justify-content: start;" href="https://auth.geeksforgeeks.org/user/diyashabose/practice/">
                            <span style="position: relative;" class="material-icons">person</span>
                            <span>My Profile</span>
                        </a>
                        <a style="margin-left: 40px; display:flex; justify-content: start;" href="https://auth.geeksforgeeks.org/logout.php/?to=https://practice.geeksforgeeks.org%2Fproblems%2Fprint-anagrams-together%2F1" target="_self">
                            <span style="position: relative;" class="material-icons">exit_to_app</span>
                            <span>Logout</span>
                        </a>
                    </div>
                </li>
                <li class="header-sidebar__list-item" style="text-align:center;">
                    <a style="margin-left: 65px; display:flex; justify-content: start;" href="https://practice.geeksforgeeks.org/transactions" target="_self">
                        <span style="position: relative;" class="material-icons">restore</span>
                        <span>My Transactions</span>
                    </a>
                </li>
                                <li class="header-sidebar__list-item">
                    <a href="https://practice.geeksforgeeks.org/explore" target="_self">Problems</a>
                </li>
                <li class="header-sidebar__list-item">
                    <a href="https://practice.geeksforgeeks.org/courses" target="_self">Courses</a>
                </li>
                <li class="header-sidebar__list-item">
                    <a href="https://practice.geeksforgeeks.org/jobs" target="_self">Get Hired</a>
                </li>
                <li class="header-sidebar__list-item">
                    <a href="https://practice.geeksforgeeks.org/events" target="_self">Events</a>
                </li>
                <!--
                <li class="header-sidebar__list-item">
                    <a href=" //$URL_HOME ?>/discussion/all/" target="_self">Discussion</a>
                </li>
                -->
                <li class="header-sidebar__list-item">
                    <a href="https://practice.geeksforgeeks.org/problem-of-the-day" target="_self"><img src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/problem-of-the-day-1617702331.svg" style="padding-bottom:1%">POTD</a>
                </li>
                                            </ul>
            <div class="" style="height: 80px;"></div>
        </div>

        
        
        </div>  <!-- header-main__wrapper stick-me -->
    </div>
    <!-- Modal for Custom GCSE result display -->
    <div id="displayModal" class="modal" role="dialog">
    <div class="modal-dialog">
      <div class="modal-content">
        <div class="error-message"></div>
        <div class="modal-header">
          <button type="button" class="close" data-dismiss="modal" data-modal="displayModal">×</button>
          <h2 class="modal-title" id="dmTitle"></h2>
        </div>
        <div class="modal-body" id="dmBody">
            <div id="modal-dm-content"></div>
              <div class="modal-overlay" aria-hidden="true">
                <div class="header--loader gcse-loader"></div>
              </div>
            <!-- body -->
        </div>
        <div class="modal-footer">
          <!-- button -->
        </div>
      </div>
    </div>
  </div>  
  <div id="displayModalBackdrop" class="backdrop"></div>
    <div class="modal fade" id="commentModalHeader" role="success" style="display:none;">
        <div class="modal-dialog ">
            <div class="modal-content">
                <div class="modal-header">
                    <button type="button" class="close" data-dismiss="modal">×</button>
                    <h4 class="modal-title">Message </h4>
                </div>
                <div class="modal-body">
                    <div class="form-group">
                        <div class="modal-body">
                            <p>Error</p>
                        </div>
                    </div>
                </div>
                <div class="modal-footer">
                    <button type="button" class="btn btn-default" data-dismiss="modal">OK</button>
                </div>
            </div>
        </div>
    </div>
    <div class="modal fade" id="reportIssueHeader" tabindex="-1" role="dialog" style="display:none;">
        <div class="modal-dialog modal-lg" role="document">
            <div class="modal-content">
                <div class="modal-header">
                    <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">×</span></button>
                    <h4 class="modal-title text-center" id="myModalLabel">Note: For issues in your code/test-cases, please use Comment-System of that particular problem.</h4>
                </div>
                <div class="modal-body">
                    <form class="form-horizontal" role="form">
                        <div class="form-group">
                          <label class="col-sm-1 control-label" for="inputTestCase">Details</label>
                            <div class="col-sm-11">
                              <textarea id="issueDescription" class="form-control" rows="7" cols="100" name="issueDescription"></textarea>
                          </div>
                        </div>
                    </form>
                </div>
                <div class="modal-footer">
                    <button type="button" class="btn btn-default" data-dismiss="modal" style="float:left;">Cancel</button>
                    <button type="button" class="btn btn-default" data-dismiss="modal" id="reportIssueHeaderMail" style="float:right;">Send</button>
                </div>
            </div>
        </div>
    </div>
    <!-- End of custom modal -->

        <div class="header--batches__button" style="display: none;">
        LIVE&nbsp;&nbsp;&nbsp;BATCHES
    </div>
    <div class="header--batches__content">
    </div>
    

      <script type="text/javascript" id="">!function(b,e,f,g,a,c,d){b.fbq||(a=b.fbq=function(){a.callMethod?a.callMethod.apply(a,arguments):a.queue.push(arguments)},b._fbq||(b._fbq=a),a.push=a,a.loaded=!0,a.version="2.0",a.queue=[],c=e.createElement(f),c.async=!0,c.src=g,d=e.getElementsByTagName(f)[0],d.parentNode.insertBefore(c,d))}(window,document,"script","https://connect.facebook.net/en_US/fbevents.js");fbq("init","2320390688070878");fbq("track","PageView");</script>
      <noscript><img height="1" width="1" style="display:none" src="https://www.facebook.com/tr?id=2320390688070878&amp;ev=PageView&amp;noscript=1"></noscript>
    <meta name="facebook-domain-verification" content="xcg0z3utjhf3w2e7wftoypcx8j3l5s">
<script type="text/javascript" id="">!function(d,e,f,a,b,c){d.twq||(a=d.twq=function(){a.exe?a.exe.apply(a,arguments):a.queue.push(arguments)},a.version="1.1",a.queue=[],b=e.createElement(f),b.async=!0,b.src="//static.ads-twitter.com/uwt.js",c=e.getElementsByTagName(f)[0],c.parentNode.insertBefore(b,c))}(window,document,"script");twq("init","o65zz");twq("track","PageView");</script>
<script>
    var curPageUrl = 'https://practice.geeksforgeeks.org%2Fproblems%2Fprint-anagrams-together%2F1';
    var apiUrl = 'https://api.geeksforgeeks.org';
</script>
        <div class="login-modal-include"></div>

    <div class="container-fluid">
        <div id="loaderMask" style="display:none;width: 100%;height: 100%;top: 0;left: 0;background: #0006;padding: 20em 0% 0% 48em;z-index: 1000000;position: fixed;">
            <h3><i class="fa fa-spin fa-spinner" style="font-size: 2em;"></i></h3>
        </div>

                <div class="iframe-top-div" style="display:none;background-repeat: no-repeat;background-image: url(&#39;https://media.geeksforgeeks.org/img-practice/gfg_rev.gif&#39;)" id="class-div-js">
            <span id="taking-time-to-join" style="padding:3px;position: absolute;margin-top: 60vh;margin-left: auto;margin-right:auto;">
                <center>If you are facing any issue or this is taking too long, please <a href="https://practice.geeksforgeeks.org/problems/print-anagrams-together/1" class="join-link">click</a> to join directly.</center>
            </span>
            <iframe id="class-iframe-src" src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/saved_resource.html" allow="camera;microphone *" width="100%" height="100%" style="max-width: 100%;"></iframe>
        </div>
        <div style="z-index: 1000;position: fixed;display:none;" class="cancel-class-section col-sm-1 col-sm-offset-10">
            <button style="color: red;background: white;border: unset;padding: 10px;margin: 10px;width: 120%;" class="cancel-cls-btn">Exit</button>
        </div>

<link rel="stylesheet" href="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/gfg-problems.css">

<div class="problem-bg"></div>

<link rel="stylesheet" href="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/bootstrap-select.min(1).css">
<script>
    var DOMAIN = "practice";
    var problemSlug = 'print-anagrams-together';
    var currentProblem = {"problem_languages":{"cpp":"C++ (g++ 5.4)","java":"Java (1.8)","python3":"Python3","javascript":"Javascript (Node v12.19.0)"},"default_lang":null,"default_code":null,"initial_user_func":{"cpp":{"initial_code":"\/\/Initial Template for C++\r\n#include <bits\/stdc++.h>\r\n#include <unordered_map>\r\nusing namespace std;\r\n\r\n\/\/Position this line where user code will be pasted.\r\n\r\nint main()\r\n{\r\n    int t;\r\n    cin>>t;\r\n    while(t--)\r\n    {\r\n        int n;\r\n        cin>>n;\r\n        vector<string> string_list(n);\r\n        for (int i = 0; i < n; ++i)\r\n            cin>>string_list[i]; \r\n        Solution ob;\r\n        vector<vector<string> > result = ob.Anagrams(string_list);\r\n        sort(result.begin(),result.end());\r\n        for (int i = 0; i < result.size(); i++)\r\n        {\r\n            for(int j=0; j < result[i].size(); j++)\r\n            {\r\n                cout<<result[i][j]<<\" \";\r\n            }\r\n            cout<<\"\\n\";\r\n        }\r\n    }\r\n\r\n    return 0;\r\n}\r\n","user_code":"\/\/User function Template for C++\r\n\r\nclass Solution{\r\n  public:\r\n    vector<vector<string> > Anagrams(vector<string>& string_list) {\r\n        \/\/code here\r\n    }\r\n};","created_at_timestamp":1615395976,"updated_at_timestamp":1628167797},"java":{"initial_code":"\/\/Initial Template for Java\r\n\r\n\/*package whatever \/\/do not write package name here *\/\r\n\r\nimport java.io.*;\r\nimport java.util.*;\r\n\r\nclass GFG {\r\n    public static void main (String[] args) throws IOException{\r\n        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));\r\n\t        \r\n\t    int t=Integer.parseInt(br.readLine().trim());\r\n\t    while(t > 0)\r\n\t    {\r\n\t        int n= Integer.parseInt(br.readLine().trim());\r\n\t        String x = br.readLine().trim();\r\n\t        String string_list[] = x.split(\" \",n);\r\n\t        \r\n\t        Solution ob = new  Solution();\r\n\t        \r\n\t        List <List<String>> ans = ob.Anagrams(string_list);\r\n\t        \r\n\t        Collections.sort(ans, new Comparator<List<String>>(){\r\n            public int compare(List<String> l1, List<String> l2) {\r\n                    String s1 =  l1.get(0);\r\n                    String s2 = l2.get(0);\r\n                    \r\n                    return s1.compareTo(s2);\r\n                }\r\n            });\r\n\t        \r\n\t        for(int i=0;i<ans.size();i++)\r\n\t        {\r\n\t            for(int j=0;j<ans.get(i).size();j++)\r\n\t            {\r\n\t                System.out.print(ans.get(i).get(j) + \" \");\r\n\t            }\r\n\t            System.out.println();\r\n\t        }\r\n\t       \r\n\t       \r\n            t--;\r\n\t    }\r\n\t}\r\n    \r\n}\r\n","user_code":"\/\/User function Template for Java\r\n\r\nclass Solution {\r\n    public List<List<String>> Anagrams(String[] string_list) {\r\n        \/\/ Code here\r\n    }\r\n}\r\n","created_at_timestamp":1615395976,"updated_at_timestamp":1628167811},"python3":{"initial_code":"#Initial Template for Python 3\r\n\r\n#contributed by RavinderSinghPB\r\nif __name__ =='__main__':\r\n    t= int(input())\r\n    for tcs in range(t):\r\n        n= int(input())\r\n        words=input().split()\r\n        \r\n        ob = Solution()\r\n        ans = ob.Anagrams(words,n)\r\n        \r\n        for grp in sorted(ans):\r\n            for word in grp:\r\n                print(word,end=' ')\r\n            print()\r\n","user_code":"#User function Template for python3\r\n\r\nclass Solution:\r\n    def Anagrams(self, words, n):\r\n        '''\r\n        words: list of word\r\n        n:      no of words\r\n        return : list of group of anagram {list will be sorted in driver code (not word in grp)}\r\n        '''\r\n        \r\n        #code here","created_at_timestamp":1615395976,"updated_at_timestamp":1628167811},"javascript":{"initial_code":"\/\/Initial Template for javascript\r\n\r\n'use strict';\r\n\r\nprocess.stdin.resume();\r\nprocess.stdin.setEncoding('utf-8');\r\n\r\nlet inputString = '';\r\nlet currentLine = 0;\r\n\r\nprocess.stdin.on('data', inputStdin => {\r\n    inputString += inputStdin;\r\n});\r\n\r\nprocess.stdin.on('end', _ => {\r\n    inputString = inputString.trim().split('\\n').map(string => {\r\n        return string.trim();\r\n    });\r\n    \r\n    main();    \r\n});\r\n\r\nfunction readLine() {\r\n    return inputString[currentLine++];\r\n}\r\n\r\nfunction printArray(res) {\r\n    for(let arr of res){\r\n        let s=\"\";\r\n        for(let str of arr){\r\n            s+=str;\r\n            s+=\" \";\r\n        }\r\n        console.log(s);\r\n    }\r\n}\r\n\r\n\r\nfunction main() {\r\n    let t = parseInt(readLine());\r\n    let i = 0;\r\n    for(;i<t;i++)\r\n    {\r\n        let n = parseInt(readLine());\r\n        let s = readLine().split(' ');\r\n        let arr = [];\r\n        for(let i=0;i<n;i++){\r\n            arr.push(s[i]);\r\n        }\r\n        let obj = new Solution();\r\n        let res = obj.Anagrams(n, arr);\r\n        printArray(res);\r\n    }\r\n}\r\n\r\n","user_code":"\/\/User function Template for javascript\r\n\r\n\r\n\/**\r\n * @param {number} n\r\n * @param {string[]} string_list\r\n * @returns {string[][]} \r\n *\/\r\n \r\nclass Solution {\r\n    Anagrams(n, string_list){\r\n        \/\/ code here\r\n    }\r\n}\r\n\r\n","created_at_timestamp":1615395976,"updated_at_timestamp":1628167811}},"input":"5\nact god cat dog tac"}; 
    var courseDefaultLang = ''; 

    var wsSource = "submitDoubtForProblem";
    var wsSlug = problemSlug;
    var wsId = '701966';
    var wsRoom = "problems_"+wsId;
    var pageSource = "problems";
    var socketConnection = 'wss://sdv5i7hmbl.execute-api.us-west-2.amazonaws.com/prod';
    var currentUser = 'diyashabose';
    var currentUserName = 'Diyasha Bose';  
    var refId = '';    
    var editDiscussionPermission = '';
    var wdb = 'p';
    var userId = '830784';
    var urlHome = 'https://practice.geeksforgeeks.org';
    var batch_id = '';
    var track_id = '';
</script>

<script type="text/javascript" src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/sockets.js.download"></script>


    <!-- <a class="btn problems-menu" data-toggle="collapse" data-target=".navbar-collapse" href="#"> -->
    <div class="problems-menu">
      <!-- <span> -->
      <!-- <i class="fa fa-bars fa-3x" aria-hidden="true"></i> -->
        <span class="gfg-bar-1"></span>
        <span class="gfg-bar-2"></span>
        <span class="gfg-bar-3"></span>
      <!-- </span> -->
    </div>

<div class="problems-list-menu col-sm-12 col-md-4 p-menu-close">
        <!-- <div class="problems-list-menu__navbar"> -->
          <div class="panel">
            <div class="panel-heading problems-list-menu__navbar-header row">
              <!-- <div class="row"> -->
                <div class="problems-list-menu__navbar_logo">
                  <div class="col-sm-9" style="margin-left: 6px;">
                    <img class="pull-left" src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/gfg-menu-logo-0209192809.png" style="max-width:90%">
                  </div>
                  <div class="col-sm-3">
                    <a class="pull-right menu-close-icon" data-toggle="collapse" data-target=".problems-list-menu-remove"> <img src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/menu-close-icon.svg" width="28" height="28"> </a>
                  </div>
                </div>  
              <!-- </div> -->
            <!-- <div class="row"> -->
              <!-- <div class="panel">
                <div class="panel-heading problems-list-menu__navbar-header row"> -->
                  <div class="row zero-row">
                    <div class="col-sm-6">
                                                <a class="back-to-track pull-left" href="https://practice.geeksforgeeks.org/explore/" id="backToExplore"> <i class="fas fa-angle-left"></i> Back To Explore Page </a>
                                
                    </div>
                                      </div>

                                    
            </div>

                <div class="panel-body problems-list-menu__navbar-body">
                  
                  <div class="problems-list-menu__navbar-body-list"><ul class="problems-list-menu__navbar-body-list__group"><li> <a href="https://practice.geeksforgeeks.org/problems/c-2-d-arrays0708/0/"> <div class="problems-list-menu__navbar-body-list__item">C++ 2-D Arrays | Set-1</div><i class=" pull-right far fa-circle" style="color:#fff;"></i></a> </li><li> <a href="https://practice.geeksforgeeks.org/problems/clone-a-stack-without-usinig-extra-space/0/"> <div class="problems-list-menu__navbar-body-list__item">Clone a stack without usinig extra space</div><i class=" pull-right far fa-circle" style="color:#fff;"></i></a> </li><li> <a href="https://practice.geeksforgeeks.org/problems/java-hashmap1033/0/"> <div class="problems-list-menu__navbar-body-list__item">Java Collection | Set 3 (HashMap) Part-1</div><i class=" pull-right far fa-circle" style="color:#fff;"></i></a> </li><li> <a href="https://practice.geeksforgeeks.org/problems/front-back-transformation1659/0/"> <div class="problems-list-menu__navbar-body-list__item">Front-Back Transformation - copy</div><i class=" pull-right far fa-circle" style="color:#fff;"></i></a> </li><li> <a href="https://practice.geeksforgeeks.org/problems/break-numbers0435/0/"> <div class="problems-list-menu__navbar-body-list__item">Break Numbers[Duplicate problem]</div><i class=" pull-right far fa-circle" style="color:#fff;"></i></a> </li><li> <a href="https://practice.geeksforgeeks.org/problems/java-basic-data-types0041/0/"> <div class="problems-list-menu__navbar-body-list__item">Java Basic Data Types</div><i class=" pull-right far fa-circle" style="color:#fff;"></i></a> </li><li> <a href="https://practice.geeksforgeeks.org/problems/xor-of-all-elements0736/0/"> <div class="problems-list-menu__navbar-body-list__item">XOR of all elements</div><i class=" pull-right far fa-circle" style="color:#fff;"></i></a> </li><li> <a href="https://practice.geeksforgeeks.org/problems/akku-and-binary-numbers0902/0/"> <div class="problems-list-menu__navbar-body-list__item">Akku and Binary Numbers</div><i class=" pull-right far fa-circle" style="color:#fff;"></i></a> </li><li> <a href="https://practice.geeksforgeeks.org/problems/magical-string3653/0/"> <div class="problems-list-menu__navbar-body-list__item">Magical String[Duplicate Problem]</div><i class=" pull-right far fa-circle" style="color:#fff;"></i></a> </li><li> <a href="https://practice.geeksforgeeks.org/problems/penalty-shooters4238/0/"> <div class="problems-list-menu__navbar-body-list__item">Penalty Shooters</div><i class=" pull-right far fa-circle" style="color:#fff;"></i></a> </li><li> <a href="https://practice.geeksforgeeks.org/problems/queries-on-a-matrix0443/0/"> <div class="problems-list-menu__navbar-body-list__item">Queries on a Matrix</div><i class=" pull-right far fa-circle" style="color:#fff;"></i></a> </li><li> <a href="https://practice.geeksforgeeks.org/problems/earthquake-and-the-paint-shop4518/0/"> <div class="problems-list-menu__navbar-body-list__item">Earthquake and the Paint Shop</div><i class=" pull-right far fa-circle" style="color:#fff;"></i></a> </li><li> <a href="https://practice.geeksforgeeks.org/problems/5fbdb297e0fcb7703e7dee4b4f0ada9cc7e47bd8/0/"> <div class="problems-list-menu__navbar-body-list__item">Shortest Range In BST</div><i class=" pull-right far fa-circle" style="color:#fff;"></i></a> </li><li> <a href="https://practice.geeksforgeeks.org/problems/efficiently-sorting-number-from-0-to-n2-15444/0/"> <div class="problems-list-menu__navbar-body-list__item">Efficiently sorting numbers in range from 0 to n^2 - 1</div><i class=" pull-right far fa-circle" style="color:#fff;"></i></a> </li><li> <a href="https://practice.geeksforgeeks.org/problems/2b9978653b4d905d12c04387a60e16464ef40733/0/"> <div class="problems-list-menu__navbar-body-list__item">Shortest Prime Path</div><i class=" pull-right far fa-circle" style="color:#fff;"></i></a> </li><li> <a href="https://practice.geeksforgeeks.org/problems/fab3dbbdce746976ba35c7b9b24afde40eae5a04/0/"> <div class="problems-list-menu__navbar-body-list__item">Help Classmates</div><i class=" pull-right far fa-circle" style="color:#fff;"></i></a> </li><li> <a href="https://practice.geeksforgeeks.org/problems/2caf0501a39567d653197364a2b5c8a9f5943b7e/0/"> <div class="problems-list-menu__navbar-body-list__item">Restricted Pacman</div><i class=" pull-right far fa-circle" style="color:#fff;"></i></a> </li><li> <a href="https://practice.geeksforgeeks.org/problems/java-collections-set-7-linkedlist/0/"> <div class="problems-list-menu__navbar-body-list__item">Java Collections | Set 7 (LinkedList) </div><i class=" pull-right far fa-circle" style="color:#fff;"></i></a> </li><li> <a href="https://practice.geeksforgeeks.org/problems/geek-and-function-v/0/"> <div class="problems-list-menu__navbar-body-list__item">Geek and Function |V</div><i class=" pull-right far fa-circle" style="color:#fff;"></i></a> </li><li> <a href="https://practice.geeksforgeeks.org/problems/aryas-long-string5840/0/"> <div class="problems-list-menu__navbar-body-list__item">Arya's Long String</div><i class=" pull-right far fa-circle" style="color:#fff;"></i></a> </li><li> <a href="https://practice.geeksforgeeks.org/problems/largest-value-in-each-level/0/"> <div class="problems-list-menu__navbar-body-list__item">Largest value in each level</div><i class=" pull-right far fa-circle" style="color:#fff;"></i></a> </li><li> <a href="https://practice.geeksforgeeks.org/problems/lower-case-to-upper-case3410/0/"> <div class="problems-list-menu__navbar-body-list__item">Lower case to upper case</div><i class=" pull-right far fa-circle" style="color:#fff;"></i></a> </li><li> <a href="https://practice.geeksforgeeks.org/problems/card-rotation5834/0/"> <div class="problems-list-menu__navbar-body-list__item">Card Rotation</div><i class=" pull-right far fa-circle" style="color:#fff;"></i></a> </li><li> <a href="https://practice.geeksforgeeks.org/problems/c-data-types1523/0/"> <div class="problems-list-menu__navbar-body-list__item">C++ Data Types</div><i class=" pull-right far fa-circle" style="color:#fff;"></i></a> </li><li> <a href="https://practice.geeksforgeeks.org/problems/kronecker-product0918/0/"> <div class="problems-list-menu__navbar-body-list__item">Kronecker Product</div><i class=" pull-right far fa-circle" style="color:#fff;"></i></a> </li><li> <a href="https://practice.geeksforgeeks.org/problems/subtraction-and-two-numbers0816/0/"> <div class="problems-list-menu__navbar-body-list__item">Subtraction and two numbers</div><i class=" pull-right far fa-circle" style="color:#fff;"></i></a> </li><li> <a href="https://practice.geeksforgeeks.org/problems/multiply-two-polynomals0721/0/"> <div class="problems-list-menu__navbar-body-list__item">Multiply two polynomials</div><i class=" pull-right far fa-circle" style="color:#fff;"></i></a> </li><li> <a href="https://practice.geeksforgeeks.org/problems/remove-bst-keys-outside-given-range/0/"> <div class="problems-list-menu__navbar-body-list__item">Remove BST keys outside given range</div><i class=" pull-right far fa-circle" style="color:#fff;"></i></a> </li><li> <a href="https://practice.geeksforgeeks.org/problems/kth-smallest-number-in-multiplication-table/0/"> <div class="problems-list-menu__navbar-body-list__item">Kth Smallest Number in Multiplication Table</div><i class=" pull-right far fa-circle" style="color:#fff;"></i></a> </li><li> <a href="https://practice.geeksforgeeks.org/problems/gray-code4907/0/"> <div class="problems-list-menu__navbar-body-list__item">Gray Code </div><i class=" pull-right far fa-circle" style="color:#fff;"></i></a> </li><li> <a href="https://practice.geeksforgeeks.org/problems/prefix-match-with-other-strings/0/"> <div class="problems-list-menu__navbar-body-list__item">Prefix match with other strings</div><i class=" pull-right far fa-circle" style="color:#fff;"></i></a> </li><li> <a href="https://practice.geeksforgeeks.org/problems/sum-of-diagonals-1587115621/0/"> <div class="problems-list-menu__navbar-body-list__item">Sum of diagonals</div><i class=" pull-right far fa-circle" style="color:#fff;"></i></a> </li><li> <a href="https://practice.geeksforgeeks.org/problems/swapping-triangles5209/0/"> <div class="problems-list-menu__navbar-body-list__item">Swapping Triangles</div><i class=" pull-right far fa-circle" style="color:#fff;"></i></a> </li><li> <a href="https://practice.geeksforgeeks.org/problems/c-strings4609/0/"> <div class="problems-list-menu__navbar-body-list__item">C++ Strings</div><i class=" pull-right far fa-circle" style="color:#fff;"></i></a> </li><li> <a href="https://practice.geeksforgeeks.org/problems/addition-of-submatrix5835/0/"> <div class="problems-list-menu__navbar-body-list__item">Addition of submatrix</div><i class=" pull-right far fa-circle" style="color:#fff;"></i></a> </li><li> <a href="https://practice.geeksforgeeks.org/problems/sort-a-string2943/0/"> <div class="problems-list-menu__navbar-body-list__item">Sort a String</div><i class=" pull-right far fa-circle" style="color:#fff;"></i></a> </li><li> <a href="https://practice.geeksforgeeks.org/problems/insertion-sort-for-singly-linked-list/0/"> <div class="problems-list-menu__navbar-body-list__item">Insertion Sort for Singly Linked List</div><i class=" pull-right far fa-circle" style="color:#fff;"></i></a> </li><li> <a href="https://practice.geeksforgeeks.org/problems/nitika-and-her-queries4804/0/"> <div class="problems-list-menu__navbar-body-list__item">Nitika and her queries</div><i class=" pull-right far fa-circle" style="color:#fff;"></i></a> </li><li> <a href="https://practice.geeksforgeeks.org/problems/inverse-permutation0344/0/"> <div class="problems-list-menu__navbar-body-list__item">Inverse Permutation</div><i class=" pull-right far fa-circle" style="color:#fff;"></i></a> </li><li> <a href="https://practice.geeksforgeeks.org/problems/find-the-n-th-character5925/0/"> <div class="problems-list-menu__navbar-body-list__item">Find the N-th character</div><i class=" pull-right far fa-circle" style="color:#fff;"></i></a> </li></ul></div>
                </div>
                <div class="panel-footer problems-list-menu__navbar-footer">
                                                    
                </div>
              </div>
            <!-- </div> -->
        <!-- </div> -->
</div>
            <!-- </div> -->

<script>
function logoutIf403(jqXHR){
    try{
        if (jqXHR.status == 403){
            showSnackbarMessage('Session Expired, Logging out');
            setTimeout(()=>{
                window.location = window.location.origin + "/logout.php?to="+window.location.href;
            }, 1000);
        }
    }
    catch(ex){
        console.error(ex);
    }
}
</script>
<div id="copy-to-clipboard-snackbar" class="">Copied to Clipboard</div>
<div class="problem-container">
    <div class="leftSide">
        <div class="container-left">
    <ul class="nav nav-tabs problem-menu-tabs">
        <li class="active nav-tabs__problem">
            <a data-toggle="tab" href="https://practice.geeksforgeeks.org/problems/print-anagrams-together/1#problems"><span class="problem-icon"></span>Problem</a>
        </li>
                <li><a data-toggle="tab" href="https://practice.geeksforgeeks.org/problems/print-anagrams-together/1#editorial"> <span class="editorial-icon"></span> Editorial</a></li>
                <li class="nav-tabs__my-submissions"><a data-toggle="tab" href="https://practice.geeksforgeeks.org/problems/print-anagrams-together/1#submission"> <span class="submission-icon"></span> Submissions </a></li>
        <li class="nav-tabs__discussion"><a data-toggle="tab" href="https://practice.geeksforgeeks.org/problems/print-anagrams-together/1#discussion"> <span class="doubt-icon"></span>Doubt
                Support </a></li>
    </ul>
    <div class="tab-content problem-menu-content">
        <div id="problems" class="tab-pane fade in active problem-tab">
            <div class="problem-intro" style="position: sticky;">
                <div class="row problem-intro__row">
                    <span class="problem-tab__name">
                        Print Anagrams Together                        
                    </span>
                    <span class="problem-tab__bookmark">
                                                <a href="https://practice.geeksforgeeks.org/problems/print-anagrams-together/1#" class=""> <i id="bookmarkIcon" class="far fa-bookmark add-bookmark" aria-hidden="true" data-toggle="tooltip" title="" data-original-title="Add Bookmark"></i> </a>
                                            </span>
                    <span>
                                            </span>
                                            <span><i id="reportIssueBtn" data-target="#reportIssue" data-toggle="modal" utoken="fd61f360832120b04161a59928f2664a21a3d42731363431333035373135" class="fa fa-bug" onclick="gtagHelperFunction(&#39;clickopen&#39;,&#39;problem_reportanissue_top&#39;)" style="font-size:17px; margin-right: 2%; float: right; margin-top: 1%; cursor: pointer;" aria-hidden="true" title="Report an Issue"></i></span>
                                    </div>
                <div class="row problem-meta-summary">
                    <strong class="problem-tab__problem-level"> Medium </strong>
                    <span class="problem-tab__problem-accuracy"> <span class="problem-tab__key">Accuracy:</span> <span class="problem-tab__value"> 56.1% </span> </span>
                    <span class="problem-tab__problem-total-submissions"> <span class="problem-tab__key">
                            Submissions:</span> <span class="problem-tab__value"> 24242 </span> </span>
                    <span class="problem-tab__problem-points"> <span class="problem-tab__key"> Points:</span> <span class="problem-tab__value"> 4 </span> </span>
                </div>
                <hr style="margin-top: 10px;">
            </div>
            <div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given an array of strings, return all groups of strings that are anagrams. The groups must be created in order of their appearance in the original array. Look at the sample case for clarification.</span></p>

<p><br>
<span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 5
words[] = {act,god,cat,dog,tac}
<strong>Output: 
</strong>god dog
act cat tac<strong>
Explanation:
</strong>There are 2 groups of
anagrams "god", "dog" make group 1.
"act", "cat", "tac" make group 2.</span>
</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 3
words[] = {no,on,is}
<strong>Output: 
</strong>no on
is<strong>
Explanation:
</strong>There are 2 groups of
anagrams "no", "on" make group 1.
"is" makes group 2.&nbsp;</span></pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:</strong><br>
The task is to complete the function <strong>Anagrams()</strong> that takes a list of strings as input and returns a list of groups such that each group consists of all the strings that are anagrams.</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(N*|S|*log|S|), where |S| is the length of the strings.<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(N*|S|), where |S| is the length of the strings.</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1&lt;=N&lt;=100</span></p>
 <p></p>
            </div>
                                    <div><a style="color:#2F8D46" href="https://practice.geeksforgeeks.org/explore/?problemType=bookmark" target="_blank">View Bookmarked Problems</a></div><a style="color:#2F8D46" href="https://practice.geeksforgeeks.org/explore/?problemType=bookmark" target="_blank">
            </a><div class="panel-group problem-metainfo-group" id="problemMetaInfo"><a style="color:#2F8D46" href="https://practice.geeksforgeeks.org/explore/?problemType=bookmark" target="_blank">
                                </a><div class="panel metainfo-panel-close shadow-lg"><a style="color:#2F8D46" href="https://practice.geeksforgeeks.org/explore/?problemType=bookmark" target="_blank">
                    </a><div class="panel-heading"><a style="color:#2F8D46" href="https://practice.geeksforgeeks.org/explore/?problemType=bookmark" target="_blank">
                        <strong class="panel-title">
                            </strong></a><strong class="panel-title"><a data-toggle="collapse" href="https://practice.geeksforgeeks.org/problems/print-anagrams-together/1#companyTags"> <strong class="panel-title__text">Company
                                    Tags</strong> <span class="pull-right"> <i class="fas fa-angle-down circle-icon rotate" aria-hidden="true"></i> </span>
                            </a>
                        </strong>
                    </div>
                    <div id="companyTags" class="panel-collapse collapse">
                        <div class="panel-body">
                            <a class="problem-tag" href="https://practice.geeksforgeeks.org/explore/?company[]=Amazon" target="_blank"> <i class="far fa-circle"></i>  <span>Amazon </span> </a><a class="problem-tag" href="https://practice.geeksforgeeks.org/explore/?company[]=D-E-Shaw" target="_blank"> <i class="far fa-circle"></i>  <span>D-E-Shaw </span> </a><a class="problem-tag" href="https://practice.geeksforgeeks.org/explore/?company[]=Goldman%20Sachs" target="_blank"> <i class="far fa-circle"></i>  <span>Goldman Sachs </span> </a><a class="problem-tag" href="https://practice.geeksforgeeks.org/explore/?company[]=Morgan%20Stanley" target="_blank"> <i class="far fa-circle"></i>  <span>Morgan Stanley </span> </a><a class="problem-tag" href="https://practice.geeksforgeeks.org/explore/?company[]=Snapdeal" target="_blank"> <i class="far fa-circle"></i>  <span>Snapdeal </span> </a><a class="problem-tag" href="https://practice.geeksforgeeks.org/explore/?company[]=Microsoft" target="_blank"> <i class="far fa-circle"></i>  <span>Microsoft </span> </a>                        </div>
                    </div>
                </div>
                
                                <div class="panel metainfo-panel-close shadow-lg">
                    <div class="panel-heading">
                        <strong class="panel-title">
                            <a data-toggle="collapse" href="https://practice.geeksforgeeks.org/problems/print-anagrams-together/1#topicTags"> <strong class="panel-title__text"> Topic Tags
                                </strong> <span class="pull-right"> <i class="fas fa-angle-down  circle-icon rotate" aria-hidden="true"></i> </span> </a>
                        </strong>
                    </div>
                    <div id="topicTags" class="panel-collapse collapse">
                        <div class="panel-body">
                            <a class="problem-tag" href="https://practice.geeksforgeeks.org/explore/?category[]=Hash" target="_blank"> <i class="far fa-circle"></i>  <span>Hash </span> </a><a class="problem-tag" href="https://practice.geeksforgeeks.org/explore/?category[]=Strings" target="_blank"> <i class="far fa-circle"></i>  <span>Strings </span> </a>                        </div>
                    </div>
                </div>
                
                                <div class="panel metainfo-panel-close shadow-lg">
                    <div class="panel-heading">
                        <strong class="panel-title">
                            <a data-toggle="collapse" href="https://practice.geeksforgeeks.org/problems/print-anagrams-together/1#relatedCourses"> <strong class="panel-title__text">Related
                                    Courses </strong> <span class="pull-right"> <i class="fas fa-angle-down circle-icon rotate" aria-hidden="true"></i> </span>
                            </a>
                        </strong>
                    </div>
                    <div id="relatedCourses" class="panel-collapse collapse">
                        <div class="panel-body">
                            <a class="problem-tag" href="https://practice.geeksforgeeks.org/courses/Amazon-Test-Series?vC=1" target="_blank">  <i class="far fa-circle"></i> <span>Amazon SDE Preparation Test Series</span> </a><a class="problem-tag" href="https://practice.geeksforgeeks.org/courses/Must-Do-Premium?vC=1" target="_blank">  <i class="far fa-circle"></i> <span>Must Do Coding Questions - Self Paced</span> </a><a class="problem-tag" href="https://practice.geeksforgeeks.org/courses/get-placed-series-1?vC=1" target="_blank">  <i class="far fa-circle"></i> <span>Placement Guide 2021-2022</span> </a>                        </div>
                    </div>
                </div>
                
                                <div class="panel metainfo-panel-close shadow-lg">
                    <div class="panel-heading">
                        <strong class="panel-title">
                            <a data-toggle="collapse" href="https://practice.geeksforgeeks.org/problems/print-anagrams-together/1#interviewLinks"> <strong class="panel-title__text">Related
                                    Interview Experiences</strong> <span class="pull-right"> <i class="fas fa-angle-down circle-icon rotate" aria-hidden="true"></i> </span>
                            </a>
                        </strong>
                    </div>
                    <div id="interviewLinks" class="panel-collapse collapse">
                        <div class="panel-body">
                            <a class="problem-tag" href="https://www.geeksforgeeks.org/amazon-interview-experience-set-144-campus-sde-1/" target="_blank" style="width:100%"> <i class="far fa-circle"></i>  <span>Amazon interview experience set 144 campus sde 1 </span> </a><a class="problem-tag" href="https://www.geeksforgeeks.org/snapdeal-interview-experience-set-8-on-campus/" target="_blank" style="width:100%"> <i class="far fa-circle"></i>  <span>Snapdeal interview experience set 8 on campus </span> </a><a class="problem-tag" href="https://www.geeksforgeeks.org/amazon-interview-experience-set-188-for-sde1/" target="_blank" style="width:100%"> <i class="far fa-circle"></i>  <span>Amazon interview experience set 188 for sde1 </span> </a><a class="problem-tag" href="https://www.geeksforgeeks.org/microsoft-interview-experience-for-sde-1-2/" target="_blank" style="width:100%"> <i class="far fa-circle"></i>  <span>Microsoft interview experience for sde 1 2 </span> </a>
                            
                        </div>
                    </div>
                </div>
                            </div>
            <div class="text-center">
                We are replacing the old Disqus forum with the new Discussions section given below. <br>Click <a target="_blank" href="https://practice.geeksforgeeks.org/comments/print-anagrams-together/1/?rel=https://practice.geeksforgeeks.org/problems/print-anagrams-together/1">here</a> to view old Disqus comments.
            </div>
            <br>
            <br>
            <!-- Comment system Container -->
            <div id="comment-system"><iframe src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/saved_resource(1).html" id="discuss-iframe" scrolling="no" frameborder="0" onload="iFrameResize({warningTimeout: 0, checkOrigin: false}, &#39;#discuss-iframe&#39;)" style="width: 1px; min-width: 100%; overflow: hidden; height: 18203px;"></iframe></div>
            <script>
                /**
                * RECOMMENDED CONFIGURATION VARIABLES: EDIT AND UNCOMMENT THE SECTION BELOW TO INSERT DYNAMIC VALUES FROM YOUR PLATFORM OR CMS.
                * LEARN WHY DEFINING THESE VARIABLES IS IMPORTANT: https://disqus.com/admin/universalcode/#configuration-variables
                */
                var commentConfig = function () {
                    this.identifier = "prob" + '701966';
                    this.title = 'Print+Anagrams+Together+%7C+Practice+%7C+GeeksforGeeks+';
                    this.domain = 'practice';
                    this.pageURL = 'https%3A%2F%2Fpractice.geeksforgeeks.org%252Fproblems%252Fprint-anagrams-together%252F1';
                };
            </script>
            <script async="" src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/commentEmbed.js.download"></script>
            
            <div class="text-center" style="margin-top: 50px;">
    <button id="reportIssueBtn" type="button" class="btn btn-warning btn-sm" style="font-size:12px;border-radius:0.3rem;" data-target="#reportIssue" data-toggle="modal" utoken="fd61f360832120b04161a59928f2664a21a3d42731363431333035373135" data-sample-text="U2FtcGxlVGV4dDgzMDc4NFRlc3RUZXh0YWJjMTIzNA==" onclick="gtagHelperFunction(&#39;clickopen&#39;,&#39;problem_reportanissue_bottom&#39;)"><i class="fa fa-bug" aria-hidden="true"></i> Report An Issue</button>
    <br><small>If you are facing any issue on this page. Please let us know.</small>
</div><br>
 
        </div>
        <div id="editorial" class="tab-pane fade">
            <div id="problemEditorials">
                <h3>Editorial</h3>
                <p>We strongly recommend solving this problem on your own before viewing its editorial. Do you still
                    want to view the editorial?</p>
                <a class="btn btn-success btn-round" id="viewEditorial"> Yes </a>
                <h4 class="text-center loader" style="display:none"> <i class="fa fa-spinner fa-pulse fa-4x text-center"></i> <br> <br> Loading... </h4>
            </div>
        </div>
        <div id="submission" class="tab-pane fade">
            <div id="mySubmissions">
                <div class="row">
                    <h4 style="padding:10px;"> <a class="btn pull-right" target="_blank" href="https://practice.geeksforgeeks.org/problem_submissions.php?pid=701966"> All Submissions </a> </h4>
                    <h4 style="padding:5px;border-bottom:2px solid #c2b9b9;"> My Submissions:</h4>
                                        <small style="cursor:pointer; padding:10px;" class="pull-right" id="latestSubmission"> <span id="latestSubmissionIcon"> <i class="fa fa-refresh" aria-hidden="true"></i> </span> Refresh
                    </small>

                    <div class="my-submissions-list to-be-fetched col-sm-12">
                        <h4 class="text-center"><i class="fa fa-spinner fa-pulse fa-4x"></i> </h4>
                    </div>
                                    </div>
            </div>
        </div>
        <div id="discussion" class="tab-pane fade">
            <div class="row">
                <div id="forum-discussion-container" class="col-md-8 col-md-offset-2">
                    <span class="discussion-problem-name">
                        Print Anagrams Together                    </span>
                    <div id="forum-discussion">
    <section id="comments">        
        <div class="forum--header">
            <div class="forum--search"><input type="text" class="form-control search_content" placeholder="Search doubts, discussions or users"><a class="search--icon discussion-search-locked" data-toggle="modal" data-target="#premium-modal"><img src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/doubt_search-1599568245.svg" class="img-responsive"></a></div>
            
            <a class="ask-doubt locked" data-toggle="modal" data-target="#premium-modal"><img src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/doubt-lock-white-1600291009.svg" class="img-responsive"> Ask Doubt</a>
        </div>    
        
        <span class="doubt-message">**Our experts will be available from 9 AM to 2 AM (IST)</span>
        <div id="new-doubts-added" align="center" style="margin-top:1em;display:none;color:red;font-weight:bold;">New threads have added, <a href="javascript:void(0)" onclick="fetchDiscussionHtml()" style="color:green;">Click here to load new threads...</a></div>
        <div class="modal fade" id="discussion-forum" tabindex="-1" role="dialog" aria-hidden="true" aria-labelledby="discussion-forum">
            <div class="modal-dialog">
                <div class="modal-content" style="border-radius:0px">
                    <div class="modal-header">
                        <button type="button" class="close" data-dismiss="modal"><span aria-hidden="true">x</span><span class="sr-only">Close</span></button>
                        <h4 class="modal-title">Ask / Start a new Discussions</h4>
                    </div>
                    <div class="modal-body">
                        <div class="form-group">
                            <input class="form-control input-sm" id="discussion-title" maxlength="200" name="title" placeholder="Title" type="text" value="" required="">
                        </div>
                        <div class="form-group">
                           <textarea class="form-control" cols="20" id="discussion-text" maxlength="2000" name="forum" placeholder="Description" rows="4" style="visibility: hidden; display: none;"></textarea><div id="cke_discussion-text" class="cke_79 cke cke_reset cke_chrome cke_editor_discussion-text cke_ltr cke_browser_webkit" dir="ltr" lang="en-gb" role="application" aria-labelledby="cke_discussion-text_arialbl"><span id="cke_discussion-text_arialbl" class="cke_voice_label">Rich Text Editor, discussion-text</span><div class="cke_inner cke_reset" role="presentation"><span id="cke_79_top" class="cke_top cke_reset_all" role="presentation" style="height: auto; user-select: none;"><span id="cke_91" class="cke_voice_label">Editor toolbars</span><span id="cke_79_toolbox" class="cke_toolbox" role="group" aria-labelledby="cke_91" onmousedown="return false;"><span id="cke_92" class="cke_toolbar" role="toolbar"><span class="cke_toolbar_start"></span><span class="cke_toolgroup" role="presentation"><a id="cke_93" class="cke_button cke_button__bold cke_button_off" href="javascript:void(&#39;Bold&#39;)" title="Bold (Ctrl+B)" tabindex="-1" hidefocus="true" role="button" aria-labelledby="cke_93_label" aria-describedby="cke_93_description" aria-haspopup="false" onkeydown="return CKEDITOR.tools.callFunction(54,event);" onfocus="return CKEDITOR.tools.callFunction(55,event);" onclick="CKEDITOR.tools.callFunction(56,this);return false;"><span class="cke_button_icon cke_button__bold_icon" style="background-image:url(&#39;https://cdn.ckeditor.com/4.11.1/full-all/plugins/icons.png?t=I63C&#39;);background-position:0 -24px;background-size:auto;">&nbsp;</span><span id="cke_93_label" class="cke_button_label cke_button__bold_label" aria-hidden="false">Bold</span><span id="cke_93_description" class="cke_button_label" aria-hidden="false">Keyboard shortcut Ctrl+B</span></a><a id="cke_94" class="cke_button cke_button__italic cke_button_off" href="javascript:void(&#39;Italic&#39;)" title="Italic (Ctrl+I)" tabindex="-1" hidefocus="true" role="button" aria-labelledby="cke_94_label" aria-describedby="cke_94_description" aria-haspopup="false" onkeydown="return CKEDITOR.tools.callFunction(57,event);" onfocus="return CKEDITOR.tools.callFunction(58,event);" onclick="CKEDITOR.tools.callFunction(59,this);return false;"><span class="cke_button_icon cke_button__italic_icon" style="background-image:url(&#39;https://cdn.ckeditor.com/4.11.1/full-all/plugins/icons.png?t=I63C&#39;);background-position:0 -48px;background-size:auto;">&nbsp;</span><span id="cke_94_label" class="cke_button_label cke_button__italic_label" aria-hidden="false">Italic</span><span id="cke_94_description" class="cke_button_label" aria-hidden="false">Keyboard shortcut Ctrl+I</span></a></span><span class="cke_toolbar_end"></span></span><span id="cke_95" class="cke_toolbar" role="toolbar"><span class="cke_toolbar_start"></span><span class="cke_toolgroup" role="presentation"><a id="cke_96" class="cke_button cke_button__link cke_button_off" href="javascript:void(&#39;Link&#39;)" title="Link (Ctrl+L)" tabindex="-1" hidefocus="true" role="button" aria-labelledby="cke_96_label" aria-describedby="cke_96_description" aria-haspopup="false" onkeydown="return CKEDITOR.tools.callFunction(60,event);" onfocus="return CKEDITOR.tools.callFunction(61,event);" onclick="CKEDITOR.tools.callFunction(62,this);return false;"><span class="cke_button_icon cke_button__link_icon" style="background-image:url(&#39;https://cdn.ckeditor.com/4.11.1/full-all/plugins/icons.png?t=I63C&#39;);background-position:0 -1272px;background-size:auto;">&nbsp;</span><span id="cke_96_label" class="cke_button_label cke_button__link_label" aria-hidden="false">Link</span><span id="cke_96_description" class="cke_button_label" aria-hidden="false">Keyboard shortcut Ctrl+L</span></a><a id="cke_97" class="cke_button cke_button__image cke_button_off" href="javascript:void(&#39;Image&#39;)" title="Image" tabindex="-1" hidefocus="true" role="button" aria-labelledby="cke_97_label" aria-describedby="cke_97_description" aria-haspopup="false" onkeydown="return CKEDITOR.tools.callFunction(63,event);" onfocus="return CKEDITOR.tools.callFunction(64,event);" onclick="CKEDITOR.tools.callFunction(65,this);return false;"><span class="cke_button_icon cke_button__image_icon" style="background-image:url(&#39;https://cdn.ckeditor.com/4.11.1/full-all/plugins/icons.png?t=I63C&#39;);background-position:0 -960px;background-size:auto;">&nbsp;</span><span id="cke_97_label" class="cke_button_label cke_button__image_label" aria-hidden="false">Image</span><span id="cke_97_description" class="cke_button_label" aria-hidden="false"></span></a><a id="cke_98" class="cke_button cke_button__codesnippet cke_button_off" href="javascript:void(&#39;Insert Code Snippet&#39;)" title="Insert Code Snippet" tabindex="-1" hidefocus="true" role="button" aria-labelledby="cke_98_label" aria-describedby="cke_98_description" aria-haspopup="false" onkeydown="return CKEDITOR.tools.callFunction(66,event);" onfocus="return CKEDITOR.tools.callFunction(67,event);" onclick="CKEDITOR.tools.callFunction(68,this);return false;"><span class="cke_button_icon cke_button__codesnippet_icon" style="background-image:url(&#39;https://cdn.ckeditor.com/4.11.1/full-all/plugins/codesnippet/icons/codesnippet.png?t=I63C&#39;);background-position:0 0px;background-size:16px;">&nbsp;</span><span id="cke_98_label" class="cke_button_label cke_button__codesnippet_label" aria-hidden="false">Insert Code Snippet</span><span id="cke_98_description" class="cke_button_label" aria-hidden="false"></span></a></span><span class="cke_toolbar_end"></span></span><span id="cke_99" class="cke_toolbar" role="toolbar"><span class="cke_toolbar_start"></span><span class="cke_toolgroup" role="presentation"><a id="cke_100" class="cke_button cke_button__outdent cke_button_disabled " href="javascript:void(&#39;Decrease Indent&#39;)" title="Decrease Indent" tabindex="-1" hidefocus="true" role="button" aria-labelledby="cke_100_label" aria-describedby="cke_100_description" aria-haspopup="false" aria-disabled="true" onkeydown="return CKEDITOR.tools.callFunction(69,event);" onfocus="return CKEDITOR.tools.callFunction(70,event);" onclick="CKEDITOR.tools.callFunction(71,this);return false;"><span class="cke_button_icon cke_button__outdent_icon" style="background-image:url(&#39;https://cdn.ckeditor.com/4.11.1/full-all/plugins/icons.png?t=I63C&#39;);background-position:0 -1056px;background-size:auto;">&nbsp;</span><span id="cke_100_label" class="cke_button_label cke_button__outdent_label" aria-hidden="false">Decrease Indent</span><span id="cke_100_description" class="cke_button_label" aria-hidden="false"></span></a><a id="cke_101" class="cke_button cke_button__indent cke_button_off" href="javascript:void(&#39;Increase Indent&#39;)" title="Increase Indent" tabindex="-1" hidefocus="true" role="button" aria-labelledby="cke_101_label" aria-describedby="cke_101_description" aria-haspopup="false" onkeydown="return CKEDITOR.tools.callFunction(72,event);" onfocus="return CKEDITOR.tools.callFunction(73,event);" onclick="CKEDITOR.tools.callFunction(74,this);return false;"><span class="cke_button_icon cke_button__indent_icon" style="background-image:url(&#39;https://cdn.ckeditor.com/4.11.1/full-all/plugins/icons.png?t=I63C&#39;);background-position:0 -1008px;background-size:auto;">&nbsp;</span><span id="cke_101_label" class="cke_button_label cke_button__indent_label" aria-hidden="false">Increase Indent</span><span id="cke_101_description" class="cke_button_label" aria-hidden="false"></span></a></span><span class="cke_toolbar_end"></span></span><span id="cke_102" class="cke_toolbar" role="toolbar"><span class="cke_toolbar_start"></span><span class="cke_toolgroup" role="presentation"><a id="cke_103" class="cke_button cke_button__numberedlist cke_button_off" href="javascript:void(&#39;Insert/Remove Numbered List&#39;)" title="Insert/Remove Numbered List" tabindex="-1" hidefocus="true" role="button" aria-labelledby="cke_103_label" aria-describedby="cke_103_description" aria-haspopup="false" onkeydown="return CKEDITOR.tools.callFunction(75,event);" onfocus="return CKEDITOR.tools.callFunction(76,event);" onclick="CKEDITOR.tools.callFunction(77,this);return false;"><span class="cke_button_icon cke_button__numberedlist_icon" style="background-image:url(&#39;https://cdn.ckeditor.com/4.11.1/full-all/plugins/icons.png?t=I63C&#39;);background-position:0 -1392px;background-size:auto;">&nbsp;</span><span id="cke_103_label" class="cke_button_label cke_button__numberedlist_label" aria-hidden="false">Insert/Remove Numbered List</span><span id="cke_103_description" class="cke_button_label" aria-hidden="false"></span></a><a id="cke_104" class="cke_button cke_button__bulletedlist cke_button_off" href="javascript:void(&#39;Insert/Remove Bulleted List&#39;)" title="Insert/Remove Bulleted List" tabindex="-1" hidefocus="true" role="button" aria-labelledby="cke_104_label" aria-describedby="cke_104_description" aria-haspopup="false" onkeydown="return CKEDITOR.tools.callFunction(78,event);" onfocus="return CKEDITOR.tools.callFunction(79,event);" onclick="CKEDITOR.tools.callFunction(80,this);return false;"><span class="cke_button_icon cke_button__bulletedlist_icon" style="background-image:url(&#39;https://cdn.ckeditor.com/4.11.1/full-all/plugins/icons.png?t=I63C&#39;);background-position:0 -1344px;background-size:auto;">&nbsp;</span><span id="cke_104_label" class="cke_button_label cke_button__bulletedlist_label" aria-hidden="false">Insert/Remove Bulleted List</span><span id="cke_104_description" class="cke_button_label" aria-hidden="false"></span></a></span><span class="cke_toolbar_end"></span></span><span id="cke_105" class="cke_toolbar cke_toolbar_last" role="toolbar"><span class="cke_toolbar_start"></span><span class="cke_toolgroup" role="presentation"><a id="cke_106" class="cke_button cke_button__mathjax cke_button_off" href="javascript:void(&#39;Math&#39;)" title="Math" tabindex="-1" hidefocus="true" role="button" aria-labelledby="cke_106_label" aria-describedby="cke_106_description" aria-haspopup="false" onkeydown="return CKEDITOR.tools.callFunction(81,event);" onfocus="return CKEDITOR.tools.callFunction(82,event);" onclick="CKEDITOR.tools.callFunction(83,this);return false;"><span class="cke_button_icon cke_button__mathjax_icon" style="background-image:url(&#39;https://cdn.ckeditor.com/4.11.1/full-all/plugins/mathjax/icons/mathjax.png?t=I63C&#39;);background-position:0 0px;background-size:16px;">&nbsp;</span><span id="cke_106_label" class="cke_button_label cke_button__mathjax_label" aria-hidden="false">Math</span><span id="cke_106_description" class="cke_button_label" aria-hidden="false"></span></a></span><span class="cke_toolbar_end"></span></span></span></span><div id="cke_79_contents" class="cke_contents cke_reset" role="presentation" style="height: 150px;"><span id="cke_110" class="cke_voice_label">Press ALT 0 for help</span><iframe src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/saved_resource(2).html" frameborder="0" class="cke_wysiwyg_frame cke_reset" title="Rich Text Editor, discussion-text" aria-describedby="cke_110" tabindex="0" allowtransparency="true" style="width: 100%; height: 100%;"></iframe></div><span id="cke_79_bottom" class="cke_bottom cke_reset_all" role="presentation" style="user-select: none;"><span id="cke_79_resizer" class="cke_resizer cke_resizer_vertical cke_resizer_ltr" title="Drag to resize" onmousedown="CKEDITOR.tools.callFunction(52, event)">◢</span><span id="cke_79_path_label" class="cke_voice_label">Elements path</span><span id="cke_79_path" class="cke_path" role="group" aria-labelledby="cke_79_path_label"><span class="cke_path_empty">&nbsp;</span></span></span></div></div>
                        </div>
                    </div>
                    <div class="modal-footer">
                        <div class="clearfix">
                            <div class="pull-right">
                                <a id="btnPostDiscussion" class="btn discussion-submit">Submit</a>
                                <input type="hidden" id="ctoken" value="2c16e275f113369df6b9778057b1a13acad62106d69e61e4ae65089e0fb4f521">
                            </div>
                        </div>
                    </div>
                </div>
            </div>
        </div>
        <div class="modal fade" id="premium-modal" tabindex="-1" role="dialog" aria-hidden="true" aria-labelledby="premium-modal">
            <div class="modal-dialog">
                <div class="modal-content" style="border-radius:0px">
                    <div class="modal-body">
                        <button type="button" class="close" data-dismiss="modal" style="padding: 0 5px;position: absolute;right: 1.5rem"><span aria-hidden="true">Ã</span><span class="sr-only">Close</span></button>
                        <img class="img-responsive" src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/doubt-non-premium-1600415643.png">
                        <a href="https://premium.geeksforgeeks.org/premium-plans/" class="btn premium-plans">View Premium Plans</a>
                    </div>
                </div>
            </div>
        </div>
        <div id="new-doubts-added" align="center" style="margin-top:1em;display:none;color:red;font-weight:bold;">New threads have added, <a href="javascript:void(0)" onclick="fetchDiscussionHtml()" style="color:green;">Click here to load new threads...</a></div>
        <div id="discussion-feed">
                <div class="discussion-post" discussion="16879" reply="4" data-slug="heap-with-approach-1628941899" item-id="701966" author-room="2908155_doubt">
        <div class="discussion-header">
            <img src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/aro8akosyll0p2bkladi" class="discussion-profile  img-responsive">
            <div class="discussion-info">
                <div class="discussion-title openComment"><span class="cmt-title">Heap with approach</span><span class="entitle-pickup" style="font-size:12px;"></span></div>
                <div class="discussion-meta " itype="problems">
                    <span>Author: <a href="https://auth.geeksforgeeks.org/user/geetuthakran" target="_blank">geetuthakran</a></span>
                    <span><img src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/doubt-clock-1600253506.svg" class="img-responsive"> 4 months ago</span>
                    <span><img src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/doubt-views-1600253662.svg" class="img-responsive"> 137</span>
                    <span><img src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/doubt-replies-1600253734.svg" class="img-responsive"> 4</span>
                    <span>Last Activity: Aug 14, 2021 18:41:56</span>
                    
                    
                </div>
            </div>
        </div>
    </div>
        </div>
        <div class="row text-center"></div>
    <section>
        </section></section></div>
                </div>

                <!-- add this button if full access is true to enable the chat button
                 <button class="btn chat_button">
                    <img class="live-chat-icon" src="https://media.geeksforgeeks.org/img-practice/headphones-1604913204.svg" />
                    <img class="live-chat-close-icon" src="https://media.geeksforgeeks.org/img-practice/cross-1604913181.svg" style="display: none;" />
                </button> -->
            </div>
            <script defer="" type="text/javascript" src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/MathJax.js.download"></script>
            <script defer="" type="text/javascript" src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/bootstrap-ckeditor.js.download"></script>
            <script defer="" src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/ckeditor.js.download"></script>
            <script defer="" src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/jquery.js.download"></script>
            <script id="forum-script" type="text/javascript" async="" src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/discussionForum.js.download"></script><script defer="" type="text/javascript" id="forum-embeder" class="async-script-loader">
            (function() {
                var forumDiv = $("#forum-discussion");
                if (forumDiv.size() > 0) {
                    var forumLoaded = false,
                        top = forumDiv.offset().top, // from where to start loading
                        check = function() {
                            if (!forumLoaded) {
                                forumLoaded = true;

                                (function asyncLoad() {
                                    var s = document.createElement('script');
                                    s.id = "forum-script"
                                    s.type = 'text/javascript';
                                    s.async = true;
                                    var theUrl =
                                        'https://cdnpractice.geeksforgeeks.org/js-min/discussionForum.js?v=10.4';
                                    theUrl = theUrl + (theUrl.indexOf("?") >= 0 ? "&" : "?") + 'itemId=' +
                                        '701966'; //unique slug and discussion type
                                    theUrl = theUrl + (theUrl.indexOf("?") >= 0 ? "&" : "?") + 'type=' +
                                        'problems';
                                    theUrl = theUrl + (theUrl.indexOf("?") >= 0 ? "&" : "?") +
                                        'doubtAssistance=' + '0';
                                    theUrl = theUrl + (theUrl.indexOf("?") >= 0 ? "&" : "?") +
                                        'userHasAccessToDoubtAssistance=' +
                                        '0';
                                    s.src = theUrl;
                                    var embedder = document.getElementById('forum-embeder');
                                    embedder.parentNode.insertBefore(s, embedder);
                                })();
                            }
                        };
                    $(document).ready(function() {
                        check();
                    });
                }
            })();
            </script>
        </div>
    </div><div id="outputBlock" style="position: absolute; display: none;">
        <div class="outputBlock-header" style="display: flex;">
            <div class="outputBlock-header-title">
                <h4>Output Window</h4>
            </div>
            <div class="outputBlock-header-icons pull-right" style="display: flex;">
                <a class="output-maximize" href="https://practice.geeksforgeeks.org/problems/print-anagrams-together/1#" style="display:none;"><img src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/maximize-1603058844.svg"></a>
                <a class="output-minimize" href="https://practice.geeksforgeeks.org/problems/print-anagrams-together/1#"><img src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/minimize-1603060113.svg"></a>
                <a class="output-modal-open" href="https://practice.geeksforgeeks.org/problems/print-anagrams-together/1#"><img src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/enter_modal-1603060983.svg"></a>
                <a class="output-modal-close" href="https://practice.geeksforgeeks.org/problems/print-anagrams-together/1#" style="display:none;"><img src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/exit_modal-1603061157.svg"></a>
                <a class="output-close" href="https://practice.geeksforgeeks.org/problems/print-anagrams-together/1#" data-dismiss="modal"><img src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/output_window_close-1603060405.svg"></a>
            </div>
        </div>
        <div class="out" style="height: 50vh; max-height: unset; overflow-y: auto;">
            <pre></pre>
        </div>
    </div>

    

    <div class="modal fade" id="outputModal">
        <div class="modal-dialog ">
            <div class="modal-content outputModal-content" style="max-height:80vh; overflow-y:auto">
        <div class="outputBlock-header" style="display: flex;">
            <div class="outputBlock-header-title">
                <h4>Output Window</h4>
            </div>
            <div class="outputBlock-header-icons pull-right" style="display: flex;">
                <a class="output-maximize" href="https://practice.geeksforgeeks.org/problems/print-anagrams-together/1#" style="display:none;"><img src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/maximize-1603058844.svg"></a>
                <a class="output-minimize" href="https://practice.geeksforgeeks.org/problems/print-anagrams-together/1#"><img src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/minimize-1603060113.svg"></a>
                <a class="output-modal-open" href="https://practice.geeksforgeeks.org/problems/print-anagrams-together/1#"><img src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/enter_modal-1603060983.svg"></a>
                <a class="output-modal-close" href="https://practice.geeksforgeeks.org/problems/print-anagrams-together/1#" style="display:none;"><img src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/exit_modal-1603061157.svg"></a>
                <a class="output-close" href="https://practice.geeksforgeeks.org/problems/print-anagrams-together/1#" data-dismiss="modal"><img src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/output_window_close-1603060405.svg"></a>
            </div>
        </div>
        <div class="out" style="height: 50vh; max-height: unset; overflow-y: auto;">
            <pre></pre>
        </div>
    </div>
        </div>
    </div>

</div>
<script src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/utils.js.download"></script>    </div>
        <div class="slider">
                <img src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/slider-icon-1605160260.svg" style="width: 5px">
        </div><div class="editor-mobile" style="padding: 0px; margin: 0px;">
        
<div class="container-right" style="height: calc(100vh - 60px);">
    <div id="sampleTestCases" style="display:none">5
act god cat dog tac</div>
    <div class="header-editor">
        <div class="left-div">
            <div class="btn-group bootstrap-select"><button type="button" class="btn dropdown-toggle btn-default" data-toggle="dropdown" role="button" data-id="languageDropdown" title="C++ (g++ 5.4)"><span class="filter-option pull-left">C++ (g++ 5.4)</span>&nbsp;<span class="bs-caret"><span class="caret"></span></span></button><div class="dropdown-menu open" role="combobox"><ul class="dropdown-menu inner" role="listbox" aria-expanded="false"><li data-original-index="0" class="selected"><a tabindex="0" class="" data-tokens="null" role="option" aria-disabled="false" aria-selected="true"><span class="text">C++ (g++ 5.4)</span><span class="glyphicon glyphicon-ok check-mark"></span></a></li><li data-original-index="1"><a tabindex="0" class="" data-tokens="null" role="option" aria-disabled="false" aria-selected="false"><span class="text">Java (1.8)</span><span class="glyphicon glyphicon-ok check-mark"></span></a></li><li data-original-index="2"><a tabindex="0" class="" data-tokens="null" role="option" aria-disabled="false" aria-selected="false"><span class="text">Python3</span><span class="glyphicon glyphicon-ok check-mark"></span></a></li><li data-original-index="3"><a tabindex="0" class="" data-tokens="null" role="option" aria-disabled="false" aria-selected="false"><span class="text">Javascript (Node v12.19.0)</span><span class="glyphicon glyphicon-ok check-mark"></span></a></li></ul></div><select id="languageDropdown" class="selectpicker" tabindex="-98">
                                <option value="cpp">C++ (g++ 5.4)</option>
                                <option value="java">Java (1.8)</option>
                                <option value="python3">Python3</option>
                                <option value="javascript">Javascript (Node v12.19.0)</option>
                            </select></div>
        </div>
        <div class="center-div">
            <span>Test against custom input</span>
            <input type="checkbox" id="customInputCheckbox" class="switch-input">
            <label for="customInputCheckbox" class="switch-label"></label>
        </div>
        <div class="center-div-2">
            <a id="last-backup-code" title="Driver code have been updated, therefore code has been reset. Click here to get your last saved code" style="display:none;" href="https://practice.geeksforgeeks.org/problems/print-anagrams-together/1">Last Backup Code
                
        </a></div><a id="last-backup-code" title="Driver code have been updated, therefore code has been reset. Click here to get your last saved code" style="display:none;" href="https://practice.geeksforgeeks.org/problems/print-anagrams-together/1">
        </a><div class="right-div"><a id="last-backup-code" title="Driver code have been updated, therefore code has been reset. Click here to get your last saved code" style="display:none;" href="https://practice.geeksforgeeks.org/problems/print-anagrams-together/1">
            </a><a href="https://practice.geeksforgeeks.org/problems/print-anagrams-together/1#" onclick="copyToClipboard()"><i style="color: black;" class="far fa-clone" title="Copy to Clipboard"></i></a>
            <a id="darkTheme" title="Dark Theme" style="display:none;">
                <img src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/dark-1600972274.svg">
            </a>
            <a id="lightTheme" title="Light Theme" style="">
                <img src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/light-1600972290.svg">
            </a>
                        <a id="resetEditor" title="Reset Code">
                <img src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/reset_code-1600545606.svg">
            </a>
            <a id="zoom" title="Editor FullScreen" href="javascript:void(0)">
                <img src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/full_screen-1600545500.svg">
            </a>
        </div>
    </div>


    <div id="editor" class="editor editor-block ace_editor ace-dracula ace_dark"><textarea class="ace_text-input" wrap="off" autocorrect="off" autocapitalize="off" spellcheck="false" style="opacity: 0; font-size: 1px; height: 1px; width: 1px; top: 266px; left: 134px;"></textarea><div class="ace_gutter" aria-hidden="true" style="left: 0px; width: 51px;"><div class="ace_layer ace_gutter-layer ace_folding-enabled" style="height: 1e+06px; top: 0px; left: 0px; width: 51px;"><div class="ace_gutter-cell " style="height: 19px; top: 0px;">1<span style="display: inline-block; height: 19px;" class="ace_fold-widget ace_start ace_closed"></span></div><div class="ace_gutter-cell " style="height: 19px; top: 19px;">9<span style="display: none;"></span></div><div class="ace_gutter-cell " style="height: 19px; top: 38px;">10<span style="display: none;"></span></div><div class="ace_gutter-cell " style="height: 19px; top: 57px;">11<span style="display: inline-block; height: 19px;" class="ace_fold-widget ace_start ace_open"></span></div><div class="ace_gutter-cell " style="height: 19px; top: 76px;">12<span style="display: none;"></span></div><div class="ace_gutter-cell " style="height: 19px; top: 95px;">13<span style="display: inline-block; height: 19px;" class="ace_fold-widget ace_start ace_open"></span></div><div class="ace_gutter-cell " style="height: 19px; top: 114px;">14<span style="display: none;"></span></div><div class="ace_gutter-cell " style="height: 19px; top: 133px;">15<span style="display: none;"></span></div><div class="ace_gutter-cell " style="height: 19px; top: 152px;">16<span style="display: none;"></span></div><div class="ace_gutter-cell " style="height: 19px; top: 171px;">17<span style="display: inline-block; height: 19px;" class="ace_fold-widget ace_start ace_open"></span></div><div class="ace_gutter-cell " style="height: 19px; top: 190px;">18<span style="display: none;"></span></div><div class="ace_gutter-cell " style="height: 19px; top: 209px;">19<span style="display: none;"></span></div><div class="ace_gutter-cell " style="height: 19px; top: 228px;">20<span style="display: none;"></span></div><div class="ace_gutter-active-line ace_gutter-cell " style="height: 19px; top: 247px;">21<span style="display: none;"></span></div><div class="ace_gutter-cell " style="height: 19px; top: 266px;">22<span style="display: none;"></span></div><div class="ace_gutter-cell " style="height: 19px; top: 285px;">23<span style="display: none;"></span></div><div class="ace_gutter-cell " style="height: 19px; top: 304px;">24<span style="display: none;"></span></div><div class="ace_gutter-cell " style="height: 19px; top: 323px;">25<span style="display: inline-block; height: 19px;" class="ace_fold-widget ace_start ace_open"></span></div><div class="ace_gutter-cell " style="height: 19px; top: 342px;">26<span style="display: none;"></span></div><div class="ace_gutter-cell " style="height: 19px; top: 361px;">27<span style="display: none;"></span></div><div class="ace_gutter-cell " style="height: 19px; top: 380px;">28<span style="display: none;"></span></div><div class="ace_gutter-cell " style="height: 19px; top: 399px;">29<span style="display: none;"></span></div><div class="ace_gutter-cell " style="height: 19px; top: 418px;">30<span style="display: none;"></span></div><div class="ace_gutter-cell " style="height: 19px; top: 437px;">31<span style="display: none;"></span></div></div></div><div class="ace_scroller" style="left: 51px; right: 7px; bottom: 0px;"><div class="ace_content" style="top: 0px; left: 0px; width: 753px; height: 460px;"><div class="ace_layer ace_print-margin-layer"><div class="ace_print-margin" style="left: 708px; visibility: hidden;"></div></div><div class="ace_layer ace_marker-layer"><div class="ace_active-line" style="height: 19px; top: 247px; left: 0px; right: 0px;"></div><div class="ace_selection ace_br1 ace_start" style="height: 19px; right: 0px; top: 0px; left: 4px;"></div><div class="ace_selection ace_br12" style="height: 19px; width: 0px; top: 19px; left: 4px;"></div><div class="ace_bracket ace_start ace_br15" style="height: 19px; width: 8.79688px; top: 171px; left: 74.375px;"></div></div><div class="ace_layer ace_text-layer" style="height: 1e+06px; margin: 0px 4px; top: 0px; left: 0px;"><div class="ace_line" style="height: 19px; top: 0px;"><span class="ace_fold" style="width: 26.3906px;">...</span> <span class="ace_comment">// } Driver Code Ends</span></div><div class="ace_line" style="height: 19px; top: 19px;"><span class="ace_comment">//User function Template for C++</span></div><div class="ace_line" style="height: 19px; top: 38px;"></div><div class="ace_line" style="height: 19px; top: 57px;"><span class="ace_storage ace_type">class</span> <span class="ace_identifier">Solution</span><span class="ace_paren ace_lparen">{</span></div><div class="ace_line" style="height: 19px; top: 76px;">  <span class="ace_storage ace_modifier">public</span><span class="ace_punctuation ace_operator">:</span></div><div class="ace_line" style="height: 19px; top: 95px;">    <span class="ace_identifier">vector</span><span class="ace_keyword ace_operator">&lt;</span><span class="ace_identifier">vector</span><span class="ace_keyword ace_operator">&lt;</span><span class="ace_identifier">string</span><span class="ace_keyword ace_operator">&gt;</span> <span class="ace_keyword ace_operator">&gt;</span> <span class="ace_identifier">Anagrams</span><span class="ace_paren ace_lparen">(</span><span class="ace_identifier">vector</span><span class="ace_keyword ace_operator">&lt;</span><span class="ace_identifier">string</span><span class="ace_keyword ace_operator">&gt;&amp;</span> <span class="ace_identifier">str</span><span class="ace_paren ace_rparen">)</span> <span class="ace_paren ace_lparen">{</span></div><div class="ace_line" style="height: 19px; top: 114px;"><span class="ace_indent-guide">    </span>    <span class="ace_comment">//code here</span></div><div class="ace_line" style="height: 19px; top: 133px;"><span class="ace_indent-guide">    </span>    <span class="ace_identifier">map</span><span class="ace_keyword ace_operator">&lt;</span><span class="ace_identifier">string</span><span class="ace_punctuation ace_operator">,</span> <span class="ace_identifier">vector</span><span class="ace_keyword ace_operator">&lt;</span><span class="ace_identifier">string</span><span class="ace_keyword ace_operator">&gt;&gt;</span> <span class="ace_identifier">mp</span><span class="ace_punctuation ace_operator">;</span></div><div class="ace_line" style="height: 19px; top: 152px;"><span class="ace_indent-guide">    </span>    <span class="ace_keyword ace_control">for</span><span class="ace_paren ace_lparen">(</span><span class="ace_storage ace_type">int</span> <span class="ace_identifier">i</span><span class="ace_keyword ace_operator">=</span><span class="ace_constant ace_numeric">0</span><span class="ace_punctuation ace_operator">;</span><span class="ace_identifier">i</span><span class="ace_keyword ace_operator">&lt;</span><span class="ace_identifier">str</span><span class="ace_punctuation ace_operator">.</span><span class="ace_identifier">size</span><span class="ace_paren ace_lparen">(</span><span class="ace_paren ace_rparen">)</span><span class="ace_punctuation ace_operator">;</span><span class="ace_identifier">i</span><span class="ace_keyword ace_operator">++</span><span class="ace_paren ace_rparen">)</span></div><div class="ace_line" style="height: 19px; top: 171px;"><span class="ace_indent-guide">    </span>    <span class="ace_paren ace_lparen">{</span></div><div class="ace_line" style="height: 19px; top: 190px;"><span class="ace_indent-guide">    </span><span class="ace_indent-guide">    </span>    <span class="ace_identifier">string</span> <span class="ace_identifier">s</span><span class="ace_keyword ace_operator">=</span><span class="ace_identifier">str</span><span class="ace_paren ace_lparen">[</span><span class="ace_identifier">i</span><span class="ace_paren ace_rparen">]</span><span class="ace_punctuation ace_operator">;</span></div><div class="ace_line" style="height: 19px; top: 209px;"><span class="ace_indent-guide">    </span><span class="ace_indent-guide">    </span>    <span class="ace_identifier">sort</span><span class="ace_paren ace_lparen">(</span><span class="ace_identifier">s</span><span class="ace_punctuation ace_operator">.</span><span class="ace_identifier">begin</span><span class="ace_paren ace_lparen">(</span><span class="ace_paren ace_rparen">)</span><span class="ace_punctuation ace_operator">,</span><span class="ace_identifier">s</span><span class="ace_punctuation ace_operator">.</span><span class="ace_identifier">end</span><span class="ace_paren ace_lparen">(</span><span class="ace_paren ace_rparen">))</span><span class="ace_punctuation ace_operator">;</span></div><div class="ace_line" style="height: 19px; top: 228px;"><span class="ace_indent-guide">    </span><span class="ace_indent-guide">    </span>    <span class="ace_identifier">mp</span><span class="ace_paren ace_lparen">[</span><span class="ace_identifier">s</span><span class="ace_paren ace_rparen">]</span><span class="ace_punctuation ace_operator">.</span><span class="ace_identifier">push_back</span><span class="ace_paren ace_lparen">(</span><span class="ace_identifier">str</span><span class="ace_paren ace_lparen">[</span><span class="ace_identifier">i</span><span class="ace_paren ace_rparen">])</span><span class="ace_punctuation ace_operator">;</span></div><div class="ace_line" style="height: 19px; top: 247px;"><span class="ace_indent-guide">    </span>    <span class="ace_paren ace_rparen">}</span></div><div class="ace_line" style="height: 19px; top: 266px;"><span class="ace_indent-guide">    </span>    <span class="ace_identifier">vector</span><span class="ace_keyword ace_operator">&lt;</span><span class="ace_identifier">vector</span><span class="ace_keyword ace_operator">&lt;</span><span class="ace_identifier">string</span><span class="ace_keyword ace_operator">&gt;&gt;</span> <span class="ace_identifier">v</span><span class="ace_paren ace_lparen">(</span><span class="ace_identifier">mp</span><span class="ace_punctuation ace_operator">.</span><span class="ace_identifier">size</span><span class="ace_paren ace_lparen">(</span><span class="ace_paren ace_rparen">))</span><span class="ace_punctuation ace_operator">;</span></div><div class="ace_line" style="height: 19px; top: 285px;"><span class="ace_indent-guide">    </span>    <span class="ace_storage ace_type">int</span> <span class="ace_identifier">i</span><span class="ace_keyword ace_operator">=</span><span class="ace_constant ace_numeric">0</span><span class="ace_punctuation ace_operator">;</span></div><div class="ace_line" style="height: 19px; top: 304px;"><span class="ace_indent-guide">    </span>    <span class="ace_keyword ace_control">for</span><span class="ace_paren ace_lparen">(</span><span class="ace_storage ace_type">auto</span> <span class="ace_identifier">x</span><span class="ace_punctuation ace_operator">:</span><span class="ace_identifier">mp</span><span class="ace_paren ace_rparen">)</span></div><div class="ace_line" style="height: 19px; top: 323px;"><span class="ace_indent-guide">    </span>    <span class="ace_paren ace_lparen">{</span></div><div class="ace_line" style="height: 19px; top: 342px;"><span class="ace_indent-guide">    </span><span class="ace_indent-guide">    </span>    <span class="ace_storage ace_type">auto</span> <span class="ace_identifier">m</span><span class="ace_keyword ace_operator">=</span><span class="ace_identifier">x</span><span class="ace_punctuation ace_operator">.</span><span class="ace_identifier">second</span><span class="ace_punctuation ace_operator">;</span></div><div class="ace_line" style="height: 19px; top: 361px;"><span class="ace_indent-guide">    </span><span class="ace_indent-guide">    </span>    <span class="ace_keyword ace_control">for</span><span class="ace_paren ace_lparen">(</span><span class="ace_storage ace_type">int</span> <span class="ace_identifier">j</span><span class="ace_keyword ace_operator">=</span><span class="ace_constant ace_numeric">0</span><span class="ace_punctuation ace_operator">;</span><span class="ace_identifier">j</span><span class="ace_keyword ace_operator">&lt;</span><span class="ace_identifier">m</span><span class="ace_punctuation ace_operator">.</span><span class="ace_identifier">size</span><span class="ace_paren ace_lparen">(</span><span class="ace_paren ace_rparen">)</span><span class="ace_punctuation ace_operator">;</span><span class="ace_identifier">j</span><span class="ace_keyword ace_operator">++</span><span class="ace_paren ace_rparen">)</span></div><div class="ace_line" style="height: 19px; top: 380px;"><span class="ace_indent-guide">    </span><span class="ace_indent-guide">    </span>    <span class="ace_identifier">v</span><span class="ace_paren ace_lparen">[</span><span class="ace_identifier">i</span><span class="ace_paren ace_rparen">]</span><span class="ace_punctuation ace_operator">.</span><span class="ace_identifier">push_back</span><span class="ace_paren ace_lparen">(</span><span class="ace_identifier">m</span><span class="ace_paren ace_lparen">[</span><span class="ace_identifier">j</span><span class="ace_paren ace_rparen">])</span><span class="ace_punctuation ace_operator">;</span></div><div class="ace_line" style="height: 19px; top: 399px;"><span class="ace_indent-guide">    </span><span class="ace_indent-guide">    </span>    <span class="ace_identifier">i</span><span class="ace_keyword ace_operator">++</span><span class="ace_punctuation ace_operator">;</span></div><div class="ace_line" style="height: 19px; top: 418px;"><span class="ace_indent-guide">    </span>    <span class="ace_paren ace_rparen">}</span></div><div class="ace_line" style="height: 19px; top: 437px;"><span class="ace_indent-guide">    </span>    </div></div><div class="ace_layer ace_marker-layer"></div><div class="ace_layer ace_cursor-layer ace_hidden-cursors"><div class="ace_cursor" style="display: block; top: 247px; left: 83px; width: 9px; height: 19px; animation-duration: 1000ms;"></div></div></div></div><div class="ace_scrollbar ace_scrollbar-v" style="width: 12px; bottom: 0px;"><div class="ace_scrollbar-inner" style="width: 12px; height: 532px;"></div></div><div class="ace_scrollbar ace_scrollbar-h" style="display: none; height: 12px; left: 51px; right: 7px;"><div class="ace_scrollbar-inner" style="height: 12px; width: 753px;"></div></div><div style="height: auto; width: auto; top: 0px; left: 0px; visibility: hidden; position: absolute; white-space: pre; font: inherit; overflow: hidden;"><div style="height: auto; width: auto; top: 0px; left: 0px; visibility: hidden; position: absolute; white-space: pre; font: inherit; overflow: visible;">הההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההה</div><div style="height: auto; width: auto; top: 0px; left: 0px; visibility: hidden; position: absolute; white-space: pre; font-style: inherit; font-variant: inherit; font-stretch: inherit; font-size: inherit; line-height: inherit; font-family: inherit; overflow: visible;">XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX</div></div></div>

    <div class="footer-editor" style="background: rgb(29, 30, 39);">
        <i id="ptoken" style="display:none">f0f3abffea81a4d37f5b0b8775cc30c543b1ac2a6cf4aa875b7224e87df6a427</i>
        <div class="footer-timer" style="display: block;">
            <small>
                <span class="material-icons timer-clock">alarm</span>
                <span>Average Time: </span>
                <span id="avgTime" style="color: rgb(255, 255, 255);">30m</span>
            </small>
            <div class="userTime" style="display: block;">
                <span>Your Time: </span>
                <span id="timeElapsed" style="color: rgb(255, 255, 255);">36m</span>
            </div>
        </div>
        <div class="footer-right">
                        <button id="show-hints" class="btn" title="Hints"><img src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/light-bulb-1596781614.svg"></button>
                        <button id="testRun" class="btn"><img src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/play-1596780125.svg"> Compile &amp; Run</button>
            <button id="run" class="btn"><img src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/check-square-1596781127.svg"> Submit</button>
        </div>
    </div>
</div>

<div class="modal fade" id="customInputTestModal">
    <div class="modal-dialog ">
        <div class="modal-content">
            <div class="modal-header">
                <button type="button" class="close" data-dismiss="modal">×</button>
                <h4 class="modal-title">Enter Custom Input</h4>
            </div>
            <div class="modal-body">
                                <p style="font-weight:bold">Input Format:</p>
                <p></p><p><span style="font-size:18px">The first line contains an integer <strong>N.&nbsp;</strong>The second line contains&nbsp;<strong>N&nbsp;</strong>space separated Strings&nbsp;<strong>words[]</strong></span></p>

<p><span style="font-size:18px"><strong>Example :&nbsp;</strong></span></p>

<pre><span style="font-size:18px">5
act god cat dog tac</span></pre>
<p></p>
                                <span id="custom-input-copy-button" style="pointer-events: none;"><a href="https://practice.geeksforgeeks.org/problems/print-anagrams-together/1#" onclick="$(&quot;#testArea&quot;).select();document.execCommand(&quot;copy&quot;);copiedToClipboardSnackbar();"><i style="color: black; float:right;" class="far fa-clone" title="Copy to Clipboard"></i></a></span><br>
                <textarea id="testArea" rows="4" style="width:100%;max-width:100%" maxlength="100000"></textarea><br>
            </div>
            <div class="modal-footer">
                <button id="customCombinedRun" class="btn"><img src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/play-1596780125.svg">  Compile &amp; Run</button>
            </div>
        </div>
    </div>
</div>

<div class="modal fade" id="hintsModal">
    <div class="modal-dialog ">
        <div class="modal-content" style="max-height:90vh; overflow-y:auto">
            <div class="modal-body hints-modal-body" style="min-height:50vh; overflow-y:auto;">
                <span class="fa fa-spin fa-spinner" style="top: 50%;left: 50%;transform: translate(50%);font-size: 30px;position: relative;"></span>
            </div>
            <div class="modal-footer">
                <button class="btn btn-default" type="button" data-dismiss="modal">Close
            </button></div>
        </div>
    </div>
</div>
<div id="copy-clipboard-div"></div>
<script>
var currentUser = "diyashabose";
var userHasAccessToApplyJob =
    true;

var sampleTestCases = $('#sampleTestCases').text();
var track = '';
var pid = "701966";
var userid = "830784";
var URLHOME = "https://practice.geeksforgeeks.org";
var URLS3 = "https://media.geeksforgeeks.org/";
var practiceApiHost = 'https://practiceapi.geeksforgeeks.org/api/v1/';
var ALLOWED_INPUT_SIZE = 100000;
</script>
<link rel="stylesheet" href="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/pretify.css" type="text/css">

<script src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/ace.js.download" type="text/javascript" charset="utf-8"></script>
<script src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/ext-language_tools.js.download"></script>
<script src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/gfg-problems-right.js.download"></script>


    </div>
    
</div>
</div> <!--eo container-fluid --->




<script src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/gfg-problems.js.download"> </script>

<script src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/bootstrap-select.min.js(1).download"></script>
<script>
    window.urlCdn = "https://cdnpractice.geeksforgeeks.org";
    const videoFeedbackCodes = {"NO_VOTE":0,"LIKE":1,"DISLIKE":2,"ADD_FEEDBACK":3};
</script>
<!-- <script src="https://cdnpractice.geeksforgeeks.org/js-min/editorial.js?v=5.6"> </script> -->

<script src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/video.js.download"></script>
<link href="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/video-js.css" rel="stylesheet">
<script src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/videojs-playbackrate-adjuster.min.js.download"></script>
<script src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/videojs-flash.min.js.download"></script>
<script src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/videojs-contrib-quality-levels.js.download"></script>
<script src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/videojs-hls-quality-selector.min.js.download"></script>
<script src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/videojs.hotkeys.min.js.download"></script>
<script src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/videoPlayer.js.download"></script>

<script>
    var videoToken = 'st=1641313950~exp=1641335550~acl=/*~hmac=46c4f7152e695bed5e111a1d089fbb696f6dcf79d7e3f65defef7116f9451817';
 </script>
<div class="modal fade" id="gfgErrorModal" tabindex="-1" role="dialog" aria-labelledby="gfgErrorModalLabel" aria-hidden="true">
    <div class="vertical-alignment-helper">
        <div class="modal-dialog vertical-align-center">
            <div class="gfgmodal-content modal-content">
                <div class="modal-header">
                    <button type="button" class="close" data-dismiss="modal"><span aria-hidden="true">×</span><span class="sr-only">Close</span>
                    </button>
                     <h4 class="modal-title text-danger" id="gfgErrorModalLabel">Error!</h4>
                </div>
                <div class="modal-body" id="gfgErrorModalBody">...</div>
                <div class="modal-footer">
                    <button type="button" class="btn btn-primary" data-dismiss="modal">Close</button>
                </div>
            </div>
        </div>
    </div>
</div>

    <!--Edit Modal -->
<div class="modal fade" id="editProblemModal">
    <div class="modal-dialog ">
        <div class="modal-content">
            <div class="modal-header">
                <button type="button" class="close" data-dismiss="modal">×</button>
                <h4 class="modal-title">Select Operation Mode</h4>
            </div>
                        <div class="modal-footer">
                            </div>
        </div>
    </div>
</div>

<style>
.report-issue-tabs {
    background-color: #f3f7fd;
}
.report-issue-tabs>li {
    border-bottom: 2px solid transparent;
}
.report-issue-tabs>li>a {
    padding: 10px 5px !important;
    font-weight: unset !important;
}
.report-issue-tabs>li.active {
    border-bottom: 2px solid #2f8d46;
}
.report-issue-tabs>li.active>a {
    font-weight: bolder !important;
}
</style>
<div class="modal fade" id="reportIssue" tabindex="-1" role="dialog">
    <div class="modal-dialog modal-lg" role="document">
        <div class="modal-content">
            <div class="modal-header">
                <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">×</span></button>
                <h4 class="modal-title text-center" id="myModalLabel">Please report if you are facing any issue on this page.<br> 
                    <small style="word-break: break-all">
                        <script>document.write(window.location.href)</script>https://practice.geeksforgeeks.org/problems/print-anagrams-together/1
                    </small>  
                </h4>
            </div>
            <ul class="nav nav-tabs report-issue-tabs" role="tablist">
                <li class="nav-tab-problem active" aria-expanded="false" data-expandable="false" role="tab" data-toggle="tab">
                    <a href="https://practice.geeksforgeeks.org/problems/print-anagrams-together/1#problem" target="_self">Problem</a>
                </li>
                <li class="nav-tab-contest" aria-expanded="false" data-expandable="false" role="tab" data-toggle="tab" style="display:none">
                    <a href="https://practice.geeksforgeeks.org/problems/print-anagrams-together/1#contest" target="_self">Contest</a>
                </li>
            </ul>
            <div class="tab-content">
                <div class="tab-pane fade active in" id="problem">
                    <div class="modal-body">
                        <form class="form-horizontal" role="form">  
                            <div>
                                <span><strong>Examples of Software related issues</strong> <span>: related to Marks, Videos, UI related etc</span>.
                                <br><strong>Examples of Content related issues</strong> <span>: related to Problem Statement, Difficulty, Test Cases, Run Time or Compilation Errors, Wrong Answer etc</span>.<br><br></span>
                            </div>              
                            <div class="form-group">
                                <label class="col-sm-2 control-label" style="text-align:left;" for="inputTestCase">Issue Type:</label>
                                <div class="col-sm-5">
                                    <select class="form-control" id="issueMenu" name="issueMenu">
                                        <option value="" selected="" disabled="">Select Issue Type</option>
                                        <option value="softwareMenu">Software Related Issue</option>
                                        <option value="contentMenu">Content Related Issue</option>
                                        <option value="othersMenu">Others Issue</option>
                                    </select>
                                </div>
                            </div>
                            <div class="form-group subIssueDiv" style="display: none; margin-bottom: 18%;">
                                <label class="col-sm-2 control-label" style="text-align:left;" for="inputTestCase">Issue Sub-Type:</label>
                                <div class="col-sm-5">
                                    <select class="form-control" id="subIssueMenu" name="subIssueMenu">
                                        <option value="" selected="" disabled="">Select Issue Sub-Type</option>
                                        <option value="problemStatement">Suggest Changes in Problem Statement</option>
                                        <option value="problemDifficulty">Suggest An Update in Problem Difficulty</option>
                                        <option value="testcaseIssue">Test Case Related Issue</option>
                                        <option value="compilerIssue">Compiler Related Issue</option>
                                        <option value="missingTestCaseIssue">Suggest Missing Test Case</option>
                                    </select>
                                </div>
                            </div>

                            <div class="form-group report-issue-problem-difficulty" style="display: none">
                                <label class="col-sm-2 control-label" style="text-align:left;" for="inputTestCase">Current Difficulty:</label>
                                <div class="col-sm-4" style="margin-top:5px">
                                    <select name="level" id="current-problem-difficulty" disabled="">
                                                                                    <option value="School">School</option>
                                                                                    <option value="Basic">Basic</option>
                                                                                    <option value="Easy">Easy</option>
                                                                                    <option value="Medium" selected="selected">Medium</option>
                                                                                    <option value="Hard">Hard</option>
                                                                            </select>
                                </div>
                                <label class="col-sm-2 control-label" style="text-align:left;" for="inputTestCase">Suggest An Update in Problem Difficulty:</label>
                                <div class="col-sm-4" style="margin-top:5px">
                                    <select name="level" id="problemLevel">
                                                                                    <option value="School">School</option>
                                                                                    <option value="Basic">Basic</option>
                                                                                    <option value="Easy">Easy</option>
                                                                                    <option value="Medium">Medium</option>
                                                                                    <option value="Hard">Hard</option>
                                                                            </select>
                                </div>
                            </div>
                            <div class="form-group report-issue-problem-statement" style="display: none">
                                <label class="col-sm-2" for="content">Suggest Changes in Problem Statement:</label>
                                <div style="display: none">
                                    <textarea id="initialProblemContent" class="form-control" rows="25" cols="100" name="initialProblemContent" style="visibility: hidden; display: none;">&lt;p&gt;&lt;span style="font-size:18px"&gt;Given an array of strings, return all groups of strings that are anagrams. The groups must be created in order of their appearance in the original array. Look at the sample case for clarification.&lt;/span&gt;&lt;/p&gt;

&lt;p&gt;&lt;br /&gt;
&lt;span style="font-size:18px"&gt;&lt;strong&gt;Example 1:&lt;/strong&gt;&lt;/span&gt;&lt;/p&gt;

&lt;pre&gt;
&lt;span style="font-size:18px"&gt;&lt;strong&gt;Input:
&lt;/strong&gt;N = 5
words[] = {act,god,cat,dog,tac}
&lt;strong&gt;Output: 
&lt;/strong&gt;god dog
act cat tac&lt;strong&gt;
Explanation:
&lt;/strong&gt;There are 2 groups of
anagrams "god", "dog" make group 1.
"act", "cat", "tac" make group 2.&lt;/span&gt;
&lt;/pre&gt;

&lt;p&gt;&lt;span style="font-size:18px"&gt;&lt;strong&gt;Example 2:&lt;/strong&gt;&lt;/span&gt;&lt;/p&gt;

&lt;pre&gt;
&lt;span style="font-size:18px"&gt;&lt;strong&gt;Input:
&lt;/strong&gt;N = 3
words[] = {no,on,is}
&lt;strong&gt;Output: 
&lt;/strong&gt;no on
is&lt;strong&gt;
Explanation:
&lt;/strong&gt;There are 2 groups of
anagrams "no", "on" make group 1.
"is" makes group 2.&nbsp;&lt;/span&gt;&lt;/pre&gt;

&lt;p&gt;&lt;br /&gt;
&lt;span style="font-size:18px"&gt;&lt;strong&gt;Your Task:&lt;/strong&gt;&lt;br /&gt;
The task is to complete the function &lt;strong&gt;Anagrams()&lt;/strong&gt; that takes a list of strings as input and returns a list of groups such that each group consists of all the strings that are anagrams.&lt;/span&gt;&lt;/p&gt;

&lt;p&gt;&lt;br /&gt;
&lt;span style="font-size:18px"&gt;&lt;strong&gt;Expected Time Complexity:&lt;/strong&gt;&nbsp;O(N*|S|*log|S|), where |S| is the length of the strings.&lt;br /&gt;
&lt;strong&gt;Expected Auxiliary Space:&lt;/strong&gt;&nbsp;O(N*|S|), where |S| is the length of the strings.&lt;/span&gt;&lt;/p&gt;

&lt;p&gt;&lt;br /&gt;
&lt;span style="font-size:18px"&gt;&lt;strong&gt;Constraints:&lt;/strong&gt;&lt;br /&gt;
1&lt;=N&lt;=100&lt;/span&gt;&lt;/p&gt;
</textarea><div id="cke_initialProblemContent" class="cke_1 cke cke_reset cke_chrome cke_editor_initialProblemContent cke_ltr cke_browser_webkit" dir="ltr" lang="en-gb" role="application" aria-labelledby="cke_initialProblemContent_arialbl"><span id="cke_initialProblemContent_arialbl" class="cke_voice_label">Rich Text Editor, initialProblemContent</span><div class="cke_inner cke_reset" role="presentation"><span id="cke_1_top" class="cke_top cke_reset_all" role="presentation" style="height: auto; user-select: none;"><span id="cke_16" class="cke_voice_label">Editor toolbars</span><span id="cke_1_toolbox" class="cke_toolbox" role="group" aria-labelledby="cke_16" onmousedown="return false;"><span id="cke_21" class="cke_toolbar cke_toolbar_last" role="toolbar"><span class="cke_toolbar_start"></span><span id="cke_17" class="cke_combo cke_combo__styles cke_combo_off" role="presentation"><span id="cke_17_label" class="cke_combo_label">Styles</span><a class="cke_combo_button" title="Formatting Styles" tabindex="-1" href="javascript:void(&#39;Formatting Styles&#39;)" hidefocus="true" role="button" aria-labelledby="cke_17_label" aria-haspopup="true" onkeydown="return CKEDITOR.tools.callFunction(3,event,this);" onfocus="return CKEDITOR.tools.callFunction(4,event);" onclick="CKEDITOR.tools.callFunction(2,this);return false;"><span id="cke_17_text" class="cke_combo_text cke_combo_inlinelabel">Styles</span><span class="cke_combo_open"><span class="cke_combo_arrow"></span></span></a></span><span id="cke_18" class="cke_combo cke_combo__format cke_combo_off" role="presentation"><span id="cke_18_label" class="cke_combo_label">Format</span><a class="cke_combo_button" title="Paragraph Format" tabindex="-1" href="javascript:void(&#39;Paragraph Format&#39;)" hidefocus="true" role="button" aria-labelledby="cke_18_label" aria-haspopup="true" onkeydown="return CKEDITOR.tools.callFunction(6,event,this);" onfocus="return CKEDITOR.tools.callFunction(7,event);" onclick="CKEDITOR.tools.callFunction(5,this);return false;"><span id="cke_18_text" class="cke_combo_text cke_combo_inlinelabel">Format</span><span class="cke_combo_open"><span class="cke_combo_arrow"></span></span></a></span><span id="cke_19" class="cke_combo cke_combo__font cke_combo_off" role="presentation"><span id="cke_19_label" class="cke_combo_label">Font</span><a class="cke_combo_button" title="Font Name" tabindex="-1" href="javascript:void(&#39;Font Name&#39;)" hidefocus="true" role="button" aria-labelledby="cke_19_label" aria-haspopup="true" onkeydown="return CKEDITOR.tools.callFunction(9,event,this);" onfocus="return CKEDITOR.tools.callFunction(10,event);" onclick="CKEDITOR.tools.callFunction(8,this);return false;"><span id="cke_19_text" class="cke_combo_text cke_combo_inlinelabel">Font</span><span class="cke_combo_open"><span class="cke_combo_arrow"></span></span></a></span><span id="cke_20" class="cke_combo cke_combo__fontsize cke_combo_off" role="presentation"><span id="cke_20_label" class="cke_combo_label">Size</span><a class="cke_combo_button" title="Font Size" tabindex="-1" href="javascript:void(&#39;Font Size&#39;)" hidefocus="true" role="button" aria-labelledby="cke_20_label" aria-haspopup="true" onkeydown="return CKEDITOR.tools.callFunction(12,event,this);" onfocus="return CKEDITOR.tools.callFunction(13,event);" onclick="CKEDITOR.tools.callFunction(11,this);return false;"><span id="cke_20_text" class="cke_combo_text cke_combo_inlinelabel">Size</span><span class="cke_combo_open"><span class="cke_combo_arrow"></span></span></a></span><span class="cke_toolgroup" role="presentation"><a id="cke_22" class="cke_button cke_button__bold cke_button_off" href="javascript:void(&#39;Bold&#39;)" title="Bold (Ctrl+B)" tabindex="-1" hidefocus="true" role="button" aria-labelledby="cke_22_label" aria-describedby="cke_22_description" aria-haspopup="false" onkeydown="return CKEDITOR.tools.callFunction(14,event);" onfocus="return CKEDITOR.tools.callFunction(15,event);" onclick="CKEDITOR.tools.callFunction(16,this);return false;"><span class="cke_button_icon cke_button__bold_icon" style="background-image:url(&#39;https://cdn.ckeditor.com/4.11.1/full-all/plugins/icons.png?t=I63C&#39;);background-position:0 -24px;background-size:auto;">&nbsp;</span><span id="cke_22_label" class="cke_button_label cke_button__bold_label" aria-hidden="false">Bold</span><span id="cke_22_description" class="cke_button_label" aria-hidden="false">Keyboard shortcut Ctrl+B</span></a><a id="cke_23" class="cke_button cke_button__italic cke_button_off" href="javascript:void(&#39;Italic&#39;)" title="Italic (Ctrl+I)" tabindex="-1" hidefocus="true" role="button" aria-labelledby="cke_23_label" aria-describedby="cke_23_description" aria-haspopup="false" onkeydown="return CKEDITOR.tools.callFunction(17,event);" onfocus="return CKEDITOR.tools.callFunction(18,event);" onclick="CKEDITOR.tools.callFunction(19,this);return false;"><span class="cke_button_icon cke_button__italic_icon" style="background-image:url(&#39;https://cdn.ckeditor.com/4.11.1/full-all/plugins/icons.png?t=I63C&#39;);background-position:0 -48px;background-size:auto;">&nbsp;</span><span id="cke_23_label" class="cke_button_label cke_button__italic_label" aria-hidden="false">Italic</span><span id="cke_23_description" class="cke_button_label" aria-hidden="false">Keyboard shortcut Ctrl+I</span></a><a id="cke_24" class="cke_button cke_button__underline cke_button_off" href="javascript:void(&#39;Underline&#39;)" title="Underline (Ctrl+U)" tabindex="-1" hidefocus="true" role="button" aria-labelledby="cke_24_label" aria-describedby="cke_24_description" aria-haspopup="false" onkeydown="return CKEDITOR.tools.callFunction(20,event);" onfocus="return CKEDITOR.tools.callFunction(21,event);" onclick="CKEDITOR.tools.callFunction(22,this);return false;"><span class="cke_button_icon cke_button__underline_icon" style="background-image:url(&#39;https://cdn.ckeditor.com/4.11.1/full-all/plugins/icons.png?t=I63C&#39;);background-position:0 -144px;background-size:auto;">&nbsp;</span><span id="cke_24_label" class="cke_button_label cke_button__underline_label" aria-hidden="false">Underline</span><span id="cke_24_description" class="cke_button_label" aria-hidden="false">Keyboard shortcut Ctrl+U</span></a></span><span class="cke_toolbar_end"></span></span></span></span><div id="cke_1_contents" class="cke_contents cke_reset" role="presentation" style="height: 200px;"><span id="cke_29" class="cke_voice_label">Press ALT 0 for help</span><iframe src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/saved_resource(3).html" frameborder="0" class="cke_wysiwyg_frame cke_reset" title="Rich Text Editor, initialProblemContent" aria-describedby="cke_29" tabindex="0" allowtransparency="true" style="width: 100%; height: 100%;"></iframe></div><span id="cke_1_bottom" class="cke_bottom cke_reset_all" role="presentation" style="user-select: none;"><span id="cke_1_resizer" class="cke_resizer cke_resizer_vertical cke_resizer_ltr" title="Drag to resize" onmousedown="CKEDITOR.tools.callFunction(0, event)">◢</span><span id="cke_1_path_label" class="cke_voice_label">Elements path</span><span id="cke_1_path" class="cke_path" role="group" aria-labelledby="cke_1_path_label"><span class="cke_path_empty">&nbsp;</span></span></span></div></div>
                                    <script src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/ckeditor.js(1).download" onload="CKEDITOR.replace(&#39;initialProblemContent&#39;); CKEDITOR.config.toolbar = [[&#39;Styles&#39;,&#39;Format&#39;,&#39;Font&#39;,&#39;FontSize&#39;, &#39;Bold&#39;,&#39;Italic&#39;,&#39;Underline&#39;,&#39;StrikeThrough&#39;]];"></script>
                                </div>
                                <div class="col-sm-10">
                                    <textarea id="problemContent" class="form-control" rows="25" cols="100" name="problemContent" style="visibility: hidden; display: none;">&lt;p&gt;&lt;span style="font-size:18px"&gt;Given an array of strings, return all groups of strings that are anagrams. The groups must be created in order of their appearance in the original array. Look at the sample case for clarification.&lt;/span&gt;&lt;/p&gt;

&lt;p&gt;&lt;br /&gt;
&lt;span style="font-size:18px"&gt;&lt;strong&gt;Example 1:&lt;/strong&gt;&lt;/span&gt;&lt;/p&gt;

&lt;pre&gt;
&lt;span style="font-size:18px"&gt;&lt;strong&gt;Input:
&lt;/strong&gt;N = 5
words[] = {act,god,cat,dog,tac}
&lt;strong&gt;Output: 
&lt;/strong&gt;god dog
act cat tac&lt;strong&gt;
Explanation:
&lt;/strong&gt;There are 2 groups of
anagrams "god", "dog" make group 1.
"act", "cat", "tac" make group 2.&lt;/span&gt;
&lt;/pre&gt;

&lt;p&gt;&lt;span style="font-size:18px"&gt;&lt;strong&gt;Example 2:&lt;/strong&gt;&lt;/span&gt;&lt;/p&gt;

&lt;pre&gt;
&lt;span style="font-size:18px"&gt;&lt;strong&gt;Input:
&lt;/strong&gt;N = 3
words[] = {no,on,is}
&lt;strong&gt;Output: 
&lt;/strong&gt;no on
is&lt;strong&gt;
Explanation:
&lt;/strong&gt;There are 2 groups of
anagrams "no", "on" make group 1.
"is" makes group 2.&nbsp;&lt;/span&gt;&lt;/pre&gt;

&lt;p&gt;&lt;br /&gt;
&lt;span style="font-size:18px"&gt;&lt;strong&gt;Your Task:&lt;/strong&gt;&lt;br /&gt;
The task is to complete the function &lt;strong&gt;Anagrams()&lt;/strong&gt; that takes a list of strings as input and returns a list of groups such that each group consists of all the strings that are anagrams.&lt;/span&gt;&lt;/p&gt;

&lt;p&gt;&lt;br /&gt;
&lt;span style="font-size:18px"&gt;&lt;strong&gt;Expected Time Complexity:&lt;/strong&gt;&nbsp;O(N*|S|*log|S|), where |S| is the length of the strings.&lt;br /&gt;
&lt;strong&gt;Expected Auxiliary Space:&lt;/strong&gt;&nbsp;O(N*|S|), where |S| is the length of the strings.&lt;/span&gt;&lt;/p&gt;

&lt;p&gt;&lt;br /&gt;
&lt;span style="font-size:18px"&gt;&lt;strong&gt;Constraints:&lt;/strong&gt;&lt;br /&gt;
1&lt;=N&lt;=100&lt;/span&gt;&lt;/p&gt;
</textarea><div id="cke_problemContent" class="cke_2 cke cke_reset cke_chrome cke_editor_problemContent cke_ltr cke_browser_webkit" dir="ltr" lang="en-gb" role="application" aria-labelledby="cke_problemContent_arialbl"><span id="cke_problemContent_arialbl" class="cke_voice_label">Rich Text Editor, problemContent</span><div class="cke_inner cke_reset" role="presentation"><span id="cke_2_top" class="cke_top cke_reset_all" role="presentation" style="height: auto; user-select: none;"><span id="cke_41" class="cke_voice_label">Editor toolbars</span><span id="cke_2_toolbox" class="cke_toolbox" role="group" aria-labelledby="cke_41" onmousedown="return false;"><span id="cke_46" class="cke_toolbar cke_toolbar_last" role="toolbar"><span class="cke_toolbar_start"></span><span id="cke_42" class="cke_combo cke_combo__styles cke_combo_off" role="presentation"><span id="cke_42_label" class="cke_combo_label">Styles</span><a class="cke_combo_button" title="Formatting Styles" tabindex="-1" href="javascript:void(&#39;Formatting Styles&#39;)" hidefocus="true" role="button" aria-labelledby="cke_42_label" aria-haspopup="true" onkeydown="return CKEDITOR.tools.callFunction(29,event,this);" onfocus="return CKEDITOR.tools.callFunction(30,event);" onclick="CKEDITOR.tools.callFunction(28,this);return false;"><span id="cke_42_text" class="cke_combo_text cke_combo_inlinelabel">Styles</span><span class="cke_combo_open"><span class="cke_combo_arrow"></span></span></a></span><span id="cke_43" class="cke_combo cke_combo__format cke_combo_off" role="presentation"><span id="cke_43_label" class="cke_combo_label">Format</span><a class="cke_combo_button" title="Paragraph Format" tabindex="-1" href="javascript:void(&#39;Paragraph Format&#39;)" hidefocus="true" role="button" aria-labelledby="cke_43_label" aria-haspopup="true" onkeydown="return CKEDITOR.tools.callFunction(32,event,this);" onfocus="return CKEDITOR.tools.callFunction(33,event);" onclick="CKEDITOR.tools.callFunction(31,this);return false;"><span id="cke_43_text" class="cke_combo_text cke_combo_inlinelabel">Format</span><span class="cke_combo_open"><span class="cke_combo_arrow"></span></span></a></span><span id="cke_44" class="cke_combo cke_combo__font cke_combo_off" role="presentation"><span id="cke_44_label" class="cke_combo_label">Font</span><a class="cke_combo_button" title="Font Name" tabindex="-1" href="javascript:void(&#39;Font Name&#39;)" hidefocus="true" role="button" aria-labelledby="cke_44_label" aria-haspopup="true" onkeydown="return CKEDITOR.tools.callFunction(35,event,this);" onfocus="return CKEDITOR.tools.callFunction(36,event);" onclick="CKEDITOR.tools.callFunction(34,this);return false;"><span id="cke_44_text" class="cke_combo_text cke_combo_inlinelabel">Font</span><span class="cke_combo_open"><span class="cke_combo_arrow"></span></span></a></span><span id="cke_45" class="cke_combo cke_combo__fontsize cke_combo_off" role="presentation"><span id="cke_45_label" class="cke_combo_label">Size</span><a class="cke_combo_button" title="Font Size" tabindex="-1" href="javascript:void(&#39;Font Size&#39;)" hidefocus="true" role="button" aria-labelledby="cke_45_label" aria-haspopup="true" onkeydown="return CKEDITOR.tools.callFunction(38,event,this);" onfocus="return CKEDITOR.tools.callFunction(39,event);" onclick="CKEDITOR.tools.callFunction(37,this);return false;"><span id="cke_45_text" class="cke_combo_text cke_combo_inlinelabel">Size</span><span class="cke_combo_open"><span class="cke_combo_arrow"></span></span></a></span><span class="cke_toolgroup" role="presentation"><a id="cke_47" class="cke_button cke_button__bold cke_button_off" href="javascript:void(&#39;Bold&#39;)" title="Bold (Ctrl+B)" tabindex="-1" hidefocus="true" role="button" aria-labelledby="cke_47_label" aria-describedby="cke_47_description" aria-haspopup="false" onkeydown="return CKEDITOR.tools.callFunction(40,event);" onfocus="return CKEDITOR.tools.callFunction(41,event);" onclick="CKEDITOR.tools.callFunction(42,this);return false;"><span class="cke_button_icon cke_button__bold_icon" style="background-image:url(&#39;https://cdn.ckeditor.com/4.11.1/full-all/plugins/icons.png?t=I63C&#39;);background-position:0 -24px;background-size:auto;">&nbsp;</span><span id="cke_47_label" class="cke_button_label cke_button__bold_label" aria-hidden="false">Bold</span><span id="cke_47_description" class="cke_button_label" aria-hidden="false">Keyboard shortcut Ctrl+B</span></a><a id="cke_48" class="cke_button cke_button__italic cke_button_off" href="javascript:void(&#39;Italic&#39;)" title="Italic (Ctrl+I)" tabindex="-1" hidefocus="true" role="button" aria-labelledby="cke_48_label" aria-describedby="cke_48_description" aria-haspopup="false" onkeydown="return CKEDITOR.tools.callFunction(43,event);" onfocus="return CKEDITOR.tools.callFunction(44,event);" onclick="CKEDITOR.tools.callFunction(45,this);return false;"><span class="cke_button_icon cke_button__italic_icon" style="background-image:url(&#39;https://cdn.ckeditor.com/4.11.1/full-all/plugins/icons.png?t=I63C&#39;);background-position:0 -48px;background-size:auto;">&nbsp;</span><span id="cke_48_label" class="cke_button_label cke_button__italic_label" aria-hidden="false">Italic</span><span id="cke_48_description" class="cke_button_label" aria-hidden="false">Keyboard shortcut Ctrl+I</span></a><a id="cke_49" class="cke_button cke_button__underline cke_button_off" href="javascript:void(&#39;Underline&#39;)" title="Underline (Ctrl+U)" tabindex="-1" hidefocus="true" role="button" aria-labelledby="cke_49_label" aria-describedby="cke_49_description" aria-haspopup="false" onkeydown="return CKEDITOR.tools.callFunction(46,event);" onfocus="return CKEDITOR.tools.callFunction(47,event);" onclick="CKEDITOR.tools.callFunction(48,this);return false;"><span class="cke_button_icon cke_button__underline_icon" style="background-image:url(&#39;https://cdn.ckeditor.com/4.11.1/full-all/plugins/icons.png?t=I63C&#39;);background-position:0 -144px;background-size:auto;">&nbsp;</span><span id="cke_49_label" class="cke_button_label cke_button__underline_label" aria-hidden="false">Underline</span><span id="cke_49_description" class="cke_button_label" aria-hidden="false">Keyboard shortcut Ctrl+U</span></a></span><span class="cke_toolbar_end"></span></span></span></span><div id="cke_2_contents" class="cke_contents cke_reset" role="presentation" style="height: 200px;"><span id="cke_53" class="cke_voice_label">Press ALT 0 for help</span><iframe src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/saved_resource(4).html" frameborder="0" class="cke_wysiwyg_frame cke_reset" title="Rich Text Editor, problemContent" aria-describedby="cke_53" tabindex="0" allowtransparency="true" style="width: 100%; height: 100%;"></iframe></div><span id="cke_2_bottom" class="cke_bottom cke_reset_all" role="presentation" style="user-select: none;"><span id="cke_2_resizer" class="cke_resizer cke_resizer_vertical cke_resizer_ltr" title="Drag to resize" onmousedown="CKEDITOR.tools.callFunction(26, event)">◢</span><span id="cke_2_path_label" class="cke_voice_label">Elements path</span><span id="cke_2_path" class="cke_path" role="group" aria-labelledby="cke_2_path_label"><span class="cke_path_empty">&nbsp;</span></span></span></div></div>
                                    <script src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/ckeditor.js(1).download" onload="CKEDITOR.replace(&#39;problemContent&#39;); CKEDITOR.config.toolbar = [[&#39;Styles&#39;,&#39;Format&#39;,&#39;Font&#39;,&#39;FontSize&#39;, &#39;Bold&#39;,&#39;Italic&#39;,&#39;Underline&#39;,&#39;StrikeThrough&#39;]];"></script>
                                </div>
                            </div>
                            <div class="form-group describe-issue" style="display: none">
                                <label class="col-sm-1 control-label" style="text-align:left;" for="inputTestCase">Describe Your Issue:</label>
                                <div class="col-sm-10">
                                    <textarea id="reportIssueDescription" class="form-control" rows="7" cols="100" name="issueDescription" style="max-width: 100%;min-width: 100%;"></textarea>
                                </div>
                            </div>
                            <div class="form-group attachment" style="display: none">
                                <label class="col-sm-1 control-label" style="text-align:left;" for="inputTestCase">Attach Screenshot:</label>
                                <div class="col-sm-10">
                                    <input type="file" accept="image/x-png,image/jpeg" name="reportIssueImage" class="reportIssueAttach">
                                </div>
                            </div>
                        </form>
                    </div>
                    <div class="modal-footer">
                        <button type="button" class="btn btn-warning" data-dismiss="modal" id="reportIssueEmail" style="float:right;margin-left:5px;border-radius:0.3rem;">Send</button>
                        <button type="button" class="btn btn-default" data-dismiss="modal" style="float:right; border-radius:0.3rem;">Close</button>
                    </div>
                </div>
            </div>
            
        </div>
    </div>
</div>
<script>
$("#issueMenu").change(function() {
    var id = $(this).val();
    if (id == "contentMenu") {
        $('.subIssueDiv').show();
        $(".describe-issue").hide();
        $('.attachment').hide();
        $('.subIssueDiv').css('margin-bottom', '18%');
    } 
    else if(id == "softwareMenu" || id == "othersMenu") {
        $(".describe-issue").show();
        $('.attachment').show();
        $('.subIssueDiv').hide();
    }
    else if(id == "") {
        $(".describe-issue").hide();
        $('.attachment').hide();
    }
    if($(".subIssueDiv").css("display") === "none") {
        $('.report-issue-problem-statement').hide();
        $('.report-issue-problem-difficulty').hide();
        $('#subIssueMenu').prop('selectedIndex',0);
    }
});
$("#subIssueMenu").change(function() {
    var id = $(this).val();
    if(id == "problemStatement") {
        $('.report-issue-problem-statement').show();
        $(".describe-issue").show();
        $('.attachment').show();
        $('.report-issue-problem-difficulty').hide();
    }
    else if(id == "problemDifficulty") {
        $('.report-issue-problem-difficulty').show();
        $(".describe-issue").show();
        $('.attachment').show();
        $('.report-issue-problem-statement').hide();
    }
    else if(id == "testcaseIssue" || id == "compilerIssue" || id == "missingTestCaseIssue") {
        $(".describe-issue").show();
        $('.attachment').show();
        $('.report-issue-problem-difficulty').hide();
        $('.report-issue-problem-statement').hide();
    }
    if(id != "") {
        $('.subIssueDiv').css('margin-bottom', '2%');
    }
});
$("#reportIssueEmail").click(function(event){
    var thisBtn = $(this);
    var suggestedChanges = "";
    var issueDescription = "";
    var formData = new FormData();  
    if($("#issueMenu").val()=="softwareMenu" || $("#issueMenu").val()=="othersMenu") {
        var description = $.trim($("#reportIssueDescription").val());
        if(description == "") {
            alert("Please describe your issue.");
            return false;
        }
        issueDescription = description;
        $("#issueMenu").val()=="softwareMenu"?formData.append( 'issueType','Software Related Issue'):formData.append( 'issueType','Others Issue');
    } else if($("#issueMenu").val()=="contentMenu") {
        if($("#subIssueMenu").val() == null) {
            alert("Please select sub-issue type.");
            return false;
        } else {
            if($("#subIssueMenu").val() == "problemStatement") {
                var initial_problem_statement = CKEDITOR.instances['initialProblemContent'].getData();
                var suggested_problem_statement = CKEDITOR.instances['problemContent'].getData();
                if(suggested_problem_statement == "") {
                    alert("Problem statement cannot be empty.");
                    return false;
                }
                if(initial_problem_statement != suggested_problem_statement) {
                    suggestedChanges = 'suggestedProblemStatement: ' + suggested_problem_statement;
                }
                else {
                    suggestedChanges = 'suggestedProblemStatement: No changes';
                }
                formData.append( 'issueSubType','Suggest Changes in Problem Statement');
            }
            else if($("#subIssueMenu").val() == "problemDifficulty") {
                suggestedChanges = 'suggestedProblemDifficulty: ' + $("#problemLevel").val();
                formData.append( 'issueSubType','Suggest An Update in Problem Difficulty');
            }
            else if($("#subIssueMenu").val() == "testcaseIssue") {
                formData.append( 'issueSubType','Test Case Related Issue');
            }
            else if($("#subIssueMenu").val() == "compilerIssue") {
                formData.append( 'issueSubType','Compiler Related Issue');
            }
            else if($("#subIssueMenu").val() == "missingTestCaseIssue") {
                formData.append( 'issueSubType','Suggest Missing Test Case');
            }
            else if($("#subIssueMenu").val() == "") {
                alert("Please select type of your sub issue type");
                return false;
            }
            var description = $.trim($("#reportIssueDescription").val());
            if(description == "" && ($("#subIssueMenu").val()=="testcaseIssue" || $("#subIssueMenu").val()=="compilerIssue" || $("#subIssueMenu").val()=="missingTestCaseIssue")) {
                alert("Please describe your issue.");
                return false;
            }
            if(description!="") {
                issueDescription = description;
            }
        }
        formData.append( 'issueType','Content Related Issue');
    } else if($("#issueMenu").val()==null) {
        alert("Please select type of your issue.");
        return false;
    } 
    var extraInfo = false;
    if($("#reportIssueEmail[data-extraInfo]").length) {
       extraInfo = $("#reportIssueEmail").attr("data-extraInfo");
    } 
    formData.append( 'inputFiles', $('.reportIssueAttach[type=file]')[0].files[0] );
    formData.append( 'requestType','reportAnIssue');
    formData.append( 'suggestedChanges',suggestedChanges);
    formData.append( 'issueDescription',issueDescription);
    formData.append( 'requestUrl',window.location.href);
    formData.append( 'pageTitle',$('title:first').text());
    formData.append( 'utoken',$('#reportIssueBtn').attr('utoken'));
    formData.append( 'extraInfo',extraInfo);
    formData.append( 'browserDetails',getUserBrowserDetails()['allDetails']);
    var inputFiles = $('.reportIssueAttach[type=file]')[0].files[0];
    $.ajax({
        type:"POST",
        url:"/ajax/testCasesMail.php",
        processData: false,
        contentType: false,
        data : formData,
        success:function(data){
             $('#commentModal .modal-body p').html( data );
             if(data.length >3){
                $('#commentModal').modal('show');
             }
        }
    });
  });
</script><div class="modal fade" id="editorialVideo" tabindex="-1" role="dialog">
    <div class="modal-dialog modal-lg" role="document">
        <div class="modal-content">
            <div class="modal-body" style="height:auto; overflow:auto; max-width:100%">
                <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">×</span></button>
                <div class="player-container" id="course-video-container">
                    <video oncontextmenu="return false;" id="videoModal" class="video-js" controls="" autoplay=""> </video>
                </div>
            </div>
        </div>
    </div>
</div>


  <div id="gfg-snackbar" style="z-index:10000"></div>
<div id="fb-root" class=" fb_reset"><div style="position: absolute; top: -10000px; width: 0px; height: 0px;"><div></div></div></div><script src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/adsct" type="text/javascript"></script><iframe name="_hjRemoteVarsFrame" title="_hjRemoteVarsFrame" id="_hjRemoteVarsFrame" src="./Print Anagrams Together _ Practice _ GeeksforGeeks_files/box-a1ae2079824d1c48aa9ce06efb256f18.html" style="display: none !important; width: 1px !important; height: 1px !important; opacity: 0 !important; pointer-events: none !important;"></iframe><div class="cke_screen_reader_only cke_copyformatting_notification"><div aria-live="polite"></div></div><ul class="cke_autocomplete_panel" style="z-index: 9997;"></ul><script type="text/html" id="banner_tpl_editor"><div id="wsc_img_banner"><a target="_blank" style="background-image:url(https://svc.webspellchecker.net/spellcheck31/wscbundle/css/banner.png)" class="wsc_banner-image-link" href="https://webspellchecker.com/wsc-scayt-ckeditor4/"></a></div></script></body><grammarly-desktop-integration data-grammarly-shadow-root="true"></grammarly-desktop-integration></html>