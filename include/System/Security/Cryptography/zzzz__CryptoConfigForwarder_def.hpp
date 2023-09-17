#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
// Forward declare root types
namespace System::Security::Cryptography {
class CryptoConfigForwarder;
}
// Type: System.Security.Cryptography::CryptoConfigForwarder
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2984))
// CS Name: System.Security.Cryptography.CryptoConfigForwarder
class CORDL_TYPE CryptoConfigForwarder : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~CryptoConfigForwarder() = default;

// Ctor Parameters [CppParam { name: "", ty: "CryptoConfigForwarder", modifiers: " const&", def_value: None }]
constexpr CryptoConfigForwarder(CryptoConfigForwarder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CryptoConfigForwarder", modifiers: "&&", def_value: None }]
constexpr CryptoConfigForwarder(CryptoConfigForwarder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CryptoConfigForwarder(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CryptoConfigForwarder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CryptoConfigForwarder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CryptoConfigForwarder& operator=(CryptoConfigForwarder&& o) noexcept = default;
  constexpr CryptoConfigForwarder& operator=(CryptoConfigForwarder const& o) noexcept = default;
                


// Methods

/// @brief Method CreateFromName addr 0x2309854 size 0x54 virtual false final false
static ::bs_hook::Il2CppWrapperType CreateFromName(::StringW name) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography
} // end anonymous namespace
NEED_NO_BOX(::System::Security::Cryptography::CryptoConfigForwarder);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::CryptoConfigForwarder, "System.Security.Cryptography", "CryptoConfigForwarder");
