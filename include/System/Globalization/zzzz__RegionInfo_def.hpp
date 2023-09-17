#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Globalization {
class CultureInfo;
}
// Forward declare root types
namespace System::Globalization {
class RegionInfo;
}
// Type: System.Globalization::RegionInfo
namespace System::Globalization {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3711))
// CS Name: System.Globalization.RegionInfo
class CORDL_TYPE RegionInfo : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~RegionInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "RegionInfo", modifiers: " const&", def_value: None }]
constexpr RegionInfo(RegionInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RegionInfo", modifiers: "&&", def_value: None }]
constexpr RegionInfo(RegionInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RegionInfo(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RegionInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RegionInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RegionInfo& operator=(RegionInfo&& o) noexcept = default;
  constexpr RegionInfo& operator=(RegionInfo const& o) noexcept = default;
                


// Fields

static ::System::Globalization::RegionInfo __declspec(property(get=__get_currentRegion, put=__set_currentRegion))  currentRegion;

static void __set_currentRegion(::System::Globalization::RegionInfo value) ;

static ::System::Globalization::RegionInfo __get_currentRegion() ;

 int32_t __declspec(property(get=__get_regionId, put=__set_regionId))  regionId;

constexpr void __set_regionId(int32_t value) ;

constexpr int32_t __get_regionId() const;

 ::StringW __declspec(property(get=__get_iso2Name, put=__set_iso2Name))  iso2Name;

constexpr void __set_iso2Name(::StringW value) ;

constexpr ::StringW __get_iso2Name() const;

 ::StringW __declspec(property(get=__get_iso3Name, put=__set_iso3Name))  iso3Name;

constexpr void __set_iso3Name(::StringW value) ;

constexpr ::StringW __get_iso3Name() const;

 ::StringW __declspec(property(get=__get_win3Name, put=__set_win3Name))  win3Name;

constexpr void __set_win3Name(::StringW value) ;

constexpr ::StringW __get_win3Name() const;

 ::StringW __declspec(property(get=__get_englishName, put=__set_englishName))  englishName;

constexpr void __set_englishName(::StringW value) ;

constexpr ::StringW __get_englishName() const;

 ::StringW __declspec(property(get=__get_nativeName, put=__set_nativeName))  nativeName;

constexpr void __set_nativeName(::StringW value) ;

constexpr ::StringW __get_nativeName() const;

 ::StringW __declspec(property(get=__get_currencySymbol, put=__set_currencySymbol))  currencySymbol;

constexpr void __set_currencySymbol(::StringW value) ;

constexpr ::StringW __get_currencySymbol() const;

 ::StringW __declspec(property(get=__get_isoCurrencySymbol, put=__set_isoCurrencySymbol))  isoCurrencySymbol;

constexpr void __set_isoCurrencySymbol(::StringW value) ;

constexpr ::StringW __get_isoCurrencySymbol() const;

 ::StringW __declspec(property(get=__get_currencyEnglishName, put=__set_currencyEnglishName))  currencyEnglishName;

constexpr void __set_currencyEnglishName(::StringW value) ;

constexpr ::StringW __get_currencyEnglishName() const;

 ::StringW __declspec(property(get=__get_currencyNativeName, put=__set_currencyNativeName))  currencyNativeName;

constexpr void __set_currencyNativeName(::StringW value) ;

constexpr ::StringW __get_currencyNativeName() const;


// Properties

static ::System::Globalization::RegionInfo __declspec(property(get=get_CurrentRegion))  CurrentRegion;

 ::StringW __declspec(property(get=get_CurrencyEnglishName))  CurrencyEnglishName;

 ::StringW __declspec(property(get=get_CurrencySymbol))  CurrencySymbol;

 ::StringW __declspec(property(get=get_DisplayName))  DisplayName;

 ::StringW __declspec(property(get=get_EnglishName))  EnglishName;

 int32_t __declspec(property(get=get_GeoId))  GeoId;

 bool __declspec(property(get=get_IsMetric))  IsMetric;

 ::StringW __declspec(property(get=get_ISOCurrencySymbol))  ISOCurrencySymbol;

 ::StringW __declspec(property(get=get_NativeName))  NativeName;

 ::StringW __declspec(property(get=get_CurrencyNativeName))  CurrencyNativeName;

 ::StringW __declspec(property(get=get_Name))  Name;

 ::StringW __declspec(property(get=get_ThreeLetterISORegionName))  ThreeLetterISORegionName;

 ::StringW __declspec(property(get=get_ThreeLetterWindowsRegionName))  ThreeLetterWindowsRegionName;

 ::StringW __declspec(property(get=get_TwoLetterISORegionName))  TwoLetterISORegionName;


// Methods

/// @brief Method get_CurrentRegion addr 0x240b76c size 0xcc virtual false final false
static ::System::Globalization::RegionInfo get_CurrentRegion() ;

// Ctor Parameters [CppParam { name: "culture", ty: "int32_t", modifiers: "", def_value: None }]
explicit RegionInfo(int32_t culture) ;

/// @brief Method .ctor addr 0x240b9d0 size 0x10c virtual false final false
 void _ctor(int32_t culture) ;

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }]
explicit RegionInfo(::StringW name) ;

/// @brief Method .ctor addr 0x240bb88 size 0x144 virtual false final false
 void _ctor(::StringW name) ;

// Ctor Parameters [CppParam { name: "ci", ty: "::System::Globalization::CultureInfo", modifiers: "", def_value: None }]
explicit RegionInfo(::System::Globalization::CultureInfo ci) ;

/// @brief Method .ctor addr 0x240b838 size 0x198 virtual false final false
 void _ctor(::System::Globalization::CultureInfo ci) ;

/// @brief Method GetByTerritory addr 0x240badc size 0xac virtual false final false
 bool GetByTerritory(::System::Globalization::CultureInfo ci) ;

/// @brief Method construct_internal_region_from_name addr 0x240bccc size 0x4 virtual false final false
 bool construct_internal_region_from_name(::StringW name) ;

/// @brief Method get_CurrencyEnglishName addr 0x240bcd0 size 0x8 virtual true final false
 ::StringW get_CurrencyEnglishName() ;

/// @brief Method get_CurrencySymbol addr 0x240bcd8 size 0x8 virtual true final false
 ::StringW get_CurrencySymbol() ;

/// @brief Method get_DisplayName addr 0x240bce0 size 0x8 virtual true final false
 ::StringW get_DisplayName() ;

/// @brief Method get_EnglishName addr 0x240bce8 size 0x8 virtual true final false
 ::StringW get_EnglishName() ;

/// @brief Method get_GeoId addr 0x240bcf0 size 0x8 virtual true final false
 int32_t get_GeoId() ;

/// @brief Method get_IsMetric addr 0x240bcf8 size 0x8c virtual true final false
 bool get_IsMetric() ;

/// @brief Method get_ISOCurrencySymbol addr 0x240bd84 size 0x8 virtual true final false
 ::StringW get_ISOCurrencySymbol() ;

/// @brief Method get_NativeName addr 0x240bd8c size 0x8 virtual true final false
 ::StringW get_NativeName() ;

/// @brief Method get_CurrencyNativeName addr 0x240bd94 size 0x8 virtual true final false
 ::StringW get_CurrencyNativeName() ;

/// @brief Method get_Name addr 0x240bd9c size 0x8 virtual true final false
 ::StringW get_Name() ;

/// @brief Method get_ThreeLetterISORegionName addr 0x240bda4 size 0x8 virtual true final false
 ::StringW get_ThreeLetterISORegionName() ;

/// @brief Method get_ThreeLetterWindowsRegionName addr 0x240bdac size 0x8 virtual true final false
 ::StringW get_ThreeLetterWindowsRegionName() ;

/// @brief Method get_TwoLetterISORegionName addr 0x240bdb4 size 0x8 virtual true final false
 ::StringW get_TwoLetterISORegionName() ;

/// @brief Method Equals addr 0x240bdbc size 0xc8 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method GetHashCode addr 0x240be84 size 0x2c virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x240beb0 size 0x10 virtual true final false
 ::StringW ToString() ;

/// @brief Method ClearCachedData addr 0x240bec0 size 0x48 virtual false final false
static void ClearCachedData() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Globalization
} // end anonymous namespace
NEED_NO_BOX(::System::Globalization::RegionInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::RegionInfo, "System.Globalization", "RegionInfo");
