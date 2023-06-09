#define NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,IDN) \
class TRIPLES(CLASSNAME,ID,IDN): CLASSNAME { \
	DOUBLES(PREFIX,hasUnique) = 0; \
	DOUBLES(PREFIX,isUnique) = 1; \
	DOUBLES(PREFIX,baseClass) = QUOTE(CLASSNAME); \
	ace_arsenal_uniqueBase = QUOTE(CLASSNAME); \
	DOUBLES(PREFIX,uniqueId) = IDN; \
	scope = 1; \
	scopeCurator = 0; \
	class Armory { disabled = 1; }; \
	class DOUBLES(PREFIX,notepad) { id = IDN; }; \
}

#define NOTEPAD_ID_LIST(CLASSNAME) \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,1); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,2); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,3); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,4); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,5); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,6); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,7); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,8); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,9); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,10); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,11); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,12); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,13); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,14); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,15); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,16); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,17); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,18); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,19); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,20); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,21); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,22); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,23); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,24); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,25); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,26); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,27); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,28); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,29); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,30); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,31); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,32); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,33); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,34); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,35); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,36); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,37); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,38); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,39); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,40); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,41); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,42); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,43); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,44); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,45); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,46); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,47); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,48); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,49); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,50); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,51); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,52); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,53); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,54); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,55); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,56); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,57); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,58); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,59); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,60); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,61); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,62); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,63); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,64); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,65); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,66); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,67); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,68); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,69); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,70); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,71); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,72); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,73); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,74); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,75); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,76); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,77); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,78); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,79); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,80); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,81); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,82); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,83); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,84); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,85); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,86); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,87); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,88); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,89); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,90); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,91); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,92); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,93); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,94); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,95); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,96); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,97); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,98); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,99); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,100); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,101); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,102); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,103); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,104); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,105); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,106); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,107); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,108); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,109); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,110); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,111); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,112); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,113); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,114); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,115); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,116); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,117); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,118); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,119); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,120); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,121); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,122); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,123); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,124); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,125); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,126); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,127); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,128); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,129); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,130); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,131); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,132); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,133); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,134); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,135); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,136); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,137); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,138); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,139); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,140); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,141); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,142); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,143); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,144); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,145); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,146); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,147); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,148); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,149); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,150); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,151); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,152); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,153); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,154); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,155); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,156); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,157); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,158); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,159); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,160); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,161); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,162); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,163); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,164); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,165); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,166); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,167); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,168); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,169); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,170); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,171); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,172); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,173); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,174); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,175); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,176); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,177); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,178); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,179); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,180); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,181); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,182); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,183); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,184); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,185); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,186); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,187); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,188); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,189); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,190); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,191); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,192); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,193); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,194); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,195); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,196); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,197); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,198); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,199); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,200); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,201); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,202); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,203); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,204); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,205); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,206); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,207); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,208); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,209); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,210); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,211); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,212); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,213); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,214); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,215); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,216); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,217); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,218); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,219); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,220); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,221); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,222); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,223); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,224); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,225); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,226); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,227); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,228); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,229); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,230); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,231); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,232); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,233); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,234); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,235); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,236); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,237); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,238); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,239); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,240); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,241); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,242); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,243); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,244); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,245); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,246); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,247); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,248); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,249); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,250); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,251); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,252); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,253); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,254); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,255); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,256); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,257); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,258); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,259); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,260); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,261); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,262); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,263); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,264); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,265); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,266); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,267); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,268); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,269); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,270); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,271); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,272); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,273); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,274); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,275); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,276); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,277); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,278); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,279); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,280); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,281); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,282); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,283); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,284); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,285); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,286); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,287); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,288); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,289); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,290); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,291); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,292); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,293); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,294); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,295); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,296); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,297); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,298); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,299); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,300); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,301); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,302); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,303); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,304); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,305); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,306); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,307); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,308); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,309); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,310); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,311); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,312); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,313); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,314); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,315); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,316); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,317); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,318); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,319); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,320); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,321); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,322); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,323); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,324); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,325); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,326); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,327); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,328); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,329); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,330); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,331); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,332); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,333); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,334); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,335); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,336); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,337); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,338); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,339); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,340); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,341); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,342); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,343); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,344); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,345); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,346); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,347); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,348); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,349); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,350); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,351); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,352); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,353); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,354); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,355); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,356); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,357); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,358); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,359); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,360); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,361); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,362); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,363); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,364); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,365); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,366); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,367); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,368); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,369); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,370); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,371); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,372); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,373); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,374); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,375); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,376); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,377); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,378); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,379); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,380); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,381); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,382); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,383); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,384); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,385); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,386); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,387); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,388); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,389); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,390); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,391); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,392); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,393); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,394); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,395); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,396); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,397); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,398); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,399); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,400); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,401); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,402); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,403); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,404); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,405); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,406); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,407); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,408); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,409); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,410); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,411); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,412); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,413); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,414); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,415); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,416); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,417); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,418); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,419); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,420); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,421); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,422); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,423); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,424); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,425); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,426); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,427); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,428); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,429); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,430); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,431); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,432); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,433); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,434); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,435); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,436); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,437); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,438); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,439); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,440); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,441); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,442); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,443); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,444); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,445); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,446); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,447); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,448); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,449); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,450); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,451); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,452); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,453); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,454); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,455); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,456); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,457); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,458); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,459); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,460); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,461); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,462); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,463); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,464); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,465); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,466); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,467); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,468); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,469); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,470); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,471); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,472); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,473); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,474); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,475); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,476); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,477); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,478); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,479); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,480); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,481); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,482); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,483); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,484); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,485); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,486); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,487); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,488); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,489); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,490); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,491); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,492); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,493); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,494); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,495); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,496); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,497); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,498); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,499); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,500); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,501); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,502); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,503); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,504); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,505); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,506); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,507); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,508); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,509); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,510); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,511); \
NOTEPAD_ID_UNIQUEENTRY(CLASSNAME,512);

