var express = require('express');
var app = express();
var fs = require("fs");
var link = "10.0.2.15";
app.use(express.static('public'));
app.get('/land', function (req, res) {
   fs.readFile( "/home/wsn/tinyos-main/apps/MultihopOscilloscope/java/" + "test.txt", 'utf8', function (err, data) {
      console.log( data );
      res.setHeader("Access-Control-Allow-Origin", "http://"+link+":8000");
      res.setHeader('Access-Control-Allow-Methods', 'GET, POST, OPTIONS, PUT, PATCH, DELETE');
      res.setHeader('Access-Control-Allow-Headers', 'X-Requested-With,content-type');
      res.setHeader('Access-Control-Allow-Credentials', true);
      res.end( data );
   });
})
var server = app.listen(8888, function () {
   var host = server.address().address
   var port = server.address().port

   console.log("Example app listening at http://%s:%s", host, port)
})


