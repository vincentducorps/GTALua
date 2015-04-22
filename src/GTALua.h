// =================================================================================
// GTALua 
// =================================================================================
class GTALua
{
public:
	GTALua();
	void ProperInit();

	// Game Version
	bool VersionCheck();
	char* GetGameVersion();

	// Configuration file(s)
	void LoadNativesINI();
};

// =================================================================================
// Global Instance 
// =================================================================================
extern GTALua* g_pGTALua;