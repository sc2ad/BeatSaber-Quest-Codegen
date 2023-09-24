#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Collections {
class Hashtable;
}
namespace System::Net {
class IAuthenticationModule;
}
namespace System::Net {
class WebRequest;
}
namespace System::Net {
class ICredentials;
}
namespace System::Net {
class Authorization;
}
// Forward declare root types
namespace System::Net {
class DigestClient;
}
// Type: System.Net::DigestClient
namespace System::Net {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8012))
// CS Name: System.Net.DigestClient
class CORDL_TYPE DigestClient : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Net::IAuthenticationModule
constexpr operator  System::Net::IAuthenticationModule() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~DigestClient() = default;

// Ctor Parameters [CppParam { name: "", ty: "DigestClient", modifiers: " const&", def_value: None }]
constexpr DigestClient(DigestClient const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DigestClient", modifiers: "&&", def_value: None }]
constexpr DigestClient(DigestClient&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DigestClient(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DigestClient& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DigestClient& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DigestClient& operator=(DigestClient&& o) noexcept = default;
  constexpr DigestClient& operator=(DigestClient const& o) noexcept = default;
                


// Fields

static System::Collections::Hashtable __declspec(property(get=__get_cache, put=__set_cache))  cache;

static void __set_cache(System::Collections::Hashtable value) ;

static System::Collections::Hashtable __get_cache() ;


// Properties

static System::Collections::Hashtable __declspec(property(get=get_Cache))  Cache;

 ::StringW __declspec(property(get=get_AuthenticationType))  AuthenticationType;


// Methods

/// @brief Method get_Cache addr 0x282c3e4 size 0x168 virtual false final false
static System::Collections::Hashtable get_Cache() ;

/// @brief Method CheckExpired addr 0x282c54c size 0x848 virtual false final false
static void CheckExpired(int32_t count) ;

/// @brief Method Authenticate addr 0x282cd94 size 0x2a8 virtual true final true
 System::Net::Authorization Authenticate(::StringW challenge, System::Net::WebRequest webRequest, System::Net::ICredentials credentials) ;

/// @brief Method PreAuthenticate addr 0x282d03c size 0x194 virtual true final true
 System::Net::Authorization PreAuthenticate(System::Net::WebRequest webRequest, System::Net::ICredentials credentials) ;

/// @brief Method get_AuthenticationType addr 0x282d1d0 size 0x40 virtual true final true
 ::StringW get_AuthenticationType() ;

static System::Net::DigestClient New_ctor() ;

/// @brief Method .ctor addr 0x28286f0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
NEED_NO_BOX(System::Net::DigestClient);
DEFINE_IL2CPP_ARG_TYPE(System::Net::DigestClient, "System.Net", "DigestClient");
