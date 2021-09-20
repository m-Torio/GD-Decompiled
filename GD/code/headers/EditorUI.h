#include "includes.h"

class EditorUI : public cocos2d::CCLayer, public FLAlertLayerProtocol, public ColorSelectDelegate, public GJRotationControlDelegate, public GJScaleControlDelegate, public MusicDownloadDelegate {
public:
	bool m_bStopMusic;
	EditButtonBar* m_pCustomItemsTab;
	bool m_bShowedMaxError;
	cocos2d::CCArray* m_pHidableUI;
	float m_fNodeSize;
	DWORD field_A;
	DWORD field_B;
	bool m_bBuilding;
	float m_fSongOffset;
	UndoObject* m_pUndoObject;
	bool field_158;
	bool field_159;
	bool field_15A;
	bool field_15B;
	int m_nTouchRotationID;
	int m_nTouchScaleID;
	int m_nTouchID;
	cocos2d::CCLabelBMFont* m_pObjectInfoLabel;
	GJRotationControl* m_pRotationControl;
	cocos2d::CCPoint m_obGroupCenter;
	bool m_bTouchDown;
	GJScaleControl* m_pScaleControl;
	cocos2d::CCDictionary* m_pEditBtnDict;
	CCMenuItemToggler* m_pTab;
	EditButtonBar* m_pEditBtnBar;
	Slider* m_pSlider;
	cocos2d::CCPoint m_obUnkPoint8;
	float m_fEditBarHeight;
	bool m_bSwipe;
	bool m_bCanDrawSwipeGrid;
	char field_19E;
	bool field_19F;
	bool m_bFreeMove;
	bool field_1A1;
	bool m_bSnapObject;
	bool m_bLinked;
	bool m_bToggleGuide;
	cocos2d::CCPoint m_obSnappedPosition;
	cocos2d::CCArray* m_pUnkArray3;
	cocos2d::CCPoint m_obUnkPoint1;
	cocos2d::CCArray* m_pSelectedObjects;
	cocos2d::CCMenu* m_pDeleteMenu;
	cocos2d::CCArray* m_pEditTabBtns;
	CCMenuItemSpriteExtra* m_pDeleteTab;
	CCMenuItemSpriteExtra* m_pBuildTab;
	CCMenuItemSpriteExtra* m_pEditTab;
	CCMenuItemSpriteExtra* m_pSwipeBtn;
	CCMenuItemSpriteExtra* m_pFreeMoveBtn;
	CCMenuItemSpriteExtra* m_pDeselectBtn;
	CCMenuItemSpriteExtra* m_pSnapBtn;
	CCMenuItemSpriteExtra* m_pRotateBtn;
	CCMenuItemSpriteExtra* m_pPlayBackBtn;
	CCMenuItemSpriteExtra* m_pPlayTestBtn;
	CCMenuItemSpriteExtra* m_pStopPlayTestBtn;
	CCMenuItemSpriteExtra* m_pDeleteBtn;
	CCMenuItemSpriteExtra* m_pLinkGroupsBtn;
	CCMenuItemSpriteExtra* m_pUnlinkGroupsBtn;
	CCMenuItemSpriteExtra* m_pUndoBtn;
	CCMenuItemSpriteExtra* m_pRedoBtn;
	CCMenuItemSpriteExtra* m_pEditObjectBtn;
	CCMenuItemSpriteExtra* m_pEditGroupBtn;
	CCMenuItemSpriteExtra* m_pEditColourBtn;
	CCMenuItemSpriteExtra* m_pEditSpecialBtn;
	CCMenuItemSpriteExtra* m_pDuplicateBtn;
	CCMenuItemSpriteExtra* m_pCopyBtn;
	CCMenuItemSpriteExtra* m_pPasteBtn;
	CCMenuItemSpriteExtra* m_pCopyStateBtn;
	CCMenuItemSpriteExtra* m_pPasteStateBtn;
	CCMenuItemSpriteExtra* m_pPasteColourBtn;
	CCMenuItemSpriteExtra* m_pGoToLayerBtn;
	CCMenuItemSpriteExtra* m_pToggleGuideBtn;
	cocos2d::CCArray* m_pBtnTabs;
	cocos2d::CCMenu* m_pTabsMenu;
	cocos2d::CCArray* m_pTabsArray;
	cocos2d::CCSprite* m_pDeleteAllBtnSprite;
	cocos2d::CCSprite* m_pDeleteFilterCustomSprite;
	CCMenuItemSpriteExtra* m_pDeleteMenuBtn;
	CCMenuItemSpriteExtra* m_pUnkDeleteBtn;
	CCMenuItemSpriteExtra* m_pDeleteFilterNone;
	CCMenuItemSpriteExtra* m_pDeleteFilterStatic;
	CCMenuItemSpriteExtra* m_pDeleteFilterDetails;
	CCMenuItemSpriteExtra* m_pDeleteFilterCustom;
	cocos2d::CCLabelBMFont* m_pAllLabel;
	CCMenuItemSpriteExtra* m_pNextLayerBtn;
	CCMenuItemSpriteExtra* m_pPreviousLayerBtn;
	CCMenuItemSpriteExtra* m_pBaseLayerBtn;
	DWORD field_56;
	DWORD field_57;
	int m_nObjectID;
	cocos2d::CCArray* m_pMenuItems;
	cocos2d::CCArray* m_pMenuItems2;
	cocos2d::CCArray* m_pDeletedObjects;
	EditorTabType m_eMode;
	LevelEditorLayer* m_pEditorLayer;
	cocos2d::CCPoint m_obSwipeStart;
	cocos2d::CCPoint m_obSwipeEnd;
	cocos2d::CCPoint m_obUnkPoint3;
	cocos2d::CCPoint m_obUnkPoint4;
	cocos2d::CCPoint m_obUnkPoint5;
	cocos2d::CCPoint m_obPreSnappedPosition;
	EffectGameObject* m_pSelectedObject;
	GameObject* m_pSnapObject;
	bool field_6C;
	bool field_2CD;
	bool field_2CE;
	bool field_2CF;
	std::string m_sClipboard;
	int m_nTotalSelectedObjects;
	DWORD field_6F;
	int m_nSelectedTab;
	int m_nGlobalClickCounter;
	ColorSelectLiveOverlay* m_pColorSelectLiveOverlay;
	double m_dUnkScrollWeek;
	double field_75;
	bool field_77;
	DWORD field_78;
	bool m_bSpaceKeyPressed;
};
