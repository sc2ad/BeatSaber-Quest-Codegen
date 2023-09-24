#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
// Forward declare root types
namespace System::Runtime::CompilerServices {
class CustomConstantAttribute;
}
// Type: System.Runtime.CompilerServices::CustomConstantAttribute
namespace System::Runtime::CompilerServices {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3358))
// CS Name: System.Runtime.CompilerServices.CustomConstantAttribute
class CORDL_TYPE CustomConstantAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~CustomConstantAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "CustomConstantAttribute", modifiers: " const&", def_value: None }]
constexpr CustomConstantAttribute(CustomConstantAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CustomConstantAttribute", modifiers: "&&", def_value: None }]
constexpr CustomConstantAttribute(CustomConstantAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CustomConstantAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr CustomConstantAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CustomConstantAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CustomConstantAttribute& operator=(CustomConstantAttribute&& o) noexcept = default;
  constexpr CustomConstantAttribute& operator=(CustomConstantAttribute const& o) noexcept = default;
                


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Value))  Value;


// Methods

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType get_Value() ;

static System::Runtime::CompilerServices::CustomConstantAttribute New_ctor() ;

/// @brief Method .ctor addr 0x236ddf8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
NEED_NO_BOX(System::Runtime::CompilerServices::CustomConstantAttribute);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::CompilerServices::CustomConstantAttribute, "System.Runtime.CompilerServices", "CustomConstantAttribute");
