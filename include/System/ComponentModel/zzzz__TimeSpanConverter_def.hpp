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
class TimeSpanConverter;
}
// Type: System.ComponentModel::TimeSpanConverter
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8331))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8308))
// CS Name: System.ComponentModel.TimeSpanConverter
class CORDL_TYPE TimeSpanConverter : public System::ComponentModel::TypeConverter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~TimeSpanConverter() = default;

// Ctor Parameters [CppParam { name: "", ty: "TimeSpanConverter", modifiers: " const&", def_value: None }]
constexpr TimeSpanConverter(TimeSpanConverter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TimeSpanConverter", modifiers: "&&", def_value: None }]
constexpr TimeSpanConverter(TimeSpanConverter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TimeSpanConverter(void* ptr) noexcept : System::ComponentModel::TypeConverter(ptr) {
}


  constexpr TimeSpanConverter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TimeSpanConverter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TimeSpanConverter& operator=(TimeSpanConverter&& o) noexcept = default;
  constexpr TimeSpanConverter& operator=(TimeSpanConverter const& o) noexcept = default;
                


// Methods

/// @brief Method CanConvertFrom addr 0x2785d9c size 0xa8 virtual true final false
 bool CanConvertFrom(System::ComponentModel::ITypeDescriptorContext context, System::Type sourceType) ;

/// @brief Method CanConvertTo addr 0x2785e44 size 0xa8 virtual true final false
 bool CanConvertTo(System::ComponentModel::ITypeDescriptorContext context, System::Type destinationType) ;

/// @brief Method ConvertFrom addr 0x2785f74 size 0x1e4 virtual true final false
 ::bs_hook::Il2CppWrapperType ConvertFrom(System::ComponentModel::ITypeDescriptorContext context, System::Globalization::CultureInfo culture, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ConvertTo addr 0x2786158 size 0x2fc virtual true final false
 ::bs_hook::Il2CppWrapperType ConvertTo(System::ComponentModel::ITypeDescriptorContext context, System::Globalization::CultureInfo culture, ::bs_hook::Il2CppWrapperType value, System::Type destinationType) ;

// Ctor Parameters []
explicit TimeSpanConverter() ;

/// @brief Method .ctor addr 0x2786454 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
NEED_NO_BOX(System::ComponentModel::TimeSpanConverter);
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::TimeSpanConverter, "System.ComponentModel", "TimeSpanConverter");
