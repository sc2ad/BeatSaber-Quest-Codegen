#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/ComponentModel/zzzz__BaseNumberConverter_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Globalization {
class NumberFormatInfo;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::ComponentModel {
class UInt64Converter;
}
// Type: System.ComponentModel::UInt64Converter
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8258))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8315))
// CS Name: System.ComponentModel.UInt64Converter
class CORDL_TYPE UInt64Converter : public ::System::ComponentModel::BaseNumberConverter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UInt64Converter() = default;

// Ctor Parameters [CppParam { name: "", ty: "UInt64Converter", modifiers: " const&", def_value: None }]
constexpr UInt64Converter(UInt64Converter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UInt64Converter", modifiers: "&&", def_value: None }]
constexpr UInt64Converter(UInt64Converter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UInt64Converter(void* ptr) noexcept : ::System::ComponentModel::BaseNumberConverter(ptr) {
}


  constexpr UInt64Converter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UInt64Converter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UInt64Converter& operator=(UInt64Converter&& o) noexcept = default;
  constexpr UInt64Converter& operator=(UInt64Converter const& o) noexcept = default;
                


// Properties

 ::System::Type __declspec(property(get=get_TargetType))  TargetType;


// Methods

/// @brief Method get_TargetType addr 0x2786e1c size 0x6c virtual true final false
 ::System::Type get_TargetType() ;

/// @brief Method FromString addr 0x2786e88 size 0x94 virtual true final false
 ::bs_hook::Il2CppWrapperType FromString(::StringW value, int32_t radix) ;

/// @brief Method FromString addr 0x2786f1c size 0x74 virtual true final false
 ::bs_hook::Il2CppWrapperType FromString(::StringW value, ::System::Globalization::NumberFormatInfo formatInfo) ;

/// @brief Method ToString addr 0x2786f90 size 0xb0 virtual true final false
 ::StringW ToString(::bs_hook::Il2CppWrapperType value, ::System::Globalization::NumberFormatInfo formatInfo) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
} // end anonymous namespace
NEED_NO_BOX(::System::ComponentModel::UInt64Converter);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::UInt64Converter, "System.ComponentModel", "UInt64Converter");
