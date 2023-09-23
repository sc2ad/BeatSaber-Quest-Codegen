#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
// Forward declare root types
namespace Mono::Net::Security {
class NoReflectionHelper;
}
// Type: Mono.Net.Security::NoReflectionHelper
namespace Mono::Net::Security {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7696))
// CS Name: Mono.Net.Security.NoReflectionHelper
class CORDL_TYPE NoReflectionHelper : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~NoReflectionHelper() = default;

// Ctor Parameters [CppParam { name: "", ty: "NoReflectionHelper", modifiers: " const&", def_value: None }]
constexpr NoReflectionHelper(NoReflectionHelper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NoReflectionHelper", modifiers: "&&", def_value: None }]
constexpr NoReflectionHelper(NoReflectionHelper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NoReflectionHelper(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr NoReflectionHelper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NoReflectionHelper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NoReflectionHelper& operator=(NoReflectionHelper&& o) noexcept = default;
  constexpr NoReflectionHelper& operator=(NoReflectionHelper const& o) noexcept = default;
                


// Methods

/// @brief Method GetProvider addr 0x26943d8 size 0x4c virtual false final false
static ::bs_hook::Il2CppWrapperType GetProvider() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Net::Security
NEED_NO_BOX(Mono::Net::Security::NoReflectionHelper);
DEFINE_IL2CPP_ARG_TYPE(Mono::Net::Security::NoReflectionHelper, "Mono.Net.Security", "NoReflectionHelper");
