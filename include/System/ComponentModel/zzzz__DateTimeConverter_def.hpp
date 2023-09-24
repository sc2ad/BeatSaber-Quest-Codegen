#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/ComponentModel/zzzz__TypeConverter_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::ComponentModel {
class ITypeDescriptorContext;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::ComponentModel {
class DateTimeConverter;
}
// Type: System.ComponentModel::DateTimeConverter
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8331))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8266))
// CS Name: System.ComponentModel.DateTimeConverter
class CORDL_TYPE DateTimeConverter : public System::ComponentModel::TypeConverter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~DateTimeConverter() = default;

// Ctor Parameters [CppParam { name: "", ty: "DateTimeConverter", modifiers: " const&", def_value: None }]
constexpr DateTimeConverter(DateTimeConverter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DateTimeConverter", modifiers: "&&", def_value: None }]
constexpr DateTimeConverter(DateTimeConverter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DateTimeConverter(void* ptr) noexcept : System::ComponentModel::TypeConverter(ptr) {
}


  constexpr DateTimeConverter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DateTimeConverter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DateTimeConverter& operator=(DateTimeConverter&& o) noexcept = default;
  constexpr DateTimeConverter& operator=(DateTimeConverter const& o) noexcept = default;
                


// Methods

/// @brief Method CanConvertFrom addr 0x277ac34 size 0xc8 virtual true final false
 bool CanConvertFrom(System::ComponentModel::ITypeDescriptorContext context, System::Type sourceType) ;

/// @brief Method CanConvertTo addr 0x277acfc size 0xc8 virtual true final false
 bool CanConvertTo(System::ComponentModel::ITypeDescriptorContext context, System::Type destinationType) ;

/// @brief Method ConvertFrom addr 0x277adc4 size 0x320 virtual true final false
 ::bs_hook::Il2CppWrapperType ConvertFrom(System::ComponentModel::ITypeDescriptorContext context, System::Globalization::CultureInfo culture, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ConvertTo addr 0x277b0e4 size 0x32c virtual true final false
 ::bs_hook::Il2CppWrapperType ConvertTo(System::ComponentModel::ITypeDescriptorContext context, System::Globalization::CultureInfo culture, ::bs_hook::Il2CppWrapperType value, System::Type destinationType) ;

static System::ComponentModel::DateTimeConverter New_ctor() ;

/// @brief Method .ctor addr 0x277b410 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
NEED_NO_BOX(System::ComponentModel::DateTimeConverter);
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::DateTimeConverter, "System.ComponentModel", "DateTimeConverter");
