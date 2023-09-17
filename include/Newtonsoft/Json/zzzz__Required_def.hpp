#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace Newtonsoft::Json {
struct Required;
}
// Type: Newtonsoft.Json::Required
namespace Newtonsoft::Json {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11753))
// CS Name: Newtonsoft.Json.Required
struct CORDL_TYPE Required : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Required(int32_t value__) noexcept;


                    constexpr Required(Required const&) = default;
                    constexpr Required(Required&&) = default;
                    constexpr Required& operator=(Required const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Required& operator=(Required&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Required(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __Required_Unwrapped : int32_t {
__Default = 0,
__AllowNull = 1,
__Always = 2,
__DisallowNull = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Required_Unwrapped () const noexcept {
return std::bit_cast<__Required_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Default offset 0
static ::Newtonsoft::Json::Required const Default;

/// @brief Field AllowNull offset 0
static ::Newtonsoft::Json::Required const AllowNull;

/// @brief Field Always offset 0
static ::Newtonsoft::Json::Required const Always;

/// @brief Field DisallowNull offset 0
static ::Newtonsoft::Json::Required const DisallowNull;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Required, "Newtonsoft.Json", "Required");
