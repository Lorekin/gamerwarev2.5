#pragma once
#include "Recv.h"
#include "Definitions.h"
#include "IClientNetworkable.h"

enum class ClassID : int {
	NextBotCombatCharacter = 0,
	CAK47 = 1,
	CBaseAnimating = 2,
	CBaseAnimatingOverlay = 3,
	CBaseAttributableItem = 4,
	CBaseButton = 5,
	CBaseCombatCharacter = 6,
	CBaseCombatWeapon = 7,
	CBaseCSGrenade = 8,
	CBaseCSGrenadeProjectile = 9,
	CBaseDoor = 10,
	CBaseEntity = 11,
	CBaseFlex = 12,
	CBaseGrenade = 13,
	CBaseParticleEntity = 14,
	CBasePlayer = 15,
	CBasePropDoor = 16,
	CBaseTeamObjectiveResource = 17,
	CBaseTempEntity = 18,
	CBaseToggle = 19,
	CBaseTrigger = 20,
	CBaseViewModel = 21,
	CBaseVPhysicsTrigger = 22,
	CBaseWeaponWorldModel = 23,
	CBeam = 24,
	CBeamSpotlight = 25,
	CBoneFollower = 26,
	CBRC4Target = 27,
	CBreachCharge = 28,
	CBreachChargeProjectile = 29,
	CBreakableProp = 30,
	CBreakableSurface = 31,
	CBumpMine = 32,
	CBumpMineProjectile = 33,
	CC4 = 34,
	CCascadeLight = 35,
	CChicken = 36,
	CColorCorrection = 37,
	CColorCorrectionVolume = 38,
	CCSGameRulesProxy = 39,
	CCSPlayer = 40,
	CCSPlayerResource = 41,
	CCSRagdoll = 42,
	CCSTeam = 43,
	CDangerZone = 44,
	CDangerZoneController = 45,
	CDEagle = 46,
	CDecoyGrenade = 47,
	CDecoyProjectile = 48,
	CDrone = 49,
	CDronegun = 50,
	CDynamicLight = 51,
	CDynamicProp = 52,
	CEconEntity = 53,
	CEconWearable = 54,
	CEmbers = 55,
	CEntityDissolve = 56,
	CEntityFlame = 57,
	CEntityFreezing = 58,
	CEntityParticleTrail = 59,
	CEnvAmbientLight = 60,
	CEnvDetailController = 61,
	CEnvDOFController = 62,
	CEnvGasCanister = 63,
	CEnvParticleScript = 64,
	CEnvProjectedTexture = 65,
	CEnvQuadraticBeam = 66,
	CEnvScreenEffect = 67,
	CEnvScreenOverlay = 68,
	CEnvTonemapController = 69,
	CEnvWind = 70,
	CFEPlayerDecal = 71,
	CFireCrackerBlast = 72,
	CFireSmoke = 73,
	CFireTrail = 74,
	CFish = 75,
	CFists = 76,
	CFlashbang = 77,
	CFogController = 78,
	CFootstepControl = 79,
	CFunc_Dust = 80,
	CFunc_LOD = 81,
	CFuncAreaPortalWindow = 82,
	CFuncBrush = 83,
	CFuncConveyor = 84,
	CFuncLadder = 85,
	CFuncMonitor = 86,
	CFuncMoveLinear = 87,
	CFuncOccluder = 88,
	CFuncReflectiveGlass = 89,
	CFuncRotating = 90,
	CFuncSmokeVolume = 91,
	CFuncTrackTrain = 92,
	CGameRulesProxy = 93,
	CGrassBurn = 94,
	CHandleTest = 95,
	CHEGrenade = 96,
	CHostage = 97,
	CHostageCarriableProp = 98,
	CIncendiaryGrenade = 99,
	CInferno = 100,
	CInfoLadderDismount = 101,
	CInfoMapRegion = 102,
	CInfoOverlayAccessor = 103,
	CItem_Healthshot = 104,
	CItemCash = 105,
	CItemDogtags = 106,
	CKnife = 107,
	CKnifeGG = 108,
	CLightGlow = 109,
	CMaterialModifyControl = 110,
	CMelee = 111,
	CMolotovGrenade = 112,
	CMolotovProjectile = 113,
	CMovieDisplay = 114,
	CParadropChopper = 115,
	CParticleFire = 116,
	CParticlePerformanceMonitor = 117,
	CParticleSystem = 118,
	CPhysBox = 119,
	CPhysBoxMultiplayer = 120,
	CPhysicsProp = 121,
	CPhysicsPropMultiplayer = 122,
	CPhysMagnet = 123,
	CPhysPropAmmoBox = 124,
	CPhysPropLootCrate = 125,
	CPhysPropRadarJammer = 126,
	CPhysPropWeaponUpgrade = 127,
	CPlantedC4 = 128,
	CPlasma = 129,
	CPlayerPing = 130,
	CPlayerResource = 131,
	CPointCamera = 132,
	CPointCommentaryNode = 133,
	CPointWorldText = 134,
	CPoseController = 135,
	CPostProcessController = 136,
	CPrecipitation = 137,
	CPrecipitationBlocker = 138,
	CPredictedViewModel = 139,
	CProp_Hallucination = 140,
	CPropCounter = 141,
	CPropDoorRotating = 142,
	CPropJeep = 143,
	CPropVehicleDriveable = 144,
	CRagdollManager = 145,
	CRagdollProp = 146,
	CRagdollPropAttached = 147,
	CRopeKeyframe = 148,
	CSCAR17 = 149,
	CSceneEntity = 150,
	CSensorGrenade = 151,
	CSensorGrenadeProjectile = 152,
	CShadowControl = 153,
	CSlideshowDisplay = 154,
	CSmokeGrenade = 155,
	CSmokeGrenadeProjectile = 156,
	CSmokeStack = 157,
	CSnowball = 158,
	CSnowballPile = 159,
	CSnowballProjectile = 160,
	CSpatialEntity = 161,
	CSpotlightEnd = 162,
	CSprite = 163,
	CSpriteOriented = 164,
	CSpriteTrail = 165,
	CStatueProp = 166,
	CSteamJet = 167,
	CSun = 168,
	CSunlightShadowControl = 169,
	CSurvivalSpawnChopper = 170,
	CTablet = 171,
	CTeam = 172,
	CTeamplayRoundBasedRulesProxy = 173,
	CTEArmorRicochet = 174,
	CTEBaseBeam = 175,
	CTEBeamEntPoint = 176,
	CTEBeamEnts = 177,
	CTEBeamFollow = 178,
	CTEBeamLaser = 179,
	CTEBeamPoints = 180,
	CTEBeamRing = 181,
	CTEBeamRingPoint = 182,
	CTEBeamSpline = 183,
	CTEBloodSprite = 184,
	CTEBloodStream = 185,
	CTEBreakModel = 186,
	CTEBSPDecal = 187,
	CTEBubbles = 188,
	CTEBubbleTrail = 189,
	CTEClientProjectile = 190,
	CTEDecal = 191,
	CTEDust = 192,
	CTEDynamicLight = 193,
	CTEEffectDispatch = 194,
	CTEEnergySplash = 195,
	CTEExplosion = 196,
	CTEFireBullets = 197,
	CTEFizz = 198,
	CTEFootprintDecal = 199,
	CTEFoundryHelpers = 200,
	CTEGaussExplosion = 201,
	CTEGlowSprite = 202,
	CTEImpact = 203,
	CTEKillPlayerAttachments = 204,
	CTELargeFunnel = 205,
	CTEMetalSparks = 206,
	CTEMuzzleFlash = 207,
	CTEParticleSystem = 208,
	CTEPhysicsProp = 209,
	CTEPlantBomb = 210,
	CTEPlayerAnimEvent = 211,
	CTEPlayerDecal = 212,
	CTEProjectedDecal = 213,
	CTERadioIcon = 214,
	CTEShatterSurface = 215,
	CTEShowLine = 216,
	CTesla = 217,
	CTESmoke = 218,
	CTESparks = 219,
	CTESprite = 220,
	CTESpriteSpray = 221,
	CTest_ProxyToggle_Networkable = 222,
	CTestTraceline = 223,
	CTEWorldDecal = 224,
	CTriggerPlayerMovement = 225,
	CTriggerSoundOperator = 226,
	CVGuiScreen = 227,
	CVoteController = 228,
	CWaterBullet = 229,
	CWaterLODControl = 230,
	CWeaponAug = 231,
	CWeaponAWP = 232,
	CWeaponBaseItem = 233,
	CWeaponBizon = 234,
	CWeaponCSBase = 235,
	CWeaponCSBaseGun = 236,
	CWeaponCycler = 237,
	CWeaponElite = 238,
	CWeaponFamas = 239,
	CWeaponFiveSeven = 240,
	CWeaponG3SG1 = 241,
	CWeaponGalil = 242,
	CWeaponGalilAR = 243,
	CWeaponGlock = 244,
	CWeaponHKP2000 = 245,
	CWeaponM249 = 246,
	CWeaponM3 = 247,
	CWeaponM4A1 = 248,
	CWeaponMAC10 = 249,
	CWeaponMag7 = 250,
	CWeaponMP5Navy = 251,
	CWeaponMP7 = 252,
	CWeaponMP9 = 253,
	CWeaponNegev = 254,
	CWeaponNOVA = 255,
	CWeaponP228 = 256,
	CWeaponP250 = 257,
	CWeaponP90 = 258,
	CWeaponSawedoff = 259,
	CWeaponSCAR20 = 260,
	CWeaponScout = 261,
	CWeaponSG550 = 262,
	CWeaponSG552 = 263,
	CWeaponSG556 = 264,
	CWeaponShield = 265,
	CWeaponSSG08 = 266,
	CWeaponTaser = 267,
	CWeaponTec9 = 268,
	CWeaponTMP = 269,
	CWeaponUMP45 = 270,
	CWeaponUSP = 271,
	CWeaponXM1014 = 272,
	CWorld = 273,
	CWorldVguiText = 274,
	DustTrail = 275,
	MovieExplosion = 276,
	ParticleSmokeGrenade = 277,
	RocketTrail = 278,
	SmokeTrail = 279,
	SporeExplosion = 280,
	SporeTrail = 281,
};

class ClientClass;

typedef IClientNetworkable*   (*CreateClientClassFn)(int entnum, int serialNum);
typedef IClientNetworkable*   (*CreateEventFn)();

class ClientClass
{
public:
    CreateClientClassFn      pCreateFn;
    CreateEventFn            pCreateEventFn;
    char*                    pNetworkName;
    RecvTable*               pRecvTable;
    ClientClass*             pNext;
    ClassID					 ClassID;
};