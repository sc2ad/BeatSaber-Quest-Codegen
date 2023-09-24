#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include <cstdint>
namespace System {
struct Decimal;
}
// Forward declare root types
namespace System::Runtime::CompilerServices {
class DecimalConstantAttribute;
}
// Type: System.Runtime.CompilerServices::DecimalConstantAttribute
namespace System::Runtime::CompilerServices {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3360))
// CS Name: System.Runtime.CompilerServices.DecimalConstantAttribute
class CORDL_TYPE DecimalConstantAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~DecimalConstantAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "DecimalConstantAttribute", modifiers: " const&", def_value: None }]
constexpr DecimalConstantAttribute(DecimalConstantAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DecimalConstantAttribute", modifiers: "&&", def_value: None }]
constexpr DecimalConstantAttribute(DecimalConstantAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DecimalConstantAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr DecimalConstantAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DecimalConstantAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DecimalConstantAttribute& operator=(DecimalConstantAttribute&& o) noexcept = default;
  constexpr DecimalConstantAttribute& operator=(DecimalConstantAttribute const& o) noexcept = default;
                


// Fields

 System::Decimal __declspec(property(get=__get__dec, put=__set__dec))  _dec;

constexpr void __set__dec(System::Decimal value) ;

constexpr System::Decimal __get__dec() const;


// Properties

 System::Decimal __declspec(property(get=get_Value))  Value;


// Methods

static System::Runtime::CompilerServices::DecimalConstantAttribute New_ctor(uint8_t scale, uint8_t sign, uint32_t hi, uint32_t mid, uint32_t low) ;

/// @brief Method .ctor addr 0x236de5c size 0x9c virtual false final false
 void _ctor(uint8_t scale, uint8_t sign, uint32_t hi, uint32_t mid, uint32_t low) ;

/// @brief Method get_Value addr 0x236def8 size 0xc virtual false final false
 System::Decimal get_Value() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
NEED_NO_BOX(System::Runtime::CompilerServices::DecimalConstantAttribute);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::CompilerServices::DecimalConstantAttribute, "System.Runtime.CompilerServices", "DecimalConstantAttribute");
