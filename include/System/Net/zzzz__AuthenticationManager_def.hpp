#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Net {
class Authorization;
}
namespace System::Collections {
class ArrayList;
}
namespace System::Net {
class WebRequest;
}
namespace System::Net {
class ICredentials;
}
namespace System::Net {
class ICredentialPolicy;
}
// Forward declare root types
namespace System::Net {
class AuthenticationManager;
}
// Type: System.Net::AuthenticationManager
namespace System::Net {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7999))
// CS Name: System.Net.AuthenticationManager
class CORDL_TYPE AuthenticationManager : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~AuthenticationManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "AuthenticationManager", modifiers: " const&", def_value: None }]
constexpr AuthenticationManager(AuthenticationManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AuthenticationManager", modifiers: "&&", def_value: None }]
constexpr AuthenticationManager(AuthenticationManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AuthenticationManager(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AuthenticationManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AuthenticationManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AuthenticationManager& operator=(AuthenticationManager&& o) noexcept = default;
  constexpr AuthenticationManager& operator=(AuthenticationManager const& o) noexcept = default;
                


// Fields

static System::Collections::ArrayList __declspec(property(get=__get_modules, put=__set_modules))  modules;

static void __set_modules(System::Collections::ArrayList value) ;

static System::Collections::ArrayList __get_modules() ;

static ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_locker, put=__set_locker))  locker;

static void __set_locker(::bs_hook::Il2CppWrapperType value) ;

static ::bs_hook::Il2CppWrapperType __get_locker() ;

static System::Net::ICredentialPolicy __declspec(property(get=__get_credential_policy, put=__set_credential_policy))  credential_policy;

static void __set_credential_policy(System::Net::ICredentialPolicy value) ;

static System::Net::ICredentialPolicy __get_credential_policy() ;


// Methods

/// @brief Method EnsureModules addr 0x2828450 size 0x2a0 virtual false final false
static void EnsureModules() ;

/// @brief Method Authenticate addr 0x2828700 size 0x10c virtual false final false
static System::Net::Authorization Authenticate(::StringW challenge, System::Net::WebRequest request, System::Net::ICredentials credentials) ;

/// @brief Method DoAuthenticate addr 0x282880c size 0x4e8 virtual false final false
static System::Net::Authorization DoAuthenticate(::StringW challenge, System::Net::WebRequest request, System::Net::ICredentials credentials) ;

/// @brief Method PreAuthenticate addr 0x2828cf4 size 0x538 virtual false final false
static System::Net::Authorization PreAuthenticate(System::Net::WebRequest request, System::Net::ICredentials credentials) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
NEED_NO_BOX(System::Net::AuthenticationManager);
DEFINE_IL2CPP_ARG_TYPE(System::Net::AuthenticationManager, "System.Net", "AuthenticationManager");
