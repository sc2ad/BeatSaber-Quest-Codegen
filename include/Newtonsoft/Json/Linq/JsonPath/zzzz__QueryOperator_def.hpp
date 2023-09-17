#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace Newtonsoft::Json::Linq::JsonPath {
struct QueryOperator;
}
// Type: Newtonsoft.Json.Linq.JsonPath::QueryOperator
namespace Newtonsoft::Json::Linq::JsonPath {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11963))
// CS Name: Newtonsoft.Json.Linq.JsonPath.QueryOperator
struct CORDL_TYPE QueryOperator : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr QueryOperator(int32_t value__) noexcept;


                    constexpr QueryOperator(QueryOperator const&) = default;
                    constexpr QueryOperator(QueryOperator&&) = default;
                    constexpr QueryOperator& operator=(QueryOperator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr QueryOperator& operator=(QueryOperator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit QueryOperator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __QueryOperator_Unwrapped : int32_t {
__None = 0,
__Equals = 1,
__NotEquals = 2,
__Exists = 3,
__LessThan = 4,
__LessThanOrEquals = 5,
__GreaterThan = 6,
__GreaterThanOrEquals = 7,
__And = 8,
__Or = 9,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __QueryOperator_Unwrapped () const noexcept {
return std::bit_cast<__QueryOperator_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static ::Newtonsoft::Json::Linq::JsonPath::QueryOperator const None;

/// @brief Field Equals offset 0
static ::Newtonsoft::Json::Linq::JsonPath::QueryOperator const Equals;

/// @brief Field NotEquals offset 0
static ::Newtonsoft::Json::Linq::JsonPath::QueryOperator const NotEquals;

/// @brief Field Exists offset 0
static ::Newtonsoft::Json::Linq::JsonPath::QueryOperator const Exists;

/// @brief Field LessThan offset 0
static ::Newtonsoft::Json::Linq::JsonPath::QueryOperator const LessThan;

/// @brief Field LessThanOrEquals offset 0
static ::Newtonsoft::Json::Linq::JsonPath::QueryOperator const LessThanOrEquals;

/// @brief Field GreaterThan offset 0
static ::Newtonsoft::Json::Linq::JsonPath::QueryOperator const GreaterThan;

/// @brief Field GreaterThanOrEquals offset 0
static ::Newtonsoft::Json::Linq::JsonPath::QueryOperator const GreaterThanOrEquals;

/// @brief Field And offset 0
static ::Newtonsoft::Json::Linq::JsonPath::QueryOperator const And;

/// @brief Field Or offset 0
static ::Newtonsoft::Json::Linq::JsonPath::QueryOperator const Or;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Linq::JsonPath
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JsonPath::QueryOperator, "Newtonsoft.Json.Linq.JsonPath", "QueryOperator");
