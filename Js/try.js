var txt = 9125;
var t1 = new Date().getTime();
for (i = 1; i <= 1000000; i++) {
    console.log(i);
}
var t2 = new Date().getTime();
console.log((t2 - t1) / 1000 + " sec");