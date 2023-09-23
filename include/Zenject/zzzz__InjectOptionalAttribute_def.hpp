#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__InjectAttributeBase_def.hpp"
// Forward declare root types
namespace Zenject {
class InjectOptionalAttribute;
}
// Type: Zenject::InjectOptionalAttribute
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15650))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15653))
// CS Name: Zenject.InjectOptionalAttribute
class CORDL_TYPE InjectOptionalAttribute : public Zenject::InjectAttributeBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~InjectOptionalAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "InjectOptionalAttribute", modifiers: " const&", def_value: None }]
constexpr InjectOptionalAttribute(InjectOptionalAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InjectOptionalAttribute", modifiers: "&&", def_value: None }]
constexpr InjectOptionalAttribute(InjectOptionalAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InjectOptionalAttribute(void* ptr) noexcept : Zenject::InjectAttributeBase(ptr) {
}


  constexpr InjectOptionalAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InjectOptionalAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InjectOptionalAttribute& operator=(InjectOptionalAttribute&& o) noexcept = default;
  constexpr InjectOptionalAttribute& operator=(InjectOptionalAttribute const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit InjectOptionalAttribute() ;

/// @brief Method .ctor addr 0x2d40320 size 0x20 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::InjectOptionalAttribute);
DEFINE_IL2CPP_ARG_TYPE(Zenject::InjectOptionalAttribute, "Zenject", "InjectOptionalAttribute");
