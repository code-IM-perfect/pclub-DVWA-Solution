# pclub-DVWA-Solution

This is all the flags I was able to extract-

## pclub{path_trav3rsa1_1s_fun}


## 60:45:bd:af:3f:e5
Via command injection, but initially by reading 


## pclub{01d_1s_g01d_sql1}
Got this through path traversal with command injection itself.

## pclub{data_1s_3v3ryth1ng}
I found the image in the `kaptaan` folder, then `steghide` gave me some base64 string which was also a caesar cipher.

## pclub{3nv_var1abl3s_fr0m_c0mmand_1nj3ct10n}
I knew servers use the variables from `.env` and so had already tried to get the loaded env variables but did not find anything there. Later I found this in the `.bashrc.save`. Also found in the `bash_history` file lol.