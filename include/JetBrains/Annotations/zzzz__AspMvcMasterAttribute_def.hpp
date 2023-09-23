#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
// Forward declare root types
namespace JetBrains::Annotations {
class AspMvcMasterAttribute;
}
// Type: JetBrains.Annotations::AspMvcMasterAttribute
namespace JetBrains::Annotations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15711))
// CS Name: JetBrains.Annotations.AspMvcMasterAttribute
class CORDL_TYPE AspMvcMasterAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~AspMvcMasterAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "AspMvcMasterAttribute", modifiers: " const&", def_value: None }]
constexpr AspMvcMasterAttribute(AspMvcMasterAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AspMvcMasterAttribute", modifiers: "&&", def_value: None }]
constexpr AspMvcMasterAttribute(AspMvcMasterAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AspMvcMasterAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr AspMvcMasterAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AspMvcMasterAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AspMvcMasterAttribute& operator=(AspMvcMasterAttribute&& o) noexcept = default;
  constexpr AspMvcMasterAttribute& operator=(AspMvcMasterAttribute const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit AspMvcMasterAttribute() ;

/// @brief Method .ctor addr 0x2d41110 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def JetBrains::Annotations
NEED_NO_BOX(JetBrains::Annotations::AspMvcMasterAttribute);
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::AspMvcMasterAttribute, "JetBrains.Annotations", "AspMvcMasterAttribute");
