#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace System::Reflection {
class AssemblyProductAttribute;
}
// Type: System.Reflection::AssemblyProductAttribute
namespace System::Reflection {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3447))
// CS Name: System.Reflection.AssemblyProductAttribute
class CORDL_TYPE AssemblyProductAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~AssemblyProductAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "AssemblyProductAttribute", modifiers: " const&", def_value: None }]
constexpr AssemblyProductAttribute(AssemblyProductAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AssemblyProductAttribute", modifiers: "&&", def_value: None }]
constexpr AssemblyProductAttribute(AssemblyProductAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AssemblyProductAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr AssemblyProductAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AssemblyProductAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AssemblyProductAttribute& operator=(AssemblyProductAttribute&& o) noexcept = default;
  constexpr AssemblyProductAttribute& operator=(AssemblyProductAttribute const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__Product_k__BackingField, put=__set__Product_k__BackingField))  _Product_k__BackingField;

constexpr void __set__Product_k__BackingField(::StringW value) ;

constexpr ::StringW __get__Product_k__BackingField() const;


// Methods

static System::Reflection::AssemblyProductAttribute New_ctor(::StringW product) ;

/// @brief Method .ctor addr 0x2378e38 size 0x28 virtual false final false
 void _ctor(::StringW product) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Reflection
NEED_NO_BOX(System::Reflection::AssemblyProductAttribute);
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::AssemblyProductAttribute, "System.Reflection", "AssemblyProductAttribute");
