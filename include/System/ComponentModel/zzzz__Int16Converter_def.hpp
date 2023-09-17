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
class Int16Converter;
}
// Type: System.ComponentModel::Int16Converter
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8258))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8287))
// CS Name: System.ComponentModel.Int16Converter
class CORDL_TYPE Int16Converter : public ::System::ComponentModel::BaseNumberConverter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Int16Converter() = default;

// Ctor Parameters [CppParam { name: "", ty: "Int16Converter", modifiers: " const&", def_value: None }]
constexpr Int16Converter(Int16Converter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Int16Converter", modifiers: "&&", def_value: None }]
constexpr Int16Converter(Int16Converter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Int16Converter(void* ptr) noexcept : ::System::ComponentModel::BaseNumberConverter(ptr) {
}


  constexpr Int16Converter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Int16Converter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Int16Converter& operator=(Int16Converter&& o) noexcept = default;
  constexpr Int16Converter& operator=(Int16Converter const& o) noexcept = default;
                


// Properties

 ::System::Type __declspec(property(get=get_TargetType))  TargetType;


// Methods

/// @brief Method get_TargetType addr 0x277e4d8 size 0x6c virtual true final false
 ::System::Type get_TargetType() ;

/// @brief Method FromString addr 0x277e544 size 0x94 virtual true final false
 ::bs_hook::Il2CppWrapperType FromString(::StringW value, int32_t radix) ;

/// @brief Method FromString addr 0x277e5d8 size 0x74 virtual true final false
 ::bs_hook::Il2CppWrapperType FromString(::StringW value, ::System::Globalization::NumberFormatInfo formatInfo) ;

/// @brief Method ToString addr 0x277e64c size 0xb0 virtual true final false
 ::StringW ToString(::bs_hook::Il2CppWrapperType value, ::System::Globalization::NumberFormatInfo formatInfo) ;

// Ctor Parameters []
explicit Int16Converter() ;

/// @brief Method .ctor addr 0x277e6fc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
} // end anonymous namespace
NEED_NO_BOX(::System::ComponentModel::Int16Converter);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::Int16Converter, "System.ComponentModel", "Int16Converter");
