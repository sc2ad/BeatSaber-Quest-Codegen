#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace OVR::OpenVR {
struct EVSync;
}
// Type: OVR.OpenVR::EVSync
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9396))
// CS Name: OVR.OpenVR.EVSync
struct CORDL_TYPE EVSync : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EVSync(int32_t value__) noexcept;


                    constexpr EVSync(EVSync const&) = default;
                    constexpr EVSync(EVSync&&) = default;
                    constexpr EVSync& operator=(EVSync const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr EVSync& operator=(EVSync&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit EVSync(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __EVSync_Unwrapped : int32_t {
__None = 0,
__WaitRender = 1,
__NoWaitRender = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EVSync_Unwrapped () const noexcept {
return std::bit_cast<__EVSync_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static OVR::OpenVR::EVSync const None;

/// @brief Field WaitRender offset 0
static OVR::OpenVR::EVSync const WaitRender;

/// @brief Field NoWaitRender offset 0
static OVR::OpenVR::EVSync const NoWaitRender;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::EVSync, "OVR.OpenVR", "EVSync");
