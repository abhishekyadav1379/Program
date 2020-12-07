var text = " My name is abhishek. I live in pukhrayan. How are you? My school name is AKG."
var str = "";
lines = text.split(".");
for (i = 0; i < lines.length; i++) {
    str = str + (i + 1) + "." + lines[i] + "." + "\n\n";
}
console.log(str);
console.log(4545);