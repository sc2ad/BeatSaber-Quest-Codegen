#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/ComponentModel/zzzz__TypeConverter_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::ComponentModel {
class ITypeDescriptorContext;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System::ComponentModel {
class ____System__ComponentModel__TypeConverter__StandardValuesCollection;
}
namespace System {
class Type;
}
namespace System::Collections {
class IComparer;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace System::ComponentModel {
class CultureInfoConverter;
}
namespace System::ComponentModel {
class ____System__ComponentModel__CultureInfoConverter__CultureComparer;
}
namespace System::ComponentModel {
class ____System__ComponentModel__CultureInfoConverter__CultureInfoMapper;
}
// Type: ::CultureComparer
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8262))
// CS Name: System.ComponentModel.CultureInfoConverter::CultureComparer
class CORDL_TYPE ____System__ComponentModel__CultureInfoConverter__CultureComparer : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::IComparer
constexpr operator  ::System::Collections::IComparer() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~____System__ComponentModel__CultureInfoConverter__CultureComparer() = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__ComponentModel__CultureInfoConverter__CultureComparer", modifiers: " const&", def_value: None }]
constexpr ____System__ComponentModel__CultureInfoConverter__CultureComparer(____System__ComponentModel__CultureInfoConverter__CultureComparer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__ComponentModel__CultureInfoConverter__CultureComparer", modifiers: "&&", def_value: None }]
constexpr ____System__ComponentModel__CultureInfoConverter__CultureComparer(____System__ComponentModel__CultureInfoConverter__CultureComparer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____System__ComponentModel__CultureInfoConverter__CultureComparer(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____System__ComponentModel__CultureInfoConverter__CultureComparer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____System__ComponentModel__CultureInfoConverter__CultureComparer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____System__ComponentModel__CultureInfoConverter__CultureComparer& operator=(____System__ComponentModel__CultureInfoConverter__CultureComparer&& o) noexcept = default;
  constexpr ____System__ComponentModel__CultureInfoConverter__CultureComparer& operator=(____System__ComponentModel__CultureInfoConverter__CultureComparer const& o) noexcept = default;
                


// Fields

 ::System::ComponentModel::CultureInfoConverter __declspec(property(get=__get__converter, put=__set__converter))  _converter;

constexpr void __set__converter(::System::ComponentModel::CultureInfoConverter value) ;

constexpr ::System::ComponentModel::CultureInfoConverter __get__converter() const;


// Methods

// Ctor Parameters [CppParam { name: "cultureConverter", ty: "::System::ComponentModel::CultureInfoConverter", modifiers: "", def_value: None }]
explicit ____System__ComponentModel__CultureInfoConverter__CultureComparer(::System::ComponentModel::CultureInfoConverter cultureConverter) ;

/// @brief Method .ctor addr 0x2775fec size 0x28 virtual false final false
 void _ctor(::System::ComponentModel::CultureInfoConverter cultureConverter) ;

/// @brief Method Compare addr 0x277602c size 0x16c virtual true final true
 int32_t Compare(::bs_hook::Il2CppWrapperType item1, ::bs_hook::Il2CppWrapperType item2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
// Type: ::CultureInfoMapper
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8263))
// CS Name: System.ComponentModel.CultureInfoConverter::CultureInfoMapper
class CORDL_TYPE ____System__ComponentModel__CultureInfoConverter__CultureInfoMapper : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~____System__ComponentModel__CultureInfoConverter__CultureInfoMapper() = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__ComponentModel__CultureInfoConverter__CultureInfoMapper", modifiers: " const&", def_value: None }]
constexpr ____System__ComponentModel__CultureInfoConverter__CultureInfoMapper(____System__ComponentModel__CultureInfoConverter__CultureInfoMapper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__ComponentModel__CultureInfoConverter__CultureInfoMapper", modifiers: "&&", def_value: None }]
constexpr ____System__ComponentModel__CultureInfoConverter__CultureInfoMapper(____System__ComponentModel__CultureInfoConverter__CultureInfoMapper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____System__ComponentModel__CultureInfoConverter__CultureInfoMapper(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____System__ComponentModel__CultureInfoConverter__CultureInfoMapper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____System__ComponentModel__CultureInfoConverter__CultureInfoMapper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____System__ComponentModel__CultureInfoConverter__CultureInfoMapper& operator=(____System__ComponentModel__CultureInfoConverter__CultureInfoMapper&& o) noexcept = default;
  constexpr ____System__ComponentModel__CultureInfoConverter__CultureInfoMapper& operator=(____System__ComponentModel__CultureInfoConverter__CultureInfoMapper const& o) noexcept = default;
                


// Fields

static ::System::Collections::Generic::Dictionary_2<::StringW,::StringW> __declspec(property(get=__get_s_cultureInfoNameMap, put=__set_s_cultureInfoNameMap))  s_cultureInfoNameMap;

static void __set_s_cultureInfoNameMap(::System::Collections::Generic::Dictionary_2<::StringW,::StringW> value) ;

static ::System::Collections::Generic::Dictionary_2<::StringW,::StringW> __get_s_cultureInfoNameMap() ;


// Methods

/// @brief Method CreateMap addr 0x2776198 size 0x40e0 virtual false final false
static ::System::Collections::Generic::Dictionary_2<::StringW,::StringW> CreateMap() ;

/// @brief Method GetCultureInfoName addr 0x2775908 size 0xa0 virtual false final false
static ::StringW GetCultureInfoName(::StringW cultureInfoDisplayName) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
// Type: System.ComponentModel::CultureInfoConverter
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8331))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8264))
// CS Name: System.ComponentModel.CultureInfoConverter
class CORDL_TYPE CultureInfoConverter : public ::System::ComponentModel::TypeConverter {
public:
// Declarations
using CultureInfoMapper = ::System::ComponentModel::____System__ComponentModel__CultureInfoConverter__CultureInfoMapper;

using CultureComparer = ::System::ComponentModel::____System__ComponentModel__CultureInfoConverter__CultureComparer;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~CultureInfoConverter() = default;

// Ctor Parameters [CppParam { name: "", ty: "CultureInfoConverter", modifiers: " const&", def_value: None }]
constexpr CultureInfoConverter(CultureInfoConverter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CultureInfoConverter", modifiers: "&&", def_value: None }]
constexpr CultureInfoConverter(CultureInfoConverter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CultureInfoConverter(void* ptr) noexcept : ::System::ComponentModel::TypeConverter(ptr) {
}


  constexpr CultureInfoConverter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CultureInfoConverter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CultureInfoConverter& operator=(CultureInfoConverter&& o) noexcept = default;
  constexpr CultureInfoConverter& operator=(CultureInfoConverter const& o) noexcept = default;
                


// Fields

 ::System::ComponentModel::____System__ComponentModel__TypeConverter__StandardValuesCollection __declspec(property(get=__get__values, put=__set__values))  _values;

constexpr void __set__values(::System::ComponentModel::____System__ComponentModel__TypeConverter__StandardValuesCollection value) ;

constexpr ::System::ComponentModel::____System__ComponentModel__TypeConverter__StandardValuesCollection __get__values() const;


// Properties

 ::StringW __declspec(property(get=get_DefaultCultureString))  DefaultCultureString;


// Methods

/// @brief Method get_DefaultCultureString addr 0x2774dfc size 0x40 virtual false final false
 ::StringW get_DefaultCultureString() ;

/// @brief Method GetCultureName addr 0x2774e3c size 0x20 virtual true final false
 ::StringW GetCultureName(::System::Globalization::CultureInfo culture) ;

/// @brief Method CanConvertFrom addr 0x2774e5c size 0xc8 virtual true final false
 bool CanConvertFrom(::System::ComponentModel::ITypeDescriptorContext context, ::System::Type sourceType) ;

/// @brief Method CanConvertTo addr 0x2774f24 size 0xc8 virtual true final false
 bool CanConvertTo(::System::ComponentModel::ITypeDescriptorContext context, ::System::Type destinationType) ;

/// @brief Method ConvertFrom addr 0x2774fec size 0x91c virtual true final false
 ::bs_hook::Il2CppWrapperType ConvertFrom(::System::ComponentModel::ITypeDescriptorContext context, ::System::Globalization::CultureInfo culture, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ConvertTo addr 0x27759a8 size 0x464 virtual true final false
 ::bs_hook::Il2CppWrapperType ConvertTo(::System::ComponentModel::ITypeDescriptorContext context, ::System::Globalization::CultureInfo culture, ::bs_hook::Il2CppWrapperType value, ::System::Type destinationType) ;

/// @brief Method GetStandardValues addr 0x2775e0c size 0x1e0 virtual true final false
 ::System::ComponentModel::____System__ComponentModel__TypeConverter__StandardValuesCollection GetStandardValues(::System::ComponentModel::ITypeDescriptorContext context) ;

/// @brief Method GetStandardValuesExclusive addr 0x2776014 size 0x8 virtual true final false
 bool GetStandardValuesExclusive(::System::ComponentModel::ITypeDescriptorContext context) ;

/// @brief Method GetStandardValuesSupported addr 0x277601c size 0x8 virtual true final false
 bool GetStandardValuesSupported(::System::ComponentModel::ITypeDescriptorContext context) ;

// Ctor Parameters []
explicit CultureInfoConverter() ;

/// @brief Method .ctor addr 0x2776024 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
} // end anonymous namespace
NEED_NO_BOX(::System::ComponentModel::CultureInfoConverter);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::CultureInfoConverter, "System.ComponentModel", "CultureInfoConverter");
NEED_NO_BOX(::System::ComponentModel::____System__ComponentModel__CultureInfoConverter__CultureComparer);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::____System__ComponentModel__CultureInfoConverter__CultureComparer, "System.ComponentModel", "CultureInfoConverter/CultureComparer");
NEED_NO_BOX(::System::ComponentModel::____System__ComponentModel__CultureInfoConverter__CultureInfoMapper);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::____System__ComponentModel__CultureInfoConverter__CultureInfoMapper, "System.ComponentModel", "CultureInfoConverter/CultureInfoMapper");