#define NOTEPAD_WEAPON_LIST_STR(CLASSNAME) \
QUOTE(CLASSNAME), \
QUOTE(DOUBLES(CLASSNAME,ID_1)), \
QUOTE(DOUBLES(CLASSNAME,ID_2)), \
QUOTE(DOUBLES(CLASSNAME,ID_3)), \
QUOTE(DOUBLES(CLASSNAME,ID_4)), \
QUOTE(DOUBLES(CLASSNAME,ID_5)), \
QUOTE(DOUBLES(CLASSNAME,ID_6)), \
QUOTE(DOUBLES(CLASSNAME,ID_7)), \
QUOTE(DOUBLES(CLASSNAME,ID_8)), \
QUOTE(DOUBLES(CLASSNAME,ID_9)), \
QUOTE(DOUBLES(CLASSNAME,ID_10)), \
QUOTE(DOUBLES(CLASSNAME,ID_11)), \
QUOTE(DOUBLES(CLASSNAME,ID_12)), \
QUOTE(DOUBLES(CLASSNAME,ID_13)), \
QUOTE(DOUBLES(CLASSNAME,ID_14)), \
QUOTE(DOUBLES(CLASSNAME,ID_15)), \
QUOTE(DOUBLES(CLASSNAME,ID_16)), \
QUOTE(DOUBLES(CLASSNAME,ID_17)), \
QUOTE(DOUBLES(CLASSNAME,ID_18)), \
QUOTE(DOUBLES(CLASSNAME,ID_19)), \
QUOTE(DOUBLES(CLASSNAME,ID_20)), \
QUOTE(DOUBLES(CLASSNAME,ID_21)), \
QUOTE(DOUBLES(CLASSNAME,ID_22)), \
QUOTE(DOUBLES(CLASSNAME,ID_23)), \
QUOTE(DOUBLES(CLASSNAME,ID_24)), \
QUOTE(DOUBLES(CLASSNAME,ID_25)), \
QUOTE(DOUBLES(CLASSNAME,ID_26)), \
QUOTE(DOUBLES(CLASSNAME,ID_27)), \
QUOTE(DOUBLES(CLASSNAME,ID_28)), \
QUOTE(DOUBLES(CLASSNAME,ID_29)), \
QUOTE(DOUBLES(CLASSNAME,ID_30)), \
QUOTE(DOUBLES(CLASSNAME,ID_31)), \
QUOTE(DOUBLES(CLASSNAME,ID_32)), \
QUOTE(DOUBLES(CLASSNAME,ID_33)), \
QUOTE(DOUBLES(CLASSNAME,ID_34)), \
QUOTE(DOUBLES(CLASSNAME,ID_35)), \
QUOTE(DOUBLES(CLASSNAME,ID_36)), \
QUOTE(DOUBLES(CLASSNAME,ID_37)), \
QUOTE(DOUBLES(CLASSNAME,ID_38)), \
QUOTE(DOUBLES(CLASSNAME,ID_39)), \
QUOTE(DOUBLES(CLASSNAME,ID_40)), \
QUOTE(DOUBLES(CLASSNAME,ID_41)), \
QUOTE(DOUBLES(CLASSNAME,ID_42)), \
QUOTE(DOUBLES(CLASSNAME,ID_43)), \
QUOTE(DOUBLES(CLASSNAME,ID_44)), \
QUOTE(DOUBLES(CLASSNAME,ID_45)), \
QUOTE(DOUBLES(CLASSNAME,ID_46)), \
QUOTE(DOUBLES(CLASSNAME,ID_47)), \
QUOTE(DOUBLES(CLASSNAME,ID_48)), \
QUOTE(DOUBLES(CLASSNAME,ID_49)), \
QUOTE(DOUBLES(CLASSNAME,ID_50)), \
QUOTE(DOUBLES(CLASSNAME,ID_51)), \
QUOTE(DOUBLES(CLASSNAME,ID_52)), \
QUOTE(DOUBLES(CLASSNAME,ID_53)), \
QUOTE(DOUBLES(CLASSNAME,ID_54)), \
QUOTE(DOUBLES(CLASSNAME,ID_55)), \
QUOTE(DOUBLES(CLASSNAME,ID_56)), \
QUOTE(DOUBLES(CLASSNAME,ID_57)), \
QUOTE(DOUBLES(CLASSNAME,ID_58)), \
QUOTE(DOUBLES(CLASSNAME,ID_59)), \
QUOTE(DOUBLES(CLASSNAME,ID_60)), \
QUOTE(DOUBLES(CLASSNAME,ID_61)), \
QUOTE(DOUBLES(CLASSNAME,ID_62)), \
QUOTE(DOUBLES(CLASSNAME,ID_63)), \
QUOTE(DOUBLES(CLASSNAME,ID_64)), \
QUOTE(DOUBLES(CLASSNAME,ID_65)), \
QUOTE(DOUBLES(CLASSNAME,ID_66)), \
QUOTE(DOUBLES(CLASSNAME,ID_67)), \
QUOTE(DOUBLES(CLASSNAME,ID_68)), \
QUOTE(DOUBLES(CLASSNAME,ID_69)), \
QUOTE(DOUBLES(CLASSNAME,ID_70)), \
QUOTE(DOUBLES(CLASSNAME,ID_71)), \
QUOTE(DOUBLES(CLASSNAME,ID_72)), \
QUOTE(DOUBLES(CLASSNAME,ID_73)), \
QUOTE(DOUBLES(CLASSNAME,ID_74)), \
QUOTE(DOUBLES(CLASSNAME,ID_75)), \
QUOTE(DOUBLES(CLASSNAME,ID_76)), \
QUOTE(DOUBLES(CLASSNAME,ID_77)), \
QUOTE(DOUBLES(CLASSNAME,ID_78)), \
QUOTE(DOUBLES(CLASSNAME,ID_79)), \
QUOTE(DOUBLES(CLASSNAME,ID_80)), \
QUOTE(DOUBLES(CLASSNAME,ID_81)), \
QUOTE(DOUBLES(CLASSNAME,ID_82)), \
QUOTE(DOUBLES(CLASSNAME,ID_83)), \
QUOTE(DOUBLES(CLASSNAME,ID_84)), \
QUOTE(DOUBLES(CLASSNAME,ID_85)), \
QUOTE(DOUBLES(CLASSNAME,ID_86)), \
QUOTE(DOUBLES(CLASSNAME,ID_87)), \
QUOTE(DOUBLES(CLASSNAME,ID_88)), \
QUOTE(DOUBLES(CLASSNAME,ID_89)), \
QUOTE(DOUBLES(CLASSNAME,ID_90)), \
QUOTE(DOUBLES(CLASSNAME,ID_91)), \
QUOTE(DOUBLES(CLASSNAME,ID_92)), \
QUOTE(DOUBLES(CLASSNAME,ID_93)), \
QUOTE(DOUBLES(CLASSNAME,ID_94)), \
QUOTE(DOUBLES(CLASSNAME,ID_95)), \
QUOTE(DOUBLES(CLASSNAME,ID_96)), \
QUOTE(DOUBLES(CLASSNAME,ID_97)), \
QUOTE(DOUBLES(CLASSNAME,ID_98)), \
QUOTE(DOUBLES(CLASSNAME,ID_99)), \
QUOTE(DOUBLES(CLASSNAME,ID_100)), \
QUOTE(DOUBLES(CLASSNAME,ID_101)), \
QUOTE(DOUBLES(CLASSNAME,ID_102)), \
QUOTE(DOUBLES(CLASSNAME,ID_103)), \
QUOTE(DOUBLES(CLASSNAME,ID_104)), \
QUOTE(DOUBLES(CLASSNAME,ID_105)), \
QUOTE(DOUBLES(CLASSNAME,ID_106)), \
QUOTE(DOUBLES(CLASSNAME,ID_107)), \
QUOTE(DOUBLES(CLASSNAME,ID_108)), \
QUOTE(DOUBLES(CLASSNAME,ID_109)), \
QUOTE(DOUBLES(CLASSNAME,ID_110)), \
QUOTE(DOUBLES(CLASSNAME,ID_111)), \
QUOTE(DOUBLES(CLASSNAME,ID_112)), \
QUOTE(DOUBLES(CLASSNAME,ID_113)), \
QUOTE(DOUBLES(CLASSNAME,ID_114)), \
QUOTE(DOUBLES(CLASSNAME,ID_115)), \
QUOTE(DOUBLES(CLASSNAME,ID_116)), \
QUOTE(DOUBLES(CLASSNAME,ID_117)), \
QUOTE(DOUBLES(CLASSNAME,ID_118)), \
QUOTE(DOUBLES(CLASSNAME,ID_119)), \
QUOTE(DOUBLES(CLASSNAME,ID_120)), \
QUOTE(DOUBLES(CLASSNAME,ID_121)), \
QUOTE(DOUBLES(CLASSNAME,ID_122)), \
QUOTE(DOUBLES(CLASSNAME,ID_123)), \
QUOTE(DOUBLES(CLASSNAME,ID_124)), \
QUOTE(DOUBLES(CLASSNAME,ID_125)), \
QUOTE(DOUBLES(CLASSNAME,ID_126)), \
QUOTE(DOUBLES(CLASSNAME,ID_127)), \
QUOTE(DOUBLES(CLASSNAME,ID_128)), \
QUOTE(DOUBLES(CLASSNAME,ID_129)), \
QUOTE(DOUBLES(CLASSNAME,ID_130)), \
QUOTE(DOUBLES(CLASSNAME,ID_131)), \
QUOTE(DOUBLES(CLASSNAME,ID_132)), \
QUOTE(DOUBLES(CLASSNAME,ID_133)), \
QUOTE(DOUBLES(CLASSNAME,ID_134)), \
QUOTE(DOUBLES(CLASSNAME,ID_135)), \
QUOTE(DOUBLES(CLASSNAME,ID_136)), \
QUOTE(DOUBLES(CLASSNAME,ID_137)), \
QUOTE(DOUBLES(CLASSNAME,ID_138)), \
QUOTE(DOUBLES(CLASSNAME,ID_139)), \
QUOTE(DOUBLES(CLASSNAME,ID_140)), \
QUOTE(DOUBLES(CLASSNAME,ID_141)), \
QUOTE(DOUBLES(CLASSNAME,ID_142)), \
QUOTE(DOUBLES(CLASSNAME,ID_143)), \
QUOTE(DOUBLES(CLASSNAME,ID_144)), \
QUOTE(DOUBLES(CLASSNAME,ID_145)), \
QUOTE(DOUBLES(CLASSNAME,ID_146)), \
QUOTE(DOUBLES(CLASSNAME,ID_147)), \
QUOTE(DOUBLES(CLASSNAME,ID_148)), \
QUOTE(DOUBLES(CLASSNAME,ID_149)), \
QUOTE(DOUBLES(CLASSNAME,ID_150)), \
QUOTE(DOUBLES(CLASSNAME,ID_151)), \
QUOTE(DOUBLES(CLASSNAME,ID_152)), \
QUOTE(DOUBLES(CLASSNAME,ID_153)), \
QUOTE(DOUBLES(CLASSNAME,ID_154)), \
QUOTE(DOUBLES(CLASSNAME,ID_155)), \
QUOTE(DOUBLES(CLASSNAME,ID_156)), \
QUOTE(DOUBLES(CLASSNAME,ID_157)), \
QUOTE(DOUBLES(CLASSNAME,ID_158)), \
QUOTE(DOUBLES(CLASSNAME,ID_159)), \
QUOTE(DOUBLES(CLASSNAME,ID_160)), \
QUOTE(DOUBLES(CLASSNAME,ID_161)), \
QUOTE(DOUBLES(CLASSNAME,ID_162)), \
QUOTE(DOUBLES(CLASSNAME,ID_163)), \
QUOTE(DOUBLES(CLASSNAME,ID_164)), \
QUOTE(DOUBLES(CLASSNAME,ID_165)), \
QUOTE(DOUBLES(CLASSNAME,ID_166)), \
QUOTE(DOUBLES(CLASSNAME,ID_167)), \
QUOTE(DOUBLES(CLASSNAME,ID_168)), \
QUOTE(DOUBLES(CLASSNAME,ID_169)), \
QUOTE(DOUBLES(CLASSNAME,ID_170)), \
QUOTE(DOUBLES(CLASSNAME,ID_171)), \
QUOTE(DOUBLES(CLASSNAME,ID_172)), \
QUOTE(DOUBLES(CLASSNAME,ID_173)), \
QUOTE(DOUBLES(CLASSNAME,ID_174)), \
QUOTE(DOUBLES(CLASSNAME,ID_175)), \
QUOTE(DOUBLES(CLASSNAME,ID_176)), \
QUOTE(DOUBLES(CLASSNAME,ID_177)), \
QUOTE(DOUBLES(CLASSNAME,ID_178)), \
QUOTE(DOUBLES(CLASSNAME,ID_179)), \
QUOTE(DOUBLES(CLASSNAME,ID_180)), \
QUOTE(DOUBLES(CLASSNAME,ID_181)), \
QUOTE(DOUBLES(CLASSNAME,ID_182)), \
QUOTE(DOUBLES(CLASSNAME,ID_183)), \
QUOTE(DOUBLES(CLASSNAME,ID_184)), \
QUOTE(DOUBLES(CLASSNAME,ID_185)), \
QUOTE(DOUBLES(CLASSNAME,ID_186)), \
QUOTE(DOUBLES(CLASSNAME,ID_187)), \
QUOTE(DOUBLES(CLASSNAME,ID_188)), \
QUOTE(DOUBLES(CLASSNAME,ID_189)), \
QUOTE(DOUBLES(CLASSNAME,ID_190)), \
QUOTE(DOUBLES(CLASSNAME,ID_191)), \
QUOTE(DOUBLES(CLASSNAME,ID_192)), \
QUOTE(DOUBLES(CLASSNAME,ID_193)), \
QUOTE(DOUBLES(CLASSNAME,ID_194)), \
QUOTE(DOUBLES(CLASSNAME,ID_195)), \
QUOTE(DOUBLES(CLASSNAME,ID_196)), \
QUOTE(DOUBLES(CLASSNAME,ID_197)), \
QUOTE(DOUBLES(CLASSNAME,ID_198)), \
QUOTE(DOUBLES(CLASSNAME,ID_199)), \
QUOTE(DOUBLES(CLASSNAME,ID_200)), \
QUOTE(DOUBLES(CLASSNAME,ID_201)), \
QUOTE(DOUBLES(CLASSNAME,ID_202)), \
QUOTE(DOUBLES(CLASSNAME,ID_203)), \
QUOTE(DOUBLES(CLASSNAME,ID_204)), \
QUOTE(DOUBLES(CLASSNAME,ID_205)), \
QUOTE(DOUBLES(CLASSNAME,ID_206)), \
QUOTE(DOUBLES(CLASSNAME,ID_207)), \
QUOTE(DOUBLES(CLASSNAME,ID_208)), \
QUOTE(DOUBLES(CLASSNAME,ID_209)), \
QUOTE(DOUBLES(CLASSNAME,ID_210)), \
QUOTE(DOUBLES(CLASSNAME,ID_211)), \
QUOTE(DOUBLES(CLASSNAME,ID_212)), \
QUOTE(DOUBLES(CLASSNAME,ID_213)), \
QUOTE(DOUBLES(CLASSNAME,ID_214)), \
QUOTE(DOUBLES(CLASSNAME,ID_215)), \
QUOTE(DOUBLES(CLASSNAME,ID_216)), \
QUOTE(DOUBLES(CLASSNAME,ID_217)), \
QUOTE(DOUBLES(CLASSNAME,ID_218)), \
QUOTE(DOUBLES(CLASSNAME,ID_219)), \
QUOTE(DOUBLES(CLASSNAME,ID_220)), \
QUOTE(DOUBLES(CLASSNAME,ID_221)), \
QUOTE(DOUBLES(CLASSNAME,ID_222)), \
QUOTE(DOUBLES(CLASSNAME,ID_223)), \
QUOTE(DOUBLES(CLASSNAME,ID_224)), \
QUOTE(DOUBLES(CLASSNAME,ID_225)), \
QUOTE(DOUBLES(CLASSNAME,ID_226)), \
QUOTE(DOUBLES(CLASSNAME,ID_227)), \
QUOTE(DOUBLES(CLASSNAME,ID_228)), \
QUOTE(DOUBLES(CLASSNAME,ID_229)), \
QUOTE(DOUBLES(CLASSNAME,ID_230)), \
QUOTE(DOUBLES(CLASSNAME,ID_231)), \
QUOTE(DOUBLES(CLASSNAME,ID_232)), \
QUOTE(DOUBLES(CLASSNAME,ID_233)), \
QUOTE(DOUBLES(CLASSNAME,ID_234)), \
QUOTE(DOUBLES(CLASSNAME,ID_235)), \
QUOTE(DOUBLES(CLASSNAME,ID_236)), \
QUOTE(DOUBLES(CLASSNAME,ID_237)), \
QUOTE(DOUBLES(CLASSNAME,ID_238)), \
QUOTE(DOUBLES(CLASSNAME,ID_239)), \
QUOTE(DOUBLES(CLASSNAME,ID_240)), \
QUOTE(DOUBLES(CLASSNAME,ID_241)), \
QUOTE(DOUBLES(CLASSNAME,ID_242)), \
QUOTE(DOUBLES(CLASSNAME,ID_243)), \
QUOTE(DOUBLES(CLASSNAME,ID_244)), \
QUOTE(DOUBLES(CLASSNAME,ID_245)), \
QUOTE(DOUBLES(CLASSNAME,ID_246)), \
QUOTE(DOUBLES(CLASSNAME,ID_247)), \
QUOTE(DOUBLES(CLASSNAME,ID_248)), \
QUOTE(DOUBLES(CLASSNAME,ID_249)), \
QUOTE(DOUBLES(CLASSNAME,ID_250)), \
QUOTE(DOUBLES(CLASSNAME,ID_251)), \
QUOTE(DOUBLES(CLASSNAME,ID_252)), \
QUOTE(DOUBLES(CLASSNAME,ID_253)), \
QUOTE(DOUBLES(CLASSNAME,ID_254)), \
QUOTE(DOUBLES(CLASSNAME,ID_255)), \
QUOTE(DOUBLES(CLASSNAME,ID_256)), \
QUOTE(DOUBLES(CLASSNAME,ID_257)), \
QUOTE(DOUBLES(CLASSNAME,ID_258)), \
QUOTE(DOUBLES(CLASSNAME,ID_259)), \
QUOTE(DOUBLES(CLASSNAME,ID_260)), \
QUOTE(DOUBLES(CLASSNAME,ID_261)), \
QUOTE(DOUBLES(CLASSNAME,ID_262)), \
QUOTE(DOUBLES(CLASSNAME,ID_263)), \
QUOTE(DOUBLES(CLASSNAME,ID_264)), \
QUOTE(DOUBLES(CLASSNAME,ID_265)), \
QUOTE(DOUBLES(CLASSNAME,ID_266)), \
QUOTE(DOUBLES(CLASSNAME,ID_267)), \
QUOTE(DOUBLES(CLASSNAME,ID_268)), \
QUOTE(DOUBLES(CLASSNAME,ID_269)), \
QUOTE(DOUBLES(CLASSNAME,ID_270)), \
QUOTE(DOUBLES(CLASSNAME,ID_271)), \
QUOTE(DOUBLES(CLASSNAME,ID_272)), \
QUOTE(DOUBLES(CLASSNAME,ID_273)), \
QUOTE(DOUBLES(CLASSNAME,ID_274)), \
QUOTE(DOUBLES(CLASSNAME,ID_275)), \
QUOTE(DOUBLES(CLASSNAME,ID_276)), \
QUOTE(DOUBLES(CLASSNAME,ID_277)), \
QUOTE(DOUBLES(CLASSNAME,ID_278)), \
QUOTE(DOUBLES(CLASSNAME,ID_279)), \
QUOTE(DOUBLES(CLASSNAME,ID_280)), \
QUOTE(DOUBLES(CLASSNAME,ID_281)), \
QUOTE(DOUBLES(CLASSNAME,ID_282)), \
QUOTE(DOUBLES(CLASSNAME,ID_283)), \
QUOTE(DOUBLES(CLASSNAME,ID_284)), \
QUOTE(DOUBLES(CLASSNAME,ID_285)), \
QUOTE(DOUBLES(CLASSNAME,ID_286)), \
QUOTE(DOUBLES(CLASSNAME,ID_287)), \
QUOTE(DOUBLES(CLASSNAME,ID_288)), \
QUOTE(DOUBLES(CLASSNAME,ID_289)), \
QUOTE(DOUBLES(CLASSNAME,ID_290)), \
QUOTE(DOUBLES(CLASSNAME,ID_291)), \
QUOTE(DOUBLES(CLASSNAME,ID_292)), \
QUOTE(DOUBLES(CLASSNAME,ID_293)), \
QUOTE(DOUBLES(CLASSNAME,ID_294)), \
QUOTE(DOUBLES(CLASSNAME,ID_295)), \
QUOTE(DOUBLES(CLASSNAME,ID_296)), \
QUOTE(DOUBLES(CLASSNAME,ID_297)), \
QUOTE(DOUBLES(CLASSNAME,ID_298)), \
QUOTE(DOUBLES(CLASSNAME,ID_299)), \
QUOTE(DOUBLES(CLASSNAME,ID_300)), \
QUOTE(DOUBLES(CLASSNAME,ID_301)), \
QUOTE(DOUBLES(CLASSNAME,ID_302)), \
QUOTE(DOUBLES(CLASSNAME,ID_303)), \
QUOTE(DOUBLES(CLASSNAME,ID_304)), \
QUOTE(DOUBLES(CLASSNAME,ID_305)), \
QUOTE(DOUBLES(CLASSNAME,ID_306)), \
QUOTE(DOUBLES(CLASSNAME,ID_307)), \
QUOTE(DOUBLES(CLASSNAME,ID_308)), \
QUOTE(DOUBLES(CLASSNAME,ID_309)), \
QUOTE(DOUBLES(CLASSNAME,ID_310)), \
QUOTE(DOUBLES(CLASSNAME,ID_311)), \
QUOTE(DOUBLES(CLASSNAME,ID_312)), \
QUOTE(DOUBLES(CLASSNAME,ID_313)), \
QUOTE(DOUBLES(CLASSNAME,ID_314)), \
QUOTE(DOUBLES(CLASSNAME,ID_315)), \
QUOTE(DOUBLES(CLASSNAME,ID_316)), \
QUOTE(DOUBLES(CLASSNAME,ID_317)), \
QUOTE(DOUBLES(CLASSNAME,ID_318)), \
QUOTE(DOUBLES(CLASSNAME,ID_319)), \
QUOTE(DOUBLES(CLASSNAME,ID_320)), \
QUOTE(DOUBLES(CLASSNAME,ID_321)), \
QUOTE(DOUBLES(CLASSNAME,ID_322)), \
QUOTE(DOUBLES(CLASSNAME,ID_323)), \
QUOTE(DOUBLES(CLASSNAME,ID_324)), \
QUOTE(DOUBLES(CLASSNAME,ID_325)), \
QUOTE(DOUBLES(CLASSNAME,ID_326)), \
QUOTE(DOUBLES(CLASSNAME,ID_327)), \
QUOTE(DOUBLES(CLASSNAME,ID_328)), \
QUOTE(DOUBLES(CLASSNAME,ID_329)), \
QUOTE(DOUBLES(CLASSNAME,ID_330)), \
QUOTE(DOUBLES(CLASSNAME,ID_331)), \
QUOTE(DOUBLES(CLASSNAME,ID_332)), \
QUOTE(DOUBLES(CLASSNAME,ID_333)), \
QUOTE(DOUBLES(CLASSNAME,ID_334)), \
QUOTE(DOUBLES(CLASSNAME,ID_335)), \
QUOTE(DOUBLES(CLASSNAME,ID_336)), \
QUOTE(DOUBLES(CLASSNAME,ID_337)), \
QUOTE(DOUBLES(CLASSNAME,ID_338)), \
QUOTE(DOUBLES(CLASSNAME,ID_339)), \
QUOTE(DOUBLES(CLASSNAME,ID_340)), \
QUOTE(DOUBLES(CLASSNAME,ID_341)), \
QUOTE(DOUBLES(CLASSNAME,ID_342)), \
QUOTE(DOUBLES(CLASSNAME,ID_343)), \
QUOTE(DOUBLES(CLASSNAME,ID_344)), \
QUOTE(DOUBLES(CLASSNAME,ID_345)), \
QUOTE(DOUBLES(CLASSNAME,ID_346)), \
QUOTE(DOUBLES(CLASSNAME,ID_347)), \
QUOTE(DOUBLES(CLASSNAME,ID_348)), \
QUOTE(DOUBLES(CLASSNAME,ID_349)), \
QUOTE(DOUBLES(CLASSNAME,ID_350)), \
QUOTE(DOUBLES(CLASSNAME,ID_351)), \
QUOTE(DOUBLES(CLASSNAME,ID_352)), \
QUOTE(DOUBLES(CLASSNAME,ID_353)), \
QUOTE(DOUBLES(CLASSNAME,ID_354)), \
QUOTE(DOUBLES(CLASSNAME,ID_355)), \
QUOTE(DOUBLES(CLASSNAME,ID_356)), \
QUOTE(DOUBLES(CLASSNAME,ID_357)), \
QUOTE(DOUBLES(CLASSNAME,ID_358)), \
QUOTE(DOUBLES(CLASSNAME,ID_359)), \
QUOTE(DOUBLES(CLASSNAME,ID_360)), \
QUOTE(DOUBLES(CLASSNAME,ID_361)), \
QUOTE(DOUBLES(CLASSNAME,ID_362)), \
QUOTE(DOUBLES(CLASSNAME,ID_363)), \
QUOTE(DOUBLES(CLASSNAME,ID_364)), \
QUOTE(DOUBLES(CLASSNAME,ID_365)), \
QUOTE(DOUBLES(CLASSNAME,ID_366)), \
QUOTE(DOUBLES(CLASSNAME,ID_367)), \
QUOTE(DOUBLES(CLASSNAME,ID_368)), \
QUOTE(DOUBLES(CLASSNAME,ID_369)), \
QUOTE(DOUBLES(CLASSNAME,ID_370)), \
QUOTE(DOUBLES(CLASSNAME,ID_371)), \
QUOTE(DOUBLES(CLASSNAME,ID_372)), \
QUOTE(DOUBLES(CLASSNAME,ID_373)), \
QUOTE(DOUBLES(CLASSNAME,ID_374)), \
QUOTE(DOUBLES(CLASSNAME,ID_375)), \
QUOTE(DOUBLES(CLASSNAME,ID_376)), \
QUOTE(DOUBLES(CLASSNAME,ID_377)), \
QUOTE(DOUBLES(CLASSNAME,ID_378)), \
QUOTE(DOUBLES(CLASSNAME,ID_379)), \
QUOTE(DOUBLES(CLASSNAME,ID_380)), \
QUOTE(DOUBLES(CLASSNAME,ID_381)), \
QUOTE(DOUBLES(CLASSNAME,ID_382)), \
QUOTE(DOUBLES(CLASSNAME,ID_383)), \
QUOTE(DOUBLES(CLASSNAME,ID_384)), \
QUOTE(DOUBLES(CLASSNAME,ID_385)), \
QUOTE(DOUBLES(CLASSNAME,ID_386)), \
QUOTE(DOUBLES(CLASSNAME,ID_387)), \
QUOTE(DOUBLES(CLASSNAME,ID_388)), \
QUOTE(DOUBLES(CLASSNAME,ID_389)), \
QUOTE(DOUBLES(CLASSNAME,ID_390)), \
QUOTE(DOUBLES(CLASSNAME,ID_391)), \
QUOTE(DOUBLES(CLASSNAME,ID_392)), \
QUOTE(DOUBLES(CLASSNAME,ID_393)), \
QUOTE(DOUBLES(CLASSNAME,ID_394)), \
QUOTE(DOUBLES(CLASSNAME,ID_395)), \
QUOTE(DOUBLES(CLASSNAME,ID_396)), \
QUOTE(DOUBLES(CLASSNAME,ID_397)), \
QUOTE(DOUBLES(CLASSNAME,ID_398)), \
QUOTE(DOUBLES(CLASSNAME,ID_399)), \
QUOTE(DOUBLES(CLASSNAME,ID_400)), \
QUOTE(DOUBLES(CLASSNAME,ID_401)), \
QUOTE(DOUBLES(CLASSNAME,ID_402)), \
QUOTE(DOUBLES(CLASSNAME,ID_403)), \
QUOTE(DOUBLES(CLASSNAME,ID_404)), \
QUOTE(DOUBLES(CLASSNAME,ID_405)), \
QUOTE(DOUBLES(CLASSNAME,ID_406)), \
QUOTE(DOUBLES(CLASSNAME,ID_407)), \
QUOTE(DOUBLES(CLASSNAME,ID_408)), \
QUOTE(DOUBLES(CLASSNAME,ID_409)), \
QUOTE(DOUBLES(CLASSNAME,ID_410)), \
QUOTE(DOUBLES(CLASSNAME,ID_411)), \
QUOTE(DOUBLES(CLASSNAME,ID_412)), \
QUOTE(DOUBLES(CLASSNAME,ID_413)), \
QUOTE(DOUBLES(CLASSNAME,ID_414)), \
QUOTE(DOUBLES(CLASSNAME,ID_415)), \
QUOTE(DOUBLES(CLASSNAME,ID_416)), \
QUOTE(DOUBLES(CLASSNAME,ID_417)), \
QUOTE(DOUBLES(CLASSNAME,ID_418)), \
QUOTE(DOUBLES(CLASSNAME,ID_419)), \
QUOTE(DOUBLES(CLASSNAME,ID_420)), \
QUOTE(DOUBLES(CLASSNAME,ID_421)), \
QUOTE(DOUBLES(CLASSNAME,ID_422)), \
QUOTE(DOUBLES(CLASSNAME,ID_423)), \
QUOTE(DOUBLES(CLASSNAME,ID_424)), \
QUOTE(DOUBLES(CLASSNAME,ID_425)), \
QUOTE(DOUBLES(CLASSNAME,ID_426)), \
QUOTE(DOUBLES(CLASSNAME,ID_427)), \
QUOTE(DOUBLES(CLASSNAME,ID_428)), \
QUOTE(DOUBLES(CLASSNAME,ID_429)), \
QUOTE(DOUBLES(CLASSNAME,ID_430)), \
QUOTE(DOUBLES(CLASSNAME,ID_431)), \
QUOTE(DOUBLES(CLASSNAME,ID_432)), \
QUOTE(DOUBLES(CLASSNAME,ID_433)), \
QUOTE(DOUBLES(CLASSNAME,ID_434)), \
QUOTE(DOUBLES(CLASSNAME,ID_435)), \
QUOTE(DOUBLES(CLASSNAME,ID_436)), \
QUOTE(DOUBLES(CLASSNAME,ID_437)), \
QUOTE(DOUBLES(CLASSNAME,ID_438)), \
QUOTE(DOUBLES(CLASSNAME,ID_439)), \
QUOTE(DOUBLES(CLASSNAME,ID_440)), \
QUOTE(DOUBLES(CLASSNAME,ID_441)), \
QUOTE(DOUBLES(CLASSNAME,ID_442)), \
QUOTE(DOUBLES(CLASSNAME,ID_443)), \
QUOTE(DOUBLES(CLASSNAME,ID_444)), \
QUOTE(DOUBLES(CLASSNAME,ID_445)), \
QUOTE(DOUBLES(CLASSNAME,ID_446)), \
QUOTE(DOUBLES(CLASSNAME,ID_447)), \
QUOTE(DOUBLES(CLASSNAME,ID_448)), \
QUOTE(DOUBLES(CLASSNAME,ID_449)), \
QUOTE(DOUBLES(CLASSNAME,ID_450)), \
QUOTE(DOUBLES(CLASSNAME,ID_451)), \
QUOTE(DOUBLES(CLASSNAME,ID_452)), \
QUOTE(DOUBLES(CLASSNAME,ID_453)), \
QUOTE(DOUBLES(CLASSNAME,ID_454)), \
QUOTE(DOUBLES(CLASSNAME,ID_455)), \
QUOTE(DOUBLES(CLASSNAME,ID_456)), \
QUOTE(DOUBLES(CLASSNAME,ID_457)), \
QUOTE(DOUBLES(CLASSNAME,ID_458)), \
QUOTE(DOUBLES(CLASSNAME,ID_459)), \
QUOTE(DOUBLES(CLASSNAME,ID_460)), \
QUOTE(DOUBLES(CLASSNAME,ID_461)), \
QUOTE(DOUBLES(CLASSNAME,ID_462)), \
QUOTE(DOUBLES(CLASSNAME,ID_463)), \
QUOTE(DOUBLES(CLASSNAME,ID_464)), \
QUOTE(DOUBLES(CLASSNAME,ID_465)), \
QUOTE(DOUBLES(CLASSNAME,ID_466)), \
QUOTE(DOUBLES(CLASSNAME,ID_467)), \
QUOTE(DOUBLES(CLASSNAME,ID_468)), \
QUOTE(DOUBLES(CLASSNAME,ID_469)), \
QUOTE(DOUBLES(CLASSNAME,ID_470)), \
QUOTE(DOUBLES(CLASSNAME,ID_471)), \
QUOTE(DOUBLES(CLASSNAME,ID_472)), \
QUOTE(DOUBLES(CLASSNAME,ID_473)), \
QUOTE(DOUBLES(CLASSNAME,ID_474)), \
QUOTE(DOUBLES(CLASSNAME,ID_475)), \
QUOTE(DOUBLES(CLASSNAME,ID_476)), \
QUOTE(DOUBLES(CLASSNAME,ID_477)), \
QUOTE(DOUBLES(CLASSNAME,ID_478)), \
QUOTE(DOUBLES(CLASSNAME,ID_479)), \
QUOTE(DOUBLES(CLASSNAME,ID_480)), \
QUOTE(DOUBLES(CLASSNAME,ID_481)), \
QUOTE(DOUBLES(CLASSNAME,ID_482)), \
QUOTE(DOUBLES(CLASSNAME,ID_483)), \
QUOTE(DOUBLES(CLASSNAME,ID_484)), \
QUOTE(DOUBLES(CLASSNAME,ID_485)), \
QUOTE(DOUBLES(CLASSNAME,ID_486)), \
QUOTE(DOUBLES(CLASSNAME,ID_487)), \
QUOTE(DOUBLES(CLASSNAME,ID_488)), \
QUOTE(DOUBLES(CLASSNAME,ID_489)), \
QUOTE(DOUBLES(CLASSNAME,ID_490)), \
QUOTE(DOUBLES(CLASSNAME,ID_491)), \
QUOTE(DOUBLES(CLASSNAME,ID_492)), \
QUOTE(DOUBLES(CLASSNAME,ID_493)), \
QUOTE(DOUBLES(CLASSNAME,ID_494)), \
QUOTE(DOUBLES(CLASSNAME,ID_495)), \
QUOTE(DOUBLES(CLASSNAME,ID_496)), \
QUOTE(DOUBLES(CLASSNAME,ID_497)), \
QUOTE(DOUBLES(CLASSNAME,ID_498)), \
QUOTE(DOUBLES(CLASSNAME,ID_499)), \
QUOTE(DOUBLES(CLASSNAME,ID_500)), \
QUOTE(DOUBLES(CLASSNAME,ID_501)), \
QUOTE(DOUBLES(CLASSNAME,ID_502)), \
QUOTE(DOUBLES(CLASSNAME,ID_503)), \
QUOTE(DOUBLES(CLASSNAME,ID_504)), \
QUOTE(DOUBLES(CLASSNAME,ID_505)), \
QUOTE(DOUBLES(CLASSNAME,ID_506)), \
QUOTE(DOUBLES(CLASSNAME,ID_507)), \
QUOTE(DOUBLES(CLASSNAME,ID_508)), \
QUOTE(DOUBLES(CLASSNAME,ID_509)), \
QUOTE(DOUBLES(CLASSNAME,ID_510)), \
QUOTE(DOUBLES(CLASSNAME,ID_511)), \
QUOTE(DOUBLES(CLASSNAME,ID_512))
