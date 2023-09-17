#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
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
namespace System::Security::Authentication::ExtendedProtection {
class ExtendedProtectionPolicyTypeConverter;
}
// Type: System.Security.Authentication.ExtendedProtection::ExtendedProtectionPolicyTypeConverter
namespace System::Security::Authentication::ExtendedProtection {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8331))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7818))
// CS Name: System.Security.Authentication.ExtendedProtection.ExtendedProtectionPolicyTypeConverter
class CORDL_TYPE ExtendedProtectionPolicyTypeConverter : public ::System::ComponentModel::TypeConverter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ExtendedProtectionPolicyTypeConverter() = default;

// Ctor Parameters [CppParam { name: "", ty: "ExtendedProtectionPolicyTypeConverter", modifiers: " const&", def_value: None }]
constexpr ExtendedProtectionPolicyTypeConverter(ExtendedProtectionPolicyTypeConverter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ExtendedProtectionPolicyTypeConverter", modifiers: "&&", def_value: None }]
constexpr ExtendedProtectionPolicyTypeConverter(ExtendedProtectionPolicyTypeConverter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ExtendedProtectionPolicyTypeConverter(void* ptr) noexcept : ::System::ComponentModel::TypeConverter(ptr) {
}


  constexpr ExtendedProtectionPolicyTypeConverter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ExtendedProtectionPolicyTypeConverter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ExtendedProtectionPolicyTypeConverter& operator=(ExtendedProtectionPolicyTypeConverter&& o) noexcept = default;
  constexpr ExtendedProtectionPolicyTypeConverter& operator=(ExtendedProtectionPolicyTypeConverter const& o) noexcept = default;
                


// Methods

/// @brief Method CanConvertTo addr 0x27e1cbc size 0x40 virtual true final false
 bool CanConvertTo(::System::ComponentModel::ITypeDescriptorContext context, ::System::Type destinationType) ;

/// @brief Method ConvertTo addr 0x27e1cfc size 0x40 virtual true final false
 ::bs_hook::Il2CppWrapperType ConvertTo(::System::ComponentModel::ITypeDescriptorContext context, ::System::Globalization::CultureInfo culture, ::bs_hook::Il2CppWrapperType value, ::System::Type destinationType) ;

// Ctor Parameters []
explicit ExtendedProtectionPolicyTypeConverter() ;

/// @brief Method .ctor addr 0x27e1d3c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Authentication::ExtendedProtection
} // end anonymous namespace
NEED_NO_BOX(::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicyTypeConverter);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicyTypeConverter, "System.Security.Authentication.ExtendedProtection", "ExtendedProtectionPolicyTypeConverter");
