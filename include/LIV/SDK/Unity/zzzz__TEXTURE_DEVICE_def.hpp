#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace LIV::SDK::Unity {
struct TEXTURE_DEVICE;
}
// Type: LIV.SDK.Unity::TEXTURE_DEVICE
namespace LIV::SDK::Unity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15153))
// CS Name: LIV.SDK.Unity.TEXTURE_DEVICE
struct CORDL_TYPE TEXTURE_DEVICE : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr TEXTURE_DEVICE(uint32_t value__) noexcept;


                    constexpr TEXTURE_DEVICE(TEXTURE_DEVICE const&) = default;
                    constexpr TEXTURE_DEVICE(TEXTURE_DEVICE&&) = default;
                    constexpr TEXTURE_DEVICE& operator=(TEXTURE_DEVICE const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TEXTURE_DEVICE& operator=(TEXTURE_DEVICE&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TEXTURE_DEVICE(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __TEXTURE_DEVICE_Unwrapped : uint32_t {
__UNDEFINED = 0u,
__RAW = 1u,
__DIRECTX = 2u,
__OPENGL = 3u,
__VULKAN = 4u,
__METAL = 5u,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TEXTURE_DEVICE_Unwrapped () const noexcept {
return std::bit_cast<__TEXTURE_DEVICE_Unwrapped>(__instance);
}


// Fields

 uint32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(uint32_t value) ;

constexpr uint32_t __get_value__() const;

/// @brief Field UNDEFINED offset 0
static ::LIV::SDK::Unity::TEXTURE_DEVICE const UNDEFINED;

/// @brief Field RAW offset 0
static ::LIV::SDK::Unity::TEXTURE_DEVICE const RAW;

/// @brief Field DIRECTX offset 0
static ::LIV::SDK::Unity::TEXTURE_DEVICE const DIRECTX;

/// @brief Field OPENGL offset 0
static ::LIV::SDK::Unity::TEXTURE_DEVICE const OPENGL;

/// @brief Field VULKAN offset 0
static ::LIV::SDK::Unity::TEXTURE_DEVICE const VULKAN;

/// @brief Field METAL offset 0
static ::LIV::SDK::Unity::TEXTURE_DEVICE const METAL;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def LIV::SDK::Unity
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::LIV::SDK::Unity::TEXTURE_DEVICE, "LIV.SDK.Unity", "TEXTURE_DEVICE");
