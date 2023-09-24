#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::Net {
class ICredentials;
}
namespace System::Net {
class NetworkCredential;
}
// Forward declare root types
namespace System::Net {
class CredentialCache;
}
// Type: System.Net::CredentialCache
namespace System::Net {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7910))
// CS Name: System.Net.CredentialCache
class CORDL_TYPE CredentialCache : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~CredentialCache() = default;

// Ctor Parameters [CppParam { name: "", ty: "CredentialCache", modifiers: " const&", def_value: None }]
constexpr CredentialCache(CredentialCache const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CredentialCache", modifiers: "&&", def_value: None }]
constexpr CredentialCache(CredentialCache&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CredentialCache(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CredentialCache& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CredentialCache& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CredentialCache& operator=(CredentialCache&& o) noexcept = default;
  constexpr CredentialCache& operator=(CredentialCache const& o) noexcept = default;
                


// Properties

static System::Net::ICredentials __declspec(property(get=get_DefaultCredentials))  DefaultCredentials;

static System::Net::NetworkCredential __declspec(property(get=get_DefaultNetworkCredentials))  DefaultNetworkCredentials;


// Methods

/// @brief Method get_DefaultCredentials addr 0x2809ea0 size 0x58 virtual false final false
static System::Net::ICredentials get_DefaultCredentials() ;

/// @brief Method get_DefaultNetworkCredentials addr 0x2809ef8 size 0x58 virtual false final false
static System::Net::NetworkCredential get_DefaultNetworkCredentials() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
NEED_NO_BOX(System::Net::CredentialCache);
DEFINE_IL2CPP_ARG_TYPE(System::Net::CredentialCache, "System.Net", "CredentialCache");
