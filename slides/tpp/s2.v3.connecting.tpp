--boldon
--right Basic SSH Usage
--boldoff
--color green
--right - Connecting to a server -
--color white

---
+---------------------------+                                                      +-----------------------------+
|                           |            +---------------------------+             |                             |
|        Computer A         |            |                           |             |          Computer B         |
|                           |            |  THE DANGEROUS INTERNET   |             |                             |
|                           |            |                           |             |                             |
|          +------------<---------------------------------------------------------->------+------------+         |
|          | SSH Client |   |          Encrypted secure shell connection           | PORT | SSH Server |         |
|          | Program    |   |             -------------------------->              | 22   | program    |         |
|          |            |   |             <--------------------------              |      |            |         |
|          +------------<---------------------------------------------------------->------+------------+         |
|                           |            |                           |             |                             |
|                           |            +---------------------------+             |                             |
+---------------------------+                                                      +-----------------------------+
--- 
- Verify SSH Client Program is available:
--beginoutput
--color green
ssh -V
--color white
--endoutput
---
- Connecting to the server 
--beginoutput
--color green
ssh <user>@<hostname>
ssh <user>@<ip address>
--color white
--endoutput
---
