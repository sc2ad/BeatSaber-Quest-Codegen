#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::Rendering {
struct GraphicsDeviceType;
}
// Type: UnityEngine.Rendering::GraphicsDeviceType
namespace UnityEngine::Rendering {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10278))
// CS Name: UnityEngine.Rendering.GraphicsDeviceType
struct CORDL_TYPE GraphicsDeviceType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GraphicsDeviceType(int32_t value__) noexcept;


                    constexpr GraphicsDeviceType(GraphicsDeviceType const&) = default;
                    constexpr GraphicsDeviceType(GraphicsDeviceType&&) = default;
                    constexpr GraphicsDeviceType& operator=(GraphicsDeviceType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GraphicsDeviceType& operator=(GraphicsDeviceType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GraphicsDeviceType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GraphicsDeviceType_Unwrapped : int32_t {
__OpenGL2 = 0,
__Direct3D9 = 1,
__Direct3D11 = 2,
__PlayStation3 = 3,
__Null = 4,
__Xbox360 = 6,
__OpenGLES2 = 8,
__OpenGLES3 = 11,
__PlayStationVita = 12,
__PlayStation4 = 13,
__XboxOne = 14,
__PlayStationMobile = 15,
__Metal = 16,
__OpenGLCore = 17,
__Direct3D12 = 18,
__N3DS = 19,
__Vulkan = 21,
__Switch = 22,
__XboxOneD3D12 = 23,
__GameCoreXboxOne = 24,
__GameCoreScarlett = -1,
__GameCoreXboxSeries = 25,
__PlayStation5 = 26,
__PlayStation5NGGC = 27,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GraphicsDeviceType_Unwrapped () const noexcept {
return std::bit_cast<__GraphicsDeviceType_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field OpenGL2 offset 0
static UnityEngine::Rendering::GraphicsDeviceType const OpenGL2;

/// @brief Field Direct3D9 offset 0
static UnityEngine::Rendering::GraphicsDeviceType const Direct3D9;

/// @brief Field Direct3D11 offset 0
static UnityEngine::Rendering::GraphicsDeviceType const Direct3D11;

/// @brief Field PlayStation3 offset 0
static UnityEngine::Rendering::GraphicsDeviceType const PlayStation3;

/// @brief Field Null offset 0
static UnityEngine::Rendering::GraphicsDeviceType const Null;

/// @brief Field Xbox360 offset 0
static UnityEngine::Rendering::GraphicsDeviceType const Xbox360;

/// @brief Field OpenGLES2 offset 0
static UnityEngine::Rendering::GraphicsDeviceType const OpenGLES2;

/// @brief Field OpenGLES3 offset 0
static UnityEngine::Rendering::GraphicsDeviceType const OpenGLES3;

/// @brief Field PlayStationVita offset 0
static UnityEngine::Rendering::GraphicsDeviceType const PlayStationVita;

/// @brief Field PlayStation4 offset 0
static UnityEngine::Rendering::GraphicsDeviceType const PlayStation4;

/// @brief Field XboxOne offset 0
static UnityEngine::Rendering::GraphicsDeviceType const XboxOne;

/// @brief Field PlayStationMobile offset 0
static UnityEngine::Rendering::GraphicsDeviceType const PlayStationMobile;

/// @brief Field Metal offset 0
static UnityEngine::Rendering::GraphicsDeviceType const Metal;

/// @brief Field OpenGLCore offset 0
static UnityEngine::Rendering::GraphicsDeviceType const OpenGLCore;

/// @brief Field Direct3D12 offset 0
static UnityEngine::Rendering::GraphicsDeviceType const Direct3D12;

/// @brief Field N3DS offset 0
static UnityEngine::Rendering::GraphicsDeviceType const N3DS;

/// @brief Field Vulkan offset 0
static UnityEngine::Rendering::GraphicsDeviceType const Vulkan;

/// @brief Field Switch offset 0
static UnityEngine::Rendering::GraphicsDeviceType const Switch;

/// @brief Field XboxOneD3D12 offset 0
static UnityEngine::Rendering::GraphicsDeviceType const XboxOneD3D12;

/// @brief Field GameCoreXboxOne offset 0
static UnityEngine::Rendering::GraphicsDeviceType const GameCoreXboxOne;

/// @brief Field GameCoreScarlett offset 0
static UnityEngine::Rendering::GraphicsDeviceType const GameCoreScarlett;

/// @brief Field GameCoreXboxSeries offset 0
static UnityEngine::Rendering::GraphicsDeviceType const GameCoreXboxSeries;

/// @brief Field PlayStation5 offset 0
static UnityEngine::Rendering::GraphicsDeviceType const PlayStation5;

/// @brief Field PlayStation5NGGC offset 0
static UnityEngine::Rendering::GraphicsDeviceType const PlayStation5NGGC;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Rendering::GraphicsDeviceType, "UnityEngine.Rendering", "GraphicsDeviceType");
