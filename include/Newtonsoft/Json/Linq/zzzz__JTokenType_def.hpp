#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace Newtonsoft::Json::Linq {
struct JTokenType;
}
// Type: Newtonsoft.Json.Linq::JTokenType
namespace Newtonsoft::Json::Linq {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11948))
// CS Name: Newtonsoft.Json.Linq.JTokenType
struct CORDL_TYPE JTokenType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr JTokenType(int32_t value__) noexcept;


                    constexpr JTokenType(JTokenType const&) = default;
                    constexpr JTokenType(JTokenType&&) = default;
                    constexpr JTokenType& operator=(JTokenType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr JTokenType& operator=(JTokenType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit JTokenType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __JTokenType_Unwrapped : int32_t {
__None = 0,
__Object = 1,
__Array = 2,
__Constructor = 3,
__Property = 4,
__Comment = 5,
__Integer = 6,
__Float = 7,
__String = 8,
__Boolean = 9,
__Null = 10,
__Undefined = 11,
__Date = 12,
__Raw = 13,
__Bytes = 14,
__Guid = 15,
__Uri = 16,
__TimeSpan = 17,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __JTokenType_Unwrapped () const noexcept {
return std::bit_cast<__JTokenType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static Newtonsoft::Json::Linq::JTokenType const None;

/// @brief Field Object offset 0
static Newtonsoft::Json::Linq::JTokenType const Object;

/// @brief Field Array offset 0
static Newtonsoft::Json::Linq::JTokenType const Array;

/// @brief Field Constructor offset 0
static Newtonsoft::Json::Linq::JTokenType const Constructor;

/// @brief Field Property offset 0
static Newtonsoft::Json::Linq::JTokenType const Property;

/// @brief Field Comment offset 0
static Newtonsoft::Json::Linq::JTokenType const Comment;

/// @brief Field Integer offset 0
static Newtonsoft::Json::Linq::JTokenType const Integer;

/// @brief Field Float offset 0
static Newtonsoft::Json::Linq::JTokenType const Float;

/// @brief Field String offset 0
static Newtonsoft::Json::Linq::JTokenType const String;

/// @brief Field Boolean offset 0
static Newtonsoft::Json::Linq::JTokenType const Boolean;

/// @brief Field Null offset 0
static Newtonsoft::Json::Linq::JTokenType const Null;

/// @brief Field Undefined offset 0
static Newtonsoft::Json::Linq::JTokenType const Undefined;

/// @brief Field Date offset 0
static Newtonsoft::Json::Linq::JTokenType const Date;

/// @brief Field Raw offset 0
static Newtonsoft::Json::Linq::JTokenType const Raw;

/// @brief Field Bytes offset 0
static Newtonsoft::Json::Linq::JTokenType const Bytes;

/// @brief Field Guid offset 0
static Newtonsoft::Json::Linq::JTokenType const Guid;

/// @brief Field Uri offset 0
static Newtonsoft::Json::Linq::JTokenType const Uri;

/// @brief Field TimeSpan offset 0
static Newtonsoft::Json::Linq::JTokenType const TimeSpan;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Linq
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Linq::JTokenType, "Newtonsoft.Json.Linq", "JTokenType");
