#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace UnityEngine {
struct MixedLightingMode;
}
namespace UnityEngine {
struct LightmapBakeType;
}
// Forward declare root types
namespace UnityEngine {
struct LightBakingOutput;
}
// Type: UnityEngine::LightBakingOutput
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10022))
// CS Name: UnityEngine.LightBakingOutput
struct CORDL_TYPE LightBakingOutput : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "probeOcclusionLightIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "occlusionMaskChannel", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "lightmapBakeType", ty: "UnityEngine::LightmapBakeType", modifiers: "", def_value: None }, CppParam { name: "mixedLightingMode", ty: "UnityEngine::MixedLightingMode", modifiers: "", def_value: None }, CppParam { name: "isBaked", ty: "bool", modifiers: "", def_value: None }]
constexpr LightBakingOutput(int32_t probeOcclusionLightIndex, int32_t occlusionMaskChannel, UnityEngine::LightmapBakeType lightmapBakeType, UnityEngine::MixedLightingMode mixedLightingMode, bool isBaked) noexcept;


                    constexpr LightBakingOutput(LightBakingOutput const&) = default;
                    constexpr LightBakingOutput(LightBakingOutput&&) = default;
                    constexpr LightBakingOutput& operator=(LightBakingOutput const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr LightBakingOutput& operator=(LightBakingOutput&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x14};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit LightBakingOutput(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_probeOcclusionLightIndex, put=__set_probeOcclusionLightIndex))  probeOcclusionLightIndex;

constexpr void __set_probeOcclusionLightIndex(int32_t value) ;

constexpr int32_t __get_probeOcclusionLightIndex() const;

 int32_t __declspec(property(get=__get_occlusionMaskChannel, put=__set_occlusionMaskChannel))  occlusionMaskChannel;

constexpr void __set_occlusionMaskChannel(int32_t value) ;

constexpr int32_t __get_occlusionMaskChannel() const;

 UnityEngine::LightmapBakeType __declspec(property(get=__get_lightmapBakeType, put=__set_lightmapBakeType))  lightmapBakeType;

constexpr void __set_lightmapBakeType(UnityEngine::LightmapBakeType value) ;

constexpr UnityEngine::LightmapBakeType __get_lightmapBakeType() const;

 UnityEngine::MixedLightingMode __declspec(property(get=__get_mixedLightingMode, put=__set_mixedLightingMode))  mixedLightingMode;

constexpr void __set_mixedLightingMode(UnityEngine::MixedLightingMode value) ;

constexpr UnityEngine::MixedLightingMode __get_mixedLightingMode() const;

 bool __declspec(property(get=__get_isBaked, put=__set_isBaked))  isBaked;

constexpr void __set_isBaked(bool value) ;

constexpr bool __get_isBaked() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::LightBakingOutput, "UnityEngine", "LightBakingOutput");
