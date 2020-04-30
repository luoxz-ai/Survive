--This is a cmd desc file auto gen from origin-proto.
--Please do no modification.
local EMsgId = {
	// unused
	enum EGiveType
	{
	  EGiveType_FIRST = 0;
	}
	// npc个人数据同步方式
	enum SyncNpcDataType
	{
	  SYNC_NPC_DATA_TYPE_MAP     = 0; // 进入地图
	  SYNC_NPC_DATA_TYPE_ADD     = 1; // 当前新增
	  SYNC_NPC_DATA_TYPE_REMOVE  = 2; // 移除
	}