#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace Mono::Security::Interface {
struct AlertDescription;
}
namespace Mono::Unity {
struct ____Mono__Unity__UnityTls__unitytls_x509verify_result;
}
namespace Mono::Unity {
struct ____Mono__Unity__UnityTls__unitytls_errorstate;
}
// Forward declare root types
namespace Mono::Unity {
class Debug;
}
// Type: Mono.Unity::Debug
namespace Mono::Unity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7608))
// CS Name: Mono.Unity.Debug
class CORDL_TYPE Debug : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Debug() = default;

// Ctor Parameters [CppParam { name: "", ty: "Debug", modifiers: " const&", def_value: None }]
constexpr Debug(Debug const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Debug", modifiers: "&&", def_value: None }]
constexpr Debug(Debug&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Debug(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Debug& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Debug& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Debug& operator=(Debug&& o) noexcept = default;
  constexpr Debug& operator=(Debug const& o) noexcept = default;
                


// Methods

/// @brief Method CheckAndThrow addr 0x2686108 size 0xa0 virtual false final false
static void CheckAndThrow(::Mono::Unity::____Mono__Unity__UnityTls__unitytls_errorstate errorState, ::StringW context, ::Mono::Security::Interface::AlertDescription defaultAlert) ;

/// @brief Method CheckAndThrow addr 0x26861a8 size 0xd8 virtual false final false
static void CheckAndThrow(::Mono::Unity::____Mono__Unity__UnityTls__unitytls_errorstate errorState, ::Mono::Unity::____Mono__Unity__UnityTls__unitytls_x509verify_result verifyResult, ::StringW context, ::Mono::Security::Interface::AlertDescription defaultAlert) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Unity
} // end anonymous namespace
NEED_NO_BOX(::Mono::Unity::Debug);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Unity::Debug, "Mono.Unity", "Debug");
