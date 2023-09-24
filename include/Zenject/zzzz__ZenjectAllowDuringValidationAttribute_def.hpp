#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
// Forward declare root types
namespace Zenject {
class ZenjectAllowDuringValidationAttribute;
}
// Type: Zenject::ZenjectAllowDuringValidationAttribute
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15753))
// CS Name: Zenject.ZenjectAllowDuringValidationAttribute
class CORDL_TYPE ZenjectAllowDuringValidationAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ZenjectAllowDuringValidationAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "ZenjectAllowDuringValidationAttribute", modifiers: " const&", def_value: None }]
constexpr ZenjectAllowDuringValidationAttribute(ZenjectAllowDuringValidationAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ZenjectAllowDuringValidationAttribute", modifiers: "&&", def_value: None }]
constexpr ZenjectAllowDuringValidationAttribute(ZenjectAllowDuringValidationAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ZenjectAllowDuringValidationAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr ZenjectAllowDuringValidationAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ZenjectAllowDuringValidationAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ZenjectAllowDuringValidationAttribute& operator=(ZenjectAllowDuringValidationAttribute&& o) noexcept = default;
  constexpr ZenjectAllowDuringValidationAttribute& operator=(ZenjectAllowDuringValidationAttribute const& o) noexcept = default;
                


// Methods

static Zenject::ZenjectAllowDuringValidationAttribute New_ctor() ;

/// @brief Method .ctor addr 0x2d414d4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::ZenjectAllowDuringValidationAttribute);
DEFINE_IL2CPP_ARG_TYPE(Zenject::ZenjectAllowDuringValidationAttribute, "Zenject", "ZenjectAllowDuringValidationAttribute");
