#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace System::Runtime::CompilerServices {
class TypeForwardedFromAttribute;
}
// Type: System.Runtime.CompilerServices::TypeForwardedFromAttribute
namespace System::Runtime::CompilerServices {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3379))
// CS Name: System.Runtime.CompilerServices.TypeForwardedFromAttribute
class CORDL_TYPE TypeForwardedFromAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~TypeForwardedFromAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "TypeForwardedFromAttribute", modifiers: " const&", def_value: None }]
constexpr TypeForwardedFromAttribute(TypeForwardedFromAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TypeForwardedFromAttribute", modifiers: "&&", def_value: None }]
constexpr TypeForwardedFromAttribute(TypeForwardedFromAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TypeForwardedFromAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr TypeForwardedFromAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TypeForwardedFromAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TypeForwardedFromAttribute& operator=(TypeForwardedFromAttribute&& o) noexcept = default;
  constexpr TypeForwardedFromAttribute& operator=(TypeForwardedFromAttribute const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__AssemblyFullName_k__BackingField, put=__set__AssemblyFullName_k__BackingField))  _AssemblyFullName_k__BackingField;

constexpr void __set__AssemblyFullName_k__BackingField(::StringW value) ;

constexpr ::StringW __get__AssemblyFullName_k__BackingField() const;


// Properties

 ::StringW __declspec(property(get=get_AssemblyFullName))  AssemblyFullName;


// Methods

// Ctor Parameters [CppParam { name: "assemblyFullName", ty: "::StringW", modifiers: "", def_value: None }]
explicit TypeForwardedFromAttribute(::StringW assemblyFullName) ;

/// @brief Method .ctor addr 0x236e450 size 0x84 virtual false final false
 void _ctor(::StringW assemblyFullName) ;

/// @brief Method get_AssemblyFullName addr 0x236e4d4 size 0x8 virtual false final false
 ::StringW get_AssemblyFullName() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
NEED_NO_BOX(System::Runtime::CompilerServices::TypeForwardedFromAttribute);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::CompilerServices::TypeForwardedFromAttribute, "System.Runtime.CompilerServices", "TypeForwardedFromAttribute");
