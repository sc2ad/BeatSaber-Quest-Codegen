#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System::Security::Cryptography {
class CspParameters;
}
// Forward declare root types
namespace Mono::Security::Cryptography {
class KeyPairPersistence;
}
// Type: Mono.Security.Cryptography::KeyPairPersistence
namespace Mono::Security::Cryptography {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2276))
// CS Name: Mono.Security.Cryptography.KeyPairPersistence
class CORDL_TYPE KeyPairPersistence : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~KeyPairPersistence() = default;

// Ctor Parameters [CppParam { name: "", ty: "KeyPairPersistence", modifiers: " const&", def_value: None }]
constexpr KeyPairPersistence(KeyPairPersistence const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "KeyPairPersistence", modifiers: "&&", def_value: None }]
constexpr KeyPairPersistence(KeyPairPersistence&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit KeyPairPersistence(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr KeyPairPersistence& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr KeyPairPersistence& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr KeyPairPersistence& operator=(KeyPairPersistence&& o) noexcept = default;
  constexpr KeyPairPersistence& operator=(KeyPairPersistence const& o) noexcept = default;
                


// Fields

static bool __declspec(property(get=__get__userPathExists, put=__set__userPathExists))  _userPathExists;

static void __set__userPathExists(bool value) ;

static bool __get__userPathExists() ;

static ::StringW __declspec(property(get=__get__userPath, put=__set__userPath))  _userPath;

static void __set__userPath(::StringW value) ;

static ::StringW __get__userPath() ;

static bool __declspec(property(get=__get__machinePathExists, put=__set__machinePathExists))  _machinePathExists;

static void __set__machinePathExists(bool value) ;

static bool __get__machinePathExists() ;

static ::StringW __declspec(property(get=__get__machinePath, put=__set__machinePath))  _machinePath;

static void __set__machinePath(::StringW value) ;

static ::StringW __get__machinePath() ;

 ::System::Security::Cryptography::CspParameters __declspec(property(get=__get__params, put=__set__params))  _params;

constexpr void __set__params(::System::Security::Cryptography::CspParameters value) ;

constexpr ::System::Security::Cryptography::CspParameters __get__params() const;

 ::StringW __declspec(property(get=__get__keyvalue, put=__set__keyvalue))  _keyvalue;

constexpr void __set__keyvalue(::StringW value) ;

constexpr ::StringW __get__keyvalue() const;

 ::StringW __declspec(property(get=__get__filename, put=__set__filename))  _filename;

constexpr void __set__filename(::StringW value) ;

constexpr ::StringW __get__filename() const;

 ::StringW __declspec(property(get=__get__container, put=__set__container))  _container;

constexpr void __set__container(::StringW value) ;

constexpr ::StringW __get__container() const;

static ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_lockobj, put=__set_lockobj))  lockobj;

static void __set_lockobj(::bs_hook::Il2CppWrapperType value) ;

static ::bs_hook::Il2CppWrapperType __get_lockobj() ;


// Properties

 ::StringW __declspec(property(get=get_Filename))  Filename;

 ::StringW __declspec(property(get=get_KeyValue, put=set_KeyValue))  KeyValue;

static ::StringW __declspec(property(get=get_UserPath))  UserPath;

static ::StringW __declspec(property(get=get_MachinePath))  MachinePath;

 bool __declspec(property(get=get_CanChange))  CanChange;

 bool __declspec(property(get=get_UseDefaultKeyContainer))  UseDefaultKeyContainer;

 bool __declspec(property(get=get_UseMachineKeyStore))  UseMachineKeyStore;

 ::StringW __declspec(property(get=get_ContainerName))  ContainerName;


// Methods

// Ctor Parameters [CppParam { name: "parameters", ty: "::System::Security::Cryptography::CspParameters", modifiers: "", def_value: None }]
explicit KeyPairPersistence(::System::Security::Cryptography::CspParameters parameters) ;

/// @brief Method .ctor addr 0x22b18ac size 0x8 virtual false final false
 void _ctor(::System::Security::Cryptography::CspParameters parameters) ;

