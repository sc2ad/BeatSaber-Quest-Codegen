#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace Newtonsoft::Json {
struct WriteState;
}
// Type: Newtonsoft.Json::WriteState
namespace Newtonsoft::Json {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11786))
// CS Name: Newtonsoft.Json.WriteState
struct CORDL_TYPE WriteState : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr WriteState(int32_t value__) noexcept;


                    constexpr WriteState(WriteState const&) = default;
                    constexpr WriteState(WriteState&&) = default;
                    constexpr WriteState& operator=(WriteState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr WriteState& operator=(WriteState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit WriteState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __WriteState_Unwrapped : int32_t {
__Error = 0,
__Closed = 1,
__Object = 2,
__Array = 3,
__Constructor = 4,
__Property = 5,
__Start = 6,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __WriteState_Unwrapped () const noexcept {
return std::bit_cast<__WriteState_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Error offset 0
static ::Newtonsoft::Json::WriteState const Error;

/// @brief Field Closed offset 0
static ::Newtonsoft::Json::WriteState const Closed;

/// @brief Field Object offset 0
static ::Newtonsoft::Json::WriteState const Object;

/// @brief Field Array offset 0
static ::Newtonsoft::Json::WriteState const Array;

/// @brief Field Constructor offset 0
static ::Newtonsoft::Json::WriteState const Constructor;

/// @brief Field Property offset 0
static ::Newtonsoft::Json::WriteState const Property;

/// @brief Field Start offset 0
static ::Newtonsoft::Json::WriteState const Start;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::WriteState, "Newtonsoft.Json", "WriteState");
