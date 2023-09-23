#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Runtime/CompilerServices/zzzz__CustomConstantAttribute_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System {
struct DateTime;
}
// Forward declare root types
namespace System::Runtime::CompilerServices {
class DateTimeConstantAttribute;
}
// Type: System.Runtime.CompilerServices::DateTimeConstantAttribute
namespace System::Runtime::CompilerServices {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3358))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3359))
// CS Name: System.Runtime.CompilerServices.DateTimeConstantAttribute
class CORDL_TYPE DateTimeConstantAttribute : public System::Runtime::CompilerServices::CustomConstantAttribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~DateTimeConstantAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "DateTimeConstantAttribute", modifiers: " const&", def_value: None }]
constexpr DateTimeConstantAttribute(DateTimeConstantAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DateTimeConstantAttribute", modifiers: "&&", def_value: None }]
constexpr DateTimeConstantAttribute(DateTimeConstantAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DateTimeConstantAttribute(void* ptr) noexcept : System::Runtime::CompilerServices::CustomConstantAttribute(ptr) {
}


  constexpr DateTimeConstantAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DateTimeConstantAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DateTimeConstantAttribute& operator=(DateTimeConstantAttribute&& o) noexcept = default;
  constexpr DateTimeConstantAttribute& operator=(DateTimeConstantAttribute const& o) noexcept = default;
                


// Fields

 System::DateTime __declspec(property(get=__get__date, put=__set__date))  _date;

constexpr void __set__date(System::DateTime value) ;

constexpr System::DateTime __get__date() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Value))  Value;


// Methods

/// @brief Method get_Value addr 0x236de00 size 0x5c virtual true final false
 ::bs_hook::Il2CppWrapperType get_Value() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
NEED_NO_BOX(System::Runtime::CompilerServices::DateTimeConstantAttribute);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::CompilerServices::DateTimeConstantAttribute, "System.Runtime.CompilerServices", "DateTimeConstantAttribute");
