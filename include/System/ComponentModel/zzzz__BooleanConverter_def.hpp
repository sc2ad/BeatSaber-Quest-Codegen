#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/ComponentModel/zzzz__TypeConverter_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::ComponentModel {
class System__ComponentModel__TypeConverter__StandardValuesCollection;
}
namespace System {
class Type;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System::ComponentModel {
class ITypeDescriptorContext;
}
// Forward declare root types
namespace System::ComponentModel {
class BooleanConverter;
}
// Type: System.ComponentModel::BooleanConverter
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8331))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8259))
// CS Name: System.ComponentModel.BooleanConverter
class CORDL_TYPE BooleanConverter : public System::ComponentModel::TypeConverter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~BooleanConverter() = default;

// Ctor Parameters [CppParam { name: "", ty: "BooleanConverter", modifiers: " const&", def_value: None }]
constexpr BooleanConverter(BooleanConverter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BooleanConverter", modifiers: "&&", def_value: None }]
constexpr BooleanConverter(BooleanConverter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BooleanConverter(void* ptr) noexcept : System::ComponentModel::TypeConverter(ptr) {
}


  constexpr BooleanConverter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BooleanConverter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BooleanConverter& operator=(BooleanConverter&& o) noexcept = default;
  constexpr BooleanConverter& operator=(BooleanConverter const& o) noexcept = default;
                


// Fields

static System::ComponentModel::System__ComponentModel__TypeConverter__StandardValuesCollection __declspec(property(get=__get_s_values, put=__set_s_values))  s_values;

static void __set_s_values(System::ComponentModel::System__ComponentModel__TypeConverter__StandardValuesCollection value) ;

static System::ComponentModel::System__ComponentModel__TypeConverter__StandardValuesCollection __get_s_values() ;


// Methods

/// @brief Method CanConvertFrom addr 0x2774404 size 0xc8 virtual true final false
 bool CanConvertFrom(System::ComponentModel::ITypeDescriptorContext context, System::Type sourceType) ;

/// @brief Method ConvertFrom addr 0x27744cc size 0x200 virtual true final false
 ::bs_hook::Il2CppWrapperType ConvertFrom(System::ComponentModel::ITypeDescriptorContext context, System::Globalization::CultureInfo culture, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method GetStandardValues addr 0x27746cc size 0x164 virtual true final false
 System::ComponentModel::System__ComponentModel__TypeConverter__StandardValuesCollection GetStandardValues(System::ComponentModel::ITypeDescriptorContext context) ;

/// @brief Method GetStandardValuesExclusive addr 0x2774830 size 0x8 virtual true final false
 bool GetStandardValuesExclusive(System::ComponentModel::ITypeDescriptorContext context) ;

/// @brief Method GetStandardValuesSupported addr 0x2774838 size 0x8 virtual true final false
 bool GetStandardValuesSupported(System::ComponentModel::ITypeDescriptorContext context) ;

static System::ComponentModel::BooleanConverter New_ctor() ;

/// @brief Method .ctor addr 0x2774840 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
NEED_NO_BOX(System::ComponentModel::BooleanConverter);
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::BooleanConverter, "System.ComponentModel", "BooleanConverter");
