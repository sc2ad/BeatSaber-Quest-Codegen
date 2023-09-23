#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace HoudiniEngineUnity {
struct HAPI_EnvIntType;
}
namespace HoudiniEngineUnity {
struct HAPI_ParmInfo;
}
namespace HoudiniEngineUnity {
class HEU_HoudiniAsset;
}
namespace HoudiniEngineUnity {
struct HAPI_MaterialInfo;
}
namespace HoudiniEngineUnity {
struct HAPI_HandleInfo;
}
namespace HoudiniEngineUnity {
struct HAPI_VolumeInfo;
}
namespace HoudiniEngineUnity {
struct HAPI_ParmChoiceInfo;
}
namespace HoudiniEngineUnity {
struct HAPI_SphereInfo;
}
namespace HoudiniEngineUnity {
struct HAPI_StatusVerbosity;
}
namespace HoudiniEngineUnity {
struct HAPI_HandleBindingInfo;
}
namespace HoudiniEngineUnity {
struct HAPI_SessionEnvIntType;
}
namespace HoudiniEngineUnity {
struct HAPI_ObjectInfo;
}
namespace HoudiniEngineUnity {
struct HAPI_PartInfo;
}
namespace HoudiniEngineUnity {
struct HAPI_VolumeTileInfo;
}
namespace HoudiniEngineUnity {
class HEU_SessionData;
}
namespace HoudiniEngineUnity {
struct HAPI_GroupType;
}
namespace HoudiniEngineUnity {
struct SessionMode;
}
namespace HoudiniEngineUnity {
struct HAPI_CurveInfo;
}
namespace HoudiniEngineUnity {
struct HAPI_State;
}
namespace HoudiniEngineUnity {
struct HAPI_NodeInfo;
}
namespace HoudiniEngineUnity {
struct HAPI_StatusType;
}
namespace HoudiniEngineUnity {
struct HAPI_HeightFieldSampling;
}
namespace HoudiniEngineUnity {
struct HAPI_Result;
}
namespace HoudiniEngineUnity {
struct HAPI_CookOptions;
}
namespace HoudiniEngineUnity {
struct HAPI_Transform;
}
namespace HoudiniEngineUnity {
struct HAPI_AttributeOwner;
}
namespace HoudiniEngineUnity {
struct HAPI_BoxInfo;
}
namespace HoudiniEngineUnity {
struct HAPI_GeoInfo;
}
namespace HoudiniEngineUnity {
struct HAPI_AttributeInfo;
}
namespace HoudiniEngineUnity {
struct SessionConnectionState;
}
namespace HoudiniEngineUnity {
struct HAPI_ImageInfo;
}
namespace HoudiniEngineUnity {
struct HAPI_CacheProperty;
}
namespace HoudiniEngineUnity {
struct HAPI_SessionSyncInfo;
}
namespace HoudiniEngineUnity {
struct HAPI_RSTOrder;
}
namespace HoudiniEngineUnity {
struct HAPI_XYZOrder;
}
namespace HoudiniEngineUnity {
struct HAPI_Viewport;
}
namespace HoudiniEngineUnity {
struct HAPI_AssetInfo;
}
namespace HoudiniEngineUnity {
struct HAPI_TransformEuler;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_SessionBase;
}
// Type: HoudiniEngineUnity::HEU_SessionBase
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9722))
// CS Name: HoudiniEngineUnity.HEU_SessionBase
class CORDL_TYPE HEU_SessionBase : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~HEU_SessionBase() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_SessionBase", modifiers: " const&", def_value: None }]
constexpr HEU_SessionBase(HEU_SessionBase const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_SessionBase", modifiers: "&&", def_value: None }]
constexpr HEU_SessionBase(HEU_SessionBase&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_SessionBase(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HEU_SessionBase& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_SessionBase& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_SessionBase& operator=(HEU_SessionBase&& o) noexcept = default;
  constexpr HEU_SessionBase& operator=(HEU_SessionBase const& o) noexcept = default;
                


// Fields

 HoudiniEngineUnity::HEU_SessionData __declspec(property(get=__get__sessionData, put=__set__sessionData))  _sessionData;

constexpr void __set__sessionData(HoudiniEngineUnity::HEU_SessionData value) ;

constexpr HoudiniEngineUnity::HEU_SessionData __get__sessionData() const;

 bool __declspec(property(get=__get__UserNotifiedSessionInvalid_k__BackingField, put=__set__UserNotifiedSessionInvalid_k__BackingField))  _UserNotifiedSessionInvalid_k__BackingField;

constexpr void __set__UserNotifiedSessionInvalid_k__BackingField(bool value) ;

constexpr bool __get__UserNotifiedSessionInvalid_k__BackingField() const;

 ::StringW __declspec(property(get=__get__sessionErrorMsg, put=__set__sessionErrorMsg))  _sessionErrorMsg;

constexpr void __set__sessionErrorMsg(::StringW value) ;

constexpr ::StringW __get__sessionErrorMsg() const;

 bool __declspec(property(get=__get__LogErrorOverride_k__BackingField, put=__set__LogErrorOverride_k__BackingField))  _LogErrorOverride_k__BackingField;

constexpr void __set__LogErrorOverride_k__BackingField(bool value) ;

constexpr bool __get__LogErrorOverride_k__BackingField() const;

 bool __declspec(property(get=__get__ThrowErrorOverride_k__BackingField, put=__set__ThrowErrorOverride_k__BackingField))  _ThrowErrorOverride_k__BackingField;

constexpr void __set__ThrowErrorOverride_k__BackingField(bool value) ;

constexpr bool __get__ThrowErrorOverride_k__BackingField() const;

 HoudiniEngineUnity::HAPI_Result __declspec(property(get=__get__LastCallResultCode_k__BackingField, put=__set__LastCallResultCode_k__BackingField))  _LastCallResultCode_k__BackingField;

constexpr void __set__LastCallResultCode_k__BackingField(HoudiniEngineUnity::HAPI_Result value) ;

constexpr HoudiniEngineUnity::HAPI_Result __get__LastCallResultCode_k__BackingField() const;


// Properties

 bool __declspec(property(get=get_UserNotifiedSessionInvalid, put=set_UserNotifiedSessionInvalid))  UserNotifiedSessionInvalid;

 HoudiniEngineUnity::SessionConnectionState __declspec(property(get=get_ConnectionState, put=set_ConnectionState))  ConnectionState;

 HoudiniEngineUnity::SessionMode __declspec(property(get=get_ThisSessionMode, put=set_ThisSessionMode))  ThisSessionMode;

 bool __declspec(property(get=get_LogErrorOverride, put=set_LogErrorOverride))  LogErrorOverride;

 bool __declspec(property(get=get_ThrowErrorOverride, put=set_ThrowErrorOverride))  ThrowErrorOverride;

 HoudiniEngineUnity::HAPI_Result __declspec(property(get=get_LastCallResultCode, put=set_LastCallResultCode))  LastCallResultCode;


// Methods

/// @brief Method get_UserNotifiedSessionInvalid addr 0x203018c size 0x8 virtual false final false
 bool get_UserNotifiedSessionInvalid() ;

/// @brief Method set_UserNotifiedSessionInvalid addr 0x2030194 size 0xc virtual false final false
 void set_UserNotifiedSessionInvalid(bool value) ;

/// @brief Method get_ConnectionState addr 0x20301a0 size 0x18 virtual false final false
 HoudiniEngineUnity::SessionConnectionState get_ConnectionState() ;

/// @brief Method set_ConnectionState addr 0x20301b8 size 0x10 virtual false final false
 void set_ConnectionState(HoudiniEngineUnity::SessionConnectionState value) ;

/// @brief Method get_ThisSessionMode addr 0x20301c8 size 0x18 virtual false final false
 HoudiniEngineUnity::SessionMode get_ThisSessionMode() ;

/// @brief Method set_ThisSessionMode addr 0x20301e0 size 0x10 virtual false final false
 void set_ThisSessionMode(HoudiniEngineUnity::SessionMode value) ;

/// @brief Method GetSessionErrorMsg addr 0x20301f0 size 0x8 virtual false final false
 ::StringW GetSessionErrorMsg() ;

/// @brief Method get_LogErrorOverride addr 0x20301f8 size 0x8 virtual false final false
 bool get_LogErrorOverride() ;

/// @brief Method set_LogErrorOverride addr 0x2030200 size 0xc virtual false final false
 void set_LogErrorOverride(bool value) ;

/// @brief Method get_ThrowErrorOverride addr 0x203020c size 0x8 virtual false final false
 bool get_ThrowErrorOverride() ;

/// @brief Method set_ThrowErrorOverride addr 0x2030214 size 0xc virtual false final false
 void set_ThrowErrorOverride(bool value) ;

/// @brief Method IsSessionSync addr 0x2030220 size 0x20 virtual false final false
 bool IsSessionSync() ;

/// @brief Method get_LastCallResultCode addr 0x2030250 size 0x8 virtual false final false
 HoudiniEngineUnity::HAPI_Result get_LastCallResultCode() ;

/// @brief Method set_LastCallResultCode addr 0x2030258 size 0x8 virtual false final false
 void set_LastCallResultCode(HoudiniEngineUnity::HAPI_Result value) ;

/// @brief Method GetRegisteredAssetFromID addr 0x2030260 size 0x8 virtual true final false
 HoudiniEngineUnity::HEU_HoudiniAsset GetRegisteredAssetFromID(int32_t id) ;

/// @brief Method IsAssetRegistered addr 0x2030268 size 0x8 virtual true final false
 bool IsAssetRegistered(HoudiniEngineUnity::HEU_HoudiniAsset asset) ;

/// @brief Method RegisterAsset addr 0x2030270 size 0x4 virtual true final false
 void RegisterAsset(HoudiniEngineUnity::HEU_HoudiniAsset asset) ;

/// @brief Method UnregisterAsset addr 0x2030274 size 0x4 virtual true final false
 void UnregisterAsset(int32_t id) ;

/// @brief Method ReregisterOnAwake addr 0x2030278 size 0x4 virtual true final false
 void ReregisterOnAwake(HoudiniEngineUnity::HEU_HoudiniAsset asset) ;

// Ctor Parameters []
explicit HEU_SessionBase() ;

/// @brief Method .ctor addr 0x203027c size 0x20 virtual false final false
 void _ctor() ;

/// @brief Method SetSessionErrorMsg addr 0x203029c size 0x20 virtual true final false
 void SetSessionErrorMsg(::StringW msg, bool bLogError) ;

/// @brief Method SetSessionConnectionErrorMsg addr 0x20302bc size 0x264 virtual true final false
 void SetSessionConnectionErrorMsg(::StringW introMsg, HoudiniEngineUnity::HAPI_Result result, bool bIsHARSRunning, bool bLogError) ;

/// @brief Method SetLibraryErrorMsg addr 0x2030560 size 0xb8 virtual true final false
 void SetLibraryErrorMsg(bool bLogError) ;

/// @brief Method CreateSessionData addr 0x2030618 size 0x8 virtual true final false
 bool CreateSessionData(bool bOverwriteExisting, bool bIsDefaultSession) ;

/// @brief Method CreateInProcessSession addr 0x2030620 size 0x8 virtual true final false
 bool CreateInProcessSession(bool bIsDefaultSession) ;

/// @brief Method CreateThriftSocketSession addr 0x2030628 size 0x8 virtual true final false
 bool CreateThriftSocketSession(bool bIsDefaultSession, ::StringW hostName, int32_t serverPort, bool autoClose, float_t timeout, bool bLogError) ;

/// @brief Method CreateThriftPipeSession addr 0x2030630 size 0x8 virtual true final false
 bool CreateThriftPipeSession(bool bIsDefaultSession, ::StringW pipeName, bool autoClose, float_t timeout, bool bLogError) ;

/// @brief Method CreateCustomSession addr 0x2030638 size 0x8 virtual true final false
 bool CreateCustomSession(bool bIsDefaultSession) ;

/// @brief Method ConnectThriftSocketSession addr 0x2030640 size 0x8 virtual true final false
 bool ConnectThriftSocketSession(bool bIsDefaultSession, ::StringW hostName, int32_t serverPort, bool autoClose, float_t timeout, bool logError, bool autoInitialize) ;

/// @brief Method ConnectThriftPipeSession addr 0x2030648 size 0x8 virtual true final false
 bool ConnectThriftPipeSession(bool bIsDefaultSession, ::StringW pipeName, bool autoClose, float_t timeout, bool logError, bool autoInitialize) ;

/// @brief Method CloseSession addr 0x2030650 size 0x8 virtual true final false
 bool CloseSession() ;

/// @brief Method CheckAndCloseExistingSession addr 0x2030658 size 0x8 virtual true final false
 bool CheckAndCloseExistingSession() ;

/// @brief Method ClearSessionInfo addr 0x2030660 size 0x20 virtual true final false
 void ClearSessionInfo() ;

/// @brief Method SetSessionData addr 0x2030688 size 0x8 virtual false final false
 void SetSessionData(HoudiniEngineUnity::HEU_SessionData sessionData) ;

/// @brief Method GetSessionData addr 0x2030690 size 0x8 virtual false final false
 HoudiniEngineUnity::HEU_SessionData GetSessionData() ;

/// @brief Method GetSessionInfo addr 0x2030698 size 0x40 virtual true final false
 ::StringW GetSessionInfo() ;

/// @brief Method IsSessionValid addr 0x20306d8 size 0x8 virtual true final false
 bool IsSessionValid() ;

/// @brief Method RestartSession addr 0x20306e0 size 0x8 virtual true final false
 bool RestartSession() ;

/// @brief Method GetLastSessionError addr 0x20306e8 size 0x8 virtual false final false
 ::StringW GetLastSessionError() ;

/// @brief Method CheckVersionMatch addr 0x20306f0 size 0x8 virtual true final false
 bool CheckVersionMatch() ;

/// @brief Method InitializeSession addr 0x20306f8 size 0x8 virtual true final false
 bool InitializeSession(HoudiniEngineUnity::HEU_SessionData sessionData) ;

/// @brief Method HandleStatusResult addr 0x2030700 size 0x8 virtual true final false
 bool HandleStatusResult(HoudiniEngineUnity::HAPI_Result result, ::StringW prependMsg, bool bThrowError, bool bLogError) ;

/// @brief Method SetServerEnvString addr 0x2030708 size 0x4 virtual true final false
 void SetServerEnvString(::StringW name, ::StringW value) ;

/// @brief Method GetServerEnvString addr 0x203070c size 0xc virtual true final false
 bool GetServerEnvString(::StringW name, ByRef<::StringW> value) ;

/// @brief Method GetServerEnvVarCount addr 0x2030718 size 0xc virtual true final false
 bool GetServerEnvVarCount(ByRef<int32_t> env_count) ;

/// @brief Method GetCallResult addr 0x2030724 size 0xc virtual true final false
 bool GetCallResult(ByRef<HoudiniEngineUnity::HAPI_Result> result) ;

/// @brief Method GetCookResult addr 0x2030730 size 0xc virtual true final false
 bool GetCookResult(ByRef<HoudiniEngineUnity::HAPI_Result> result) ;

/// @brief Method GetCookState addr 0x203073c size 0xc virtual true final false
 bool GetCookState(ByRef<HoudiniEngineUnity::HAPI_State> state) ;

/// @brief Method GetStatusString addr 0x2030748 size 0x40 virtual true final false
 ::StringW GetStatusString(HoudiniEngineUnity::HAPI_StatusType statusType, HoudiniEngineUnity::HAPI_StatusVerbosity verbosity) ;

/// @brief Method ComposeNodeCookResult addr 0x2030788 size 0x40 virtual true final false
 ::StringW ComposeNodeCookResult(int32_t nodeId, HoudiniEngineUnity::HAPI_StatusVerbosity verbosity) ;

/// @brief Method GetEnvInt addr 0x20307c8 size 0x8 virtual true final false
 int32_t GetEnvInt(HoudiniEngineUnity::HAPI_EnvIntType intType) ;

/// @brief Method GetSessionEnvInt addr 0x20307d0 size 0x8 virtual true final false
 int32_t GetSessionEnvInt(HoudiniEngineUnity::HAPI_SessionEnvIntType intType, bool bLogError) ;

/// @brief Method GetString addr 0x20307d8 size 0x8 virtual true final false
 bool GetString(int32_t stringHandle, ByRef<::StringW> resultString, int32_t bufferLength) ;

/// @brief Method GetStringBufferLength addr 0x20307e0 size 0x8 virtual true final false
 int32_t GetStringBufferLength(int32_t stringHandle) ;

/// @brief Method CheckForSpecificErrors addr 0x20307e8 size 0x8 virtual true final false
 int32_t CheckForSpecificErrors(int32_t nodeID, int32_t errorsToCheck) ;

/// @brief Method GetTime addr 0x20307f0 size 0x8 virtual true final false
 float_t GetTime() ;

/// @brief Method SetTime addr 0x20307f8 size 0x8 virtual true final false
 bool SetTime(float_t time) ;

/// @brief Method GetUseHoudiniTime addr 0x2030800 size 0x8 virtual true final false
 bool GetUseHoudiniTime() ;

/// @brief Method SetUseHoudiniTime addr 0x2030808 size 0x8 virtual true final false
 bool SetUseHoudiniTime(bool enable) ;

/// @brief Method LoadAssetLibraryFromFile addr 0x2030810 size 0xc virtual true final false
 bool LoadAssetLibraryFromFile(::StringW assetPath, bool bAllowOverwrite, ByRef<int32_t> libraryID) ;

/// @brief Method LoadAssetLibraryFromMemory addr 0x203081c size 0xc virtual true final false
 bool LoadAssetLibraryFromMemory(::ArrayW<uint8_t> buffer, bool bAllowOverwrite, ByRef<int32_t> libraryID) ;

/// @brief Method CreateNode addr 0x2030828 size 0x10 virtual true final false
 bool CreateNode(int32_t parentNodeID, ::StringW operatorName, ::StringW nodeLabel, bool bCookOnCreation, ByRef<int32_t> newNodeID) ;

/// @brief Method DeleteNode addr 0x2030838 size 0x4 virtual true final false
 void DeleteNode(int32_t nodeID) ;

/// @brief Method CookNode addr 0x203083c size 0x8 virtual true final false
 bool CookNode(int32_t nodeID, bool bCookTemplatedGeos, bool bSplitGeosByGroup) ;

/// @brief Method CookNodeWithOptions addr 0x2030844 size 0x8 virtual true final false
 bool CookNodeWithOptions(int32_t nodeID, HoudiniEngineUnity::HAPI_CookOptions cookOptions) ;

/// @brief Method RenameNode addr 0x203084c size 0x8 virtual true final false
 bool RenameNode(int32_t nodeID, ::StringW newName) ;

/// @brief Method ConnectNodeInput addr 0x2030854 size 0x8 virtual true final false
 bool ConnectNodeInput(int32_t nodeID, int32_t inputIndex, int32_t nodeIDToConnect, int32_t outputIndex) ;

/// @brief Method DisconnectNodeInput addr 0x203085c size 0x8 virtual true final false
 bool DisconnectNodeInput(int32_t nodeID, int32_t inputIndex, bool bLogError) ;

/// @brief Method QueryNodeInput addr 0x2030864 size 0x10 virtual true final false
 bool QueryNodeInput(int32_t nodeID, int32_t inputIndex, ByRef<int32_t> connectedNodeID, bool bLogError) ;

/// @brief Method GetNodeInputName addr 0x2030874 size 0xc virtual true final false
 bool GetNodeInputName(int32_t nodeID, int32_t inputIndex, ByRef<int32_t> nodeNameIndex) ;

/// @brief Method GetAvailableAssetCount addr 0x2030880 size 0xc virtual true final false
 bool GetAvailableAssetCount(int32_t libraryID, ByRef<int32_t> assetCount) ;

/// @brief Method GetAvailableAssets addr 0x203088c size 0x8 virtual true final false
 bool GetAvailableAssets(int32_t libraryID, ByRef<::ArrayW<int32_t>> assetNames, int32_t assetCount) ;

/// @brief Method GetAssetInfo addr 0x2030894 size 0x8 virtual true final false
 bool GetAssetInfo(int32_t nodeID, ByRef<HoudiniEngineUnity::HAPI_AssetInfo> assetInfo) ;

/// @brief Method GetNodeInfo addr 0x203089c size 0x8 virtual true final false
 bool GetNodeInfo(int32_t nodeID, ByRef<HoudiniEngineUnity::HAPI_NodeInfo> nodeInfo, bool bLogError) ;

/// @brief Method GetNodePath addr 0x20308a4 size 0xc virtual true final false
 bool GetNodePath(int32_t nodeID, int32_t relativeNodeID, ByRef<::StringW> path) ;

/// @brief Method IsNodeValid addr 0x20308b0 size 0x8 virtual true final false
 bool IsNodeValid(int32_t nodeID, int32_t uniqueNodeID) ;

/// @brief Method ComposeChildNodeList addr 0x20308b8 size 0x8 virtual true final false
 bool ComposeChildNodeList(int32_t parentNodeID, int32_t nodeTypeFilter, int32_t nodeFlagFilter, bool bRecursive, ByRef<int32_t> count) ;

/// @brief Method GetComposedChildNodeList addr 0x20308c0 size 0x8 virtual true final false
 bool GetComposedChildNodeList(int32_t parentNodeID, ::ArrayW<int32_t> childNodeIDs, int32_t count) ;

/// @brief Method LoadHIPFile addr 0x20308c8 size 0x8 virtual true final false
 bool LoadHIPFile(::StringW fileName, bool bCookOnLoad) ;

/// @brief Method SaveHIPFile addr 0x20308d0 size 0x8 virtual true final false
 bool SaveHIPFile(::StringW fileName, bool bLockNodes) ;

/// @brief Method GetObjectInfo addr 0x20308d8 size 0x8 virtual true final false
 bool GetObjectInfo(int32_t nodeID, ByRef<HoudiniEngineUnity::HAPI_ObjectInfo> objectInfo) ;

/// @brief Method GetObjectTransform addr 0x20308e0 size 0x8 virtual true final false
 bool GetObjectTransform(int32_t nodeID, int32_t relativeToNodeID, HoudiniEngineUnity::HAPI_RSTOrder rstOrder, ByRef<HoudiniEngineUnity::HAPI_Transform> hapiTransform) ;

/// @brief Method SetObjectTransform addr 0x20308e8 size 0x8 virtual true final false
 bool SetObjectTransform(int32_t nodeID, ByRef<HoudiniEngineUnity::HAPI_TransformEuler> hapiTransform) ;

/// @brief Method ComposeObjectList addr 0x20308f0 size 0xc virtual true final false
 bool ComposeObjectList(int32_t nodeID, ByRef<int32_t> objectCount) ;

/// @brief Method GetComposedObjectList addr 0x20308fc size 0x8 virtual true final false
 bool GetComposedObjectList(int32_t nodeID, ByRef<::ArrayW<HoudiniEngineUnity::HAPI_ObjectInfo>> objectInfos, int32_t start, int32_t length) ;

/// @brief Method GetComposedObjectTransforms addr 0x2030904 size 0x8 virtual true final false
 bool GetComposedObjectTransforms(int32_t nodeID, HoudiniEngineUnity::HAPI_RSTOrder rstOrder, ByRef<::ArrayW<HoudiniEngineUnity::HAPI_Transform>> transforms, int32_t start, int32_t length) ;

/// @brief Method GetDisplayGeoInfo addr 0x203090c size 0x8 virtual true final false
 bool GetDisplayGeoInfo(int32_t nodeID, ByRef<HoudiniEngineUnity::HAPI_GeoInfo> geoInfo, bool bLogError) ;

/// @brief Method GetGeoInfo addr 0x2030914 size 0x8 virtual true final false
 bool GetGeoInfo(int32_t nodeID, ByRef<HoudiniEngineUnity::HAPI_GeoInfo> geoInfo, bool bLogError) ;

/// @brief Method GetPartInfo addr 0x203091c size 0x8 virtual true final false
 bool GetPartInfo(int32_t nodeID, int32_t partID, ByRef<HoudiniEngineUnity::HAPI_PartInfo> partInfo) ;

/// @brief Method GetAttributeInfo addr 0x2030924 size 0x8 virtual true final false
 bool GetAttributeInfo(int32_t nodeID, int32_t partID, ::StringW name, HoudiniEngineUnity::HAPI_AttributeOwner owner, ByRef<HoudiniEngineUnity::HAPI_AttributeInfo> attributeInfo) ;

/// @brief Method GetAttributeNames addr 0x203092c size 0x8 virtual true final false
 bool GetAttributeNames(int32_t nodeID, int32_t partID, HoudiniEngineUnity::HAPI_AttributeOwner owner, ByRef<::ArrayW<::StringW>> attributeNames, int32_t count) ;

/// @brief Method GetAttributeStringData addr 0x2030934 size 0x8 virtual true final false
 bool GetAttributeStringData(int32_t nodeID, int32_t partID, ::StringW name, ByRef<HoudiniEngineUnity::HAPI_AttributeInfo> attributeInfo, ByRef<::ArrayW<int32_t>> dataArray, int32_t start, int32_t length) ;

/// @brief Method GetAttributeFloatData addr 0x203093c size 0x8 virtual true final false
 bool GetAttributeFloatData(int32_t nodeID, int32_t partID, ::StringW name, ByRef<HoudiniEngineUnity::HAPI_AttributeInfo> attributeInfo, ByRef<::ArrayW<float_t>> data, int32_t start, int32_t length) ;

/// @brief Method GetAttributeFloat64Data addr 0x2030944 size 0x8 virtual true final false
 bool GetAttributeFloat64Data(int32_t nodeID, int32_t partID, ::StringW name, ByRef<HoudiniEngineUnity::HAPI_AttributeInfo> attributeInfo, ByRef<::ArrayW<double_t>> data, int32_t start, int32_t length) ;

/// @brief Method GetAttributeIntData addr 0x203094c size 0x8 virtual true final false
 bool GetAttributeIntData(int32_t nodeID, int32_t partID, ::StringW name, ByRef<HoudiniEngineUnity::HAPI_AttributeInfo> attributeInfo, ByRef<::ArrayW<int32_t>> data, int32_t start, int32_t length) ;

/// @brief Method GetAttributeUInt8Data addr 0x2030954 size 0x8 virtual true final false
 bool GetAttributeUInt8Data(int32_t nodeID, int32_t partID, ::StringW name, ByRef<HoudiniEngineUnity::HAPI_AttributeInfo> attributeInfo, ByRef<::ArrayW<uint8_t>> data, int32_t start, int32_t length) ;

/// @brief Method GetAttributeInt8Data addr 0x203095c size 0x8 virtual true final false
 bool GetAttributeInt8Data(int32_t nodeID, int32_t partID, ::StringW name, ByRef<HoudiniEngineUnity::HAPI_AttributeInfo> attributeInfo, ByRef<::ArrayW<int8_t>> data, int32_t start, int32_t length) ;

/// @brief Method GetAttributeInt16Data addr 0x2030964 size 0x8 virtual true final false
 bool GetAttributeInt16Data(int32_t nodeID, int32_t partID, ::StringW name, ByRef<HoudiniEngineUnity::HAPI_AttributeInfo> attributeInfo, ByRef<::ArrayW<int16_t>> data, int32_t start, int32_t length) ;

/// @brief Method GetAttributeInt64Data addr 0x203096c size 0x8 virtual true final false
 bool GetAttributeInt64Data(int32_t nodeID, int32_t partID, ::StringW name, ByRef<HoudiniEngineUnity::HAPI_AttributeInfo> attributeInfo, ByRef<::ArrayW<int64_t>> data, int32_t start, int32_t length) ;

/// @brief Method GetGroupNames addr 0x2030974 size 0x8 virtual true final false
 bool GetGroupNames(int32_t nodeID, HoudiniEngineUnity::HAPI_GroupType groupType, ByRef<::ArrayW<int32_t>> names, int32_t count) ;

/// @brief Method GetGroupMembership addr 0x203097c size 0x8 virtual true final false
 bool GetGroupMembership(int32_t nodeID, int32_t partID, HoudiniEngineUnity::HAPI_GroupType groupType, ::StringW groupName, ByRef<bool> membershipArrayAllEqual, ByRef<::ArrayW<int32_t>> membershipArray, int32_t start, int32_t length) ;

/// @brief Method GetGroupCountOnPackedInstancePart addr 0x2030984 size 0x10 virtual true final false
 bool GetGroupCountOnPackedInstancePart(int32_t nodeID, int32_t partID, ByRef<int32_t> pointGroupCount, ByRef<int32_t> primitiveGroupCount) ;

/// @brief Method GetGroupNamesOnPackedInstancePart addr 0x2030994 size 0x8 virtual true final false
 bool GetGroupNamesOnPackedInstancePart(int32_t nodeID, int32_t partID, HoudiniEngineUnity::HAPI_GroupType groupType, ByRef<::ArrayW<int32_t>> groupNamesArray, int32_t groupCount) ;

/// @brief Method GetGroupMembershipOnPackedInstancePart addr 0x203099c size 0x8 virtual true final false
 bool GetGroupMembershipOnPackedInstancePart(int32_t nodeID, int32_t partID, HoudiniEngineUnity::HAPI_GroupType groupType, ::StringW groupName, ByRef<bool> membershipArrayAllEqual, ByRef<::ArrayW<int32_t>> membershipArray, int32_t start, int32_t length) ;

/// @brief Method GetInstancedPartIds addr 0x20309a4 size 0x8 virtual true final false
 bool GetInstancedPartIds(int32_t nodeID, int32_t partID, ByRef<::ArrayW<int32_t>> instancedPartsArray, int32_t start, int32_t length) ;

/// @brief Method GetInstancerPartTransforms addr 0x20309ac size 0x8 virtual true final false
 bool GetInstancerPartTransforms(int32_t nodeID, int32_t partID, HoudiniEngineUnity::HAPI_RSTOrder rstOrder, ByRef<::ArrayW<HoudiniEngineUnity::HAPI_Transform>> transformsArray, int32_t start, int32_t length) ;

/// @brief Method GetInstanceTransformsOnPart addr 0x20309b4 size 0x8 virtual true final false
 bool GetInstanceTransformsOnPart(int32_t nodeID, int32_t partID, HoudiniEngineUnity::HAPI_RSTOrder rstOrder, ByRef<::ArrayW<HoudiniEngineUnity::HAPI_Transform>> transformsArray, int32_t start, int32_t length) ;

/// @brief Method GetInstancedObjectIds addr 0x20309bc size 0x8 virtual true final false
 bool GetInstancedObjectIds(int32_t nodeID, ByRef<::ArrayW<int32_t>> instanced_node_id_array, int32_t start, int32_t length) ;

/// @brief Method GetFaceCounts addr 0x20309c4 size 0x8 virtual true final false
 bool GetFaceCounts(int32_t nodeID, int32_t partID, ByRef<::ArrayW<int32_t>> faceCounts, int32_t start, int32_t length) ;

/// @brief Method GetFaceCounts addr 0x20309cc size 0x8 virtual true final false
 bool GetFaceCounts(int32_t nodeID, int32_t partID, ByRef<::ArrayW<int32_t>> faceCounts, int32_t start, int32_t length, bool bLogError) ;

/// @brief Method GetVertexList addr 0x20309d4 size 0x8 virtual true final false
 bool GetVertexList(int32_t nodeID, int32_t partID, ByRef<::ArrayW<int32_t>> vertexList, int32_t start, int32_t length) ;

/// @brief Method GetBoxInfo addr 0x20309dc size 0x8 virtual true final false
 bool GetBoxInfo(int32_t nodeID, int32_t partID, ByRef<HoudiniEngineUnity::HAPI_BoxInfo> boxInfo) ;

/// @brief Method GetSphereInfo addr 0x20309e4 size 0x8 virtual true final false
 bool GetSphereInfo(int32_t nodeID, int32_t partID, ByRef<HoudiniEngineUnity::HAPI_SphereInfo> sphereInfo) ;

/// @brief Method GetCurveInfo addr 0x20309ec size 0x8 virtual true final false
 bool GetCurveInfo(int32_t nodeID, int32_t partID, ByRef<HoudiniEngineUnity::HAPI_CurveInfo> curveInfo) ;

/// @brief Method GetCurveCounts addr 0x20309f4 size 0x8 virtual true final false
 bool GetCurveCounts(int32_t nodeID, int32_t partID, ByRef<::ArrayW<int32_t>> counts, int32_t start, int32_t length) ;

/// @brief Method GetCurveOrders addr 0x20309fc size 0x8 virtual true final false
 bool GetCurveOrders(int32_t nodeID, int32_t partID, ByRef<::ArrayW<int32_t>> orders, int32_t start, int32_t length) ;

/// @brief Method GetCurveKnots addr 0x2030a04 size 0x8 virtual true final false
 bool GetCurveKnots(int32_t nodeID, int32_t partID, ByRef<::ArrayW<float_t>> knots, int32_t start, int32_t length) ;

/// @brief Method SetPartInfo addr 0x2030a0c size 0x8 virtual true final false
 bool SetPartInfo(int32_t nodeID, int32_t partID, ByRef<HoudiniEngineUnity::HAPI_PartInfo> partInfo) ;

/// @brief Method SetFaceCount addr 0x2030a14 size 0x8 virtual true final false
 bool SetFaceCount(int32_t nodeID, int32_t partID, ::ArrayW<int32_t> faceCounts, int32_t start, int32_t length) ;

/// @brief Method SetVertexList addr 0x2030a1c size 0x8 virtual true final false
 bool SetVertexList(int32_t nodeID, int32_t partID, ::ArrayW<int32_t> vertexList, int32_t start, int32_t length) ;

/// @brief Method SetAttributeIntData addr 0x2030a24 size 0x8 virtual true final false
 bool SetAttributeIntData(int32_t nodeID, int32_t partID, ::StringW name, ByRef<HoudiniEngineUnity::HAPI_AttributeInfo> attrInfo, ::ArrayW<int32_t> data, int32_t start, int32_t length) ;

/// @brief Method SetAttributeInt8Data addr 0x2030a2c size 0x8 virtual true final false
 bool SetAttributeInt8Data(int32_t nodeID, int32_t partID, ::StringW name, ByRef<HoudiniEngineUnity::HAPI_AttributeInfo> attrInfo, ::ArrayW<int8_t> data, int32_t start, int32_t length) ;

/// @brief Method SetAttributeInt16Data addr 0x2030a34 size 0x8 virtual true final false
 bool SetAttributeInt16Data(int32_t nodeID, int32_t partID, ::StringW name, ByRef<HoudiniEngineUnity::HAPI_AttributeInfo> attrInfo, ::ArrayW<int16_t> data, int32_t start, int32_t length) ;

/// @brief Method SetAttributeInt64Data addr 0x2030a3c size 0x8 virtual true final false
 bool SetAttributeInt64Data(int32_t nodeID, int32_t partID, ::StringW name, ByRef<HoudiniEngineUnity::HAPI_AttributeInfo> attrInfo, ::ArrayW<int64_t> data, int32_t start, int32_t length) ;

/// @brief Method SetAttributeFloatData addr 0x2030a44 size 0x8 virtual true final false
 bool SetAttributeFloatData(int32_t nodeID, int32_t partID, ::StringW name, ByRef<HoudiniEngineUnity::HAPI_AttributeInfo> attrInfo, ::ArrayW<float_t> data, int32_t start, int32_t length) ;

/// @brief Method SetAttributeStringData addr 0x2030a4c size 0x8 virtual true final false
 bool SetAttributeStringData(int32_t nodeID, int32_t partID, ::StringW name, ByRef<HoudiniEngineUnity::HAPI_AttributeInfo> attrInfo, ::ArrayW<::StringW> data, int32_t start, int32_t length) ;

/// @brief Method AddAttribute addr 0x2030a54 size 0x8 virtual true final false
 bool AddAttribute(int32_t nodeID, int32_t partID, ::StringW name, ByRef<HoudiniEngineUnity::HAPI_AttributeInfo> attrInfo) ;

/// @brief Method AddGroup addr 0x2030a5c size 0x8 virtual true final false
 bool AddGroup(int32_t nodeID, int32_t partID, HoudiniEngineUnity::HAPI_GroupType groupType, ::StringW groupName) ;

/// @brief Method DeleteGroup addr 0x2030a64 size 0x8 virtual true final false
 bool DeleteGroup(int32_t nodeID, int32_t partID, HoudiniEngineUnity::HAPI_GroupType groupType, ::StringW groupName) ;

/// @brief Method SetGroupMembership addr 0x2030a6c size 0x8 virtual true final false
 bool SetGroupMembership(int32_t nodeID, int32_t partID, HoudiniEngineUnity::HAPI_GroupType groupType, ::StringW groupName, ByRef<::ArrayW<int32_t>> membershipArray, int32_t start, int32_t length) ;

/// @brief Method CommitGeo addr 0x2030a74 size 0x8 virtual true final false
 bool CommitGeo(int32_t nodeID) ;

/// @brief Method RevertGeo addr 0x2030a7c size 0x8 virtual true final false
 bool RevertGeo(int32_t nodeID) ;

/// @brief Method SetCurveInfo addr 0x2030a84 size 0x8 virtual true final false
 bool SetCurveInfo(int32_t nodeID, int32_t partID, ByRef<HoudiniEngineUnity::HAPI_CurveInfo> curveInfo) ;

/// @brief Method SetCurveCounts addr 0x2030a8c size 0x8 virtual true final false
 bool SetCurveCounts(int32_t nodeID, int32_t partID, ::ArrayW<int32_t> counts, int32_t start, int32_t length) ;

/// @brief Method SetCurveOrders addr 0x2030a94 size 0x8 virtual true final false
 bool SetCurveOrders(int32_t nodeID, int32_t partID, ::ArrayW<int32_t> orders, int32_t start, int32_t length) ;

/// @brief Method SetCurveKnots addr 0x2030a9c size 0x8 virtual true final false
 bool SetCurveKnots(int32_t nodeID, int32_t partID, ::ArrayW<float_t> knots, int32_t start, int32_t length) ;

/// @brief Method GetMaterialOnPart addr 0x2030aa4 size 0x8 virtual true final false
 bool GetMaterialOnPart(int32_t nodeID, int32_t partID, ByRef<HoudiniEngineUnity::HAPI_MaterialInfo> materialInfo) ;

/// @brief Method GetMaterialNodeIDsOnFaces addr 0x2030aac size 0x8 virtual true final false
 bool GetMaterialNodeIDsOnFaces(int32_t nodeID, int32_t partID, ByRef<bool> bSingleFaceMaterial, ByRef<::ArrayW<int32_t>> materialNodeIDs, int32_t faceCount) ;

/// @brief Method GetMaterialInfo addr 0x2030ab4 size 0x8 virtual true final false
 bool GetMaterialInfo(int32_t materialNodeID, ByRef<HoudiniEngineUnity::HAPI_MaterialInfo> materialInfo, bool bLogError) ;

/// @brief Method GetImageInfo addr 0x2030abc size 0x8 virtual true final false
 bool GetImageInfo(int32_t materialNodeID, ByRef<HoudiniEngineUnity::HAPI_ImageInfo> imageInfo) ;

/// @brief Method SetImageInfo addr 0x2030ac4 size 0x8 virtual true final false
 bool SetImageInfo(int32_t materialNodeID, ByRef<HoudiniEngineUnity::HAPI_ImageInfo> imageInfo) ;

/// @brief Method RenderTextureToImage addr 0x2030acc size 0x8 virtual true final false
 bool RenderTextureToImage(int32_t materialNodeID, int32_t parmID, bool bLogError) ;

/// @brief Method RenderCOPToImage addr 0x2030ad4 size 0x8 virtual true final false
 bool RenderCOPToImage(int32_t copNodeID) ;

/// @brief Method ExtractImageToMemory addr 0x2030adc size 0x54 virtual true final false
 bool ExtractImageToMemory(int32_t nodeID, ::StringW fileFormat, ::StringW imagePlanes, ByRef<::ArrayW<uint8_t>> buffer) ;

/// @brief Method GetImagePlanes addr 0x2030b30 size 0x4c virtual true final false
 bool GetImagePlanes(int32_t nodeID, ByRef<::ArrayW<int32_t>> imagePlanes, int32_t numImagePlanes) ;

/// @brief Method ExtractImageToFile addr 0x2030b7c size 0xc virtual true final false
 bool ExtractImageToFile(int32_t nodeID, ::StringW fileFormat, ::StringW imagePlanes, ::StringW destinationFolderPath, ByRef<::StringW> destinationFilePath) ;

/// @brief Method GetParams addr 0x2030b88 size 0x8 virtual true final false
 bool GetParams(int32_t nodeID, ByRef<::ArrayW<HoudiniEngineUnity::HAPI_ParmInfo>> parmInfos, int32_t start, int32_t length) ;

/// @brief Method GetParmTagName addr 0x2030b90 size 0xc virtual true final false
 bool GetParmTagName(int32_t nodeID, int32_t parmID, int32_t tagIndex, ByRef<int32_t> tagName) ;

/// @brief Method GetParmTagValue addr 0x2030b9c size 0xc virtual true final false
 bool GetParmTagValue(int32_t nodeID, int32_t parmID, ::StringW tagName, ByRef<int32_t> tagValue) ;

/// @brief Method ParmHasTag addr 0x2030ba8 size 0x8 virtual true final false
 bool ParmHasTag(int32_t nodeID, int32_t parmID, ::StringW tagName, ByRef<bool> hasTag) ;

/// @brief Method GetParamIntValues addr 0x2030bb0 size 0x8 virtual true final false
 bool GetParamIntValues(int32_t nodeID, ByRef<::ArrayW<int32_t>> values, int32_t start, int32_t length) ;

/// @brief Method GetParamIntValue addr 0x2030bb8 size 0xc virtual true final false
 bool GetParamIntValue(int32_t nodeID, ::StringW parmName, int32_t index, ByRef<int32_t> value) ;

/// @brief Method GetParamFloatValues addr 0x2030bc4 size 0x8 virtual true final false
 bool GetParamFloatValues(int32_t nodeID, ByRef<::ArrayW<float_t>> values, int32_t start, int32_t length) ;

/// @brief Method GetParamFloatValue addr 0x2030bcc size 0xc virtual true final false
 bool GetParamFloatValue(int32_t nodeID, ::StringW parmName, int32_t index, ByRef<float_t> value) ;

/// @brief Method GetParamStringValues addr 0x2030bd8 size 0x8 virtual true final false
 bool GetParamStringValues(int32_t nodeID, ByRef<::ArrayW<int32_t>> values, int32_t start, int32_t length) ;

/// @brief Method GetParamStringValue addr 0x2030be0 size 0xc virtual true final false
 bool GetParamStringValue(int32_t nodeID, ::StringW parmName, int32_t index, ByRef<int32_t> value) ;

/// @brief Method GetParamNodeValue addr 0x2030bec size 0x10 virtual true final false
 bool GetParamNodeValue(int32_t nodeID, ::StringW paramName, ByRef<int32_t> nodeValue) ;

/// @brief Method GetParamChoiceValues addr 0x2030bfc size 0x8 virtual true final false
 bool GetParamChoiceValues(int32_t nodeID, ByRef<::ArrayW<HoudiniEngineUnity::HAPI_ParmChoiceInfo>> values, int32_t start, int32_t length) ;

/// @brief Method SetParamIntValues addr 0x2030c04 size 0x8 virtual true final false
 bool SetParamIntValues(int32_t nodeID, ByRef<::ArrayW<int32_t>> values, int32_t start, int32_t length) ;

/// @brief Method SetParamIntValue addr 0x2030c0c size 0x8 virtual true final false
 bool SetParamIntValue(int32_t nodeID, ::StringW paramName, int32_t index, int32_t value) ;

/// @brief Method SetParamFloatValues addr 0x2030c14 size 0x8 virtual true final false
 bool SetParamFloatValues(int32_t nodeID, ByRef<::ArrayW<float_t>> values, int32_t start, int32_t length) ;

/// @brief Method SetParamFloatValue addr 0x2030c1c size 0x8 virtual true final false
 bool SetParamFloatValue(int32_t nodeID, ::StringW paramName, int32_t index, float_t value) ;

/// @brief Method SetParamStringValue addr 0x2030c24 size 0x8 virtual true final false
 bool SetParamStringValue(int32_t nodeID, ::StringW strValue, int32_t parmID, int32_t index) ;

/// @brief Method SetParamStringValue addr 0x2030c2c size 0x8 virtual true final false
 bool SetParamStringValue(int32_t nodeID, ::StringW parmName, ::StringW parmValue, int32_t index) ;

/// @brief Method SetParamNodeValue addr 0x2030c34 size 0x8 virtual true final false
 bool SetParamNodeValue(int32_t nodeID, ::StringW paramName, int32_t nodeValueID) ;

/// @brief Method InsertMultiparmInstance addr 0x2030c3c size 0x8 virtual true final false
 bool InsertMultiparmInstance(int32_t nodeID, int32_t parmID, int32_t instancePosition) ;

/// @brief Method RemoveMultiParmInstance addr 0x2030c44 size 0x8 virtual true final false
 bool RemoveMultiParmInstance(int32_t nodeID, int32_t parmID, int32_t instancePosition) ;

/// @brief Method GetParmWithTag addr 0x2030c4c size 0x8 virtual true final false
 bool GetParmWithTag(int32_t nodeID, ::StringW tagName, ByRef<int32_t> parmID) ;

/// @brief Method RevertParmToDefault addr 0x2030c54 size 0x8 virtual true final false
 bool RevertParmToDefault(int32_t nodeID, ::StringW parm_name, int32_t index) ;

/// @brief Method RevertParmToDefaults addr 0x2030c5c size 0x8 virtual true final false
 bool RevertParmToDefaults(int32_t nodeID, ::StringW parm_name) ;

/// @brief Method GetParmIDFromName addr 0x2030c64 size 0x10 virtual true final false
 bool GetParmIDFromName(int32_t nodeID, ::StringW parmName, ByRef<int32_t> parmID) ;

/// @brief Method GetParmStringValue addr 0x2030c74 size 0xc virtual true final false
 bool GetParmStringValue(int32_t nodeID, ::StringW parmName, int32_t index, bool evaluate, ByRef<int32_t> value) ;

/// @brief Method CreateInputNode addr 0x2030c80 size 0x10 virtual true final false
 bool CreateInputNode(ByRef<int32_t> nodeID, ::StringW name) ;

/// @brief Method CreateHeightFieldInput addr 0x2030c90 size 0x20 virtual true final false
 bool CreateHeightFieldInput(int32_t parentNodeID, ::StringW name, int32_t xSize, int32_t ySize, float_t voxelSize, HoudiniEngineUnity::HAPI_HeightFieldSampling sampling, ByRef<int32_t> heightfieldNodeID, ByRef<int32_t> heightNodeID, ByRef<int32_t> maskNodeID, ByRef<int32_t> mergeNodeID) ;

/// @brief Method CreateHeightfieldInputVolumeNode addr 0x2030cb0 size 0x10 virtual true final false
 bool CreateHeightfieldInputVolumeNode(int32_t parentNodeID, ByRef<int32_t> newNodeID, ::StringW name, int32_t xSize, int32_t ySize, float_t voxelSize) ;

/// @brief Method GetPreset addr 0x2030cc0 size 0x54 virtual true final false
 bool GetPreset(int32_t nodeID, ByRef<::ArrayW<uint8_t>> presetData) ;

/// @brief Method SetPreset addr 0x2030d14 size 0x8 virtual true final false
 bool SetPreset(int32_t nodeID, ::ArrayW<uint8_t> presetData) ;

/// @brief Method GetVolumeInfo addr 0x2030d1c size 0x8 virtual true final false
 bool GetVolumeInfo(int32_t nodeID, int32_t partID, ByRef<HoudiniEngineUnity::HAPI_VolumeInfo> volumeInfo) ;

/// @brief Method GetHeightFieldData addr 0x2030d24 size 0x8 virtual true final false
 bool GetHeightFieldData(int32_t nodeID, int32_t partID, ::ArrayW<float_t> valuesArray, int32_t start, int32_t length) ;

/// @brief Method SetVolumeInfo addr 0x2030d2c size 0x8 virtual true final false
 bool SetVolumeInfo(int32_t nodeID, int32_t partID, ByRef<HoudiniEngineUnity::HAPI_VolumeInfo> volumeInfo) ;

/// @brief Method SetVolumeTileFloatData addr 0x2030d34 size 0x4c virtual true final false
 bool SetVolumeTileFloatData(int32_t nodeID, int32_t partID, ByRef<HoudiniEngineUnity::HAPI_VolumeTileInfo> tileInfo, ::ArrayW<float_t> valuesArray, int32_t length) ;

/// @brief Method GetVolumeBounds addr 0x2030d80 size 0x34 virtual true final false
 bool GetVolumeBounds(int32_t nodeID, int32_t partID, ByRef<float_t> x_min, ByRef<float_t> y_min, ByRef<float_t> z_min, ByRef<float_t> x_max, ByRef<float_t> y_max, ByRef<float_t> z_max, ByRef<float_t> x_center, ByRef<float_t> y_center, ByRef<float_t> z_center) ;

/// @brief Method SetHeightFieldData addr 0x2030db4 size 0x8 virtual true final false
 bool SetHeightFieldData(int32_t nodeID, int32_t partID, ::StringW name, ::ArrayW<float_t> valuesArray, int32_t start, int32_t length) ;

/// @brief Method GetActiveCacheCount addr 0x2030dbc size 0xc virtual true final false
 bool GetActiveCacheCount(ByRef<int32_t> activeCacheCount) ;

/// @brief Method GetActiveCacheNames addr 0x2030dc8 size 0x8 virtual true final false
 bool GetActiveCacheNames(ByRef<::ArrayW<int32_t>> cacheNamesArray, int32_t activeCacheCount) ;

/// @brief Method GetCacheProperty addr 0x2030dd0 size 0xc virtual true final false
 bool GetCacheProperty(::StringW cacheName, HoudiniEngineUnity::HAPI_CacheProperty cacheProperty, ByRef<int32_t> propertyValue) ;

/// @brief Method SetCacheProperty addr 0x2030ddc size 0x8 virtual true final false
 bool SetCacheProperty(::StringW cacheName, HoudiniEngineUnity::HAPI_CacheProperty cacheProperty, int32_t propertyValue) ;

/// @brief Method SaveGeoToFile addr 0x2030de4 size 0x8 virtual true final false
 bool SaveGeoToFile(int32_t nodeID, ::StringW fileName) ;

/// @brief Method LoadGeoFromFile addr 0x2030dec size 0x8 virtual true final false
 bool LoadGeoFromFile(int32_t nodeID, ::StringW file_name) ;

/// @brief Method SaveNodeToFile addr 0x2030df4 size 0x8 virtual true final false
 bool SaveNodeToFile(int32_t nodeID, ::StringW fileName) ;

/// @brief Method LoadNodeFromFile addr 0x2030dfc size 0x10 virtual true final false
 bool LoadNodeFromFile(::StringW file_name, int32_t parentNodeID, ::StringW nodeLabel, bool cook_on_load, ByRef<int32_t> newNodeID) ;

/// @brief Method GetGeoSize addr 0x2030e0c size 0xc virtual true final false
 bool GetGeoSize(int32_t nodeID, ::StringW format, ByRef<int32_t> size) ;

/// @brief Method GetHandleInfo addr 0x2030e18 size 0x8 virtual true final false
 bool GetHandleInfo(int32_t nodeID, ByRef<::ArrayW<HoudiniEngineUnity::HAPI_HandleInfo>> handleInfos, int32_t start, int32_t length) ;

/// @brief Method GetHandleBindingInfo addr 0x2030e20 size 0x8 virtual true final false
 bool GetHandleBindingInfo(int32_t nodeID, int32_t handleIndex, ByRef<::ArrayW<HoudiniEngineUnity::HAPI_HandleBindingInfo>> handleBindingInfos, int32_t start, int32_t length) ;

/// @brief Method ConvertTransform addr 0x2030e28 size 0x14 virtual true final false
 bool ConvertTransform(ByRef<HoudiniEngineUnity::HAPI_TransformEuler> inTransform, HoudiniEngineUnity::HAPI_RSTOrder RSTOrder, HoudiniEngineUnity::HAPI_XYZOrder ROTOrder, ByRef<HoudiniEngineUnity::HAPI_TransformEuler> outTransform) ;

/// @brief Method GetTotalCookCount addr 0x2030e3c size 0xc virtual true final false
 bool GetTotalCookCount(int32_t nodeID, int32_t nodeTypeFilter, int32_t nodeFlagFilter, bool includeChildren, ByRef<int32_t> count) ;

/// @brief Method SetSessionSync addr 0x2030e48 size 0x8 virtual true final false
 bool SetSessionSync(bool enable) ;

/// @brief Method GetViewport addr 0x2030e50 size 0x8 virtual true final false
 bool GetViewport(ByRef<HoudiniEngineUnity::HAPI_Viewport> viewport) ;

/// @brief Method SetViewport addr 0x2030e58 size 0x8 virtual true final false
 bool SetViewport(ByRef<HoudiniEngineUnity::HAPI_Viewport> viewport) ;

/// @brief Method GetSessionSyncInfo addr 0x2030e60 size 0x8 virtual true final false
 bool GetSessionSyncInfo(ByRef<HoudiniEngineUnity::HAPI_SessionSyncInfo> syncInfo) ;

/// @brief Method SetSessionSyncInfo addr 0x2030e68 size 0x8 virtual true final false
 bool SetSessionSyncInfo(ByRef<HoudiniEngineUnity::HAPI_SessionSyncInfo> syncInfo) ;

/// @brief Method SetNodeDisplay addr 0x2030e70 size 0x8 virtual true final false
 bool SetNodeDisplay(int32_t node_id, int32_t onOff) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(HoudiniEngineUnity::HEU_SessionBase);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_SessionBase, "HoudiniEngineUnity", "HEU_SessionBase");
