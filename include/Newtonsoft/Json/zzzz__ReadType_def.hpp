#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace Newtonsoft::Json {
struct ReadType;
}
// Type: Newtonsoft.Json::ReadType
namespace Newtonsoft::Json {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11765))
// CS Name: Newtonsoft.Json.ReadType
struct CORDL_TYPE ReadType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ReadType(int32_t value__) noexcept;


                    constexpr ReadType(ReadType const&) = default;
                    constexpr ReadType(ReadType&&) = default;
                    constexpr ReadType& operator=(ReadType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ReadType& operator=(ReadType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ReadType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __ReadType_Unwrapped : int32_t {
__Read = 0,
__ReadAsInt32 = 1,
__ReadAsBytes = 2,
__ReadAsString = 3,
__ReadAsDecimal = 4,
__ReadAsDateTime = 5,
__ReadAsDateTimeOffset = 6,
__ReadAsDouble = 7,
__ReadAsBoolean = 8,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ReadType_Unwrapped () const noexcept {
return std::bit_cast<__ReadType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Read offset 0
static ::Newtonsoft::Json::ReadType const Read;

/// @brief Field ReadAsInt32 offset 0
static ::Newtonsoft::Json::ReadType const ReadAsInt32;

/// @brief Field ReadAsBytes offset 0
static ::Newtonsoft::Json::ReadType const ReadAsBytes;

/// @brief Field ReadAsString offset 0
static ::Newtonsoft::Json::ReadType const ReadAsString;

/// @brief Field ReadAsDecimal offset 0
static ::Newtonsoft::Json::ReadType const ReadAsDecimal;

/// @brief Field ReadAsDateTime offset 0
static ::Newtonsoft::Json::ReadType const ReadAsDateTime;

/// @brief Field ReadAsDateTimeOffset offset 0
static ::Newtonsoft::Json::ReadType const ReadAsDateTimeOffset;

/// @brief Field ReadAsDouble offset 0
static ::Newtonsoft::Json::ReadType const ReadAsDouble;

/// @brief Field ReadAsBoolean offset 0
static ::Newtonsoft::Json::ReadType const ReadAsBoolean;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::ReadType, "Newtonsoft.Json", "ReadType");
