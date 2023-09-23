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
class GuidConverter;
}
// Type: System.ComponentModel::GuidConverter
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8331))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8280))
// CS Name: System.ComponentModel.GuidConverter
class CORDL_TYPE GuidConverter : public System::ComponentModel::TypeConverter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GuidConverter() = default;

// Ctor Parameters [CppParam { name: "", ty: "GuidConverter", modifiers: " const&", def_value: None }]
constexpr GuidConverter(GuidConverter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GuidConverter", modifiers: "&&", def_value: None }]
constexpr GuidConverter(GuidConverter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GuidConverter(void* ptr) noexcept : System::ComponentModel::TypeConverter(ptr) {
}


  constexpr GuidConverter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GuidConverter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GuidConverter& operator=(GuidConverter&& o) noexcept = default;
  constexpr GuidConverter& operator=(GuidConverter const& o) noexcept = default;
                


// Methods

/// @brief Method CanConvertFrom addr 0x277df38 size 0xc8 virtual true final false
 bool CanConvertFrom(System::ComponentModel::ITypeDescriptorContext context, System::Type sourceType) ;

/// @brief Method CanConvertTo addr 0x277e000 size 0xc8 virtual true final false
 bool CanConvertTo(System::ComponentModel::ITypeDescriptorContext context, System::Type destinationType) ;

/// @brief Method ConvertFrom addr 0x277e0c8 size 0xe0 virtual true final false
 ::bs_hook::Il2CppWrapperType ConvertFrom(System::ComponentModel::ITypeDescriptorContext context, System::Globalization::CultureInfo culture, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ConvertTo addr 0x277e1a8 size 0x328 virtual true final false
 ::bs_hook::Il2CppWrapperType ConvertTo(System::ComponentModel::ITypeDescriptorContext context, System::Globalization::CultureInfo culture, ::bs_hook::Il2CppWrapperType value, System::Type destinationType) ;

// Ctor Parameters []
explicit GuidConverter() ;

/// @brief Method .ctor addr 0x277e4d0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
NEED_NO_BOX(System::ComponentModel::GuidConverter);
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::GuidConverter, "System.ComponentModel", "GuidConverter");
