#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Newtonsoft::Json::Utilities {
template<typename TKey,typename TValue>
class ThreadSafeStore_2;
}
namespace Newtonsoft::Json::Utilities {
template<typename TFirst,typename TSecond>
class BidirectionalDictionary_2;
}
namespace System {
class Type;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace Newtonsoft::Json::Utilities {
template<typename T>
class EnumValue_1;
}
namespace System::Reflection {
class FieldInfo;
}
namespace System::Runtime::Serialization {
class EnumMemberAttribute;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
class EnumUtils;
}
namespace Newtonsoft::Json::Utilities {
class Newtonsoft__Json__Utilities__EnumUtils____c;
}
namespace Newtonsoft::Json::Utilities {
template<typename T>
class Newtonsoft__Json__Utilities__EnumUtils____c__2_1;
}
// Type: ::<>c
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11826))
// CS Name: Newtonsoft.Json.Utilities.EnumUtils::<>c
class CORDL_TYPE Newtonsoft__Json__Utilities__EnumUtils____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Newtonsoft__Json__Utilities__EnumUtils____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "Newtonsoft__Json__Utilities__EnumUtils____c", modifiers: " const&", def_value: None }]
constexpr Newtonsoft__Json__Utilities__EnumUtils____c(Newtonsoft__Json__Utilities__EnumUtils____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Newtonsoft__Json__Utilities__EnumUtils____c", modifiers: "&&", def_value: None }]
constexpr Newtonsoft__Json__Utilities__EnumUtils____c(Newtonsoft__Json__Utilities__EnumUtils____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Newtonsoft__Json__Utilities__EnumUtils____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Newtonsoft__Json__Utilities__EnumUtils____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Newtonsoft__Json__Utilities__EnumUtils____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Newtonsoft__Json__Utilities__EnumUtils____c& operator=(Newtonsoft__Json__Utilities__EnumUtils____c&& o) noexcept = default;
  constexpr Newtonsoft__Json__Utilities__EnumUtils____c& operator=(Newtonsoft__Json__Utilities__EnumUtils____c const& o) noexcept = default;
                


// Fields

static Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__EnumUtils____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__EnumUtils____c value) ;

static Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__EnumUtils____c __get___9() ;

static System::Func_2<System::Runtime::Serialization::EnumMemberAttribute,::StringW> __declspec(property(get=__get___9__1_0, put=__set___9__1_0))  __9__1_0;

static void __set___9__1_0(System::Func_2<System::Runtime::Serialization::EnumMemberAttribute,::StringW> value) ;

static System::Func_2<System::Runtime::Serialization::EnumMemberAttribute,::StringW> __get___9__1_0() ;

static System::Func_2<System::Reflection::FieldInfo,bool> __declspec(property(get=__get___9__5_0, put=__set___9__5_0))  __9__5_0;

static void __set___9__5_0(System::Func_2<System::Reflection::FieldInfo,bool> value) ;

static System::Func_2<System::Reflection::FieldInfo,bool> __get___9__5_0() ;

static System::Func_2<System::Reflection::FieldInfo,bool> __declspec(property(get=__get___9__6_0, put=__set___9__6_0))  __9__6_0;

static void __set___9__6_0(System::Func_2<System::Reflection::FieldInfo,bool> value) ;

static System::Func_2<System::Reflection::FieldInfo,bool> __get___9__6_0() ;


// Methods

// Ctor Parameters []
explicit Newtonsoft__Json__Utilities__EnumUtils____c() ;

/// @brief Method .ctor addr 0x24ea82c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <InitializeEnumType>b__1_0 addr 0x24ea834 size 0x18 virtual false final false
 ::StringW _InitializeEnumType_b__1_0(System::Runtime::Serialization::EnumMemberAttribute a) ;

/// @brief Method <GetValues>b__5_0 addr 0x24ea84c size 0x18 virtual false final false
 bool _GetValues_b__5_0(System::Reflection::FieldInfo f) ;

/// @brief Method <GetNames>b__6_0 addr 0x24ea864 size 0x18 virtual false final false
 bool _GetNames_b__6_0(System::Reflection::FieldInfo f) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Utilities
// Type: ::<>c__2`1
namespace Newtonsoft::Json::Utilities {
// cpp template
template<typename T>
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11827))
// CS Name: Newtonsoft.Json.Utilities.EnumUtils::<>c__2`1
class CORDL_TYPE Newtonsoft__Json__Utilities__EnumUtils____c__2_1 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Newtonsoft__Json__Utilities__EnumUtils____c__2_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "Newtonsoft__Json__Utilities__EnumUtils____c__2_1", modifiers: " const&", def_value: None }]
constexpr Newtonsoft__Json__Utilities__EnumUtils____c__2_1(Newtonsoft__Json__Utilities__EnumUtils____c__2_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Newtonsoft__Json__Utilities__EnumUtils____c__2_1", modifiers: "&&", def_value: None }]
constexpr Newtonsoft__Json__Utilities__EnumUtils____c__2_1(Newtonsoft__Json__Utilities__EnumUtils____c__2_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Newtonsoft__Json__Utilities__EnumUtils____c__2_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Newtonsoft__Json__Utilities__EnumUtils____c__2_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Newtonsoft__Json__Utilities__EnumUtils____c__2_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Newtonsoft__Json__Utilities__EnumUtils____c__2_1& operator=(Newtonsoft__Json__Utilities__EnumUtils____c__2_1&& o) noexcept = default;
  constexpr Newtonsoft__Json__Utilities__EnumUtils____c__2_1& operator=(Newtonsoft__Json__Utilities__EnumUtils____c__2_1 const& o) noexcept = default;
                


// Fields

static Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__EnumUtils____c__2_1<T> __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__EnumUtils____c__2_1<T> value) ;

static Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__EnumUtils____c__2_1<T> __get___9() ;

static System::Func_2<Newtonsoft::Json::Utilities::EnumValue_1<uint64_t>,bool> __declspec(property(get=__get___9__2_0, put=__set___9__2_0))  __9__2_0;

static void __set___9__2_0(System::Func_2<Newtonsoft::Json::Utilities::EnumValue_1<uint64_t>,bool> value) ;

static System::Func_2<Newtonsoft::Json::Utilities::EnumValue_1<uint64_t>,bool> __get___9__2_0() ;


// Methods

// Ctor Parameters []
explicit Newtonsoft__Json__Utilities__EnumUtils____c__2_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <GetFlagsValues>b__2_0 addr 0x0 size 0xffffffffffffffff virtual false final false
 bool _GetFlagsValues_b__2_0(Newtonsoft::Json::Utilities::EnumValue_1<uint64_t> v) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Utilities
// Type: Newtonsoft.Json.Utilities::EnumUtils
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11828))
// CS Name: Newtonsoft.Json.Utilities.EnumUtils
class CORDL_TYPE EnumUtils : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
template<typename T>
using __c__2_1 = Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__EnumUtils____c__2_1<T>;

