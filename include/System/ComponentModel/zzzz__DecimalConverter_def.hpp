#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/ComponentModel/zzzz__BaseNumberConverter_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Globalization {
class CultureInfo;
}
namespace System::Globalization {
class NumberFormatInfo;
}
namespace System::ComponentModel {
class ITypeDescriptorContext;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::ComponentModel {
class DecimalConverter;
}
// Type: System.ComponentModel::DecimalConverter
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8258))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8267))
// CS Name: System.ComponentModel.DecimalConverter
class CORDL_TYPE DecimalConverter : public ::System::ComponentModel::BaseNumberConverter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~DecimalConverter() = default;

// Ctor Parameters [CppParam { name: "", ty: "DecimalConverter", modifiers: " const&", def_value: None }]
constexpr DecimalConverter(DecimalConverter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DecimalConverter", modifiers: "&&", def_value: None }]
constexpr DecimalConverter(DecimalConverter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DecimalConverter(void* ptr) noexcept : ::System::ComponentModel::BaseNumberConverter(ptr) {
}


  constexpr DecimalConverter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DecimalConverter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DecimalConverter& operator=(DecimalConverter&& o) noexcept = default;
  constexpr DecimalConverter& operator=(DecimalConverter const& o) noexcept = default;
                


// Properties

 bool __declspec(property(get=get_AllowHex))  AllowHex;

 ::System::Type __declspec(property(get=get_TargetType))  TargetType;


// Methods

/// @brief Method get_AllowHex addr 0x277b418 size 0x8 virtual true final false
 bool get_AllowHex() ;

/// @brief Method get_TargetType addr 0x277b420 size 0x6c virtual true final false
 ::System::Type get_TargetType() ;

/// @brief Method CanConvertTo addr 0x277b48c size 0xc4 virtual true final false
 bool CanConvertTo(::System::ComponentModel::ITypeDescriptorContext context, ::System::Type destinationType) ;

/// @brief Method ConvertTo addr 0x277b550 size 0x328 virtual true final false
 ::bs_hook::Il2CppWrapperType ConvertTo(::System::ComponentModel::ITypeDescriptorContext context, ::System::Globalization::CultureInfo culture, ::bs_hook::Il2CppWrapperType value, ::System::Type destinationType) ;

/// @brief Method FromString addr 0x277b878 size 0xec virtual true final false
 ::bs_hook::Il2CppWrapperType FromString(::StringW value, int32_t radix) ;

/// @brief Method FromString addr 0x277b964 size 0xac virtual true final false
 ::bs_hook::Il2CppWrapperType FromString(::StringW value, ::System::Globalization::NumberFormatInfo formatInfo) ;

/// @brief Method ToString addr 0x277ba10 size 0xd8 virtual true final false
 ::StringW ToString(::bs_hook::Il2CppWrapperType value, ::System::Globalization::NumberFormatInfo formatInfo) ;

// Ctor Parameters []
explicit DecimalConverter() ;

/// @brief Method .ctor addr 0x277bae8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
} // end anonymous namespace
NEED_NO_BOX(::System::ComponentModel::DecimalConverter);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::DecimalConverter, "System.ComponentModel", "DecimalConverter");
