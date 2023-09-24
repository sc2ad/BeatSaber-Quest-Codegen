#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace Newtonsoft::Json::Utilities {
class TypeInformation;
}
namespace System {
struct Guid;
}
namespace System {
struct TimeSpan;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace Newtonsoft::Json::Utilities {
struct Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey;
}
namespace System::ComponentModel {
class TypeConverter;
}
namespace Newtonsoft::Json::Utilities {
struct ParseResult;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
class Version;
}
namespace System {
class IConvertible;
}
namespace Newtonsoft::Json::Utilities {
struct Newtonsoft__Json__Utilities__ConvertUtils__ConvertResult;
}
namespace Newtonsoft::Json::Utilities {
template<typename TKey,typename TValue>
class ThreadSafeStore_2;
}
namespace System::Globalization {
class CultureInfo;
}
namespace Newtonsoft::Json::Utilities {
class Newtonsoft__Json__Utilities__ConvertUtils____c__DisplayClass9_0;
}
namespace System {
class Type;
}
namespace Newtonsoft::Json::Utilities {
struct PrimitiveTypeCode;
}
namespace Newtonsoft::Json::Utilities {
template<typename T,typename TResult>
class MethodCall_2;
}
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
struct Newtonsoft__Json__Utilities__ConvertUtils__ConvertResult;
}
namespace Newtonsoft::Json::Utilities {
class ConvertUtils;
}
namespace Newtonsoft::Json::Utilities {
class Newtonsoft__Json__Utilities__ConvertUtils____c__DisplayClass9_0;
}
namespace Newtonsoft::Json::Utilities {
struct Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey;
}
// Type: ::TypeConvertKey
namespace Newtonsoft::Json::Utilities {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11815))
// CS Name: Newtonsoft.Json.Utilities.ConvertUtils::TypeConvertKey
struct CORDL_TYPE Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "_initialType", ty: "System::Type", modifiers: "", def_value: None }, CppParam { name: "_targetType", ty: "System::Type", modifiers: "", def_value: None }]
constexpr Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey(System::Type _initialType, System::Type _targetType) noexcept;


                    constexpr Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey(Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey const&) = default;
                    constexpr Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey(Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey&&) = default;
                    constexpr Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey& operator=(Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey& operator=(Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 System::Type __declspec(property(get=__get__initialType, put=__set__initialType))  _initialType;

constexpr void __set__initialType(System::Type value) ;

constexpr System::Type __get__initialType() const;

 System::Type __declspec(property(get=__get__targetType, put=__set__targetType))  _targetType;

constexpr void __set__targetType(System::Type value) ;

constexpr System::Type __get__targetType() const;


// Properties

 System::Type __declspec(property(get=get_InitialType))  InitialType;

 System::Type __declspec(property(get=get_TargetType))  TargetType;


// Methods

/// @brief Method get_InitialType addr 0x24e6b88 size 0x8 virtual false final false
 System::Type get_InitialType() ;

/// @brief Method get_TargetType addr 0x24e6b90 size 0x8 virtual false final false
 System::Type get_TargetType() ;

/// @brief Method .ctor addr 0x24e55bc size 0x8 virtual false final false
 void _ctor(System::Type initialType, System::Type targetType) ;

/// @brief Method GetHashCode addr 0x24e6b98 size 0x48 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Equals addr 0x24e6be0 size 0x88 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Equals addr 0x24e6c68 size 0x24 virtual false final false
 bool Equals(Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey other) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Utilities
// Type: ::ConvertResult
namespace Newtonsoft::Json::Utilities {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11816))
// CS Name: Newtonsoft.Json.Utilities.ConvertUtils::ConvertResult
struct CORDL_TYPE Newtonsoft__Json__Utilities__ConvertUtils__ConvertResult : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Newtonsoft__Json__Utilities__ConvertUtils__ConvertResult(int32_t value__) noexcept;


                    constexpr Newtonsoft__Json__Utilities__ConvertUtils__ConvertResult(Newtonsoft__Json__Utilities__ConvertUtils__ConvertResult const&) = default;
                    constexpr Newtonsoft__Json__Utilities__ConvertUtils__ConvertResult(Newtonsoft__Json__Utilities__ConvertUtils__ConvertResult&&) = default;
                    constexpr Newtonsoft__Json__Utilities__ConvertUtils__ConvertResult& operator=(Newtonsoft__Json__Utilities__ConvertUtils__ConvertResult const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Newtonsoft__Json__Utilities__ConvertUtils__ConvertResult& operator=(Newtonsoft__Json__Utilities__ConvertUtils__ConvertResult&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Newtonsoft__Json__Utilities__ConvertUtils__ConvertResult(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __Newtonsoft__Json__Utilities__ConvertUtils__ConvertResult_Unwrapped : int32_t {
__Success = 0,
__CannotConvertNull = 1,
__NotInstantiableType = 2,
__NoValidConversion = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Newtonsoft__Json__Utilities__ConvertUtils__ConvertResult_Unwrapped () const noexcept {
return std::bit_cast<__Newtonsoft__Json__Utilities__ConvertUtils__ConvertResult_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Success offset 0
static Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__ConvertUtils__ConvertResult const Success;

/// @brief Field CannotConvertNull offset 0
static Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__ConvertUtils__ConvertResult const CannotConvertNull;

/// @brief Field NotInstantiableType offset 0
static Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__ConvertUtils__ConvertResult const NotInstantiableType;

/// @brief Field NoValidConversion offset 0
static Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__ConvertUtils__ConvertResult const NoValidConversion;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Utilities
// Type: ::<>c__DisplayClass9_0
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11817))
// CS Name: Newtonsoft.Json.Utilities.ConvertUtils::<>c__DisplayClass9_0
class CORDL_TYPE Newtonsoft__Json__Utilities__ConvertUtils____c__DisplayClass9_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Newtonsoft__Json__Utilities__ConvertUtils____c__DisplayClass9_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "Newtonsoft__Json__Utilities__ConvertUtils____c__DisplayClass9_0", modifiers: " const&", def_value: None }]
constexpr Newtonsoft__Json__Utilities__ConvertUtils____c__DisplayClass9_0(Newtonsoft__Json__Utilities__ConvertUtils____c__DisplayClass9_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Newtonsoft__Json__Utilities__ConvertUtils____c__DisplayClass9_0", modifiers: "&&", def_value: None }]
constexpr Newtonsoft__Json__Utilities__ConvertUtils____c__DisplayClass9_0(Newtonsoft__Json__Utilities__ConvertUtils____c__DisplayClass9_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Newtonsoft__Json__Utilities__ConvertUtils____c__DisplayClass9_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Newtonsoft__Json__Utilities__ConvertUtils____c__DisplayClass9_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Newtonsoft__Json__Utilities__ConvertUtils____c__DisplayClass9_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Newtonsoft__Json__Utilities__ConvertUtils____c__DisplayClass9_0& operator=(Newtonsoft__Json__Utilities__ConvertUtils____c__DisplayClass9_0&& o) noexcept = default;
  constexpr Newtonsoft__Json__Utilities__ConvertUtils____c__DisplayClass9_0& operator=(Newtonsoft__Json__Utilities__ConvertUtils____c__DisplayClass9_0 const& o) noexcept = default;
                


// Fields

 Newtonsoft::Json::Utilities::MethodCall_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> __declspec(property(get=__get_call, put=__set_call))  call;

constexpr void __set_call(Newtonsoft::Json::Utilities::MethodCall_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> value) ;

constexpr Newtonsoft::Json::Utilities::MethodCall_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> __get_call() const;


// Methods

static Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__ConvertUtils____c__DisplayClass9_0 New_ctor() ;

/// @brief Method .ctor addr 0x24e4300 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <CreateCastConverter>b__0 addr 0x24e6c8c size 0xb4 virtual false final false
 ::bs_hook::Il2CppWrapperType _CreateCastConverter_b__0(::bs_hook::Il2CppWrapperType o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Utilities
// Type: Newtonsoft.Json.Utilities::ConvertUtils
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11818))
// CS Name: Newtonsoft.Json.Utilities.ConvertUtils
class CORDL_TYPE ConvertUtils : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c__DisplayClass9_0 = Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__ConvertUtils____c__DisplayClass9_0;

using ConvertResult = Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__ConvertUtils__ConvertResult;

using TypeConvertKey = Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ConvertUtils() = default;

// Ctor Parameters [CppParam { name: "", ty: "ConvertUtils", modifiers: " const&", def_value: None }]
constexpr ConvertUtils(ConvertUtils const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ConvertUtils", modifiers: "&&", def_value: None }]
constexpr ConvertUtils(ConvertUtils&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ConvertUtils(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ConvertUtils& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ConvertUtils& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ConvertUtils& operator=(ConvertUtils&& o) noexcept = default;
  constexpr ConvertUtils& operator=(ConvertUtils const& o) noexcept = default;
                


// Fields

static System::Collections::Generic::Dictionary_2<System::Type,Newtonsoft::Json::Utilities::PrimitiveTypeCode> __declspec(property(get=__get_TypeCodeMap, put=__set_TypeCodeMap))  TypeCodeMap;

static void __set_TypeCodeMap(System::Collections::Generic::Dictionary_2<System::Type,Newtonsoft::Json::Utilities::PrimitiveTypeCode> value) ;

static System::Collections::Generic::Dictionary_2<System::Type,Newtonsoft::Json::Utilities::PrimitiveTypeCode> __get_TypeCodeMap() ;

static ::ArrayW<Newtonsoft::Json::Utilities::TypeInformation> __declspec(property(get=__get_PrimitiveTypeCodes, put=__set_PrimitiveTypeCodes))  PrimitiveTypeCodes;

static void __set_PrimitiveTypeCodes(::ArrayW<Newtonsoft::Json::Utilities::TypeInformation> value) ;

static ::ArrayW<Newtonsoft::Json::Utilities::TypeInformation> __get_PrimitiveTypeCodes() ;

static Newtonsoft::Json::Utilities::ThreadSafeStore_2<Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey,System::Func_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> __declspec(property(get=__get_CastConverters, put=__set_CastConverters))  CastConverters;

static void __set_CastConverters(Newtonsoft::Json::Utilities::ThreadSafeStore_2<Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey,System::Func_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> value) ;

static Newtonsoft::Json::Utilities::ThreadSafeStore_2<Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey,System::Func_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> __get_CastConverters() ;


// Methods

/// @brief Method GetTypeCode addr 0x24df5c0 size 0x68 virtual false final false
static Newtonsoft::Json::Utilities::PrimitiveTypeCode GetTypeCode(System::Type t) ;

/// @brief Method GetTypeCode addr 0x24e3c60 size 0x280 virtual false final false
static Newtonsoft::Json::Utilities::PrimitiveTypeCode GetTypeCode(System::Type t, ByRef<bool> isEnum) ;

/// @brief Method GetTypeInformation addr 0x24e0840 size 0xec virtual false final false
static Newtonsoft::Json::Utilities::TypeInformation GetTypeInformation(System::IConvertible convertable) ;

/// @brief Method IsConvertible addr 0x24e3fe0 size 0x94 virtual false final false
static bool IsConvertible(System::Type t) ;

/// @brief Method ParseTimeSpan addr 0x24e4074 size 0x58 virtual false final false
static System::TimeSpan ParseTimeSpan(::StringW input) ;

/// @brief Method CreateCastConverter addr 0x24e40cc size 0x234 virtual false final false
static System::Func_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> CreateCastConverter(Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey t) ;

/// @brief Method Convert addr 0x24e4308 size 0x274 virtual false final false
static ::bs_hook::Il2CppWrapperType Convert(::bs_hook::Il2CppWrapperType initialValue, System::Globalization::CultureInfo culture, System::Type targetType) ;

/// @brief Method TryConvert addr 0x24e4e8c size 0x108 virtual false final false
static bool TryConvert(::bs_hook::Il2CppWrapperType initialValue, System::Globalization::CultureInfo culture, System::Type targetType, ByRef<::bs_hook::Il2CppWrapperType> value) ;

/// @brief Method TryConvertInternal addr 0x24e457c size 0x910 virtual false final false
static Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__ConvertUtils__ConvertResult TryConvertInternal(::bs_hook::Il2CppWrapperType initialValue, System::Globalization::CultureInfo culture, System::Type targetType, ByRef<::bs_hook::Il2CppWrapperType> value) ;

/// @brief Method ConvertOrCast addr 0x24e543c size 0x170 virtual false final false
static ::bs_hook::Il2CppWrapperType ConvertOrCast(::bs_hook::Il2CppWrapperType initialValue, System::Globalization::CultureInfo culture, System::Type targetType) ;

/// @brief Method EnsureTypeAssignable addr 0x24e5208 size 0x1ec virtual false final false
static ::bs_hook::Il2CppWrapperType EnsureTypeAssignable(::bs_hook::Il2CppWrapperType value, System::Type initialType, System::Type targetType) ;

/// @brief Method GetConverter addr 0x24e5114 size 0x58 virtual false final false
static System::ComponentModel::TypeConverter GetConverter(System::Type t) ;

/// @brief Method VersionTryParse addr 0x24e5024 size 0xf0 virtual false final false
static bool VersionTryParse(::StringW input, ByRef<System::Version> result) ;

/// @brief Method IsInteger addr 0x24e4f94 size 0x90 virtual false final false
static bool IsInteger(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method Int32TryParse addr 0x24e55c4 size 0x164 virtual false final false
static Newtonsoft::Json::Utilities::ParseResult Int32TryParse(::ArrayW<char16_t> chars, int32_t start, int32_t length, ByRef<int32_t> value) ;

/// @brief Method Int64TryParse addr 0x24e5728 size 0x158 virtual false final false
static Newtonsoft::Json::Utilities::ParseResult Int64TryParse(::ArrayW<char16_t> chars, int32_t start, int32_t length, ByRef<int64_t> value) ;

/// @brief Method TryConvertGuid addr 0x24e5880 size 0x138 virtual false final false
static bool TryConvertGuid(::StringW s, ByRef<System::Guid> g) ;

/// @brief Method HexTextToInt addr 0x24e59b8 size 0xe0 virtual false final false
static int32_t HexTextToInt(::ArrayW<char16_t> text, int32_t start, int32_t end) ;

/// @brief Method HexCharToInt addr 0x24e5a98 size 0xcc virtual false final false
static int32_t HexCharToInt(char16_t ch) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Utilities
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__ConvertUtils__ConvertResult, "Newtonsoft.Json.Utilities", "ConvertUtils/ConvertResult");
NEED_NO_BOX(Newtonsoft::Json::Utilities::ConvertUtils);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Utilities::ConvertUtils, "Newtonsoft.Json.Utilities", "ConvertUtils");
NEED_NO_BOX(Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__ConvertUtils____c__DisplayClass9_0);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__ConvertUtils____c__DisplayClass9_0, "Newtonsoft.Json.Utilities", "ConvertUtils/<>c__DisplayClass9_0");
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey, "Newtonsoft.Json.Utilities", "ConvertUtils/TypeConvertKey");