using __c = Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__EnumUtils____c;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~EnumUtils() = default;

// Ctor Parameters [CppParam { name: "", ty: "EnumUtils", modifiers: " const&", def_value: None }]
constexpr EnumUtils(EnumUtils const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EnumUtils", modifiers: "&&", def_value: None }]
constexpr EnumUtils(EnumUtils&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EnumUtils(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr EnumUtils& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EnumUtils& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EnumUtils& operator=(EnumUtils&& o) noexcept = default;
  constexpr EnumUtils& operator=(EnumUtils const& o) noexcept = default;
                


// Fields

static Newtonsoft::Json::Utilities::ThreadSafeStore_2<System::Type,Newtonsoft::Json::Utilities::BidirectionalDictionary_2<::StringW,::StringW>> __declspec(property(get=__get_EnumMemberNamesPerType, put=__set_EnumMemberNamesPerType))  EnumMemberNamesPerType;

static void __set_EnumMemberNamesPerType(Newtonsoft::Json::Utilities::ThreadSafeStore_2<System::Type,Newtonsoft::Json::Utilities::BidirectionalDictionary_2<::StringW,::StringW>> value) ;

static Newtonsoft::Json::Utilities::ThreadSafeStore_2<System::Type,Newtonsoft::Json::Utilities::BidirectionalDictionary_2<::StringW,::StringW>> __get_EnumMemberNamesPerType() ;


// Methods

/// @brief Method InitializeEnumType addr 0x24e96e4 size 0x434 virtual false final false
static Newtonsoft::Json::Utilities::BidirectionalDictionary_2<::StringW,::StringW> InitializeEnumType(System::Type type) ;

/// @brief Method GetFlagsValues addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static System::Collections::Generic::IList_1<T> GetFlagsValues(T value) ;

/// @brief Method GetNamesAndValues addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static System::Collections::Generic::IList_1<Newtonsoft::Json::Utilities::EnumValue_1<uint64_t>> GetNamesAndValues() ;

/// @brief Method GetNamesAndValues addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TUnderlyingType>
static System::Collections::Generic::IList_1<Newtonsoft::Json::Utilities::EnumValue_1<TUnderlyingType>> GetNamesAndValues(System::Type enumType) ;

/// @brief Method GetValues addr 0x24dc1ac size 0x530 virtual false final false
static System::Collections::Generic::IList_1<::bs_hook::Il2CppWrapperType> GetValues(System::Type enumType) ;

/// @brief Method GetNames addr 0x24e9b18 size 0x524 virtual false final false
static System::Collections::Generic::IList_1<::StringW> GetNames(System::Type enumType) ;

/// @brief Method ParseEnumName addr 0x24ea03c size 0x268 virtual false final false
static ::bs_hook::Il2CppWrapperType ParseEnumName(::StringW enumText, bool isNullable, System::Type t) ;

/// @brief Method ToEnumName addr 0x24ea31c size 0x1e8 virtual false final false
static ::StringW ToEnumName(System::Type enumType, ::StringW enumText, bool camelCaseText) ;

/// @brief Method ResolvedEnumName addr 0x24ea2a4 size 0x78 virtual false final false
static ::StringW ResolvedEnumName(Newtonsoft::Json::Utilities::BidirectionalDictionary_2<::StringW,::StringW> map, ::StringW enumText) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Utilities
NEED_NO_BOX(Newtonsoft::Json::Utilities::EnumUtils);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Utilities::EnumUtils, "Newtonsoft.Json.Utilities", "EnumUtils");
NEED_NO_BOX(Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__EnumUtils____c);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__EnumUtils____c, "Newtonsoft.Json.Utilities", "EnumUtils/<>c");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__EnumUtils____c__2_1, "Newtonsoft.Json.Utilities", "EnumUtils/<>c__2`1");
