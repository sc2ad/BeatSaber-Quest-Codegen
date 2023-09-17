#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/ComponentModel/zzzz__TypeConverter_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace System {
class Type;
}
namespace System::ComponentModel {
class ITypeDescriptorContext;
}
namespace System::Globalization {
class CultureInfo;
}
// Forward declare root types
namespace System {
class UriTypeConverter;
}
// Type: System::UriTypeConverter
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8331))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7750))
// CS Name: System.UriTypeConverter
class CORDL_TYPE UriTypeConverter : public ::System::ComponentModel::TypeConverter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UriTypeConverter() = default;

// Ctor Parameters [CppParam { name: "", ty: "UriTypeConverter", modifiers: " const&", def_value: None }]
constexpr UriTypeConverter(UriTypeConverter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UriTypeConverter", modifiers: "&&", def_value: None }]
constexpr UriTypeConverter(UriTypeConverter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UriTypeConverter(void* ptr) noexcept : ::System::ComponentModel::TypeConverter(ptr) {
}


  constexpr UriTypeConverter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UriTypeConverter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UriTypeConverter& operator=(UriTypeConverter&& o) noexcept = default;
  constexpr UriTypeConverter& operator=(UriTypeConverter const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit UriTypeConverter() ;

/// @brief Method .ctor addr 0x27bc370 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method CanConvert addr 0x27bc378 size 0xe4 virtual false final false
 bool CanConvert(::System::Type type) ;

/// @brief Method CanConvertFrom addr 0x27bc45c size 0xb4 virtual true final false
 bool CanConvertFrom(::System::ComponentModel::ITypeDescriptorContext context, ::System::Type sourceType) ;

/// @brief Method CanConvertTo addr 0x27bc510 size 0x78 virtual true final false
 bool CanConvertTo(::System::ComponentModel::ITypeDescriptorContext context, ::System::Type destinationType) ;

/// @brief Method ConvertFrom addr 0x27bc588 size 0x1ac virtual true final false
 ::bs_hook::Il2CppWrapperType ConvertFrom(::System::ComponentModel::ITypeDescriptorContext context, ::System::Globalization::CultureInfo culture, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ConvertTo addr 0x27bc734 size 0x1ec virtual true final false
 ::bs_hook::Il2CppWrapperType ConvertTo(::System::ComponentModel::ITypeDescriptorContext context, ::System::Globalization::CultureInfo culture, ::bs_hook::Il2CppWrapperType value, ::System::Type destinationType) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
} // end anonymous namespace
NEED_NO_BOX(::System::UriTypeConverter);
DEFINE_IL2CPP_ARG_TYPE(::System::UriTypeConverter, "System", "UriTypeConverter");
