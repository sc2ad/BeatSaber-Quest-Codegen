#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
namespace {
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace UnityEngine::Tilemaps {
struct TileAnimationData;
}
// Type: UnityEngine.Tilemaps::TileAnimationData
namespace UnityEngine::Tilemaps {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15828))
// CS Name: UnityEngine.Tilemaps.TileAnimationData
struct CORDL_TYPE TileAnimationData : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_AnimatedSprites", ty: "::ArrayW<::UnityEngine::Sprite>", modifiers: "", def_value: None }, CppParam { name: "m_AnimationSpeed", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_AnimationStartTime", ty: "float_t", modifiers: "", def_value: None }]
constexpr TileAnimationData(::ArrayW<::UnityEngine::Sprite> m_AnimatedSprites, float_t m_AnimationSpeed, float_t m_AnimationStartTime) noexcept;


                    constexpr TileAnimationData(TileAnimationData const&) = default;
                    constexpr TileAnimationData(TileAnimationData&&) = default;
                    constexpr TileAnimationData& operator=(TileAnimationData const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TileAnimationData& operator=(TileAnimationData&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TileAnimationData(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<::UnityEngine::Sprite> __declspec(property(get=__get_m_AnimatedSprites, put=__set_m_AnimatedSprites))  m_AnimatedSprites;

constexpr void __set_m_AnimatedSprites(::ArrayW<::UnityEngine::Sprite> value) ;

constexpr ::ArrayW<::UnityEngine::Sprite> __get_m_AnimatedSprites() const;

 float_t __declspec(property(get=__get_m_AnimationSpeed, put=__set_m_AnimationSpeed))  m_AnimationSpeed;

constexpr void __set_m_AnimationSpeed(float_t value) ;

constexpr float_t __get_m_AnimationSpeed() const;

 float_t __declspec(property(get=__get_m_AnimationStartTime, put=__set_m_AnimationStartTime))  m_AnimationStartTime;

constexpr void __set_m_AnimationStartTime(float_t value) ;

constexpr float_t __get_m_AnimationStartTime() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Tilemaps
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Tilemaps::TileAnimationData, "UnityEngine.Tilemaps", "TileAnimationData");
