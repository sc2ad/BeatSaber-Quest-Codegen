#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace OVR::OpenVR {
struct ETextureType;
}
// Type: OVR.OpenVR::ETextureType
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9364))
// CS Name: OVR.OpenVR.ETextureType
struct CORDL_TYPE ETextureType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ETextureType(int32_t value__) noexcept;


                    constexpr ETextureType(ETextureType const&) = default;
                    constexpr ETextureType(ETextureType&&) = default;
                    constexpr ETextureType& operator=(ETextureType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ETextureType& operator=(ETextureType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ETextureType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __ETextureType_Unwrapped : int32_t {
__Invalid = -1,
__DirectX = 0,
__OpenGL = 1,
__Vulkan = 2,
__IOSurface = 3,
__DirectX12 = 4,
__DXGISharedHandle = 5,
__Metal = 6,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ETextureType_Unwrapped () const noexcept {
return std::bit_cast<__ETextureType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Invalid offset 0
static OVR::OpenVR::ETextureType const Invalid;

/// @brief Field DirectX offset 0
static OVR::OpenVR::ETextureType const DirectX;

/// @brief Field OpenGL offset 0
static OVR::OpenVR::ETextureType const OpenGL;

/// @brief Field Vulkan offset 0
static OVR::OpenVR::ETextureType const Vulkan;

/// @brief Field IOSurface offset 0
static OVR::OpenVR::ETextureType const IOSurface;

/// @brief Field DirectX12 offset 0
static OVR::OpenVR::ETextureType const DirectX12;

/// @brief Field DXGISharedHandle offset 0
static OVR::OpenVR::ETextureType const DXGISharedHandle;

/// @brief Field Metal offset 0
static OVR::OpenVR::ETextureType const Metal;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::ETextureType, "OVR.OpenVR", "ETextureType");
