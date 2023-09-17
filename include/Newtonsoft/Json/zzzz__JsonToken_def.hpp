#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace Newtonsoft::Json {
struct JsonToken;
}
// Type: Newtonsoft.Json::JsonToken
namespace Newtonsoft::Json {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11783))
// CS Name: Newtonsoft.Json.JsonToken
struct CORDL_TYPE JsonToken : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr JsonToken(int32_t value__) noexcept;


                    constexpr JsonToken(JsonToken const&) = default;
                    constexpr JsonToken(JsonToken&&) = default;
                    constexpr JsonToken& operator=(JsonToken const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr JsonToken& operator=(JsonToken&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit JsonToken(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __JsonToken_Unwrapped : int32_t {
__None = 0,
__StartObject = 1,
__StartArray = 2,
__StartConstructor = 3,
__PropertyName = 4,
__Comment = 5,
__Raw = 6,
__Integer = 7,
__Float = 8,
__String = 9,
__Boolean = 10,
__Null = 11,
__Undefined = 12,
__EndObject = 13,
__EndArray = 14,
__EndConstructor = 15,
__Date = 16,
__Bytes = 17,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __JsonToken_Unwrapped () const noexcept {
return std::bit_cast<__JsonToken_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static ::Newtonsoft::Json::JsonToken const None;

/// @brief Field StartObject offset 0
static ::Newtonsoft::Json::JsonToken const StartObject;

/// @brief Field StartArray offset 0
static ::Newtonsoft::Json::JsonToken const StartArray;

/// @brief Field StartConstructor offset 0
static ::Newtonsoft::Json::JsonToken const StartConstructor;

/// @brief Field PropertyName offset 0
static ::Newtonsoft::Json::JsonToken const PropertyName;

/// @brief Field Comment offset 0
static ::Newtonsoft::Json::JsonToken const Comment;

/// @brief Field Raw offset 0
static ::Newtonsoft::Json::JsonToken const Raw;

/// @brief Field Integer offset 0
static ::Newtonsoft::Json::JsonToken const Integer;

/// @brief Field Float offset 0
static ::Newtonsoft::Json::JsonToken const Float;

/// @brief Field String offset 0
static ::Newtonsoft::Json::JsonToken const String;

/// @brief Field Boolean offset 0
static ::Newtonsoft::Json::JsonToken const Boolean;

/// @brief Field Null offset 0
static ::Newtonsoft::Json::JsonToken const Null;

/// @brief Field Undefined offset 0
static ::Newtonsoft::Json::JsonToken const Undefined;

/// @brief Field EndObject offset 0
static ::Newtonsoft::Json::JsonToken const EndObject;

/// @brief Field EndArray offset 0
static ::Newtonsoft::Json::JsonToken const EndArray;

/// @brief Field EndConstructor offset 0
static ::Newtonsoft::Json::JsonToken const EndConstructor;

/// @brief Field Date offset 0
static ::Newtonsoft::Json::JsonToken const Date;

/// @brief Field Bytes offset 0
static ::Newtonsoft::Json::JsonToken const Bytes;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonToken, "Newtonsoft.Json", "JsonToken");
