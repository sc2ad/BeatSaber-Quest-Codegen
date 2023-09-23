#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace System::Reflection {
class AssemblyDefaultAliasAttribute;
}
// Type: System.Reflection::AssemblyDefaultAliasAttribute
namespace System::Reflection {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3440))
// CS Name: System.Reflection.AssemblyDefaultAliasAttribute
class CORDL_TYPE AssemblyDefaultAliasAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~AssemblyDefaultAliasAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "AssemblyDefaultAliasAttribute", modifiers: " const&", def_value: None }]
constexpr AssemblyDefaultAliasAttribute(AssemblyDefaultAliasAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AssemblyDefaultAliasAttribute", modifiers: "&&", def_value: None }]
constexpr AssemblyDefaultAliasAttribute(AssemblyDefaultAliasAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AssemblyDefaultAliasAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr AssemblyDefaultAliasAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AssemblyDefaultAliasAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AssemblyDefaultAliasAttribute& operator=(AssemblyDefaultAliasAttribute&& o) noexcept = default;
  constexpr AssemblyDefaultAliasAttribute& operator=(AssemblyDefaultAliasAttribute const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__DefaultAlias_k__BackingField, put=__set__DefaultAlias_k__BackingField))  _DefaultAlias_k__BackingField;

constexpr void __set__DefaultAlias_k__BackingField(::StringW value) ;

constexpr ::StringW __get__DefaultAlias_k__BackingField() const;


// Methods

// Ctor Parameters [CppParam { name: "defaultAlias", ty: "::StringW", modifiers: "", def_value: None }]
explicit AssemblyDefaultAliasAttribute(::StringW defaultAlias) ;

/// @brief Method .ctor addr 0x2378cf8 size 0x28 virtual false final false
 void _ctor(::StringW defaultAlias) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Reflection
NEED_NO_BOX(System::Reflection::AssemblyDefaultAliasAttribute);
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::AssemblyDefaultAliasAttribute, "System.Reflection", "AssemblyDefaultAliasAttribute");
