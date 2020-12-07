var text = `0:21 intro
0:27 yesterday's poll
0:46 today's poll
1:09 samsung galaxy buds pro leaks
1:35 DJI new drones
2:05 til tok 3 minutes videos
2:41 samsung smart ring patent
3:25 yatra AR jio game
3:53 new MacBook in 2021
4:36 moto capri leaks
5:15 Pubg India bad news
6:30 FAUG new record
7:14 senheiser new headphones
8:05 outro`;

// var text = prompt("Enter text here :");
var str = "";
var emoji = ['😊', '😀', '😉', '🙂', '🤗', '🤨', '😮'];
lines = text.split(/\r\n|\r|\n/);
for (i = 0; i < lines.length; i++) {
    var random = Math.floor(Math.random() * emoji.length);
    str = str + "• " + lines[i] + emoji[random] + "\n";
    // str = str.toUpperCase();
}
str = str + "\nPLZZZ 🙏 GIVE ME 1 SUBSCRIBER \n@Abhishek ";
// alert(str);
console.log(str);

// welcome