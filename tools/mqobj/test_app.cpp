
#include <hlog.h>
#include <huibase.h>
#include "testapp.h"

using namespace HUIBASE;


int main(int argc, char* argv[]) {

    CTestApp app(argc, argv);
    
    try {
		
	app.Init();

	HBOOL cb = app.Run();
	IF_FALSE(cb) {
	    cout << hbase_err(cb) << endl;
	    return -1;
	}
		
    } catch(HCException& ex) {
	
	//LOG_ERROR("server app get a exception. %s", ex.what());		
	printf("server app get a exception: %s", ex.what());
	
    }

    return 0;
}

