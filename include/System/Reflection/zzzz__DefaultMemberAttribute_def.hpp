#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace System::Reflection {
class DefaultMemberAttribute;
}
// Type: System.Reflection::DefaultMemberAttribute
namespace System::Reflection {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3455))
// CS Name: System.Reflection.DefaultMemberAttribute
class CORDL_TYPE DefaultMemberAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~DefaultMemberAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "DefaultMemberAttribute", modifiers: " const&", def_value: None }]
constexpr DefaultMemberAttribute(DefaultMemberAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DefaultMemberAttribute", modifiers: "&&", def_value: None }]
constexpr DefaultMemberAttribute(DefaultMemberAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DefaultMemberAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr DefaultMemberAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DefaultMemberAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DefaultMemberAttribute& operator=(DefaultMemberAttribute&& o) noexcept = default;
  constexpr DefaultMemberAttribute& operator=(DefaultMemberAttribute const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__MemberName_k__BackingField, put=__set__MemberName_k__BackingField))  _MemberName_k__BackingField;

constexpr void __set__MemberName_k__BackingField(::StringW value) ;

constexpr ::StringW __get__MemberName_k__BackingField() const;


// Properties

 ::StringW __declspec(property(get=get_MemberName))  MemberName;


// Methods

// Ctor Parameters [CppParam { name: "memberName", ty: "::StringW", modifiers: "", def_value: None }]
explicit DefaultMemberAttribute(::StringW memberName) ;

/// @brief Method .ctor addr 0x2379110 size 0x28 virtual false final false
 void _ctor(::StringW memberName) ;

/// @brief Method get_MemberName addr 0x2379138 size 0x8 virtual false final false
 ::StringW get_MemberName() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Reflection
NEED_NO_BOX(System::Reflection::DefaultMemberAttribute);
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::DefaultMemberAttribute, "System.Reflection", "DefaultMemberAttribute");
