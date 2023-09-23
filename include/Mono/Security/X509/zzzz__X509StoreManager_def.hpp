#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace Mono::Security::X509 {
class X509CertificateCollection;
}
namespace Mono::Security::X509 {
class X509Stores;
}
// Forward declare root types
namespace Mono::Security::X509 {
class X509StoreManager;
}
// Type: Mono.Security.X509::X509StoreManager
namespace Mono::Security::X509 {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13970))
// CS Name: Mono.Security.X509.X509StoreManager
class CORDL_TYPE X509StoreManager : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~X509StoreManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "X509StoreManager", modifiers: " const&", def_value: None }]
constexpr X509StoreManager(X509StoreManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "X509StoreManager", modifiers: "&&", def_value: None }]
constexpr X509StoreManager(X509StoreManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit X509StoreManager(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr X509StoreManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr X509StoreManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr X509StoreManager& operator=(X509StoreManager&& o) noexcept = default;
  constexpr X509StoreManager& operator=(X509StoreManager const& o) noexcept = default;
                


// Fields

static ::StringW __declspec(property(get=__get__userPath, put=__set__userPath))  _userPath;

static void __set__userPath(::StringW value) ;

static ::StringW __get__userPath() ;

static ::StringW __declspec(property(get=__get__localMachinePath, put=__set__localMachinePath))  _localMachinePath;

static void __set__localMachinePath(::StringW value) ;

static ::StringW __get__localMachinePath() ;

static Mono::Security::X509::X509Stores __declspec(property(get=__get__userStore, put=__set__userStore))  _userStore;

static void __set__userStore(Mono::Security::X509::X509Stores value) ;

static Mono::Security::X509::X509Stores __get__userStore() ;

static Mono::Security::X509::X509Stores __declspec(property(get=__get__machineStore, put=__set__machineStore))  _machineStore;

static void __set__machineStore(Mono::Security::X509::X509Stores value) ;

static Mono::Security::X509::X509Stores __get__machineStore() ;


// Properties

static ::StringW __declspec(property(get=get_CurrentUserPath))  CurrentUserPath;

static ::StringW __declspec(property(get=get_LocalMachinePath))  LocalMachinePath;

static Mono::Security::X509::X509Stores __declspec(property(get=get_CurrentUser))  CurrentUser;

static Mono::Security::X509::X509Stores __declspec(property(get=get_LocalMachine))  LocalMachine;

static Mono::Security::X509::X509CertificateCollection __declspec(property(get=get_TrustedRootCertificates))  TrustedRootCertificates;


// Methods

/// @brief Method get_CurrentUserPath addr 0x2290794 size 0x100 virtual false final false
static ::StringW get_CurrentUserPath() ;

/// @brief Method get_LocalMachinePath addr 0x2290894 size 0xe8 virtual false final false
static ::StringW get_LocalMachinePath() ;

/// @brief Method get_CurrentUser addr 0x229097c size 0xa0 virtual false final false
static Mono::Security::X509::X509Stores get_CurrentUser() ;

/// @brief Method get_LocalMachine addr 0x2290a4c size 0xa0 virtual false final false
static Mono::Security::X509::X509Stores get_LocalMachine() ;

/// @brief Method get_TrustedRootCertificates addr 0x228e94c size 0xcc virtual false final false
static Mono::Security::X509::X509CertificateCollection get_TrustedRootCertificates() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Security::X509
NEED_NO_BOX(Mono::Security::X509::X509StoreManager);
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::X509::X509StoreManager, "Mono.Security.X509", "X509StoreManager");
