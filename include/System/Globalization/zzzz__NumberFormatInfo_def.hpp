#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Globalization {
class CultureData;
}
namespace System {
class Type;
}
namespace System {
class ICloneable;
}
namespace System::Globalization {
struct NumberStyles;
}
namespace System {
class IFormatProvider;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System::Globalization {
class NumberFormatInfo;
}
// Type: System.Globalization::NumberFormatInfo
namespace System::Globalization {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3689))
// CS Name: System.Globalization.NumberFormatInfo
class CORDL_TYPE NumberFormatInfo : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::ICloneable
constexpr operator  ::System::ICloneable() const noexcept;

/// @brief Convert operator to ::System::IFormatProvider
constexpr operator  ::System::IFormatProvider() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xd8};

virtual ~NumberFormatInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "NumberFormatInfo", modifiers: " const&", def_value: None }]
constexpr NumberFormatInfo(NumberFormatInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NumberFormatInfo", modifiers: "&&", def_value: None }]
constexpr NumberFormatInfo(NumberFormatInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NumberFormatInfo(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr NumberFormatInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NumberFormatInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NumberFormatInfo& operator=(NumberFormatInfo&& o) noexcept = default;
  constexpr NumberFormatInfo& operator=(NumberFormatInfo const& o) noexcept = default;
                


// Fields

static ::System::Globalization::NumberFormatInfo __declspec(property(get=__get_invariantInfo, put=__set_invariantInfo))  invariantInfo;

static void __set_invariantInfo(::System::Globalization::NumberFormatInfo value) ;

static ::System::Globalization::NumberFormatInfo __get_invariantInfo() ;

 ::ArrayW<int32_t> __declspec(property(get=__get_numberGroupSizes, put=__set_numberGroupSizes))  numberGroupSizes;

constexpr void __set_numberGroupSizes(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_numberGroupSizes() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_currencyGroupSizes, put=__set_currencyGroupSizes))  currencyGroupSizes;

constexpr void __set_currencyGroupSizes(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_currencyGroupSizes() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_percentGroupSizes, put=__set_percentGroupSizes))  percentGroupSizes;

constexpr void __set_percentGroupSizes(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_percentGroupSizes() const;

 ::StringW __declspec(property(get=__get_positiveSign, put=__set_positiveSign))  positiveSign;

constexpr void __set_positiveSign(::StringW value) ;

constexpr ::StringW __get_positiveSign() const;

 ::StringW __declspec(property(get=__get_negativeSign, put=__set_negativeSign))  negativeSign;

constexpr void __set_negativeSign(::StringW value) ;

constexpr ::StringW __get_negativeSign() const;

 ::StringW __declspec(property(get=__get_numberDecimalSeparator, put=__set_numberDecimalSeparator))  numberDecimalSeparator;

constexpr void __set_numberDecimalSeparator(::StringW value) ;

constexpr ::StringW __get_numberDecimalSeparator() const;

 ::StringW __declspec(property(get=__get_numberGroupSeparator, put=__set_numberGroupSeparator))  numberGroupSeparator;

constexpr void __set_numberGroupSeparator(::StringW value) ;

constexpr ::StringW __get_numberGroupSeparator() const;

 ::StringW __declspec(property(get=__get_currencyGroupSeparator, put=__set_currencyGroupSeparator))  currencyGroupSeparator;

constexpr void __set_currencyGroupSeparator(::StringW value) ;

constexpr ::StringW __get_currencyGroupSeparator() const;

 ::StringW __declspec(property(get=__get_currencyDecimalSeparator, put=__set_currencyDecimalSeparator))  currencyDecimalSeparator;

constexpr void __set_currencyDecimalSeparator(::StringW value) ;

constexpr ::StringW __get_currencyDecimalSeparator() const;

 ::StringW __declspec(property(get=__get_currencySymbol, put=__set_currencySymbol))  currencySymbol;

constexpr void __set_currencySymbol(::StringW value) ;

constexpr ::StringW __get_currencySymbol() const;

 ::StringW __declspec(property(get=__get_ansiCurrencySymbol, put=__set_ansiCurrencySymbol))  ansiCurrencySymbol;

constexpr void __set_ansiCurrencySymbol(::StringW value) ;

constexpr ::StringW __get_ansiCurrencySymbol() const;

 ::StringW __declspec(property(get=__get_nanSymbol, put=__set_nanSymbol))  nanSymbol;

constexpr void __set_nanSymbol(::StringW value) ;

constexpr ::StringW __get_nanSymbol() const;

 ::StringW __declspec(property(get=__get_positiveInfinitySymbol, put=__set_positiveInfinitySymbol))  positiveInfinitySymbol;

constexpr void __set_positiveInfinitySymbol(::StringW value) ;

constexpr ::StringW __get_positiveInfinitySymbol() const;

 ::StringW __declspec(property(get=__get_negativeInfinitySymbol, put=__set_negativeInfinitySymbol))  negativeInfinitySymbol;

constexpr void __set_negativeInfinitySymbol(::StringW value) ;

constexpr ::StringW __get_negativeInfinitySymbol() const;

 ::StringW __declspec(property(get=__get_percentDecimalSeparator, put=__set_percentDecimalSeparator))  percentDecimalSeparator;

constexpr void __set_percentDecimalSeparator(::StringW value) ;

constexpr ::StringW __get_percentDecimalSeparator() const;

 ::StringW __declspec(property(get=__get_percentGroupSeparator, put=__set_percentGroupSeparator))  percentGroupSeparator;

constexpr void __set_percentGroupSeparator(::StringW value) ;

constexpr ::StringW __get_percentGroupSeparator() const;

 ::StringW __declspec(property(get=__get_percentSymbol, put=__set_percentSymbol))  percentSymbol;

constexpr void __set_percentSymbol(::StringW value) ;

constexpr ::StringW __get_percentSymbol() const;

 ::StringW __declspec(property(get=__get_perMilleSymbol, put=__set_perMilleSymbol))  perMilleSymbol;

constexpr void __set_perMilleSymbol(::StringW value) ;

constexpr ::StringW __get_perMilleSymbol() const;

 ::ArrayW<::StringW> __declspec(property(get=__get_nativeDigits, put=__set_nativeDigits))  nativeDigits;

constexpr void __set_nativeDigits(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get_nativeDigits() const;

 int32_t __declspec(property(get=__get_m_dataItem, put=__set_m_dataItem))  m_dataItem;

constexpr void __set_m_dataItem(int32_t value) ;

constexpr int32_t __get_m_dataItem() const;

 int32_t __declspec(property(get=__get_numberDecimalDigits, put=__set_numberDecimalDigits))  numberDecimalDigits;

constexpr void __set_numberDecimalDigits(int32_t value) ;

constexpr int32_t __get_numberDecimalDigits() const;

 int32_t __declspec(property(get=__get_currencyDecimalDigits, put=__set_currencyDecimalDigits))  currencyDecimalDigits;

constexpr void __set_currencyDecimalDigits(int32_t value) ;

constexpr int32_t __get_currencyDecimalDigits() const;

 int32_t __declspec(property(get=__get_currencyPositivePattern, put=__set_currencyPositivePattern))  currencyPositivePattern;

constexpr void __set_currencyPositivePattern(int32_t value) ;

constexpr int32_t __get_currencyPositivePattern() const;

 int32_t __declspec(property(get=__get_currencyNegativePattern, put=__set_currencyNegativePattern))  currencyNegativePattern;

constexpr void __set_currencyNegativePattern(int32_t value) ;

constexpr int32_t __get_currencyNegativePattern() const;

 int32_t __declspec(property(get=__get_numberNegativePattern, put=__set_numberNegativePattern))  numberNegativePattern;

constexpr void __set_numberNegativePattern(int32_t value) ;

constexpr int32_t __get_numberNegativePattern() const;

 int32_t __declspec(property(get=__get_percentPositivePattern, put=__set_percentPositivePattern))  percentPositivePattern;

constexpr void __set_percentPositivePattern(int32_t value) ;

constexpr int32_t __get_percentPositivePattern() const;

 int32_t __declspec(property(get=__get_percentNegativePattern, put=__set_percentNegativePattern))  percentNegativePattern;

constexpr void __set_percentNegativePattern(int32_t value) ;

constexpr int32_t __get_percentNegativePattern() const;

 int32_t __declspec(property(get=__get_percentDecimalDigits, put=__set_percentDecimalDigits))  percentDecimalDigits;

constexpr void __set_percentDecimalDigits(int32_t value) ;

constexpr int32_t __get_percentDecimalDigits() const;

 int32_t __declspec(property(get=__get_digitSubstitution, put=__set_digitSubstitution))  digitSubstitution;

constexpr void __set_digitSubstitution(int32_t value) ;

constexpr int32_t __get_digitSubstitution() const;

 bool __declspec(property(get=__get_isReadOnly, put=__set_isReadOnly))  isReadOnly;

constexpr void __set_isReadOnly(bool value) ;

constexpr bool __get_isReadOnly() const;

 bool __declspec(property(get=__get_m_useUserOverride, put=__set_m_useUserOverride))  m_useUserOverride;

constexpr void __set_m_useUserOverride(bool value) ;

constexpr bool __get_m_useUserOverride() const;

 bool __declspec(property(get=__get_m_isInvariant, put=__set_m_isInvariant))  m_isInvariant;

constexpr void __set_m_isInvariant(bool value) ;

constexpr bool __get_m_isInvariant() const;

 bool __declspec(property(get=__get_validForParseAsNumber, put=__set_validForParseAsNumber))  validForParseAsNumber;

constexpr void __set_validForParseAsNumber(bool value) ;

constexpr bool __get_validForParseAsNumber() const;

 bool __declspec(property(get=__get_validForParseAsCurrency, put=__set_validForParseAsCurrency))  validForParseAsCurrency;

constexpr void __set_validForParseAsCurrency(bool value) ;

constexpr bool __get_validForParseAsCurrency() const;

/// @brief Field InvalidNumberStyles offset 0
static ::System::Globalization::NumberStyles const InvalidNumberStyles;


// Properties

static ::System::Globalization::NumberFormatInfo __declspec(property(get=get_InvariantInfo))  InvariantInfo;

 int32_t __declspec(property(get=get_CurrencyDecimalDigits))  CurrencyDecimalDigits;

 ::StringW __declspec(property(get=get_CurrencyDecimalSeparator))  CurrencyDecimalSeparator;

 bool __declspec(property(get=get_IsReadOnly))  IsReadOnly;

 ::ArrayW<int32_t> __declspec(property(get=get_CurrencyGroupSizes))  CurrencyGroupSizes;

 ::ArrayW<int32_t> __declspec(property(get=get_NumberGroupSizes))  NumberGroupSizes;

 ::ArrayW<int32_t> __declspec(property(get=get_PercentGroupSizes))  PercentGroupSizes;

 ::StringW __declspec(property(get=get_CurrencyGroupSeparator))  CurrencyGroupSeparator;

 ::StringW __declspec(property(get=get_CurrencySymbol))  CurrencySymbol;

static ::System::Globalization::NumberFormatInfo __declspec(property(get=get_CurrentInfo))  CurrentInfo;

 ::StringW __declspec(property(get=get_NaNSymbol, put=set_NaNSymbol))  NaNSymbol;

 int32_t __declspec(property(get=get_CurrencyNegativePattern))  CurrencyNegativePattern;

 int32_t __declspec(property(get=get_NumberNegativePattern))  NumberNegativePattern;

 int32_t __declspec(property(get=get_PercentPositivePattern))  PercentPositivePattern;

 int32_t __declspec(property(get=get_PercentNegativePattern))  PercentNegativePattern;

 ::StringW __declspec(property(get=get_NegativeInfinitySymbol))  NegativeInfinitySymbol;

 ::StringW __declspec(property(get=get_NegativeSign))  NegativeSign;

 int32_t __declspec(property(get=get_NumberDecimalDigits))  NumberDecimalDigits;

 ::StringW __declspec(property(get=get_NumberDecimalSeparator))  NumberDecimalSeparator;

 ::StringW __declspec(property(get=get_NumberGroupSeparator, put=set_NumberGroupSeparator))  NumberGroupSeparator;

 int32_t __declspec(property(get=get_CurrencyPositivePattern))  CurrencyPositivePattern;

 ::StringW __declspec(property(get=get_PositiveInfinitySymbol))  PositiveInfinitySymbol;

 ::StringW __declspec(property(get=get_PositiveSign))  PositiveSign;

 int32_t __declspec(property(get=get_PercentDecimalDigits))  PercentDecimalDigits;

 ::StringW __declspec(property(get=get_PercentDecimalSeparator))  PercentDecimalSeparator;

 ::StringW __declspec(property(get=get_PercentGroupSeparator))  PercentGroupSeparator;

 ::StringW __declspec(property(get=get_PercentSymbol))  PercentSymbol;

 ::StringW __declspec(property(get=get_PerMilleSymbol))  PerMilleSymbol;


// Methods

// Ctor Parameters []
explicit NumberFormatInfo() ;

/// @brief Method .ctor addr 0x23f7258 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method OnSerializing addr 0x23f77b4 size 0x84 virtual false final false
 void OnSerializing(::System::Runtime::Serialization::StreamingContext ctx) ;

/// @brief Method OnDeserializing addr 0x23f7838 size 0x4 virtual false final false
 void OnDeserializing(::System::Runtime::Serialization::StreamingContext ctx) ;

/// @brief Method OnDeserialized addr 0x23f783c size 0x4 virtual false final false
 void OnDeserialized(::System::Runtime::Serialization::StreamingContext ctx) ;

/// @brief Method VerifyGroupSeparator addr 0x23f7840 size 0x70 virtual false final false
static void VerifyGroupSeparator(::StringW groupSep, ::StringW propertyName) ;

// Ctor Parameters [CppParam { name: "cultureData", ty: "::System::Globalization::CultureData", modifiers: "", def_value: None }]
explicit NumberFormatInfo(::System::Globalization::CultureData cultureData) ;

/// @brief Method .ctor addr 0x23f7260 size 0x554 virtual false final false
 void _ctor(::System::Globalization::CultureData cultureData) ;

/// @brief Method VerifyWritable addr 0x23f7a54 size 0x74 virtual false final false
 void VerifyWritable() ;

/// @brief Method get_InvariantInfo addr 0x23f7ac8 size 0xa4 virtual false final false
static ::System::Globalization::NumberFormatInfo get_InvariantInfo() ;

/// @brief Method GetInstance addr 0x23f7c40 size 0x1bc virtual false final false
static ::System::Globalization::NumberFormatInfo GetInstance(::System::IFormatProvider formatProvider) ;

/// @brief Method Clone addr 0x23f7ef0 size 0x6c virtual true final true
 ::bs_hook::Il2CppWrapperType Clone() ;

/// @brief Method get_CurrencyDecimalDigits addr 0x23f7f5c size 0x8 virtual false final false
 int32_t get_CurrencyDecimalDigits() ;

/// @brief Method get_CurrencyDecimalSeparator addr 0x23f7f64 size 0x8 virtual false final false
 ::StringW get_CurrencyDecimalSeparator() ;

/// @brief Method get_IsReadOnly addr 0x23f7f6c size 0x8 virtual false final false
 bool get_IsReadOnly() ;

/// @brief Method get_CurrencyGroupSizes addr 0x23f7f74 size 0x78 virtual false final false
 ::ArrayW<int32_t> get_CurrencyGroupSizes() ;

/// @brief Method get_NumberGroupSizes addr 0x23f7fec size 0x78 virtual false final false
 ::ArrayW<int32_t> get_NumberGroupSizes() ;

/// @brief Method get_PercentGroupSizes addr 0x23f8064 size 0x78 virtual false final false
 ::ArrayW<int32_t> get_PercentGroupSizes() ;

/// @brief Method get_CurrencyGroupSeparator addr 0x23f80dc size 0x8 virtual false final false
 ::StringW get_CurrencyGroupSeparator() ;

/// @brief Method get_CurrencySymbol addr 0x23f80e4 size 0x8 virtual false final false
 ::StringW get_CurrencySymbol() ;

/// @brief Method get_CurrentInfo addr 0x23f7dfc size 0xf4 virtual false final false
static ::System::Globalization::NumberFormatInfo get_CurrentInfo() ;

/// @brief Method get_NaNSymbol addr 0x23f80ec size 0x8 virtual false final false
 ::StringW get_NaNSymbol() ;

/// @brief Method set_NaNSymbol addr 0x23f80f4 size 0x90 virtual false final false
 void set_NaNSymbol(::StringW value) ;

/// @brief Method get_CurrencyNegativePattern addr 0x23f8184 size 0x8 virtual false final false
 int32_t get_CurrencyNegativePattern() ;

/// @brief Method get_NumberNegativePattern addr 0x23f818c size 0x8 virtual false final false
 int32_t get_NumberNegativePattern() ;

/// @brief Method get_PercentPositivePattern addr 0x23f8194 size 0x8 virtual false final false
 int32_t get_PercentPositivePattern() ;

/// @brief Method get_PercentNegativePattern addr 0x23f819c size 0x8 virtual false final false
 int32_t get_PercentNegativePattern() ;

/// @brief Method get_NegativeInfinitySymbol addr 0x23f81a4 size 0x8 virtual false final false
 ::StringW get_NegativeInfinitySymbol() ;

/// @brief Method get_NegativeSign addr 0x23f81ac size 0x8 virtual false final false
 ::StringW get_NegativeSign() ;

/// @brief Method get_NumberDecimalDigits addr 0x23f81b4 size 0x8 virtual false final false
 int32_t get_NumberDecimalDigits() ;

/// @brief Method get_NumberDecimalSeparator addr 0x23f81bc size 0x8 virtual false final false
 ::StringW get_NumberDecimalSeparator() ;

/// @brief Method get_NumberGroupSeparator addr 0x23f81c4 size 0x8 virtual false final false
 ::StringW get_NumberGroupSeparator() ;

/// @brief Method set_NumberGroupSeparator addr 0x23f81cc size 0x64 virtual false final false
 void set_NumberGroupSeparator(::StringW value) ;

/// @brief Method get_CurrencyPositivePattern addr 0x23f8230 size 0x8 virtual false final false
 int32_t get_CurrencyPositivePattern() ;

/// @brief Method get_PositiveInfinitySymbol addr 0x23f8238 size 0x8 virtual false final false
 ::StringW get_PositiveInfinitySymbol() ;

/// @brief Method get_PositiveSign addr 0x23f8240 size 0x8 virtual false final false
 ::StringW get_PositiveSign() ;

/// @brief Method get_PercentDecimalDigits addr 0x23f8248 size 0x8 virtual false final false
 int32_t get_PercentDecimalDigits() ;

/// @brief Method get_PercentDecimalSeparator addr 0x23f8250 size 0x8 virtual false final false
 ::StringW get_PercentDecimalSeparator() ;

/// @brief Method get_PercentGroupSeparator addr 0x23f8258 size 0x8 virtual false final false
 ::StringW get_PercentGroupSeparator() ;

/// @brief Method get_PercentSymbol addr 0x23f8260 size 0x8 virtual false final false
 ::StringW get_PercentSymbol() ;

/// @brief Method get_PerMilleSymbol addr 0x23f8268 size 0x8 virtual false final false
 ::StringW get_PerMilleSymbol() ;

/// @brief Method GetFormat addr 0x23f8270 size 0x98 virtual true final true
 ::bs_hook::Il2CppWrapperType GetFormat(::System::Type formatType) ;

/// @brief Method ReadOnly addr 0x23f7b6c size 0xd4 virtual false final false
static ::System::Globalization::NumberFormatInfo ReadOnly(::System::Globalization::NumberFormatInfo nfi) ;

/// @brief Method ValidateParseStyleInteger addr 0x23f8308 size 0xd8 virtual false final false
static void ValidateParseStyleInteger(::System::Globalization::NumberStyles style) ;

/// @brief Method ValidateParseStyleFloatingPoint addr 0x23f83e0 size 0xcc virtual false final false
static void ValidateParseStyleFloatingPoint(::System::Globalization::NumberStyles style) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Globalization
} // end anonymous namespace
NEED_NO_BOX(::System::Globalization::NumberFormatInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::NumberFormatInfo, "System.Globalization", "NumberFormatInfo");
