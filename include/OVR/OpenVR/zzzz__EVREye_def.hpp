#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace OVR::OpenVR {
struct EVREye;
}
// Type: OVR.OpenVR::EVREye
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9363))
// CS Name: OVR.OpenVR.EVREye
struct CORDL_TYPE EVREye : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EVREye(int32_t value__) noexcept;


                    constexpr EVREye(EVREye const&) = default;
                    constexpr EVREye(EVREye&&) = default;
                    constexpr EVREye& operator=(EVREye const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr EVREye& operator=(EVREye&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit EVREye(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __EVREye_Unwrapped : int32_t {
__Eye_Left = 0,
__Eye_Right = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EVREye_Unwrapped () const noexcept {
return std::bit_cast<__EVREye_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Eye_Left offset 0
static ::OVR::OpenVR::EVREye const Eye_Left;

/// @brief Field Eye_Right offset 0
static ::OVR::OpenVR::EVREye const Eye_Right;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::EVREye, "OVR.OpenVR", "EVREye");
