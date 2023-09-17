#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace HoudiniEngineUnity {
struct SessionMode;
}
namespace System {
class Type;
}
namespace HoudiniEngineUnity {
struct HAPI_SessionType;
}
namespace HoudiniEngineUnity {
class HEU_SessionSyncData;
}
namespace HoudiniEngineUnity {
struct HAPI_Session;
}
namespace HoudiniEngineUnity {
struct SessionConnectionState;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_SessionData;
}
// Type: HoudiniEngineUnity::HEU_SessionData
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9725))
// CS Name: HoudiniEngineUnity.HEU_SessionData
class CORDL_TYPE HEU_SessionData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~HEU_SessionData() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_SessionData", modifiers: " const&", def_value: None }]
constexpr HEU_SessionData(HEU_SessionData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_SessionData", modifiers: "&&", def_value: None }]
constexpr HEU_SessionData(HEU_SessionData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_SessionData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HEU_SessionData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_SessionData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_SessionData& operator=(HEU_SessionData&& o) noexcept = default;
  constexpr HEU_SessionData& operator=(HEU_SessionData const& o) noexcept = default;
                


// Fields

static int64_t __declspec(property(get=__get_INVALID_SESSION_ID, put=__set_INVALID_SESSION_ID))  INVALID_SESSION_ID;

static void __set_INVALID_SESSION_ID(int64_t value) ;

static int64_t __get_INVALID_SESSION_ID() ;

 ::HoudiniEngineUnity::HAPI_Session __declspec(property(get=__get__HAPISession, put=__set__HAPISession))  _HAPISession;

constexpr void __set__HAPISession(::HoudiniEngineUnity::HAPI_Session value) ;

constexpr ::HoudiniEngineUnity::HAPI_Session __get__HAPISession() const;

 int32_t __declspec(property(get=__get__serverProcessID, put=__set__serverProcessID))  _serverProcessID;

constexpr void __set__serverProcessID(int32_t value) ;

constexpr int32_t __get__serverProcessID() const;

 bool __declspec(property(get=__get__initialized, put=__set__initialized))  _initialized;

constexpr void __set__initialized(bool value) ;

constexpr bool __get__initialized() const;

 ::StringW __declspec(property(get=__get__pipeName, put=__set__pipeName))  _pipeName;

constexpr void __set__pipeName(::StringW value) ;

constexpr ::StringW __get__pipeName() const;

 int32_t __declspec(property(get=__get__port, put=__set__port))  _port;

constexpr void __set__port(int32_t value) ;

constexpr int32_t __get__port() const;

 ::StringW __declspec(property(get=__get__sessionClassType, put=__set__sessionClassType))  _sessionClassType;

constexpr void __set__sessionClassType(::StringW value) ;

constexpr ::StringW __get__sessionClassType() const;

 bool __declspec(property(get=__get__isDefaultSession, put=__set__isDefaultSession))  _isDefaultSession;

constexpr void __set__isDefaultSession(bool value) ;

constexpr bool __get__isDefaultSession() const;

 ::HoudiniEngineUnity::HEU_SessionSyncData __declspec(property(get=__get__sessionSync, put=__set__sessionSync))  _sessionSync;

constexpr void __set__sessionSync(::HoudiniEngineUnity::HEU_SessionSyncData value) ;

constexpr ::HoudiniEngineUnity::HEU_SessionSyncData __get__sessionSync() const;

 ::HoudiniEngineUnity::SessionConnectionState __declspec(property(get=__get__connectionState, put=__set__connectionState))  _connectionState;

constexpr void __set__connectionState(::HoudiniEngineUnity::SessionConnectionState value) ;

constexpr ::HoudiniEngineUnity::SessionConnectionState __get__connectionState() const;

 ::HoudiniEngineUnity::SessionMode __declspec(property(get=__get__sessionMode, put=__set__sessionMode))  _sessionMode;

constexpr void __set__sessionMode(::HoudiniEngineUnity::SessionMode value) ;

constexpr ::HoudiniEngineUnity::SessionMode __get__sessionMode() const;


// Properties

 int64_t __declspec(property(get=get_SessionID, put=set_SessionID))  SessionID;

 int32_t __declspec(property(get=get_ProcessID, put=set_ProcessID))  ProcessID;

 ::HoudiniEngineUnity::HAPI_SessionType __declspec(property(get=get_SessionType, put=set_SessionType))  SessionType;

 bool __declspec(property(get=get_IsInitialized, put=set_IsInitialized))  IsInitialized;

 bool __declspec(property(get=get_IsValidSessionID))  IsValidSessionID;

 ::StringW __declspec(property(get=get_PipeName, put=set_PipeName))  PipeName;

 int32_t __declspec(property(get=get_Port, put=set_Port))  Port;

 ::System::Type __declspec(property(get=get_SessionClassType, put=set_SessionClassType))  SessionClassType;

 bool __declspec(property(get=get_IsDefaultSession, put=set_IsDefaultSession))  IsDefaultSession;

 bool __declspec(property(get=get_IsSessionSync))  IsSessionSync;

 ::HoudiniEngineUnity::SessionConnectionState __declspec(property(get=get_ThisConnectionMode, put=set_ThisConnectionMode))  ThisConnectionMode;

 ::HoudiniEngineUnity::SessionMode __declspec(property(get=get_ThisSessionMode, put=set_ThisSessionMode))  ThisSessionMode;


// Methods

/// @brief Method GetOrCreateSessionSync addr 0x2030e78 size 0x68 virtual false final false
 ::HoudiniEngineUnity::HEU_SessionSyncData GetOrCreateSessionSync() ;

/// @brief Method GetSessionSync addr 0x2030f8c size 0x8 virtual false final false
 ::HoudiniEngineUnity::HEU_SessionSyncData GetSessionSync() ;

/// @brief Method SetSessionSync addr 0x2030f94 size 0x8 virtual false final false
 void SetSessionSync(::HoudiniEngineUnity::HEU_SessionSyncData syncData) ;

/// @brief Method get_SessionID addr 0x2030f9c size 0x58 virtual false final false
 int64_t get_SessionID() ;

/// @brief Method set_SessionID addr 0x2030680 size 0x8 virtual false final false
 void set_SessionID(int64_t value) ;

/// @brief Method get_ProcessID addr 0x2030ff4 size 0x8 virtual false final false
 int32_t get_ProcessID() ;

/// @brief Method set_ProcessID addr 0x2030ffc size 0x8 virtual false final false
 void set_ProcessID(int32_t value) ;

/// @brief Method get_SessionType addr 0x2031004 size 0x8 virtual false final false
 ::HoudiniEngineUnity::HAPI_SessionType get_SessionType() ;

/// @brief Method set_SessionType addr 0x203100c size 0x8 virtual false final false
 void set_SessionType(::HoudiniEngineUnity::HAPI_SessionType value) ;

/// @brief Method get_IsInitialized addr 0x2031014 size 0x8 virtual false final false
 bool get_IsInitialized() ;

/// @brief Method set_IsInitialized addr 0x203101c size 0xc virtual false final false
 void set_IsInitialized(bool value) ;

/// @brief Method get_IsValidSessionID addr 0x2031028 size 0x8 virtual false final false
 bool get_IsValidSessionID() ;

/// @brief Method get_PipeName addr 0x2031030 size 0x40 virtual false final false
 ::StringW get_PipeName() ;

/// @brief Method set_PipeName addr 0x2031070 size 0x8 virtual false final false
 void set_PipeName(::StringW value) ;

/// @brief Method get_Port addr 0x2031078 size 0x8 virtual false final false
 int32_t get_Port() ;

/// @brief Method set_Port addr 0x2031080 size 0x8 virtual false final false
 void set_Port(int32_t value) ;

/// @brief Method get_SessionClassType addr 0x2031088 size 0xa8 virtual false final false
 ::System::Type get_SessionClassType() ;

/// @brief Method set_SessionClassType addr 0x2031130 size 0x30 virtual false final false
 void set_SessionClassType(::System::Type value) ;

/// @brief Method get_IsDefaultSession addr 0x2031160 size 0x8 virtual false final false
 bool get_IsDefaultSession() ;

/// @brief Method set_IsDefaultSession addr 0x2031168 size 0xc virtual false final false
 void set_IsDefaultSession(bool value) ;

/// @brief Method get_IsSessionSync addr 0x2030240 size 0x10 virtual false final false
 bool get_IsSessionSync() ;

/// @brief Method get_ThisConnectionMode addr 0x2031174 size 0x8 virtual false final false
 ::HoudiniEngineUnity::SessionConnectionState get_ThisConnectionMode() ;

/// @brief Method set_ThisConnectionMode addr 0x203117c size 0x8 virtual false final false
 void set_ThisConnectionMode(::HoudiniEngineUnity::SessionConnectionState value) ;

/// @brief Method get_ThisSessionMode addr 0x2031184 size 0x8 virtual false final false
 ::HoudiniEngineUnity::SessionMode get_ThisSessionMode() ;

/// @brief Method set_ThisSessionMode addr 0x203118c size 0x8 virtual false final false
 void set_ThisSessionMode(::HoudiniEngineUnity::SessionMode value) ;

// Ctor Parameters []
explicit HEU_SessionData() ;

/// @brief Method .ctor addr 0x2031194 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
} // end anonymous namespace
NEED_NO_BOX(::HoudiniEngineUnity::HEU_SessionData);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_SessionData, "HoudiniEngineUnity", "HEU_SessionData");
