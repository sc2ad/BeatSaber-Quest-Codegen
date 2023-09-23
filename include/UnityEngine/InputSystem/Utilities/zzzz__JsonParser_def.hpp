#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct KeyValuePair_2;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace UnityEngine::InputSystem::Utilities {
struct Substring;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Utilities {
struct UnityEngine__InputSystem__Utilities__JsonParser__JsonValueType;
}
namespace GlobalNamespace {
class UnityEngine__InputSystem__Utilities__JsonParser__JsonValue____c;
}
namespace UnityEngine::InputSystem::Utilities {
struct JsonParser;
}
namespace UnityEngine::InputSystem::Utilities {
struct UnityEngine__InputSystem__Utilities__JsonParser__JsonString;
}
namespace UnityEngine::InputSystem::Utilities {
struct UnityEngine__InputSystem__Utilities__JsonParser__JsonValue;
}
// Type: ::JsonValueType
namespace UnityEngine::InputSystem::Utilities {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6755))
// CS Name: UnityEngine.InputSystem.Utilities.JsonParser::JsonValueType
struct CORDL_TYPE UnityEngine__InputSystem__Utilities__JsonParser__JsonValueType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__InputSystem__Utilities__JsonParser__JsonValueType(int32_t value__) noexcept;


                    constexpr UnityEngine__InputSystem__Utilities__JsonParser__JsonValueType(UnityEngine__InputSystem__Utilities__JsonParser__JsonValueType const&) = default;
                    constexpr UnityEngine__InputSystem__Utilities__JsonParser__JsonValueType(UnityEngine__InputSystem__Utilities__JsonParser__JsonValueType&&) = default;
                    constexpr UnityEngine__InputSystem__Utilities__JsonParser__JsonValueType& operator=(UnityEngine__InputSystem__Utilities__JsonParser__JsonValueType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__InputSystem__Utilities__JsonParser__JsonValueType& operator=(UnityEngine__InputSystem__Utilities__JsonParser__JsonValueType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__Utilities__JsonParser__JsonValueType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__InputSystem__Utilities__JsonParser__JsonValueType_Unwrapped : int32_t {
__None = 0,
__Bool = 1,
__Real = 2,
__Integer = 3,
__String = 4,
__Array = 5,
__Object = 6,
__Any = 7,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__InputSystem__Utilities__JsonParser__JsonValueType_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__InputSystem__Utilities__JsonParser__JsonValueType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValueType const None;

/// @brief Field Bool offset 0
static UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValueType const Bool;

/// @brief Field Real offset 0
static UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValueType const Real;

/// @brief Field Integer offset 0
static UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValueType const Integer;

/// @brief Field String offset 0
static UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValueType const String;

/// @brief Field Array offset 0
static UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValueType const Array;

/// @brief Field Object offset 0
static UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValueType const Object;

/// @brief Field Any offset 0
static UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValueType const Any;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: ::JsonString
namespace UnityEngine::InputSystem::Utilities {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6756))
// CS Name: UnityEngine.InputSystem.Utilities.JsonParser::JsonString
struct CORDL_TYPE UnityEngine__InputSystem__Utilities__JsonParser__JsonString : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::IEquatable_1<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonString>
constexpr operator  System::IEquatable_1<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonString>() const;

// Ctor Parameters [CppParam { name: "text", ty: "UnityEngine::InputSystem::Utilities::Substring", modifiers: "", def_value: None }, CppParam { name: "hasEscapes", ty: "bool", modifiers: "", def_value: None }]
constexpr UnityEngine__InputSystem__Utilities__JsonParser__JsonString(UnityEngine::InputSystem::Utilities::Substring text, bool hasEscapes) noexcept;


                    constexpr UnityEngine__InputSystem__Utilities__JsonParser__JsonString(UnityEngine__InputSystem__Utilities__JsonParser__JsonString const&) = default;
                    constexpr UnityEngine__InputSystem__Utilities__JsonParser__JsonString(UnityEngine__InputSystem__Utilities__JsonParser__JsonString&&) = default;
                    constexpr UnityEngine__InputSystem__Utilities__JsonParser__JsonString& operator=(UnityEngine__InputSystem__Utilities__JsonParser__JsonString const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__InputSystem__Utilities__JsonParser__JsonString& operator=(UnityEngine__InputSystem__Utilities__JsonParser__JsonString&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__Utilities__JsonParser__JsonString(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::InputSystem::Utilities::Substring __declspec(property(get=__get_text, put=__set_text))  text;

constexpr void __set_text(UnityEngine::InputSystem::Utilities::Substring value) ;

constexpr UnityEngine::InputSystem::Utilities::Substring __get_text() const;

 bool __declspec(property(get=__get_hasEscapes, put=__set_hasEscapes))  hasEscapes;

constexpr void __set_hasEscapes(bool value) ;

constexpr bool __get_hasEscapes() const;


// Methods

/// @brief Method ToString addr 0x297f190 size 0xf4 virtual true final false
 ::StringW ToString() ;

/// @brief Method Equals addr 0x297f284 size 0x1a8 virtual true final true
 bool Equals(UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonString other) ;

/// @brief Method Equals addr 0x297f42c size 0x90 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x297f4bc size 0x3c virtual true final false
 int32_t GetHashCode() ;

/// @brief Method op_Equality addr 0x297f4f8 size 0x30 virtual false final false
static bool op_Equality(UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonString left, UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonString right) ;

/// @brief Method op_Inequality addr 0x297f528 size 0x34 virtual false final false
static bool op_Inequality(UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonString left, UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonString right) ;

/// @brief Method op_Implicit addr 0x297f55c size 0x20 virtual false final false
static UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonString op_Implicit_UnityEngine__InputSystem__Utilities__UnityEngine__InputSystem__Utilities__JsonParser__JsonString(::StringW str) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: ::<>c
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6757))
// CS Name: UnityEngine.InputSystem.Utilities.JsonParser::JsonValue::<>c
class CORDL_TYPE UnityEngine__InputSystem__Utilities__JsonParser__JsonValue____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityEngine__InputSystem__Utilities__JsonParser__JsonValue____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__InputSystem__Utilities__JsonParser__JsonValue____c", modifiers: " const&", def_value: None }]
constexpr UnityEngine__InputSystem__Utilities__JsonParser__JsonValue____c(UnityEngine__InputSystem__Utilities__JsonParser__JsonValue____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__InputSystem__Utilities__JsonParser__JsonValue____c", modifiers: "&&", def_value: None }]
constexpr UnityEngine__InputSystem__Utilities__JsonParser__JsonValue____c(UnityEngine__InputSystem__Utilities__JsonParser__JsonValue____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__Utilities__JsonParser__JsonValue____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__InputSystem__Utilities__JsonParser__JsonValue____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__InputSystem__Utilities__JsonParser__JsonValue____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__InputSystem__Utilities__JsonParser__JsonValue____c& operator=(UnityEngine__InputSystem__Utilities__JsonParser__JsonValue____c&& o) noexcept = default;
  constexpr UnityEngine__InputSystem__Utilities__JsonParser__JsonValue____c& operator=(UnityEngine__InputSystem__Utilities__JsonParser__JsonValue____c const& o) noexcept = default;
                


// Fields

static GlobalNamespace::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(GlobalNamespace::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue____c value) ;

static GlobalNamespace::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue____c __get___9() ;

static System::Func_2<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue,::StringW> __declspec(property(get=__get___9__11_0, put=__set___9__11_0))  __9__11_0;

static void __set___9__11_0(System::Func_2<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue,::StringW> value) ;

static System::Func_2<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue,::StringW> __get___9__11_0() ;

static System::Func_2<System::Collections::Generic::KeyValuePair_2<::StringW,UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>,::StringW> __declspec(property(get=__get___9__11_1, put=__set___9__11_1))  __9__11_1;

static void __set___9__11_1(System::Func_2<System::Collections::Generic::KeyValuePair_2<::StringW,UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>,::StringW> value) ;

static System::Func_2<System::Collections::Generic::KeyValuePair_2<::StringW,UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>,::StringW> __get___9__11_1() ;


// Methods

// Ctor Parameters []
explicit UnityEngine__InputSystem__Utilities__JsonParser__JsonValue____c() ;

/// @brief Method .ctor addr 0x2980a18 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <ToString>b__11_0 addr 0x2980a20 size 0x8 virtual false final false
 ::StringW _ToString_b__11_0(UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue x) ;

/// @brief Method <ToString>b__11_1 addr 0x2980a28 size 0xb4 virtual false final false
 ::StringW _ToString_b__11_1(System::Collections::Generic::KeyValuePair_2<::StringW,UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue> pair) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::JsonValue
namespace UnityEngine::InputSystem::Utilities {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6758))
// CS Name: UnityEngine.InputSystem.Utilities.JsonParser::JsonValue
struct CORDL_TYPE UnityEngine__InputSystem__Utilities__JsonParser__JsonValue : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using __c = GlobalNamespace::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue____c;

/// @brief Convert operator to System::IEquatable_1<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>
constexpr operator  System::IEquatable_1<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>() const;

// Ctor Parameters [CppParam { name: "type", ty: "UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValueType", modifiers: "", def_value: None }, CppParam { name: "boolValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "realValue", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "integerValue", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "stringValue", ty: "UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonString", modifiers: "", def_value: None }, CppParam { name: "arrayValue", ty: "System::Collections::Generic::List_1<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>", modifiers: "", def_value: None }, CppParam { name: "objectValue", ty: "System::Collections::Generic::Dictionary_2<::StringW,UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>", modifiers: "", def_value: None }, CppParam { name: "anyValue", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }]
constexpr UnityEngine__InputSystem__Utilities__JsonParser__JsonValue(UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValueType type, bool boolValue, double_t realValue, int64_t integerValue, UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonString stringValue, System::Collections::Generic::List_1<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue> arrayValue, System::Collections::Generic::Dictionary_2<::StringW,UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue> objectValue, ::bs_hook::Il2CppWrapperType anyValue) noexcept;


                    constexpr UnityEngine__InputSystem__Utilities__JsonParser__JsonValue(UnityEngine__InputSystem__Utilities__JsonParser__JsonValue const&) = default;
                    constexpr UnityEngine__InputSystem__Utilities__JsonParser__JsonValue(UnityEngine__InputSystem__Utilities__JsonParser__JsonValue&&) = default;
                    constexpr UnityEngine__InputSystem__Utilities__JsonParser__JsonValue& operator=(UnityEngine__InputSystem__Utilities__JsonParser__JsonValue const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__InputSystem__Utilities__JsonParser__JsonValue& operator=(UnityEngine__InputSystem__Utilities__JsonParser__JsonValue&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x48};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__Utilities__JsonParser__JsonValue(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValueType __declspec(property(get=__get_type, put=__set_type))  type;

constexpr void __set_type(UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValueType value) ;

constexpr UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValueType __get_type() const;

 bool __declspec(property(get=__get_boolValue, put=__set_boolValue))  boolValue;

constexpr void __set_boolValue(bool value) ;

constexpr bool __get_boolValue() const;

 double_t __declspec(property(get=__get_realValue, put=__set_realValue))  realValue;

constexpr void __set_realValue(double_t value) ;

constexpr double_t __get_realValue() const;

 int64_t __declspec(property(get=__get_integerValue, put=__set_integerValue))  integerValue;

constexpr void __set_integerValue(int64_t value) ;

constexpr int64_t __get_integerValue() const;

 UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonString __declspec(property(get=__get_stringValue, put=__set_stringValue))  stringValue;

constexpr void __set_stringValue(UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonString value) ;

constexpr UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonString __get_stringValue() const;

 System::Collections::Generic::List_1<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue> __declspec(property(get=__get_arrayValue, put=__set_arrayValue))  arrayValue;

constexpr void __set_arrayValue(System::Collections::Generic::List_1<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue> __get_arrayValue() const;

 System::Collections::Generic::Dictionary_2<::StringW,UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue> __declspec(property(get=__get_objectValue, put=__set_objectValue))  objectValue;

constexpr void __set_objectValue(System::Collections::Generic::Dictionary_2<::StringW,UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue> value) ;

constexpr System::Collections::Generic::Dictionary_2<::StringW,UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue> __get_objectValue() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_anyValue, put=__set_anyValue))  anyValue;

constexpr void __set_anyValue(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_anyValue() const;


// Methods

/// @brief Method ToBoolean addr 0x297f57c size 0x140 virtual false final false
 bool ToBoolean() ;

/// @brief Method ToInteger addr 0x297faf4 size 0xd0 virtual false final false
 int64_t ToInteger() ;

/// @brief Method ToDouble addr 0x297fbc4 size 0xcc virtual false final false
 double_t ToDouble() ;

/// @brief Method ToString addr 0x297f6bc size 0x438 virtual true final false
 ::StringW ToString() ;

/// @brief Method op_Implicit addr 0x297f154 size 0x2c virtual false final false
static UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue op_Implicit_UnityEngine__InputSystem__Utilities__UnityEngine__InputSystem__Utilities__JsonParser__JsonValue(bool val) ;

/// @brief Method op_Implicit addr 0x297f064 size 0x28 virtual false final false
static UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue op_Implicit_UnityEngine__InputSystem__Utilities__UnityEngine__InputSystem__Utilities__JsonParser__JsonValue(int64_t val) ;

/// @brief Method op_Implicit addr 0x297f08c size 0x20 virtual false final false
static UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue op_Implicit_UnityEngine__InputSystem__Utilities__UnityEngine__InputSystem__Utilities__JsonParser__JsonValue(double_t val) ;

/// @brief Method op_Implicit addr 0x297fc90 size 0x3c virtual false final false
static UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue op_Implicit_UnityEngine__InputSystem__Utilities__UnityEngine__InputSystem__Utilities__JsonParser__JsonValue(::StringW str) ;

/// @brief Method op_Implicit addr 0x297efcc size 0x74 virtual false final false
static UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue op_Implicit_UnityEngine__InputSystem__Utilities__UnityEngine__InputSystem__Utilities__JsonParser__JsonValue(UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonString str) ;

/// @brief Method op_Implicit addr 0x297f040 size 0x24 virtual false final false
static UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue op_Implicit_UnityEngine__InputSystem__Utilities__UnityEngine__InputSystem__Utilities__JsonParser__JsonValue(System::Collections::Generic::List_1<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue> array) ;

/// @brief Method op_Implicit addr 0x297fccc size 0x24 virtual false final false
static UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue op_Implicit_UnityEngine__InputSystem__Utilities__UnityEngine__InputSystem__Utilities__JsonParser__JsonValue(System::Collections::Generic::Dictionary_2<::StringW,UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue> obj) ;

/// @brief Method op_Implicit addr 0x297fcf0 size 0x24 virtual false final false
static UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue op_Implicit_UnityEngine__InputSystem__Utilities__UnityEngine__InputSystem__Utilities__JsonParser__JsonValue(::bs_hook::EnumTypeWrapper val) ;

/// @brief Method Equals addr 0x297fd14 size 0x204 virtual true final true
 bool Equals(UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue other) ;

/// @brief Method Equals addr 0x297ff18 size 0x878 virtual false final false
static bool Equals(::bs_hook::Il2CppWrapperType obj, UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue value) ;

/// @brief Method Equals addr 0x2980790 size 0x90 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x2980820 size 0x15c virtual true final false
 int32_t GetHashCode() ;

/// @brief Method op_Equality addr 0x297e410 size 0x34 virtual false final false
static bool op_Equality(UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue left, UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue right) ;

/// @brief Method op_Inequality addr 0x298097c size 0x38 virtual false final false
static bool op_Inequality(UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue left, UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue right) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: UnityEngine.InputSystem.Utilities::JsonParser
namespace UnityEngine::InputSystem::Utilities {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6759))
// CS Name: UnityEngine.InputSystem.Utilities.JsonParser
struct CORDL_TYPE JsonParser : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using JsonValue = UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue;

using JsonString = UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonString;

using JsonValueType = UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValueType;

// Ctor Parameters [CppParam { name: "m_Text", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Position", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_MatchAnyElementInArray", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_DryRun", ty: "bool", modifiers: "", def_value: None }]
constexpr JsonParser(::StringW m_Text, int32_t m_Length, int32_t m_Position, bool m_MatchAnyElementInArray, bool m_DryRun) noexcept;


                    constexpr JsonParser(JsonParser const&) = default;
                    constexpr JsonParser(JsonParser&&) = default;
                    constexpr JsonParser& operator=(JsonParser const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr JsonParser& operator=(JsonParser&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit JsonParser(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::StringW __declspec(property(get=__get_m_Text, put=__set_m_Text))  m_Text;

constexpr void __set_m_Text(::StringW value) ;

constexpr ::StringW __get_m_Text() const;

 int32_t __declspec(property(get=__get_m_Length, put=__set_m_Length))  m_Length;

constexpr void __set_m_Length(int32_t value) ;

constexpr int32_t __get_m_Length() const;

 int32_t __declspec(property(get=__get_m_Position, put=__set_m_Position))  m_Position;

constexpr void __set_m_Position(int32_t value) ;

constexpr int32_t __get_m_Position() const;

 bool __declspec(property(get=__get_m_MatchAnyElementInArray, put=__set_m_MatchAnyElementInArray))  m_MatchAnyElementInArray;

constexpr void __set_m_MatchAnyElementInArray(bool value) ;

constexpr bool __get_m_MatchAnyElementInArray() const;

 bool __declspec(property(get=__get_m_DryRun, put=__set_m_DryRun))  m_DryRun;

constexpr void __set_m_DryRun(bool value) ;

constexpr bool __get_m_DryRun() const;


// Properties

 bool __declspec(property(get=get_isAtEnd))  isAtEnd;


// Methods

/// @brief Method .ctor addr 0x297da20 size 0x70 virtual false final false
 void _ctor(::StringW json) ;

/// @brief Method Reset addr 0x297da90 size 0xc virtual false final false
 void Reset() ;

/// @brief Method ToString addr 0x297da9c size 0xec virtual true final false
 ::StringW ToString() ;

/// @brief Method NavigateToProperty addr 0x297db88 size 0x48c virtual false final false
 bool NavigateToProperty(::StringW path) ;

/// @brief Method CurrentPropertyHasValueEqualTo addr 0x297e1b4 size 0x14c virtual false final false
 bool CurrentPropertyHasValueEqualTo(UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue expectedValue) ;

/// @brief Method ParseToken addr 0x297e014 size 0x74 virtual false final false
 bool ParseToken(char16_t token) ;

/// @brief Method ParseValue addr 0x297e184 size 0x30 virtual false final false
 bool ParseValue() ;

/// @brief Method ParseValue addr 0x297e300 size 0x110 virtual false final false
 bool ParseValue(ByRef<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue> result) ;

/// @brief Method ParseStringValue addr 0x297e444 size 0x184 virtual false final false
 bool ParseStringValue(ByRef<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue> result) ;

/// @brief Method ParseArrayValue addr 0x297e5c8 size 0x2c8 virtual false final false
 bool ParseArrayValue(ByRef<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue> result) ;

/// @brief Method ParseObjectValue addr 0x297e890 size 0x170 virtual false final false
 bool ParseObjectValue(ByRef<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue> result) ;

/// @brief Method ParseNumber addr 0x297eb3c size 0x490 virtual false final false
 bool ParseNumber(ByRef<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue> result) ;

/// @brief Method ParseBooleanValue addr 0x297ea00 size 0xd8 virtual false final false
 bool ParseBooleanValue(ByRef<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue> result) ;

/// @brief Method ParseNullValue addr 0x297ead8 size 0x64 virtual false final false
 bool ParseNullValue(ByRef<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue> result) ;

/// @brief Method SkipToValue addr 0x297e124 size 0x60 virtual false final false
 bool SkipToValue() ;

/// @brief Method SkipString addr 0x297f0ac size 0xa8 virtual false final false
 bool SkipString(::StringW text) ;

/// @brief Method SkipWhitespace addr 0x297e088 size 0x9c virtual false final false
 void SkipWhitespace() ;

/// @brief Method get_isAtEnd addr 0x297f180 size 0x10 virtual false final false
 bool get_isAtEnd() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValueType, "UnityEngine.InputSystem.Utilities", "JsonParser/JsonValueType");
NEED_NO_BOX(GlobalNamespace::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue____c);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue____c, "UnityEngine.InputSystem.Utilities", "JsonParser/JsonValue/<>c");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::Utilities::JsonParser, "UnityEngine.InputSystem.Utilities", "JsonParser");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonString, "UnityEngine.InputSystem.Utilities", "JsonParser/JsonString");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue, "UnityEngine.InputSystem.Utilities", "JsonParser/JsonValue");
