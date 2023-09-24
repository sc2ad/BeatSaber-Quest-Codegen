#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/ComponentModel/zzzz__BaseNumberConverter_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Globalization {
class NumberFormatInfo;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::ComponentModel {
class Int64Converter;
}
// Type: System.ComponentModel::Int64Converter
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8258))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8289))
// CS Name: System.ComponentModel.Int64Converter
class CORDL_TYPE Int64Converter : public System::ComponentModel::BaseNumberConverter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Int64Converter() = default;

// Ctor Parameters [CppParam { name: "", ty: "Int64Converter", modifiers: " const&", def_value: None }]
constexpr Int64Converter(Int64Converter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Int64Converter", modifiers: "&&", def_value: None }]
constexpr Int64Converter(Int64Converter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Int64Converter(void* ptr) noexcept : System::ComponentModel::BaseNumberConverter(ptr) {
}


  constexpr Int64Converter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Int64Converter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Int64Converter& operator=(Int64Converter&& o) noexcept = default;
  constexpr Int64Converter& operator=(Int64Converter const& o) noexcept = default;
                


// Properties

 System::Type __declspec(property(get=get_TargetType))  TargetType;


// Methods

/// @brief Method get_TargetType addr 0x277e930 size 0x6c virtual true final false
 System::Type get_TargetType() ;

/// @brief Method FromString addr 0x277e99c size 0x94 virtual true final false
 ::bs_hook::Il2CppWrapperType FromString(::StringW value, int32_t radix) ;

/// @brief Method FromString addr 0x277ea30 size 0x74 virtual true final false
 ::bs_hook::Il2CppWrapperType FromString(::StringW value, System::Globalization::NumberFormatInfo formatInfo) ;

/// @brief Method ToString addr 0x277eaa4 size 0xb0 virtual true final false
 ::StringW ToString(::bs_hook::Il2CppWrapperType value, System::Globalization::NumberFormatInfo formatInfo) ;

static System::ComponentModel::Int64Converter New_ctor() ;

/// @brief Method .ctor addr 0x277eb54 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
NEED_NO_BOX(System::ComponentModel::Int64Converter);
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::Int64Converter, "System.ComponentModel", "Int64Converter");
