#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace HoudiniEngineUnity {
struct HAPI_Transform;
}
namespace HoudiniEngineUnity {
class HoudiniEngineUnity__HEU_SessionManager__CreateSessionFromTypeDelegate;
}
namespace HoudiniEngineUnity {
struct HAPI_GroupType;
}
namespace System {
class Type;
}
namespace HoudiniEngineUnity {
class HEU_SessionBase;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace HoudiniEngineUnity {
struct HAPI_RSTOrder;
}
namespace HoudiniEngineUnity {
struct HAPI_ObjectInfo;
}
namespace HoudiniEngineUnity {
struct HAPI_License;
}
namespace HoudiniEngineUnity {
class HEU_SessionData;
}
namespace System {
class IAsyncResult;
}
namespace System {
class AsyncCallback;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_SessionManager;
}
namespace HoudiniEngineUnity {
class HoudiniEngineUnity__HEU_SessionManager__CreateSessionFromTypeDelegate;
}
// Type: ::CreateSessionFromTypeDelegate
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9727))
// CS Name: HoudiniEngineUnity.HEU_SessionManager::CreateSessionFromTypeDelegate
class CORDL_TYPE HoudiniEngineUnity__HEU_SessionManager__CreateSessionFromTypeDelegate : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~HoudiniEngineUnity__HEU_SessionManager__CreateSessionFromTypeDelegate() = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_SessionManager__CreateSessionFromTypeDelegate", modifiers: " const&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_SessionManager__CreateSessionFromTypeDelegate(HoudiniEngineUnity__HEU_SessionManager__CreateSessionFromTypeDelegate const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_SessionManager__CreateSessionFromTypeDelegate", modifiers: "&&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_SessionManager__CreateSessionFromTypeDelegate(HoudiniEngineUnity__HEU_SessionManager__CreateSessionFromTypeDelegate&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__HEU_SessionManager__CreateSessionFromTypeDelegate(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr HoudiniEngineUnity__HEU_SessionManager__CreateSessionFromTypeDelegate& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_SessionManager__CreateSessionFromTypeDelegate& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_SessionManager__CreateSessionFromTypeDelegate& operator=(HoudiniEngineUnity__HEU_SessionManager__CreateSessionFromTypeDelegate&& o) noexcept = default;
  constexpr HoudiniEngineUnity__HEU_SessionManager__CreateSessionFromTypeDelegate& operator=(HoudiniEngineUnity__HEU_SessionManager__CreateSessionFromTypeDelegate const& o) noexcept = default;
                


// Methods

static HoudiniEngineUnity::HoudiniEngineUnity__HEU_SessionManager__CreateSessionFromTypeDelegate New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x20339e0 size 0x12c virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2033b0c size 0x14 virtual true final false
 HoudiniEngineUnity::HEU_SessionBase Invoke(System::Type type) ;

/// @brief Method BeginInvoke addr 0x2033b20 size 0x20 virtual true final false
 System::IAsyncResult BeginInvoke(System::Type type, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2033b40 size 0xc virtual true final false
 HoudiniEngineUnity::HEU_SessionBase EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: HoudiniEngineUnity::HEU_SessionManager
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9728))
// CS Name: HoudiniEngineUnity.HEU_SessionManager
class CORDL_TYPE HEU_SessionManager : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using CreateSessionFromTypeDelegate = HoudiniEngineUnity::HoudiniEngineUnity__HEU_SessionManager__CreateSessionFromTypeDelegate;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~HEU_SessionManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_SessionManager", modifiers: " const&", def_value: None }]
constexpr HEU_SessionManager(HEU_SessionManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_SessionManager", modifiers: "&&", def_value: None }]
constexpr HEU_SessionManager(HEU_SessionManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_SessionManager(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HEU_SessionManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_SessionManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_SessionManager& operator=(HEU_SessionManager&& o) noexcept = default;
  constexpr HEU_SessionManager& operator=(HEU_SessionManager const& o) noexcept = default;
                


// Fields

static HoudiniEngineUnity::HEU_SessionBase __declspec(property(get=__get__defaultSession, put=__set__defaultSession))  _defaultSession;

static void __set__defaultSession(HoudiniEngineUnity::HEU_SessionBase value) ;

static HoudiniEngineUnity::HEU_SessionBase __get__defaultSession() ;

static System::Collections::Generic::Dictionary_2<int64_t,HoudiniEngineUnity::HEU_SessionBase> __declspec(property(get=__get__sessionMap, put=__set__sessionMap))  _sessionMap;

static void __set__sessionMap(System::Collections::Generic::Dictionary_2<int64_t,HoudiniEngineUnity::HEU_SessionBase> value) ;

static System::Collections::Generic::Dictionary_2<int64_t,HoudiniEngineUnity::HEU_SessionBase> __get__sessionMap() ;

static HoudiniEngineUnity::HoudiniEngineUnity__HEU_SessionManager__CreateSessionFromTypeDelegate __declspec(property(get=__get__createSessionFromTypeDelegate, put=__set__createSessionFromTypeDelegate))  _createSessionFromTypeDelegate;

static void __set__createSessionFromTypeDelegate(HoudiniEngineUnity::HoudiniEngineUnity__HEU_SessionManager__CreateSessionFromTypeDelegate value) ;

static HoudiniEngineUnity::HoudiniEngineUnity__HEU_SessionManager__CreateSessionFromTypeDelegate __get__createSessionFromTypeDelegate() ;


// Methods

/// @brief Method CreateSessionObject addr 0x2031210 size 0x64 virtual false final false
static HoudiniEngineUnity::HEU_SessionBase CreateSessionObject() ;

/// @brief Method CreateSessionFromType addr 0x2031274 size 0x64 virtual false final false
static HoudiniEngineUnity::HEU_SessionBase CreateSessionFromType(System::Type type) ;

/// @brief Method GetDefaultSession addr 0x202bc30 size 0x88 virtual false final false
static HoudiniEngineUnity::HEU_SessionBase GetDefaultSession() ;

/// @brief Method RegisterSession addr 0x203137c size 0x94 virtual false final false
static void RegisterSession(int64_t sessionID, HoudiniEngineUnity::HEU_SessionBase session) ;

/// @brief Method UnregisterSession addr 0x20314e0 size 0x84 virtual false final false
static void UnregisterSession(int64_t sessionID) ;

/// @brief Method GetSessionWithID addr 0x2031564 size 0x98 virtual false final false
static HoudiniEngineUnity::HEU_SessionBase GetSessionWithID(int64_t sessionID) ;

/// @brief Method SaveAllSessionData addr 0x2031410 size 0xd0 virtual false final false
static void SaveAllSessionData() ;

/// @brief Method LoadAllSessionData addr 0x20315fc size 0x470 virtual false final false
static void LoadAllSessionData() ;

/// @brief Method InternalValidateSceneAssets addr 0x2031a6c size 0x154 virtual false final false
static void InternalValidateSceneAssets() ;

/// @brief Method GetOrCreateDefaultSession addr 0x202b9a8 size 0x288 virtual false final false
static HoudiniEngineUnity::HEU_SessionBase GetOrCreateDefaultSession(bool bNotifyUserError) ;

/// @brief Method CreateInProcessSession addr 0x2031ce8 size 0x84 virtual false final false
static bool CreateInProcessSession() ;

/// @brief Method CreateThriftSocketSession addr 0x2031e1c size 0xc4 virtual false final false
static bool CreateThriftSocketSession(::StringW hostName, int32_t serverPort, bool autoClose, float_t timeout, bool logError) ;

/// @brief Method CreateThriftPipeSession addr 0x2031bc0 size 0xb4 virtual false final false
static bool CreateThriftPipeSession(::StringW pipeName, bool autoClose, float_t timeout, bool logError) ;

/// @brief Method CreateCustomSession addr 0x2031ee0 size 0x84 virtual false final false
static bool CreateCustomSession() ;

/// @brief Method ConnectThriftSocketSession addr 0x2031f64 size 0xbc virtual false final false
static bool ConnectThriftSocketSession(::StringW hostName, int32_t serverPort, bool autoClose, float_t timeout) ;

/// @brief Method ConnectThriftPipeSession addr 0x2032020 size 0xb4 virtual false final false
static bool ConnectThriftPipeSession(::StringW pipeName, bool autoClose, float_t timeout) ;

/// @brief Method RecreateDefaultSessionData addr 0x20320d4 size 0x60 virtual false final false
static void RecreateDefaultSessionData() ;

/// @brief Method ConnectSessionSyncUsingThriftSocket addr 0x2032134 size 0xe4 virtual false final false
static bool ConnectSessionSyncUsingThriftSocket(::StringW hostName, int32_t serverPort, bool autoClose, float_t timeout, bool logError) ;

/// @brief Method ConnectSessionSyncUsingThriftPipe addr 0x2032218 size 0xd4 virtual false final false
static bool ConnectSessionSyncUsingThriftPipe(::StringW pipeName, bool autoClose, float_t timeout, bool logError) ;

/// @brief Method InitializeDefaultSession addr 0x20322ec size 0xa0 virtual false final false
static bool InitializeDefaultSession() ;

/// @brief Method CloseDefaultSession addr 0x203238c size 0xbc virtual false final false
static bool CloseDefaultSession() ;

/// @brief Method CloseAllSessions addr 0x2032448 size 0x2dc virtual false final false
static void CloseAllSessions() ;

/// @brief Method CheckAndCloseExistingSession addr 0x2031d6c size 0xb0 virtual false final false
static void CheckAndCloseExistingSession() ;

/// @brief Method GetSessionData addr 0x2032724 size 0x58 virtual false final false
static HoudiniEngineUnity::HEU_SessionData GetSessionData() ;

/// @brief Method GetSessionInfo addr 0x203277c size 0x84 virtual false final false
static ::StringW GetSessionInfo() ;

/// @brief Method LoadStoredDefaultSession addr 0x20312d8 size 0xa4 virtual false final false
static bool LoadStoredDefaultSession() ;

/// @brief Method RestartSession addr 0x2032800 size 0x134 virtual false final false
static bool RestartSession() ;

/// @brief Method ValidatePluginSession addr 0x2032934 size 0x80 virtual false final false
static bool ValidatePluginSession(HoudiniEngineUnity::HEU_SessionBase session) ;

/// @brief Method GetLastSessionError addr 0x2031c74 size 0x74 virtual false final false
static ::StringW GetLastSessionError() ;

/// @brief Method CheckVersionMatch addr 0x20329b4 size 0x70 virtual false final false
static bool CheckVersionMatch() ;

/// @brief Method ClearConnectionError addr 0x2032a24 size 0x8 virtual false final false
static bool ClearConnectionError() ;

/// @brief Method GetConnectionError addr 0x2030520 size 0x40 virtual false final false
static ::StringW GetConnectionError(bool clear) ;

/// @brief Method IsHARSProcessRunning addr 0x2032a2c size 0x94 virtual false final false
static bool IsHARSProcessRunning(int32_t processID) ;

/// @brief Method LoadSessionFromHIP addr 0x2032ac0 size 0xe0 virtual false final false
static bool LoadSessionFromHIP(bool bCookNodes, HoudiniEngineUnity::HEU_SessionBase session) ;

/// @brief Method SaveSessionToHIP addr 0x2032ba0 size 0xe0 virtual false final false
static bool SaveSessionToHIP(bool bLockNodes, HoudiniEngineUnity::HEU_SessionBase session) ;

/// @brief Method GetHoudiniPathOnMacOS addr 0x2032c80 size 0x4 virtual false final false
static ::StringW GetHoudiniPathOnMacOS(::StringW houdiniPath) ;

/// @brief Method OpenHoudini addr 0x2032c84 size 0x9c virtual false final false
static bool OpenHoudini(::StringW args) ;

/// @brief Method OpenSessionInHoudini addr 0x2032d20 size 0x314 virtual false final false
static bool OpenSessionInHoudini(HoudiniEngineUnity::HEU_SessionBase session) ;

/// @brief Method GetCurrentLicense addr 0x2033034 size 0x9c virtual false final false
static HoudiniEngineUnity::HAPI_License GetCurrentLicense(bool bLogError) ;

/// @brief Method GetString addr 0x2028c74 size 0xec virtual false final false
static ::StringW GetString(int32_t stringHandle, HoudiniEngineUnity::HEU_SessionBase session) ;

/// @brief Method GetStringValuesFromStringIndices addr 0x20330d0 size 0x1ac virtual false final false
static ::ArrayW<::StringW> GetStringValuesFromStringIndices(::ArrayW<int32_t> strIndices) ;

/// @brief Method GetGroupNames addr 0x203327c size 0x248 virtual false final false
static ::ArrayW<::StringW> GetGroupNames(HoudiniEngineUnity::HEU_SessionBase session, int32_t nodeID, int32_t partID, HoudiniEngineUnity::HAPI_GroupType groupType, bool isInstanced) ;

/// @brief Method GetGroupMembership addr 0x20334c4 size 0x13c virtual false final false
static bool GetGroupMembership(HoudiniEngineUnity::HEU_SessionBase session, int32_t nodeID, int32_t partID, HoudiniEngineUnity::HAPI_GroupType groupType, ::StringW groupName, ByRef<::ArrayW<int32_t>> membership, bool isInstanced) ;

/// @brief Method GetNodeName addr 0x2033600 size 0xf0 virtual false final false
static ::StringW GetNodeName(int32_t nodeID, HoudiniEngineUnity::HEU_SessionBase session) ;

/// @brief Method GetNodeInputName addr 0x20336f0 size 0xe4 virtual false final false
static bool GetNodeInputName(int32_t nodeID, int32_t inputIndex, ByRef<::StringW> inputName) ;

/// @brief Method GetComposedChildNodeList addr 0x2028d60 size 0xf8 virtual false final false
static bool GetComposedChildNodeList(HoudiniEngineUnity::HEU_SessionBase session, int32_t parentNodeID, int32_t nodeTypeFilter, int32_t nodeFlagFilter, bool bRecursive, ByRef<::ArrayW<int32_t>> childNodeIDs) ;

/// @brief Method GetComposedObjectListMemorySafe addr 0x20337d4 size 0xb8 virtual false final false
static bool GetComposedObjectListMemorySafe(HoudiniEngineUnity::HEU_SessionBase session, int32_t nodeID, ByRef<::ArrayW<HoudiniEngineUnity::HAPI_ObjectInfo>> objectInfos, int32_t start, int32_t length) ;

/// @brief Method GetComposedObjectTransformsMemorySafe addr 0x203388c size 0xc8 virtual false final false
static bool GetComposedObjectTransformsMemorySafe(HoudiniEngineUnity::HEU_SessionBase session, int32_t nodeID, HoudiniEngineUnity::HAPI_RSTOrder rstOrder, ByRef<::ArrayW<HoudiniEngineUnity::HAPI_Transform>> transforms, int32_t start, int32_t length) ;

/// @brief Method GetUniqueMaterialShopName addr 0x202fcf0 size 0x218 virtual false final false
static ::StringW GetUniqueMaterialShopName(int32_t assetID, int32_t materialID) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(HoudiniEngineUnity::HEU_SessionManager);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_SessionManager, "HoudiniEngineUnity", "HEU_SessionManager");
NEED_NO_BOX(HoudiniEngineUnity::HoudiniEngineUnity__HEU_SessionManager__CreateSessionFromTypeDelegate);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HoudiniEngineUnity__HEU_SessionManager__CreateSessionFromTypeDelegate, "HoudiniEngineUnity", "HEU_SessionManager/CreateSessionFromTypeDelegate");
