const express = require('express');

const app = express();

var basicAuth = require('express-basic-auth');

app.use((req, res, next) => {

    const auth = {login: 'admin', password: 'admin'}
  
    const b64auth = (req.headers.authorization || '').split(' ')[1] || ''
    const [login, password] = Buffer.from(b64auth, 'base64').toString().split(':')
  
    if (login && password && login === auth.login && password === auth.password) {
      return next()
    }
    res.set('WWW-Authenticate', 'Basic realm="401"') 
    res.status(401).send('401 Not authorized') 
  });

app.get('/protected', function(_, res) {
    res.send('Welcome, authenticated client')
});

app.get('/', function (_, response) {
var arr = ['Ac-cent-tchu-ate the Positive', 'Accidents Will Happen', 'Adeste Fideles', 'Ad-Lib Blues', "An Affair to Remember (Our Love Affair)", "After You've Gone", "Ain't She Sweet", "Ain't Cha Ever Comin' Back?", 'Air For English Horn', 'Alice Blue Gown', 'All Alone', 'All By Myself', 'All I Do Is Dream of You', 'All I Need is the Girl', 'All My Tomorrows', 'All of Me', 'All of You', 
'The Best of Everything', 'The Birth of the Blues', 'Blue Hawaii']
    response.send(arr[Math.floor(Math.random() * arr.length)])
});

app.get('/birth_date', function(_, response) {
    response.send('December 12, 1915') 
});

app.get('/birth_city', function(_, response) {
    response.send('Hoboken, New Jersey')
});

app.get('/wives', function(_, response) {
    response.send('Nancy Barbato, Ava Gardner, Mia Farrow, Barbara Sinatra')
});

app.get('/picture', function(_, response) {
    response.redirect('https://upload.wikimedia.org/wikipedia/commons/a/af/Frank_Sinatra_%2757.jpg')
});

app.get('/public', function(_, response) {
    response.send('Everybody can see this page')
});

app.listen(8080, '0.0.0.0');



