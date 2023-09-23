#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__InjectAttributeBase_def.hpp"
// Forward declare root types
namespace Zenject {
class InjectAttribute;
}
// Type: Zenject::InjectAttribute
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15650))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15651))
// CS Name: Zenject.InjectAttribute
class CORDL_TYPE InjectAttribute : public Zenject::InjectAttributeBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~InjectAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "InjectAttribute", modifiers: " const&", def_value: None }]
constexpr InjectAttribute(InjectAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InjectAttribute", modifiers: "&&", def_value: None }]
constexpr InjectAttribute(InjectAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InjectAttribute(void* ptr) noexcept : Zenject::InjectAttributeBase(ptr) {
}


  constexpr InjectAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InjectAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InjectAttribute& operator=(InjectAttribute&& o) noexcept = default;
  constexpr InjectAttribute& operator=(InjectAttribute const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit InjectAttribute() ;

/// @brief Method .ctor addr 0x2d402f8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::InjectAttribute);
DEFINE_IL2CPP_ARG_TYPE(Zenject::InjectAttribute, "Zenject", "InjectAttribute");
