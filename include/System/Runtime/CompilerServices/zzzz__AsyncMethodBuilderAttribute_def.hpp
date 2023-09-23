#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::CompilerServices {
class AsyncMethodBuilderAttribute;
}
// Type: System.Runtime.CompilerServices::AsyncMethodBuilderAttribute
namespace System::Runtime::CompilerServices {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3348))
// CS Name: System.Runtime.CompilerServices.AsyncMethodBuilderAttribute
class CORDL_TYPE AsyncMethodBuilderAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~AsyncMethodBuilderAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "AsyncMethodBuilderAttribute", modifiers: " const&", def_value: None }]
constexpr AsyncMethodBuilderAttribute(AsyncMethodBuilderAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AsyncMethodBuilderAttribute", modifiers: "&&", def_value: None }]
constexpr AsyncMethodBuilderAttribute(AsyncMethodBuilderAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AsyncMethodBuilderAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr AsyncMethodBuilderAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AsyncMethodBuilderAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AsyncMethodBuilderAttribute& operator=(AsyncMethodBuilderAttribute&& o) noexcept = default;
  constexpr AsyncMethodBuilderAttribute& operator=(AsyncMethodBuilderAttribute const& o) noexcept = default;
                


// Fields

 System::Type __declspec(property(get=__get__BuilderType_k__BackingField, put=__set__BuilderType_k__BackingField))  _BuilderType_k__BackingField;

constexpr void __set__BuilderType_k__BackingField(System::Type value) ;

constexpr System::Type __get__BuilderType_k__BackingField() const;


// Methods

// Ctor Parameters [CppParam { name: "builderType", ty: "System::Type", modifiers: "", def_value: None }]
explicit AsyncMethodBuilderAttribute(System::Type builderType) ;

/// @brief Method .ctor addr 0x236d98c size 0x28 virtual false final false
 void _ctor(System::Type builderType) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
NEED_NO_BOX(System::Runtime::CompilerServices::AsyncMethodBuilderAttribute);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::CompilerServices::AsyncMethodBuilderAttribute, "System.Runtime.CompilerServices", "AsyncMethodBuilderAttribute");
