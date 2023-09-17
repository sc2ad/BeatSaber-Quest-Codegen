#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Color32;
}
// Forward declare root types
namespace UnityEngine {
struct TreeInstance;
}
// Type: UnityEngine::TreeInstance
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15446))
// CS Name: UnityEngine.TreeInstance
struct CORDL_TYPE TreeInstance : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "widthScale", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "heightScale", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "rotation", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "color", ty: "::UnityEngine::Color32", modifiers: "", def_value: None }, CppParam { name: "lightmapColor", ty: "::UnityEngine::Color32", modifiers: "", def_value: None }, CppParam { name: "prototypeIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "temporaryDistance", ty: "float_t", modifiers: "", def_value: None }]
constexpr TreeInstance(::UnityEngine::Vector3 position, float_t widthScale, float_t heightScale, float_t rotation, ::UnityEngine::Color32 color, ::UnityEngine::Color32 lightmapColor, int32_t prototypeIndex, float_t temporaryDistance) noexcept;


                    constexpr TreeInstance(TreeInstance const&) = default;
                    constexpr TreeInstance(TreeInstance&&) = default;
                    constexpr TreeInstance& operator=(TreeInstance const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TreeInstance& operator=(TreeInstance&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x28};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TreeInstance(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::UnityEngine::Vector3 __declspec(property(get=__get_position, put=__set_position))  position;

constexpr void __set_position(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get_position() const;

 float_t __declspec(property(get=__get_widthScale, put=__set_widthScale))  widthScale;

constexpr void __set_widthScale(float_t value) ;

constexpr float_t __get_widthScale() const;

 float_t __declspec(property(get=__get_heightScale, put=__set_heightScale))  heightScale;

constexpr void __set_heightScale(float_t value) ;

constexpr float_t __get_heightScale() const;

 float_t __declspec(property(get=__get_rotation, put=__set_rotation))  rotation;

constexpr void __set_rotation(float_t value) ;

constexpr float_t __get_rotation() const;

 ::UnityEngine::Color32 __declspec(property(get=__get_color, put=__set_color))  color;

constexpr void __set_color(::UnityEngine::Color32 value) ;

constexpr ::UnityEngine::Color32 __get_color() const;

 ::UnityEngine::Color32 __declspec(property(get=__get_lightmapColor, put=__set_lightmapColor))  lightmapColor;

constexpr void __set_lightmapColor(::UnityEngine::Color32 value) ;

constexpr ::UnityEngine::Color32 __get_lightmapColor() const;

 int32_t __declspec(property(get=__get_prototypeIndex, put=__set_prototypeIndex))  prototypeIndex;

constexpr void __set_prototypeIndex(int32_t value) ;

constexpr int32_t __get_prototypeIndex() const;

 float_t __declspec(property(get=__get_temporaryDistance, put=__set_temporaryDistance))  temporaryDistance;

constexpr void __set_temporaryDistance(float_t value) ;

constexpr float_t __get_temporaryDistance() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TreeInstance, "UnityEngine", "TreeInstance");
