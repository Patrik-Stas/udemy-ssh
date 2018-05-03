--boldon
--right Basic SSH Usage
--boldoff
--color green
--right - Brief overview of SSH -
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
     
- Client - Server architecture
--- 
- Authentication
--- 
- Encrypted communication
--- 
- Pseudo-TeleTerminal allocation
--- 
- Non-interactive command execution
