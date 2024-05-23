# pclub-DVWA-Solution

This is all the flags I was able to extract-

## pclub{path_trav3rsa1_1s_fun}
Noticed that the images in gallery were giving linux paths as querries, so with hit and trial found the route.txt


## 60:45:bd:af:3f:e5
Via command injection, but initially by reading `/sys/class/net/eth0`.


## pclub{01d_1s_g01d_sql1}
Got this through path traversal with command injection itself.

## pclub{data_1s_3v3ryth1ng}
I found the image in the `kaptaan` folder, then `steghide` gave me some base64 string which was also a caesar cipher.

## pclub{3nv_var1abl3s_fr0m_c0mmand_1nj3ct10n}
I knew servers use the variables from `.env` and so had already tried to get the loaded env variables but did not find anything there. Later I found this in the `.bashrc.save`. Also found in the `bash_history` file lol.


I have included all the files I could retrieve in this repo.

PS: I also got the source code of `app.py` by using-
```
& a='a';b='p';c='p';d='.';e='p';f='y'; less "${a}${b}${c}${d}${e}${f}" &
```

Initiailly I used `dir` instead of `ls`, `less` instead of `cat` and `printf` instead of `echo`, later figured out I could run any command like- `l's' -al` basically had to avoid the blacklisted items

You could have also blacklisted quotes lol.