#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace HoudiniEngineUnity {
struct JSONTextMode;
}
// Type: HoudiniEngineUnity::JSONTextMode
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9802))
// CS Name: HoudiniEngineUnity.JSONTextMode
struct CORDL_TYPE JSONTextMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr JSONTextMode(int32_t value__) noexcept;


                    constexpr JSONTextMode(JSONTextMode const&) = default;
                    constexpr JSONTextMode(JSONTextMode&&) = default;
                    constexpr JSONTextMode& operator=(JSONTextMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr JSONTextMode& operator=(JSONTextMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit JSONTextMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __JSONTextMode_Unwrapped : int32_t {
__Compact = 0,
__Indent = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __JSONTextMode_Unwrapped () const noexcept {
return std::bit_cast<__JSONTextMode_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Compact offset 0
static ::HoudiniEngineUnity::JSONTextMode const Compact;

/// @brief Field Indent offset 0
static ::HoudiniEngineUnity::JSONTextMode const Indent;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::JSONTextMode, "HoudiniEngineUnity", "JSONTextMode");
