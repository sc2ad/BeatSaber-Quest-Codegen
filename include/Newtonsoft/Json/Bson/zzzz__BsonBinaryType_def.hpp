#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace Newtonsoft::Json::Bson {
struct BsonBinaryType;
}
// Type: Newtonsoft.Json.Bson::BsonBinaryType
namespace Newtonsoft::Json::Bson {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12011))
// CS Name: Newtonsoft.Json.Bson.BsonBinaryType
struct CORDL_TYPE BsonBinaryType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr BsonBinaryType(uint8_t value__) noexcept;


                    constexpr BsonBinaryType(BsonBinaryType const&) = default;
                    constexpr BsonBinaryType(BsonBinaryType&&) = default;
                    constexpr BsonBinaryType& operator=(BsonBinaryType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr BsonBinaryType& operator=(BsonBinaryType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit BsonBinaryType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __BsonBinaryType_Unwrapped : uint8_t {
__Binary = 0u,
__Function = 1u,
__BinaryOld = 2u,
__UuidOld = 3u,
__Uuid = 4u,
__Md5 = 5u,
__UserDefined = 128u,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BsonBinaryType_Unwrapped () const noexcept {
return std::bit_cast<__BsonBinaryType_Unwrapped>(__instance);
}


// Fields

 uint8_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(uint8_t value) ;

constexpr uint8_t __get_value__() const;

/// @brief Field Binary offset 0
static ::Newtonsoft::Json::Bson::BsonBinaryType const Binary;

/// @brief Field Function offset 0
static ::Newtonsoft::Json::Bson::BsonBinaryType const Function;

/// @brief Field BinaryOld offset 0
static ::Newtonsoft::Json::Bson::BsonBinaryType const BinaryOld;

/// @brief Field UuidOld offset 0
static ::Newtonsoft::Json::Bson::BsonBinaryType const UuidOld;

/// @brief Field Uuid offset 0
static ::Newtonsoft::Json::Bson::BsonBinaryType const Uuid;

/// @brief Field Md5 offset 0
static ::Newtonsoft::Json::Bson::BsonBinaryType const Md5;

/// @brief Field UserDefined offset 0
static ::Newtonsoft::Json::Bson::BsonBinaryType const UserDefined;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Bson
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Bson::BsonBinaryType, "Newtonsoft.Json.Bson", "BsonBinaryType");
