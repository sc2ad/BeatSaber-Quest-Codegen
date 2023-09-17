#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/ComponentModel/zzzz__TypeConverter_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System {
class Type;
}
namespace System::ComponentModel {
class ____System__ComponentModel__TypeConverter__StandardValuesCollection;
}
namespace System::ComponentModel {
class ITypeDescriptorContext;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System::Collections {
class IComparer;
}
// Forward declare root types
namespace System::ComponentModel {
class ReferenceConverter;
}
namespace System::ComponentModel {
class ____System__ComponentModel__ReferenceConverter__ReferenceComparer;
}
// Type: ::ReferenceComparer
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8299))
// CS Name: System.ComponentModel.ReferenceConverter::ReferenceComparer
class CORDL_TYPE ____System__ComponentModel__ReferenceConverter__ReferenceComparer : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::IComparer
constexpr operator  ::System::Collections::IComparer() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~____System__ComponentModel__ReferenceConverter__ReferenceComparer() = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__ComponentModel__ReferenceConverter__ReferenceComparer", modifiers: " const&", def_value: None }]
constexpr ____System__ComponentModel__ReferenceConverter__ReferenceComparer(____System__ComponentModel__ReferenceConverter__ReferenceComparer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__ComponentModel__ReferenceConverter__ReferenceComparer", modifiers: "&&", def_value: None }]
constexpr ____System__ComponentModel__ReferenceConverter__ReferenceComparer(____System__ComponentModel__ReferenceConverter__ReferenceComparer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____System__ComponentModel__ReferenceConverter__ReferenceComparer(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____System__ComponentModel__ReferenceConverter__ReferenceComparer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____System__ComponentModel__ReferenceConverter__ReferenceComparer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____System__ComponentModel__ReferenceConverter__ReferenceComparer& operator=(____System__ComponentModel__ReferenceConverter__ReferenceComparer&& o) noexcept = default;
  constexpr ____System__ComponentModel__ReferenceConverter__ReferenceComparer& operator=(____System__ComponentModel__ReferenceConverter__ReferenceComparer const& o) noexcept = default;
                


// Fields

 ::System::ComponentModel::ReferenceConverter __declspec(property(get=__get__converter, put=__set__converter))  _converter;

constexpr void __set__converter(::System::ComponentModel::ReferenceConverter value) ;

constexpr ::System::ComponentModel::ReferenceConverter __get__converter() const;


// Methods

// Ctor Parameters [CppParam { name: "converter", ty: "::System::ComponentModel::ReferenceConverter", modifiers: "", def_value: None }]
explicit ____System__ComponentModel__ReferenceConverter__ReferenceComparer(::System::ComponentModel::ReferenceConverter converter) ;

/// @brief Method .ctor addr 0x2783fc4 size 0x28 virtual false final false
 void _ctor(::System::ComponentModel::ReferenceConverter converter) ;

/// @brief Method Compare addr 0x2784114 size 0xb0 virtual true final true
 int32_t Compare(::bs_hook::Il2CppWrapperType item1, ::bs_hook::Il2CppWrapperType item2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
// Type: System.ComponentModel::ReferenceConverter
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8331))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8300))
// CS Name: System.ComponentModel.ReferenceConverter
class CORDL_TYPE ReferenceConverter : public ::System::ComponentModel::TypeConverter {
public:
// Declarations
using ReferenceComparer = ::System::ComponentModel::____System__ComponentModel__ReferenceConverter__ReferenceComparer;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~ReferenceConverter() = default;

// Ctor Parameters [CppParam { name: "", ty: "ReferenceConverter", modifiers: " const&", def_value: None }]
constexpr ReferenceConverter(ReferenceConverter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ReferenceConverter", modifiers: "&&", def_value: None }]
constexpr ReferenceConverter(ReferenceConverter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ReferenceConverter(void* ptr) noexcept : ::System::ComponentModel::TypeConverter(ptr) {
}


  constexpr ReferenceConverter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ReferenceConverter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ReferenceConverter& operator=(ReferenceConverter&& o) noexcept = default;
  constexpr ReferenceConverter& operator=(ReferenceConverter const& o) noexcept = default;
                


// Fields

static ::StringW __declspec(property(get=__get_s_none, put=__set_s_none))  s_none;

static void __set_s_none(::StringW value) ;

static ::StringW __get_s_none() ;

 ::System::Type __declspec(property(get=__get__type, put=__set__type))  _type;

constexpr void __set__type(::System::Type value) ;

constexpr ::System::Type __get__type() const;


// Methods

// Ctor Parameters [CppParam { name: "type", ty: "::System::Type", modifiers: "", def_value: None }]
explicit ReferenceConverter(::System::Type type) ;

/// @brief Method .ctor addr 0x2782c44 size 0x28 virtual false final false
 void _ctor(::System::Type type) ;

/// @brief Method CanConvertFrom addr 0x2782c74 size 0xb0 virtual true final false
 bool CanConvertFrom(::System::ComponentModel::ITypeDescriptorContext context, ::System::Type sourceType) ;

/// @brief Method ConvertFrom addr 0x2782dac size 0x338 virtual true final false
 ::bs_hook::Il2CppWrapperType ConvertFrom(::System::ComponentModel::ITypeDescriptorContext context, ::System::Globalization::CultureInfo culture, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ConvertTo addr 0x2783150 size 0x44c virtual true final false
 ::bs_hook::Il2CppWrapperType ConvertTo(::System::ComponentModel::ITypeDescriptorContext context, ::System::Globalization::CultureInfo culture, ::bs_hook::Il2CppWrapperType value, ::System::Type destinationType) ;

/// @brief Method GetStandardValues addr 0x27837d4 size 0x7f0 virtual true final false
 ::System::ComponentModel::____System__ComponentModel__TypeConverter__StandardValuesCollection GetStandardValues(::System::ComponentModel::ITypeDescriptorContext context) ;

/// @brief Method GetStandardValuesExclusive addr 0x278409c size 0x8 virtual true final false
 bool GetStandardValuesExclusive(::System::ComponentModel::ITypeDescriptorContext context) ;

/// @brief Method GetStandardValuesSupported addr 0x27840a4 size 0x8 virtual true final false
 bool GetStandardValuesSupported(::System::ComponentModel::ITypeDescriptorContext context) ;

/// @brief Method IsValueAllowed addr 0x27840ac size 0x8 virtual true final false
 bool IsValueAllowed(::System::ComponentModel::ITypeDescriptorContext context, ::bs_hook::Il2CppWrapperType value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
} // end anonymous namespace
NEED_NO_BOX(::System::ComponentModel::ReferenceConverter);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::ReferenceConverter, "System.ComponentModel", "ReferenceConverter");
NEED_NO_BOX(::System::ComponentModel::____System__ComponentModel__ReferenceConverter__ReferenceComparer);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::____System__ComponentModel__ReferenceConverter__ReferenceComparer, "System.ComponentModel", "ReferenceConverter/ReferenceComparer");
