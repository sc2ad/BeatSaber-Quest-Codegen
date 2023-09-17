#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace Newtonsoft::Json::Bson {
struct BsonType;
}
// Type: Newtonsoft.Json.Bson::BsonType
namespace Newtonsoft::Json::Bson {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12024))
// CS Name: Newtonsoft.Json.Bson.BsonType
struct CORDL_TYPE BsonType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int8_t", modifiers: "", def_value: None }]
constexpr BsonType(int8_t value__) noexcept;


                    constexpr BsonType(BsonType const&) = default;
                    constexpr BsonType(BsonType&&) = default;
                    constexpr BsonType& operator=(BsonType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr BsonType& operator=(BsonType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit BsonType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __BsonType_Unwrapped : int8_t {
__Number = 1,
__String = 2,
__Object = 3,
__Array = 4,
__Binary = 5,
__Undefined = 6,
__Oid = 7,
__Boolean = 8,
__Date = 9,
__Null = 10,
__Regex = 11,
__Reference = 12,
__Code = 13,
__Symbol = 14,
__CodeWScope = 15,
__Integer = 16,
__TimeStamp = 17,
__Long = 18,
__MinKey = -1,
__MaxKey = 127,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BsonType_Unwrapped () const noexcept {
return std::bit_cast<__BsonType_Unwrapped>(__instance);
}


// Fields

 int8_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int8_t value) ;

constexpr int8_t __get_value__() const;

/// @brief Field Number offset 0
static ::Newtonsoft::Json::Bson::BsonType const Number;

/// @brief Field String offset 0
static ::Newtonsoft::Json::Bson::BsonType const String;

/// @brief Field Object offset 0
static ::Newtonsoft::Json::Bson::BsonType const Object;

/// @brief Field Array offset 0
static ::Newtonsoft::Json::Bson::BsonType const Array;

/// @brief Field Binary offset 0
static ::Newtonsoft::Json::Bson::BsonType const Binary;

/// @brief Field Undefined offset 0
static ::Newtonsoft::Json::Bson::BsonType const Undefined;

/// @brief Field Oid offset 0
static ::Newtonsoft::Json::Bson::BsonType const Oid;

/// @brief Field Boolean offset 0
static ::Newtonsoft::Json::Bson::BsonType const Boolean;

/// @brief Field Date offset 0
static ::Newtonsoft::Json::Bson::BsonType const Date;

/// @brief Field Null offset 0
static ::Newtonsoft::Json::Bson::BsonType const Null;

/// @brief Field Regex offset 0
static ::Newtonsoft::Json::Bson::BsonType const Regex;

/// @brief Field Reference offset 0
static ::Newtonsoft::Json::Bson::BsonType const Reference;

/// @brief Field Code offset 0
static ::Newtonsoft::Json::Bson::BsonType const Code;

/// @brief Field Symbol offset 0
static ::Newtonsoft::Json::Bson::BsonType const Symbol;

/// @brief Field CodeWScope offset 0
static ::Newtonsoft::Json::Bson::BsonType const CodeWScope;

/// @brief Field Integer offset 0
static ::Newtonsoft::Json::Bson::BsonType const Integer;

/// @brief Field TimeStamp offset 0
static ::Newtonsoft::Json::Bson::BsonType const TimeStamp;

/// @brief Field Long offset 0
static ::Newtonsoft::Json::Bson::BsonType const Long;

/// @brief Field MinKey offset 0
static ::Newtonsoft::Json::Bson::BsonType const MinKey;

/// @brief Field MaxKey offset 0
static ::Newtonsoft::Json::Bson::BsonType const MaxKey;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Bson
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Bson::BsonType, "Newtonsoft.Json.Bson", "BsonType");
