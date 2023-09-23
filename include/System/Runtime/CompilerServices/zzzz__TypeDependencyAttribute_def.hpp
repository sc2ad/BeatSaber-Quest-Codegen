#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace System::Runtime::CompilerServices {
class TypeDependencyAttribute;
}
// Type: System.Runtime.CompilerServices::TypeDependencyAttribute
namespace System::Runtime::CompilerServices {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3409))
// CS Name: System.Runtime.CompilerServices.TypeDependencyAttribute
class CORDL_TYPE TypeDependencyAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~TypeDependencyAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "TypeDependencyAttribute", modifiers: " const&", def_value: None }]
constexpr TypeDependencyAttribute(TypeDependencyAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TypeDependencyAttribute", modifiers: "&&", def_value: None }]
constexpr TypeDependencyAttribute(TypeDependencyAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TypeDependencyAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr TypeDependencyAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TypeDependencyAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TypeDependencyAttribute& operator=(TypeDependencyAttribute&& o) noexcept = default;
  constexpr TypeDependencyAttribute& operator=(TypeDependencyAttribute const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_typeName, put=__set_typeName))  typeName;

constexpr void __set_typeName(::StringW value) ;

constexpr ::StringW __get_typeName() const;


// Methods

// Ctor Parameters [CppParam { name: "typeName", ty: "::StringW", modifiers: "", def_value: None }]
explicit TypeDependencyAttribute(::StringW typeName) ;

/// @brief Method .ctor addr 0x2370aa0 size 0x78 virtual false final false
 void _ctor(::StringW typeName) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
NEED_NO_BOX(System::Runtime::CompilerServices::TypeDependencyAttribute);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::CompilerServices::TypeDependencyAttribute, "System.Runtime.CompilerServices", "TypeDependencyAttribute");
