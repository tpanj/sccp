#include <stdio.h>
#include "simple_config.h"

/**
 * test main
 */
int main(){
	char *filePath="./config.conf";
	char *value;
	SCcfg=SCparseConf(filePath);
	SCdumpKeyValue(SCcfg);
	value=SCgetValue(SCcfg,"CHTSH_URL");
	if (value) printf("found: %s\n",value);
	SCfreeCfg(SCcfg);
	return 0;
}


