# Integer_to_Roman

将阿拉伯数字转为罗马数字。

思路：罗马数字的字母只有1/5两种形式。只有4/9的表达不同。
     将每个表达1的字母（1，10，100，1000）其表达的1-9放在vector中。
     将给定的数字先除以1000，取到千位，再模除1000，取后面的百十个位……