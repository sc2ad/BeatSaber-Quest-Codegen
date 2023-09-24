#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/ComponentModel/zzzz__BaseNumberConverter_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System {
class Type;
}
namespace System::Globalization {
class NumberFormatInfo;
}
// Forward declare root types
namespace System::ComponentModel {
class UInt32Converter;
}
// Type: System.ComponentModel::UInt32Converter
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8258))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8314))
// CS Name: System.ComponentModel.UInt32Converter
class CORDL_TYPE UInt32Converter : public System::ComponentModel::BaseNumberConverter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UInt32Converter() = default;

// Ctor Parameters [CppParam { name: "", ty: "UInt32Converter", modifiers: " const&", def_value: None }]
constexpr UInt32Converter(UInt32Converter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UInt32Converter", modifiers: "&&", def_value: None }]
constexpr UInt32Converter(UInt32Converter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UInt32Converter(void* ptr) noexcept : System::ComponentModel::BaseNumberConverter(ptr) {
}


  constexpr UInt32Converter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UInt32Converter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UInt32Converter& operator=(UInt32Converter&& o) noexcept = default;
  constexpr UInt32Converter& operator=(UInt32Converter const& o) noexcept = default;
                


// Properties

 System::Type __declspec(property(get=get_TargetType))  TargetType;


// Methods

/// @brief Method get_TargetType addr 0x2786bf0 size 0x6c virtual true final false
 System::Type get_TargetType() ;

/// @brief Method FromString addr 0x2786c5c size 0x94 virtual true final false
 ::bs_hook::Il2CppWrapperType FromString(::StringW value, int32_t radix) ;

/// @brief Method FromString addr 0x2786cf0 size 0x74 virtual true final false
 ::bs_hook::Il2CppWrapperType FromString(::StringW value, System::Globalization::NumberFormatInfo formatInfo) ;

/// @brief Method ToString addr 0x2786d64 size 0xb0 virtual true final false
 ::StringW ToString(::bs_hook::Il2CppWrapperType value, System::Globalization::NumberFormatInfo formatInfo) ;

static System::ComponentModel::UInt32Converter New_ctor() ;

/// @brief Method .ctor addr 0x2786e14 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
NEED_NO_BOX(System::ComponentModel::UInt32Converter);
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::UInt32Converter, "System.ComponentModel", "UInt32Converter");
