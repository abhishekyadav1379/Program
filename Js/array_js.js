var str = "[PUBG TO AMONG US TO FALL (213,102 - 816,175),Ayush, Bhanu, Bibhas, Garvit, Ishu, Pushkar, Subrat, , You (213,175 - 816,228),7:15 pm (679,252 - 827,270),Phir hum krenge (52,284 - 498,373),7:15 pm (516,314 - 664,373),Bibhas Whatsapp (76,413 - 474,479),Garvit Bhardwaj (97,503 - 444,569),Km se km 10 12 log kr le (97,569 - 619,634),Yess (52,646 - 216,735),7:15 pm (489,676 - 637,735),Garvit Bhardwaj (76,775 - 437,841),Bina un glti ke (52,841 - 440,930),7:16 pm (458,871 - 606,930),Bibhas Whatsapp (76,970 - 474,1036),Garvit Bhardwaj (97,1060 - 444,1126),Phir hum krenge (97,1126 - 443,1191),Yess (52,1203 - 216,1292),7:16 pm (332,1233 - 480,1292),Garvit Bhardwaj (76,1332 - 423,1398),7:16 pm (651,1763 - 799,1819),Bibhas Whatsapp (76,1874 - 474,1940),Mr. Yadav Please Tell Something to your father that why he is so much excites for exams..? (52,1940 - 908,2157),7:16 pm (742,2157 - 890,2216),Type a message (144,2263 - 641,2370),7:16 (69,24 - 160,84),0.22 (783,24 - 832,68),45 (972,44 - 998,64)]";
var arr = [];
var j = 0;
var len = str.length;
for (i = 0; i <= len; i++) {
    if (str[i] == "(") {

        var ext = str.substr(j, i - j);
        var len2 = ext.length;
        for (k = 0; k <= len2; k++) {
            if (ext[k] == ")") {
                arr.push(ext.substr(k + 2, i - j));
            }
        }

        j = i + 1;
    }
}
var arlen = arr.length;
for (j = 0; j < arlen; j++) {   
    console.log(arr[j],"\n");
}
console.log(arr[arr.length - 6],"\n");
