root@tryit-polished:~# date                                                                                                                            
Mon Aug 17 05:49:12 UTC 2020                                                                                                                           
root@tryit-polished:~# cat >demo                                                                                                                       
hello                                                                                                                                                  
world                                                                                                                                                  
saurabh                                                                                                                                                
^Z                                                                                                                                                     
[1]+  Stopped                 cat > demo                                                                                                               
root@tryit-polished:~# ls -l                                                                                                                           
total 4                                                                                                                                                
-rw-r--r-- 1 root root 20 Aug 17 05:49 demo 
1]+  Stopped                 cat > demo                                                                                                               
root@tryit-polished:~# ls -l                                                                                                                           
total 4                                                                                                                                                
-rw-r--r-- 1 root root 20 Aug 17 05:49 demo                                                                                                            
root@tryit-polished:~# mkdir saurabh                                                                                                                   
root@tryit-polished:~# mkdir saurabh                                                                                                                   
mkdir: cannot create directory ‘saurabh’: File exists                                                                                                  
root@tryit-polished:~# rmdir saurabh  