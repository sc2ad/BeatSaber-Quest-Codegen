#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/ComponentModel/zzzz__TypeConverter_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
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
namespace System::ComponentModel {
class StringConverter;
}
// Type: System.ComponentModel::StringConverter
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8331))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8307))
// CS Name: System.ComponentModel.StringConverter
class CORDL_TYPE StringConverter : public System::ComponentModel::TypeConverter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~StringConverter() = default;

// Ctor Parameters [CppParam { name: "", ty: "StringConverter", modifiers: " const&", def_value: None }]
constexpr StringConverter(StringConverter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StringConverter", modifiers: "&&", def_value: None }]
constexpr StringConverter(StringConverter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StringConverter(void* ptr) noexcept : System::ComponentModel::TypeConverter(ptr) {
}


  constexpr StringConverter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StringConverter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StringConverter& operator=(StringConverter&& o) noexcept = default;
  constexpr StringConverter& operator=(StringConverter const& o) noexcept = default;
                


// Methods

/// @brief Method CanConvertFrom addr 0x2785c68 size 0xa8 virtual true final false
 bool CanConvertFrom(System::ComponentModel::ITypeDescriptorContext context, System::Type sourceType) ;

/// @brief Method ConvertFrom addr 0x2785d10 size 0x84 virtual true final false
 ::bs_hook::Il2CppWrapperType ConvertFrom(System::ComponentModel::ITypeDescriptorContext context, System::Globalization::CultureInfo culture, ::bs_hook::Il2CppWrapperType value) ;

static System::ComponentModel::StringConverter New_ctor() ;

/// @brief Method .ctor addr 0x2785d94 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
NEED_NO_BOX(System::ComponentModel::StringConverter);
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::StringConverter, "System.ComponentModel", "StringConverter");
