#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
// Forward declare root types
namespace System {
class ParamArrayAttribute;
}
// Type: System::ParamArrayAttribute
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2456))
// CS Name: System.ParamArrayAttribute
class CORDL_TYPE ParamArrayAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ParamArrayAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "ParamArrayAttribute", modifiers: " const&", def_value: None }]
constexpr ParamArrayAttribute(ParamArrayAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ParamArrayAttribute", modifiers: "&&", def_value: None }]
constexpr ParamArrayAttribute(ParamArrayAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ParamArrayAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr ParamArrayAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ParamArrayAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ParamArrayAttribute& operator=(ParamArrayAttribute&& o) noexcept = default;
  constexpr ParamArrayAttribute& operator=(ParamArrayAttribute const& o) noexcept = default;
                


// Methods

static System::ParamArrayAttribute New_ctor() ;

/// @brief Method .ctor addr 0x244fd84 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::ParamArrayAttribute);
DEFINE_IL2CPP_ARG_TYPE(System::ParamArrayAttribute, "System", "ParamArrayAttribute");
