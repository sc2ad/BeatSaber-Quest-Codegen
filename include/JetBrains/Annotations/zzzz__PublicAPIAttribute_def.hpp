#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace JetBrains::Annotations {
class PublicAPIAttribute;
}
// Type: JetBrains.Annotations::PublicAPIAttribute
namespace JetBrains::Annotations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15694))
// CS Name: JetBrains.Annotations.PublicAPIAttribute
class CORDL_TYPE PublicAPIAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~PublicAPIAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "PublicAPIAttribute", modifiers: " const&", def_value: None }]
constexpr PublicAPIAttribute(PublicAPIAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PublicAPIAttribute", modifiers: "&&", def_value: None }]
constexpr PublicAPIAttribute(PublicAPIAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PublicAPIAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr PublicAPIAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PublicAPIAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PublicAPIAttribute& operator=(PublicAPIAttribute&& o) noexcept = default;
  constexpr PublicAPIAttribute& operator=(PublicAPIAttribute const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__Comment_k__BackingField, put=__set__Comment_k__BackingField))  _Comment_k__BackingField;

constexpr void __set__Comment_k__BackingField(::StringW value) ;

constexpr ::StringW __get__Comment_k__BackingField() const;


// Properties

 ::StringW __declspec(property(get=get_Comment, put=set_Comment))  Comment;


// Methods

// Ctor Parameters []
explicit PublicAPIAttribute() ;

/// @brief Method .ctor addr 0x2d40de8 size 0x8 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "comment", ty: "::StringW", modifiers: "", def_value: None }]
explicit PublicAPIAttribute(::StringW comment) ;

/// @brief Method .ctor addr 0x2d40df0 size 0x28 virtual false final false
 void _ctor(::StringW comment) ;

/// @brief Method get_Comment addr 0x2d40e18 size 0x8 virtual false final false
 ::StringW get_Comment() ;

/// @brief Method set_Comment addr 0x2d40e20 size 0x8 virtual false final false
 void set_Comment(::StringW value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def JetBrains::Annotations
NEED_NO_BOX(JetBrains::Annotations::PublicAPIAttribute);
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::PublicAPIAttribute, "JetBrains.Annotations", "PublicAPIAttribute");
