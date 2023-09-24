#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__InjectAttributeBase_def.hpp"
// Forward declare root types
namespace Zenject {
class InjectLocalAttribute;
}
// Type: Zenject::InjectLocalAttribute
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15650))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15652))
// CS Name: Zenject.InjectLocalAttribute
class CORDL_TYPE InjectLocalAttribute : public Zenject::InjectAttributeBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~InjectLocalAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "InjectLocalAttribute", modifiers: " const&", def_value: None }]
constexpr InjectLocalAttribute(InjectLocalAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InjectLocalAttribute", modifiers: "&&", def_value: None }]
constexpr InjectLocalAttribute(InjectLocalAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InjectLocalAttribute(void* ptr) noexcept : Zenject::InjectAttributeBase(ptr) {
}


  constexpr InjectLocalAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InjectLocalAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InjectLocalAttribute& operator=(InjectLocalAttribute&& o) noexcept = default;
  constexpr InjectLocalAttribute& operator=(InjectLocalAttribute const& o) noexcept = default;
                


// Methods

static Zenject::InjectLocalAttribute New_ctor() ;

/// @brief Method .ctor addr 0x2d40300 size 0x20 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::InjectLocalAttribute);
DEFINE_IL2CPP_ARG_TYPE(Zenject::InjectLocalAttribute, "Zenject", "InjectLocalAttribute");
