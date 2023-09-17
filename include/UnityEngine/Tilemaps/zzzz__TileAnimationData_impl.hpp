#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "UnityEngine/Tilemaps/zzzz__TileAnimationData_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
// Ctor Parameters [CppParam { name: "m_AnimatedSprites", ty: "::ArrayW<::UnityEngine::Sprite>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "m_AnimationSpeed", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AnimationStartTime", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Tilemaps::TileAnimationData::TileAnimationData(::ArrayW<::UnityEngine::Sprite> m_AnimatedSprites, float_t m_AnimationSpeed, float_t m_AnimationStartTime) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_AnimatedSprites = m_AnimatedSprites;
this->m_AnimationSpeed = m_AnimationSpeed;
this->m_AnimationStartTime = m_AnimationStartTime;
}
constexpr void ::UnityEngine::Tilemaps::TileAnimationData::__set_m_AnimatedSprites(::ArrayW<::UnityEngine::Sprite> value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::Sprite>, 0x0>(this->__instance, std::forward<::ArrayW<::UnityEngine::Sprite>>(value));
}
constexpr ::ArrayW<::UnityEngine::Sprite> ::UnityEngine::Tilemaps::TileAnimationData::__get_m_AnimatedSprites() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Sprite>, 0x0>(this->__instance);
}
constexpr void ::UnityEngine::Tilemaps::TileAnimationData::__set_m_AnimationSpeed(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x8>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t ::UnityEngine::Tilemaps::TileAnimationData::__get_m_AnimationSpeed() const {
return ::cordl_internals::getInstanceField<float_t, 0x8>(this->__instance);
}
constexpr void ::UnityEngine::Tilemaps::TileAnimationData::__set_m_AnimationStartTime(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0xc>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t ::UnityEngine::Tilemaps::TileAnimationData::__get_m_AnimationStartTime() const {
return ::cordl_internals::getInstanceField<float_t, 0xc>(this->__instance);
}
} // end anonymous namespace
