// // // console.log("hello world")

// // // console.log("dhruvesh")
// // // console.log("motavarachha surat")
// // // console.log("surat")

// // // var pai=3.14;
// // // var r=10;
// // // console.log(pai*r*r)

// // // var x=10;
// // // var y=15;
// // // add=x+y;
// // // multiply=x*y;
// // // div=x/y;
// // // sub=x-y;
// // // console.log(add)
// // // console.log(multiply)
// // // console.log(div)
// // // console.log(sub)

// // var x=10;
// // var y=15;
// // if(x>y)
// // {
// //     console.log(x) //maximum number
// // }
// // else
// // {
// //     console.log(y)
// // }

// // var x=10;
// // var y=15;
// // if(x<y)
// // {
// //     console.log(x)  //minimum number
// // }
// // else
// // {
// //     console.log(y)
// // }

// // var x=10;
// // var y=15;
// // var z=20;
// // if(x>y && x>z)
// // {
// //     console.log(x) //maximum number
// // }
// // else if(y>x && y>z)
// // {
// //     console.log(y)
// // }
// // else
// // {
// //     console.log(z)
// // }


// var x=10;
// var y=15;
// var z=20;
// if(x<y && x<z)
// {
//     console.log(x) //minimum number
// }
// else if(y<x && y<z)
// {
//     console.log(y)
// }
// else
// {
//     console.log(z)
// }

// let x=addition(10,15)
// function addition(a,b)
// {
//     console.log(a+b)  //addition by using function
// }

// console.log("**********")

// var i=[1,2,3,4,5,6,7,8,9,0]
// console.log(i[0],i[1],i[2])
// console.log(i[3],i[4],i[5])
// console.log(i[7],i[8],i[9])

//swap 
// var a=1;
// var b=2;
// var c=3;

// a=a+b+c;
// b=a-b-c;
// c=a-c-b;
// a=b+c;
// console.log(a,b,c)


// var num=123;
// var a=123%10;
// var b=12%10;
// var c=1%10;

// d=a+b+c;
// console.log(d)

// var number =123;

// var sum=0;
// var pow=number.toString().length;
// while(number>0)
// {
//     var rev =number%10;
// sum=sum+(rev*pow);
// number = (number-(rev))/10
// }
// console.log(sum)


// var i=1;
// {
//     for(i=0;i<=10;i++)
//     if(i%2==0)
//     {
//         console.log(i );
//     }
//     else
//     {
//         console.log();
//     }
//     return 0;
// }

// var i=1;
// {
//     i=0;
//     while(i<=10)
//     {
//         i++;
//     if(i%2==0)
//     {
//         console.log(i );
//     }
//     else
//     {
//         console.log();
//     }
// }
//     return 0;
// }


// const array1 = [1, 5, 3];
// const a = array1.shift();//remve first element
// const b = array1.sort();
// const c = array1.splice(1,0,"apple",3);
// console.log(c);

// const fruits = ["Banana", "Orange", "Apple", "Mango"];
// let a=fruits.splice(2, 2, "Lemon", "Kiwi");
// console.log(fruits)


var a=[1,2,{ab:'k'},4,[{b:'c'},{k:'d'}],'c']
let x;
console.log(a[4][1].k)