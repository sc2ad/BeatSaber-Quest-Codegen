#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::IO {
class StringWriter;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
class IFormatProvider;
}
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
template<typename TSource>
class Newtonsoft__Json__Utilities__StringUtils____c__DisplayClass15_0_1;
}
namespace Newtonsoft::Json::Utilities {
template<::cordl_internals::il2cpp_reference_type TSource>
class Newtonsoft__Json__Utilities__StringUtils____c__DisplayClass15_0_1<TSource>;
}
namespace Newtonsoft::Json::Utilities {
class StringUtils;
}
// Type: ::<>c__DisplayClass15_0`1
// Type: Newtonsoft.Json.Utilities::StringUtils
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11842))
// CS Name: Newtonsoft.Json.Utilities.StringUtils
class CORDL_TYPE StringUtils : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
template<typename TSource>
using __c__DisplayClass15_0_1 = Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__StringUtils____c__DisplayClass15_0_1<TSource>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~StringUtils() = default;

// Ctor Parameters [CppParam { name: "", ty: "StringUtils", modifiers: " const&", def_value: None }]
constexpr StringUtils(StringUtils const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StringUtils", modifiers: "&&", def_value: None }]
constexpr StringUtils(StringUtils&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StringUtils(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr StringUtils& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StringUtils& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StringUtils& operator=(StringUtils&& o) noexcept = default;
  constexpr StringUtils& operator=(StringUtils const& o) noexcept = default;
                


// Fields

/// @brief Field CarriageReturnLineFeed offset 0
static constexpr ::ConstString  CarriageReturnLineFeed{u"\r\n"};

/// @brief Field Empty offset 0
static constexpr ::ConstString  Empty{u""};

/// @brief Field CarriageReturn offset 0
static constexpr char16_t  CarriageReturn{};

/// @brief Field LineFeed offset 0
static constexpr char16_t  LineFeed{
};

/// @brief Field Tab offset 0
static constexpr char16_t  Tab{	};


// Methods

/// @brief Method FormatWith addr 0x24e09e0 size 0xa8 virtual false final false
static ::StringW FormatWith(::StringW format, System::IFormatProvider provider, ::bs_hook::Il2CppWrapperType arg0) ;

/// @brief Method FormatWith addr 0x24de7e4 size 0xdc virtual false final false
static ::StringW FormatWith(::StringW format, System::IFormatProvider provider, ::bs_hook::Il2CppWrapperType arg0, ::bs_hook::Il2CppWrapperType arg1) ;

/// @brief Method FormatWith addr 0x24f1a80 size 0x108 virtual false final false
static ::StringW FormatWith(::StringW format, System::IFormatProvider provider, ::bs_hook::Il2CppWrapperType arg0, ::bs_hook::Il2CppWrapperType arg1, ::bs_hook::Il2CppWrapperType arg2) ;

/// @brief Method FormatWith addr 0x24f1b88 size 0x13c virtual false final false
static ::StringW FormatWith(::StringW format, System::IFormatProvider provider, ::bs_hook::Il2CppWrapperType arg0, ::bs_hook::Il2CppWrapperType arg1, ::bs_hook::Il2CppWrapperType arg2, ::bs_hook::Il2CppWrapperType arg3) ;

/// @brief Method FormatWith addr 0x24f1a14 size 0x6c virtual false final false
static ::StringW FormatWith(::StringW format, System::IFormatProvider provider, ::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

/// @brief Method IsWhiteSpace addr 0x24e0c48 size 0x100 virtual false final false
static bool IsWhiteSpace(::StringW s) ;

/// @brief Method NullEmptyString addr 0x24f1cc4 size 0x20 virtual false final false
static ::StringW NullEmptyString(::StringW s) ;

/// @brief Method CreateStringWriter addr 0x24ec114 size 0xd4 virtual false final false
static System::IO::StringWriter CreateStringWriter(int32_t capacity) ;

/// @brief Method GetLength addr 0x24ec0ac size 0x68 virtual false final false
static System::Nullable_1<int32_t> GetLength(::StringW value) ;

/// @brief Method ToCharAsUnicode addr 0x24ebda8 size 0xb8 virtual false final false
static void ToCharAsUnicode(char16_t c, ::ArrayW<char16_t> buffer) ;

/// @brief Method ForgivingCaseSensitiveFind addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TSource>
static TSource ForgivingCaseSensitiveFind(System::Collections::Generic::IEnumerable_1<TSource> source, System::Func_2<TSource,::StringW> valueSelector, ::StringW testValue) ;

/// @brief Method ToCamelCase addr 0x24ea504 size 0x1ec virtual false final false
static ::StringW ToCamelCase(::StringW s) ;

/// @brief Method IsHighSurrogate addr 0x24f1ce4 size 0x58 virtual false final false
static bool IsHighSurrogate(char16_t c) ;

/// @brief Method IsLowSurrogate addr 0x24f1d3c size 0x58 virtual false final false
static bool IsLowSurrogate(char16_t c) ;

/// @brief Method StartsWith addr 0x24f1d94 size 0x44 virtual false final false
static bool StartsWith(::StringW source, char16_t value) ;

/// @brief Method EndsWith addr 0x24f1dd8 size 0x40 virtual false final false
static bool EndsWith(::StringW source, char16_t value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Utilities
// Type: ::<>c__DisplayClass15_0`1
namespace Newtonsoft::Json::Utilities {
// cpp template
template<::cordl_internals::il2cpp_reference_type TSource>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11841))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11841), inst: 2 })
// CS Name: Newtonsoft.Json.Utilities.StringUtils::<>c__DisplayClass15_0`1
class CORDL_TYPE Newtonsoft__Json__Utilities__StringUtils____c__DisplayClass15_0_1<TSource> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Newtonsoft__Json__Utilities__StringUtils____c__DisplayClass15_0_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "Newtonsoft__Json__Utilities__StringUtils____c__DisplayClass15_0_1", modifiers: " const&", def_value: None }]
constexpr Newtonsoft__Json__Utilities__StringUtils____c__DisplayClass15_0_1(Newtonsoft__Json__Utilities__StringUtils____c__DisplayClass15_0_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Newtonsoft__Json__Utilities__StringUtils____c__DisplayClass15_0_1", modifiers: "&&", def_value: None }]
constexpr Newtonsoft__Json__Utilities__StringUtils____c__DisplayClass15_0_1(Newtonsoft__Json__Utilities__StringUtils____c__DisplayClass15_0_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Newtonsoft__Json__Utilities__StringUtils____c__DisplayClass15_0_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Newtonsoft__Json__Utilities__StringUtils____c__DisplayClass15_0_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Newtonsoft__Json__Utilities__StringUtils____c__DisplayClass15_0_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Newtonsoft__Json__Utilities__StringUtils____c__DisplayClass15_0_1& operator=(Newtonsoft__Json__Utilities__StringUtils____c__DisplayClass15_0_1&& o) noexcept = default;
  constexpr Newtonsoft__Json__Utilities__StringUtils____c__DisplayClass15_0_1& operator=(Newtonsoft__Json__Utilities__StringUtils____c__DisplayClass15_0_1 const& o) noexcept = default;
                


// Fields

 System::Func_2<TSource,::StringW> __declspec(property(get=__get_valueSelector, put=__set_valueSelector))  valueSelector;

constexpr void __set_valueSelector(System::Func_2<TSource,::StringW> value) ;

constexpr System::Func_2<TSource,::StringW> __get_valueSelector() const;

 ::StringW __declspec(property(get=__get_testValue, put=__set_testValue))  testValue;

constexpr void __set_testValue(::StringW value) ;

constexpr ::StringW __get_testValue() const;


// Methods

// Ctor Parameters []
explicit Newtonsoft__Json__Utilities__StringUtils____c__DisplayClass15_0_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <ForgivingCaseSensitiveFind>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
 bool _ForgivingCaseSensitiveFind_b__0(TSource s) ;

/// @brief Method <ForgivingCaseSensitiveFind>b__1 addr 0x0 size 0xffffffffffffffff virtual false final false
 bool _ForgivingCaseSensitiveFind_b__1(TSource s) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Utilities
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__StringUtils____c__DisplayClass15_0_1, "Newtonsoft.Json.Utilities", "StringUtils/<>c__DisplayClass15_0`1");
NEED_NO_BOX(Newtonsoft::Json::Utilities::StringUtils);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Utilities::StringUtils, "Newtonsoft.Json.Utilities", "StringUtils");