// Ctor Parameters [CppParam { name: "parameters", ty: "::System::Security::Cryptography::CspParameters", modifiers: "", def_value: None }, CppParam { name: "keyPair", ty: "::StringW", modifiers: "", def_value: None }]
explicit KeyPairPersistence(::System::Security::Cryptography::CspParameters parameters, ::StringW keyPair) ;

/// @brief Method .ctor addr 0x22b18b4 size 0x84 virtual false final false
 void _ctor(::System::Security::Cryptography::CspParameters parameters, ::StringW keyPair) ;

/// @brief Method get_Filename addr 0x22b19d0 size 0x18c virtual false final false
 ::StringW get_Filename() ;

/// @brief Method get_KeyValue addr 0x22b270c size 0x8 virtual false final false
 ::StringW get_KeyValue() ;

/// @brief Method set_KeyValue addr 0x22b2714 size 0x14 virtual false final false
 void set_KeyValue(::StringW value) ;

/// @brief Method Load addr 0x22b2738 size 0x1b0 virtual false final false
 bool Load() ;

/// @brief Method Save addr 0x22b2a04 size 0x24c virtual false final false
 void Save() ;

/// @brief Method Remove addr 0x22b2f84 size 0x14 virtual false final false
 void Remove() ;

/// @brief Method get_UserPath addr 0x22b21c4 size 0x548 virtual false final false
static ::StringW get_UserPath() ;

/// @brief Method get_MachinePath addr 0x22b1c7c size 0x548 virtual false final false
static ::StringW get_MachinePath() ;

/// @brief Method _CanSecure addr 0x22b30b8 size 0x4 virtual false final false
static bool _CanSecure(void* root) ;

/// @brief Method _ProtectUser addr 0x22b30bc size 0x4 virtual false final false
static bool _ProtectUser(void* path) ;

/// @brief Method _ProtectMachine addr 0x22b30c0 size 0x4 virtual false final false
static bool _ProtectMachine(void* path) ;

/// @brief Method _IsUserProtected addr 0x22b30c4 size 0x4 virtual false final false
static bool _IsUserProtected(void* path) ;

/// @brief Method _IsMachineProtected addr 0x22b30c8 size 0x4 virtual false final false
static bool _IsMachineProtected(void* path) ;

/// @brief Method CanSecure addr 0x22b30cc size 0xa0 virtual false final false
static bool CanSecure(::StringW path) ;

/// @brief Method ProtectUser addr 0x22b2ef4 size 0x90 virtual false final false
static bool ProtectUser(::StringW path) ;

/// @brief Method ProtectMachine addr 0x22b2e64 size 0x90 virtual false final false
static bool ProtectMachine(::StringW path) ;

/// @brief Method IsUserProtected addr 0x22b2f98 size 0x90 virtual false final false
static bool IsUserProtected(::StringW path) ;

/// @brief Method IsMachineProtected addr 0x22b3028 size 0x90 virtual false final false
static bool IsMachineProtected(::StringW path) ;

/// @brief Method get_CanChange addr 0x22b2728 size 0x10 virtual false final false
 bool get_CanChange() ;

/// @brief Method get_UseDefaultKeyContainer addr 0x22b316c size 0x20 virtual false final false
 bool get_UseDefaultKeyContainer() ;

/// @brief Method get_UseMachineKeyStore addr 0x22b1c5c size 0x20 virtual false final false
 bool get_UseMachineKeyStore() ;

/// @brief Method get_ContainerName addr 0x22b1b5c size 0x100 virtual false final false
 ::StringW get_ContainerName() ;

/// @brief Method Copy addr 0x22b1938 size 0x98 virtual false final false
 ::System::Security::Cryptography::CspParameters Copy(::System::Security::Cryptography::CspParameters p) ;

/// @brief Method FromXml addr 0x22b28e8 size 0x11c virtual false final false
 void FromXml(::StringW xml) ;

/// @brief Method ToXml addr 0x22b2c50 size 0x214 virtual false final false
 ::StringW ToXml() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Security::Cryptography
} // end anonymous namespace
NEED_NO_BOX(::Mono::Security::Cryptography::KeyPairPersistence);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Cryptography::KeyPairPersistence, "Mono.Security.Cryptography", "KeyPairPersistence");
