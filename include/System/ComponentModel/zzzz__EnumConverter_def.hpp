#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/ComponentModel/zzzz__TypeConverter_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::Globalization {
class CultureInfo;
}
namespace System::ComponentModel {
class ITypeDescriptorContext;
}
namespace System::ComponentModel {
class System__ComponentModel__TypeConverter__StandardValuesCollection;
}
namespace System {
class Type;
}
namespace System::Collections {
class IComparer;
}
// Forward declare root types
namespace System::ComponentModel {
class EnumConverter;
}
// Type: System.ComponentModel::EnumConverter
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8331))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8323))
// CS Name: System.ComponentModel.EnumConverter
class CORDL_TYPE EnumConverter : public System::ComponentModel::TypeConverter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~EnumConverter() = default;

// Ctor Parameters [CppParam { name: "", ty: "EnumConverter", modifiers: " const&", def_value: None }]
constexpr EnumConverter(EnumConverter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EnumConverter", modifiers: "&&", def_value: None }]
constexpr EnumConverter(EnumConverter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EnumConverter(void* ptr) noexcept : System::ComponentModel::TypeConverter(ptr) {
}


  constexpr EnumConverter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EnumConverter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EnumConverter& operator=(EnumConverter&& o) noexcept = default;
  constexpr EnumConverter& operator=(EnumConverter const& o) noexcept = default;
                


// Fields

 System::ComponentModel::System__ComponentModel__TypeConverter__StandardValuesCollection __declspec(property(get=__get_values, put=__set_values))  values;

constexpr void __set_values(System::ComponentModel::System__ComponentModel__TypeConverter__StandardValuesCollection value) ;

constexpr System::ComponentModel::System__ComponentModel__TypeConverter__StandardValuesCollection __get_values() const;

 System::Type __declspec(property(get=__get_type, put=__set_type))  type;

constexpr void __set_type(System::Type value) ;

constexpr System::Type __get_type() const;


// Properties

 System::Collections::IComparer __declspec(property(get=get_Comparer))  Comparer;


// Methods

static System::ComponentModel::EnumConverter New_ctor(System::Type type) ;

/// @brief Method .ctor addr 0x2788b98 size 0x28 virtual false final false
 void _ctor(System::Type type) ;

/// @brief Method CanConvertFrom addr 0x2788bc0 size 0xf0 virtual true final false
 bool CanConvertFrom(System::ComponentModel::ITypeDescriptorContext context, System::Type sourceType) ;

/// @brief Method CanConvertTo addr 0x2788cb0 size 0xf0 virtual true final false
 bool CanConvertTo(System::ComponentModel::ITypeDescriptorContext context, System::Type destinationType) ;

/// @brief Method get_Comparer addr 0x2788da0 size 0x58 virtual true final false
 System::Collections::IComparer get_Comparer() ;

/// @brief Method ConvertFrom addr 0x2788df8 size 0x4fc virtual true final false
 ::bs_hook::Il2CppWrapperType ConvertFrom(System::ComponentModel::ITypeDescriptorContext context, System::Globalization::CultureInfo culture, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ConvertTo addr 0x27892f4 size 0xd90 virtual true final false
 ::bs_hook::Il2CppWrapperType ConvertTo(System::ComponentModel::ITypeDescriptorContext context, System::Globalization::CultureInfo culture, ::bs_hook::Il2CppWrapperType value, System::Type destinationType) ;

/// @brief Method GetStandardValues addr 0x278a0fc size 0x3f0 virtual true final false
 System::ComponentModel::System__ComponentModel__TypeConverter__StandardValuesCollection GetStandardValues(System::ComponentModel::ITypeDescriptorContext context) ;

/// @brief Method GetStandardValuesExclusive addr 0x278a5e0 size 0xa8 virtual true final false
 bool GetStandardValuesExclusive(System::ComponentModel::ITypeDescriptorContext context) ;

/// @brief Method GetStandardValuesSupported addr 0x278a688 size 0x8 virtual true final false
 bool GetStandardValuesSupported(System::ComponentModel::ITypeDescriptorContext context) ;

/// @brief Method IsValid addr 0x278a690 size 0x6c virtual true final false
 bool IsValid(System::ComponentModel::ITypeDescriptorContext context, ::bs_hook::Il2CppWrapperType value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
NEED_NO_BOX(System::ComponentModel::EnumConverter);
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::EnumConverter, "System.ComponentModel", "EnumConverter");
