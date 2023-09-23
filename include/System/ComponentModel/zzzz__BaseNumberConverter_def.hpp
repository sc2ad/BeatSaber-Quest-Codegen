#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/ComponentModel/zzzz__TypeConverter_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Globalization {
class CultureInfo;
}
namespace System::Globalization {
class NumberFormatInfo;
}
namespace System {
class Type;
}
namespace System::ComponentModel {
class ITypeDescriptorContext;
}
// Forward declare root types
namespace System::ComponentModel {
class BaseNumberConverter;
}
// Type: System.ComponentModel::BaseNumberConverter
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8331))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8258))
// CS Name: System.ComponentModel.BaseNumberConverter
class CORDL_TYPE BaseNumberConverter : public System::ComponentModel::TypeConverter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~BaseNumberConverter() = default;

// Ctor Parameters [CppParam { name: "", ty: "BaseNumberConverter", modifiers: " const&", def_value: None }]
constexpr BaseNumberConverter(BaseNumberConverter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BaseNumberConverter", modifiers: "&&", def_value: None }]
constexpr BaseNumberConverter(BaseNumberConverter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BaseNumberConverter(void* ptr) noexcept : System::ComponentModel::TypeConverter(ptr) {
}


  constexpr BaseNumberConverter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BaseNumberConverter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BaseNumberConverter& operator=(BaseNumberConverter&& o) noexcept = default;
  constexpr BaseNumberConverter& operator=(BaseNumberConverter const& o) noexcept = default;
                


// Properties

 bool __declspec(property(get=get_AllowHex))  AllowHex;

 System::Type __declspec(property(get=get_TargetType))  TargetType;


// Methods

// Ctor Parameters []
explicit BaseNumberConverter() ;

/// @brief Method .ctor addr 0x2773c54 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method get_AllowHex addr 0x2773c5c size 0x8 virtual true final false
 bool get_AllowHex() ;

/// @brief Method get_TargetType addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Type get_TargetType() ;

/// @brief Method FromString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType FromString(::StringW value, int32_t radix) ;

/// @brief Method FromString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType FromString(::StringW value, System::Globalization::NumberFormatInfo formatInfo) ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW ToString(::bs_hook::Il2CppWrapperType value, System::Globalization::NumberFormatInfo formatInfo) ;

/// @brief Method CanConvertFrom addr 0x2773c64 size 0xc8 virtual true final false
 bool CanConvertFrom(System::ComponentModel::ITypeDescriptorContext context, System::Type sourceType) ;

/// @brief Method ConvertFrom addr 0x2773d2c size 0x3fc virtual true final false
 ::bs_hook::Il2CppWrapperType ConvertFrom(System::ComponentModel::ITypeDescriptorContext context, System::Globalization::CultureInfo culture, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ConvertTo addr 0x2774128 size 0x2a4 virtual true final false
 ::bs_hook::Il2CppWrapperType ConvertTo(System::ComponentModel::ITypeDescriptorContext context, System::Globalization::CultureInfo culture, ::bs_hook::Il2CppWrapperType value, System::Type destinationType) ;

/// @brief Method CanConvertTo addr 0x27743cc size 0x38 virtual true final false
 bool CanConvertTo(System::ComponentModel::ITypeDescriptorContext context, System::Type destinationType) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
NEED_NO_BOX(System::ComponentModel::BaseNumberConverter);
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::BaseNumberConverter, "System.ComponentModel", "BaseNumberConverter");
