# Visual Studio  PowerShell Rules
1. **Force One-Liners:** When generating PowerShell commands to be run in the terminal, you MUST format them as a single line using semicolons (`;`).
   - BAD:
     try {
       Get-Date
     } catch {
       Write-Error "Fail"
     }
   - GOOD:
     try { Get-Date } catch { Write-Error "Fail" }