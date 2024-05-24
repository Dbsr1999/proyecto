/* css/styles.css */
body {
    font-family: Arial, sans-serif;
    margin: 0;
    padding: 0;
}
header, nav, section, article, aside, footer {
    padding: 20px;
    margin: 10px;
}
header, footer {
    background-color: #f8f8f8;
}
nav ul {
    list-style-type: none;
    padding: 0;
}
nav ul li {
    display: inline;
    margin-right: 10px;
}
.flex-container {
    display: flex;
    gap: 20px;
    justify-content: space-between;
}
.flex-container img, .flex-container video {
    max-width: 100%;
    height: auto;
}
.flex-container img {
    max-width: 45%;
}
.flex-container video {
    max-width: 45%;
}
form {
    display: flex;
    flex-direction: column;
}
form input, form textarea, form button {
    margin-bottom: 10px;
}
