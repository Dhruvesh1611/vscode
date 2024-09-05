const uniqeNumber=new Set();
uniqeNumber.add(1);
uniqeNumber.add(2);
uniqeNumber.add("@");
uniqeNumber.add(1);
uniqeNumber.add(1);
uniqeNumber.add(function name(){});

console.log("Set uniqeNumber",Array.from(uniqeNumber).join(","));