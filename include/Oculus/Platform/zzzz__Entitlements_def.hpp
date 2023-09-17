#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace Oculus::Platform {
class Request;
}
// Forward declare root types
namespace Oculus::Platform {
class Entitlements;
}
// Type: Oculus.Platform::Entitlements
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13328))
// CS Name: Oculus.Platform.Entitlements
class CORDL_TYPE Entitlements : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Entitlements() = default;

// Ctor Parameters [CppParam { name: "", ty: "Entitlements", modifiers: " const&", def_value: None }]
constexpr Entitlements(Entitlements const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Entitlements", modifiers: "&&", def_value: None }]
constexpr Entitlements(Entitlements&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Entitlements(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Entitlements& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Entitlements& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Entitlements& operator=(Entitlements&& o) noexcept = default;
  constexpr Entitlements& operator=(Entitlements const& o) noexcept = default;
                


// Methods

/// @brief Method IsUserEntitledToApplication addr 0x2593c78 size 0x148 virtual false final false
static ::Oculus::Platform::Request IsUserEntitledToApplication() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
} // end anonymous namespace
NEED_NO_BOX(::Oculus::Platform::Entitlements);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Entitlements, "Oculus.Platform", "Entitlements");
