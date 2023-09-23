#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
// Forward declare root types
namespace System {
class CLSCompliantAttribute;
}
// Type: System::CLSCompliantAttribute
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2361))
// CS Name: System.CLSCompliantAttribute
class CORDL_TYPE CLSCompliantAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~CLSCompliantAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "CLSCompliantAttribute", modifiers: " const&", def_value: None }]
constexpr CLSCompliantAttribute(CLSCompliantAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CLSCompliantAttribute", modifiers: "&&", def_value: None }]
constexpr CLSCompliantAttribute(CLSCompliantAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CLSCompliantAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr CLSCompliantAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CLSCompliantAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CLSCompliantAttribute& operator=(CLSCompliantAttribute&& o) noexcept = default;
  constexpr CLSCompliantAttribute& operator=(CLSCompliantAttribute const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get__compliant, put=__set__compliant))  _compliant;

constexpr void __set__compliant(bool value) ;

constexpr bool __get__compliant() const;


// Methods

// Ctor Parameters [CppParam { name: "isCompliant", ty: "bool", modifiers: "", def_value: None }]
explicit CLSCompliantAttribute(bool isCompliant) ;

/// @brief Method .ctor addr 0x23b8804 size 0x28 virtual false final false
 void _ctor(bool isCompliant) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::CLSCompliantAttribute);
DEFINE_IL2CPP_ARG_TYPE(System::CLSCompliantAttribute, "System", "CLSCompliantAttribute");
