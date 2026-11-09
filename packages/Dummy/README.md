Found 0 Error(s) and 0 Warning(s).
Creating pack archive: ../Packs/GSI.Dummy.1.0.0.pack
Pack successfully created: ../Packs/GSI.Dummy.1.0.0.pack
Build complete: Dim  8 nov 2026 00:39:46 CET
sgabre@mac Dummy % ls                                      
GSI.Dummy.pdsc	config		docgen.sh	docs		include		pack.json	packgen.sh	source		templates
sgabre@mac Dummy % cd ..
sgabre@mac packages % cd pack.sh 
cd: not a directory: pack.sh
sgabre@mac packages % cd packs   
sgabre@mac packs % ls
GSI.Dummy.1.0.0.pack
sgabre@mac packs % cpackget add GSI.Dummy.1.0.0.pack       
I: Adding pack "GSI.Dummy.1.0.0.pack"
E: embedded license not found
sgabre@mac packs % cpackget --list
E: unknown flag: --list
sgabre@mac packs % cpackget list
I: Listing installed packs
I: ARM::CMSIS-Compiler@2.3.0
I: ARM::CMSIS@6.4.0
I: ARM::Cortex_DFP@1.2.0
I: Keil::STM32F4xx_DFP@3.1.1
I: SEGGER::RTT@8.58.0
I: SiliconLabs::GeckoPlatform_EFR32MG24_DFP@2025.12.1
sgabre@mac packs % cpackget add --agree-embedded-license ./GSI.Dummy.1.0.0.pack
I: Adding pack "./GSI.Dummy.1.0.0.pack"
Agreed to embedded license: /Users/sgabre/packs/GSI/Dummy/1.0.0/docs/LICENSE.txt
I: Extracting files to /Users/sgabre/packs/GSI/Dummy/1.0.0...
I: 100% |██████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████| (14/14, 3719 it/s)        
sgabre@mac packs % cpackget list                                               
I: Listing installed packs
I: ARM::CMSIS-Compiler@2.3.0
I: ARM::CMSIS@6.4.0
I: ARM::Cortex_DFP@1.2.0
I: GSI::Dummy@1.0.0
I: Keil::STM32F4xx_DFP@3.1.1
I: SEGGER::RTT@8.58.0
I: SiliconLabs::GeckoPlatform_EFR32MG24_DFP@2025.12.1
sgabre@mac packs % 



- pack: GSI::Dummy@1.0.0