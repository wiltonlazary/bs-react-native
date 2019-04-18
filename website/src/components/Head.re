[@react.component]
let make = () =>
  <BsReactHelmet>
    <meta charSet="utf-8" />
    <meta name="viewport" content="width=device-width, initial-scale=1" />
    <link
      rel="apple-touch-icon"
      sizes="180x180"
      href="/bs-react-native/apple-touch-icon.png"
    />
    <link
      rel="icon"
      type_="image/png"
      sizes="32x32"
      href="/bs-react-native/favicon-32x32.png"
    />
    <link
      rel="icon"
      type_="image/png"
      sizes="16x16"
      href="/bs-react-native/favicon-16x16.png"
    />
    <link rel="manifest" href="/bs-react-native/site.webmanifest" />
    {ReactDOMRe.createElementVariadic(
       "link",
       ~props=
         ReactDOMRe.objToDOMProps({
           "rel": "mask-icon",
           "href": "/bs-react-native/safari-pinned-tab.svg",
           "color": "#222222",
         }),
       [||],
     )}
    <link rel="shortcut icon" href="/bs-react-native/favicon.ico" />
    <meta name="msapplication-TileColor" content="#222222" />
    <meta
      name="msapplication-config"
      content="/bs-react-native/browserconfig.xml"
    />
    <meta name="theme-color" content="#222222" />
    <link
      rel="stylesheet"
      href="//cdnjs.cloudflare.com/ajax/libs/highlight.js/9.12.0/styles/atom-one-light.min.css"
    />
    <style>
      {|
.hljs {
font-size: 14px;
padding: 20px;
border: 1px solid rgba(0,0,0,0.05);
background: rgba(0,0,0,0.01);
border-radius: 4px;
}

.hljs.javascript {
background-color: rgba(247, 223, 30, .03)
}

table .hljs {
border: none;
background: none
}

.hljs-operator {
color: #a626a4
}

.hljs-character {
color: #50a14f
}

.hljs-module-identifier {
color: #4078f2
}

.hljs-constructor {
color: #e45649
}

.stick { position: -webkit-sticky; position: sticky; }

|}
      ->React.string
    </style>
  </BsReactHelmet>;
