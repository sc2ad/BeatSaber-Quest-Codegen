#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace System {
class MonoTODOAttribute;
}
// Type: System::MonoTODOAttribute
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2537))
// CS Name: System.MonoTODOAttribute
class CORDL_TYPE MonoTODOAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~MonoTODOAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "MonoTODOAttribute", modifiers: " const&", def_value: None }]
constexpr MonoTODOAttribute(MonoTODOAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MonoTODOAttribute", modifiers: "&&", def_value: None }]
constexpr MonoTODOAttribute(MonoTODOAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MonoTODOAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr MonoTODOAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MonoTODOAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MonoTODOAttribute& operator=(MonoTODOAttribute&& o) noexcept = default;
  constexpr MonoTODOAttribute& operator=(MonoTODOAttribute const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_comment, put=__set_comment))  comment;

constexpr void __set_comment(::StringW value) ;

constexpr ::StringW __get_comment() const;


// Methods

// Ctor Parameters []
explicit MonoTODOAttribute() ;

/// @brief Method .ctor addr 0x24696bc size 0x8 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "comment", ty: "::StringW", modifiers: "", def_value: None }]
explicit MonoTODOAttribute(::StringW comment) ;

/// @brief Method .ctor addr 0x24696cc size 0x28 virtual false final false
 void _ctor(::StringW comment) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::MonoTODOAttribute);
DEFINE_IL2CPP_ARG_TYPE(System::MonoTODOAttribute, "System", "MonoTODOAttribute");
