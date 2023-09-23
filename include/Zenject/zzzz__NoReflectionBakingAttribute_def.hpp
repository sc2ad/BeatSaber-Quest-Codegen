#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
// Forward declare root types
namespace Zenject {
class NoReflectionBakingAttribute;
}
// Type: Zenject::NoReflectionBakingAttribute
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15752))
// CS Name: Zenject.NoReflectionBakingAttribute
class CORDL_TYPE NoReflectionBakingAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~NoReflectionBakingAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "NoReflectionBakingAttribute", modifiers: " const&", def_value: None }]
constexpr NoReflectionBakingAttribute(NoReflectionBakingAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NoReflectionBakingAttribute", modifiers: "&&", def_value: None }]
constexpr NoReflectionBakingAttribute(NoReflectionBakingAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NoReflectionBakingAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr NoReflectionBakingAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NoReflectionBakingAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NoReflectionBakingAttribute& operator=(NoReflectionBakingAttribute&& o) noexcept = default;
  constexpr NoReflectionBakingAttribute& operator=(NoReflectionBakingAttribute const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit NoReflectionBakingAttribute() ;

/// @brief Method .ctor addr 0x2d414cc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::NoReflectionBakingAttribute);
DEFINE_IL2CPP_ARG_TYPE(Zenject::NoReflectionBakingAttribute, "Zenject", "NoReflectionBakingAttribute");
