#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__BeatmapObjectSpawnMovementData_def.hpp"
#include "GlobalNamespace/zzzz__NoteLineLayer_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "GlobalNamespace/zzzz__IJumpOffsetYProvider_def.hpp"
#include "GlobalNamespace/zzzz__ObstacleData_def.hpp"
#include "GlobalNamespace/zzzz__NoteData_def.hpp"
#include "GlobalNamespace/zzzz__SliderData_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__ObstacleSpawnData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__ObstacleSpawnData::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, float_t, float_t, float_t)>(&::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__ObstacleSpawnData::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2236e30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__ObstacleSpawnData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "moveStartPos", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "moveEndPos", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "jumpEndPos", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "obstacleHeight", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "moveDuration", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "jumpDuration", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "noteLinesDistance", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__ObstacleSpawnData::____GlobalNamespace__BeatmapObjectSpawnMovementData__ObstacleSpawnData(::UnityEngine::Vector3 moveStartPos, ::UnityEngine::Vector3 moveEndPos, ::UnityEngine::Vector3 jumpEndPos, float_t obstacleHeight, float_t moveDuration, float_t jumpDuration, float_t noteLinesDistance) noexcept : ::bs_hook::ValueTypeWrapper() {this->moveStartPos = moveStartPos;
this->moveEndPos = moveEndPos;
this->jumpEndPos = jumpEndPos;
this->obstacleHeight = obstacleHeight;
this->moveDuration = moveDuration;
this->jumpDuration = jumpDuration;
this->noteLinesDistance = noteLinesDistance;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__ObstacleSpawnData::__set_moveStartPos(::UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x0>(this->__instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3 ::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__ObstacleSpawnData::__get_moveStartPos() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x0>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__ObstacleSpawnData::__set_moveEndPos(::UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0xc>(this->__instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3 ::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__ObstacleSpawnData::__get_moveEndPos() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0xc>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__ObstacleSpawnData::__set_jumpEndPos(::UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x18>(this->__instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3 ::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__ObstacleSpawnData::__get_jumpEndPos() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x18>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__ObstacleSpawnData::__set_obstacleHeight(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x24>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__ObstacleSpawnData::__get_obstacleHeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x24>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__ObstacleSpawnData::__set_moveDuration(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x28>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__ObstacleSpawnData::__get_moveDuration() const {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__ObstacleSpawnData::__set_jumpDuration(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x2c>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__ObstacleSpawnData::__get_jumpDuration() const {
return ::cordl_internals::getInstanceField<float_t, 0x2c>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__ObstacleSpawnData::__set_noteLinesDistance(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x30>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__ObstacleSpawnData::__get_noteLinesDistance() const {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this->__instance);
}
 void ::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__ObstacleSpawnData::_ctor(::UnityEngine::Vector3 moveStartPos, ::UnityEngine::Vector3 moveEndPos, ::UnityEngine::Vector3 jumpEndPos, float_t obstacleHeight, float_t moveDuration, float_t jumpDuration, float_t noteLinesDistance)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__ObstacleSpawnData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, moveStartPos, moveEndPos, jumpEndPos, obstacleHeight, moveDuration, jumpDuration, noteLinesDistance);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__NoteSpawnData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__NoteSpawnData::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, float_t, float_t)>(&::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__NoteSpawnData::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2236f2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__NoteSpawnData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "moveStartPos", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "moveEndPos", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "jumpEndPos", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "jumpGravity", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "moveDuration", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "jumpDuration", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__NoteSpawnData::____GlobalNamespace__BeatmapObjectSpawnMovementData__NoteSpawnData(::UnityEngine::Vector3 moveStartPos, ::UnityEngine::Vector3 moveEndPos, ::UnityEngine::Vector3 jumpEndPos, float_t jumpGravity, float_t moveDuration, float_t jumpDuration) noexcept : ::bs_hook::ValueTypeWrapper() {this->moveStartPos = moveStartPos;
this->moveEndPos = moveEndPos;
this->jumpEndPos = jumpEndPos;
this->jumpGravity = jumpGravity;
this->moveDuration = moveDuration;
this->jumpDuration = jumpDuration;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__NoteSpawnData::__set_moveStartPos(::UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x0>(this->__instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3 ::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__NoteSpawnData::__get_moveStartPos() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x0>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__NoteSpawnData::__set_moveEndPos(::UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0xc>(this->__instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3 ::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__NoteSpawnData::__get_moveEndPos() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0xc>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__NoteSpawnData::__set_jumpEndPos(::UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x18>(this->__instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3 ::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__NoteSpawnData::__get_jumpEndPos() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x18>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__NoteSpawnData::__set_jumpGravity(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x24>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__NoteSpawnData::__get_jumpGravity() const {
return ::cordl_internals::getInstanceField<float_t, 0x24>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__NoteSpawnData::__set_moveDuration(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x28>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__NoteSpawnData::__get_moveDuration() const {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__NoteSpawnData::__set_jumpDuration(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x2c>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__NoteSpawnData::__get_jumpDuration() const {
return ::cordl_internals::getInstanceField<float_t, 0x2c>(this->__instance);
}
 void ::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__NoteSpawnData::_ctor(::UnityEngine::Vector3 moveStartPos, ::UnityEngine::Vector3 moveEndPos, ::UnityEngine::Vector3 jumpEndPos, float_t jumpGravity, float_t moveDuration, float_t jumpDuration)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__NoteSpawnData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, moveStartPos, moveEndPos, jumpEndPos, jumpGravity, moveDuration, jumpDuration);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__SliderSpawnData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__SliderSpawnData::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, float_t, float_t)>(&::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__SliderSpawnData::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2236f5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__SliderSpawnData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "headMoveStartPos", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "headJumpStartPos", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "headJumpEndPos", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "headJumpGravity", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "tailMoveStartPos", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "tailJumpStartPos", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "tailJumpEndPos", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "tailJumpGravity", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "moveDuration", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "jumpDuration", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__SliderSpawnData::____GlobalNamespace__BeatmapObjectSpawnMovementData__SliderSpawnData(::UnityEngine::Vector3 headMoveStartPos, ::UnityEngine::Vector3 headJumpStartPos, ::UnityEngine::Vector3 headJumpEndPos, float_t headJumpGravity, ::UnityEngine::Vector3 tailMoveStartPos, ::UnityEngine::Vector3 tailJumpStartPos, ::UnityEngine::Vector3 tailJumpEndPos, float_t tailJumpGravity, float_t moveDuration, float_t jumpDuration) noexcept : ::bs_hook::ValueTypeWrapper() {this->headMoveStartPos = headMoveStartPos;
this->headJumpStartPos = headJumpStartPos;
this->headJumpEndPos = headJumpEndPos;
this->headJumpGravity = headJumpGravity;
this->tailMoveStartPos = tailMoveStartPos;
this->tailJumpStartPos = tailJumpStartPos;
this->tailJumpEndPos = tailJumpEndPos;
this->tailJumpGravity = tailJumpGravity;
this->moveDuration = moveDuration;
this->jumpDuration = jumpDuration;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__SliderSpawnData::__set_headMoveStartPos(::UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x0>(this->__instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3 ::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__SliderSpawnData::__get_headMoveStartPos() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x0>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__SliderSpawnData::__set_headJumpStartPos(::UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0xc>(this->__instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3 ::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__SliderSpawnData::__get_headJumpStartPos() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0xc>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__SliderSpawnData::__set_headJumpEndPos(::UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x18>(this->__instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3 ::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__SliderSpawnData::__get_headJumpEndPos() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x18>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__SliderSpawnData::__set_headJumpGravity(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x24>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__SliderSpawnData::__get_headJumpGravity() const {
return ::cordl_internals::getInstanceField<float_t, 0x24>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__SliderSpawnData::__set_tailMoveStartPos(::UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x28>(this->__instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3 ::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__SliderSpawnData::__get_tailMoveStartPos() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x28>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__SliderSpawnData::__set_tailJumpStartPos(::UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x34>(this->__instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3 ::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__SliderSpawnData::__get_tailJumpStartPos() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x34>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__SliderSpawnData::__set_tailJumpEndPos(::UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x40>(this->__instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3 ::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__SliderSpawnData::__get_tailJumpEndPos() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x40>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__SliderSpawnData::__set_tailJumpGravity(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x4c>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__SliderSpawnData::__get_tailJumpGravity() const {
return ::cordl_internals::getInstanceField<float_t, 0x4c>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__SliderSpawnData::__set_moveDuration(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x50>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__SliderSpawnData::__get_moveDuration() const {
return ::cordl_internals::getInstanceField<float_t, 0x50>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__SliderSpawnData::__set_jumpDuration(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x54>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__SliderSpawnData::__get_jumpDuration() const {
return ::cordl_internals::getInstanceField<float_t, 0x54>(this->__instance);
}
 void ::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__SliderSpawnData::_ctor(::UnityEngine::Vector3 headMoveStartPos, ::UnityEngine::Vector3 headJumpStartPos, ::UnityEngine::Vector3 headJumpEndPos, float_t headJumpGravity, ::UnityEngine::Vector3 tailMoveStartPos, ::UnityEngine::Vector3 tailJumpStartPos, ::UnityEngine::Vector3 tailJumpEndPos, float_t tailJumpGravity, float_t moveDuration, float_t jumpDuration)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__SliderSpawnData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, headMoveStartPos, headJumpStartPos, headJumpEndPos, headJumpGravity, tailMoveStartPos, tailJumpStartPos, tailJumpEndPos, tailJumpGravity, moveDuration, jumpDuration);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__NoteJumpValueType::____GlobalNamespace__BeatmapObjectSpawnMovementData__NoteJumpValueType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__NoteJumpValueType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__NoteJumpValueType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__NoteJumpValueType  ::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__NoteJumpValueType::BeatOffset{1};
constexpr ::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__NoteJumpValueType  ::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__NoteJumpValueType::JumpDuration{2};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnMovementData.get_spawnAheadTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::BeatmapObjectSpawnMovementData::*)()>(&::GlobalNamespace::BeatmapObjectSpawnMovementData::get_spawnAheadTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2236d6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnMovementData>::get(),
                            "get_spawnAheadTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnMovementData.get_moveDuration
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::BeatmapObjectSpawnMovementData::*)()>(&::GlobalNamespace::BeatmapObjectSpawnMovementData::get_moveDuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2236d74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnMovementData>::get(),
                            "get_moveDuration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnMovementData.get_jumpDuration
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::BeatmapObjectSpawnMovementData::*)()>(&::GlobalNamespace::BeatmapObjectSpawnMovementData::get_jumpDuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2236d7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnMovementData>::get(),
                            "get_jumpDuration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnMovementData.get_noteLinesDistance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::BeatmapObjectSpawnMovementData::*)()>(&::GlobalNamespace::BeatmapObjectSpawnMovementData::get_noteLinesDistance)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2235d94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnMovementData>::get(),
                            "get_noteLinesDistance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnMovementData.get_verticalLayersDistance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::BeatmapObjectSpawnMovementData::*)()>(&::GlobalNamespace::BeatmapObjectSpawnMovementData::get_verticalLayersDistance)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2235d4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnMovementData>::get(),
                            "get_verticalLayersDistance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnMovementData.get_jumpDistance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::BeatmapObjectSpawnMovementData::*)()>(&::GlobalNamespace::BeatmapObjectSpawnMovementData::get_jumpDistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2236d84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnMovementData>::get(),
                            "get_jumpDistance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnMovementData.get_noteJumpMovementSpeed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::BeatmapObjectSpawnMovementData::*)()>(&::GlobalNamespace::BeatmapObjectSpawnMovementData::get_noteJumpMovementSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2236d8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnMovementData>::get(),
                            "get_noteJumpMovementSpeed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnMovementData.get_noteLinesCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::BeatmapObjectSpawnMovementData::*)()>(&::GlobalNamespace::BeatmapObjectSpawnMovementData::get_noteLinesCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2236d94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnMovementData>::get(),
                            "get_noteLinesCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnMovementData.get_centerPos
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::BeatmapObjectSpawnMovementData::*)()>(&::GlobalNamespace::BeatmapObjectSpawnMovementData::get_centerPos)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2236d9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnMovementData>::get(),
                            "get_centerPos",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnMovementData.get_jumpOffsetY
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::BeatmapObjectSpawnMovementData::*)()>(&::GlobalNamespace::BeatmapObjectSpawnMovementData::get_jumpOffsetY)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2235c38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnMovementData>::get(),
                            "get_jumpOffsetY",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnMovementData.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapObjectSpawnMovementData::*)(int32_t, float_t, float_t, ::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__NoteJumpValueType, float_t, ::GlobalNamespace::IJumpOffsetYProvider, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GlobalNamespace::BeatmapObjectSpawnMovementData::Init)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x223626c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnMovementData>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__NoteJumpValueType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IJumpOffsetYProvider>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnMovementData.GetObstacleSpawnData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__ObstacleSpawnData (::GlobalNamespace::BeatmapObjectSpawnMovementData::*)(::GlobalNamespace::ObstacleData)>(&::GlobalNamespace::BeatmapObjectSpawnMovementData::GetObstacleSpawnData)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x2236524;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnMovementData>::get(),
                            "GetObstacleSpawnData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ObstacleData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnMovementData.GetJumpingNoteSpawnData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__NoteSpawnData (::GlobalNamespace::BeatmapObjectSpawnMovementData::*)(::GlobalNamespace::NoteData)>(&::GlobalNamespace::BeatmapObjectSpawnMovementData::GetJumpingNoteSpawnData)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x223679c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnMovementData>::get(),
                            "GetJumpingNoteSpawnData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnMovementData.GetSliderSpawnData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__SliderSpawnData (::GlobalNamespace::BeatmapObjectSpawnMovementData::*)(::GlobalNamespace::SliderData)>(&::GlobalNamespace::BeatmapObjectSpawnMovementData::GetSliderSpawnData)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x22369ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnMovementData>::get(),
                            "GetSliderSpawnData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SliderData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnMovementData.GetNoteOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::BeatmapObjectSpawnMovementData::*)(int32_t, ::GlobalNamespace::NoteLineLayer)>(&::GlobalNamespace::BeatmapObjectSpawnMovementData::GetNoteOffset)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2236e68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnMovementData>::get(),
                            "GetNoteOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnMovementData.GetObstacleOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::BeatmapObjectSpawnMovementData::*)(int32_t, ::GlobalNamespace::NoteLineLayer)>(&::GlobalNamespace::BeatmapObjectSpawnMovementData::GetObstacleOffset)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2236da8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnMovementData>::get(),
                            "GetObstacleOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnMovementData.Get2DNoteOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::GlobalNamespace::BeatmapObjectSpawnMovementData::*)(int32_t, ::GlobalNamespace::NoteLineLayer)>(&::GlobalNamespace::BeatmapObjectSpawnMovementData::Get2DNoteOffset)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2236b80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnMovementData>::get(),
                            "Get2DNoteOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnMovementData.JumpPosYForLineLayerAtDistanceFromPlayerWithoutJumpOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::BeatmapObjectSpawnMovementData::*)(::GlobalNamespace::NoteLineLayer, float_t)>(&::GlobalNamespace::BeatmapObjectSpawnMovementData::JumpPosYForLineLayerAtDistanceFromPlayerWithoutJumpOffset)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2236bac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnMovementData>::get(),
                            "JumpPosYForLineLayerAtDistanceFromPlayerWithoutJumpOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnMovementData.HighestJumpPosYForLineLayer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::BeatmapObjectSpawnMovementData::*)(::GlobalNamespace::NoteLineLayer)>(&::GlobalNamespace::BeatmapObjectSpawnMovementData::HighestJumpPosYForLineLayer)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x2237024;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnMovementData>::get(),
                            "HighestJumpPosYForLineLayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnMovementData.HighestJumpPosYForLineLayerWithoutJumpOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::BeatmapObjectSpawnMovementData::*)(::GlobalNamespace::NoteLineLayer)>(&::GlobalNamespace::BeatmapObjectSpawnMovementData::HighestJumpPosYForLineLayerWithoutJumpOffset)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2237168;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnMovementData>::get(),
                            "HighestJumpPosYForLineLayerWithoutJumpOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnMovementData.NoteJumpGravityForLineLayer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::BeatmapObjectSpawnMovementData::*)(::GlobalNamespace::NoteLineLayer, ::GlobalNamespace::NoteLineLayer)>(&::GlobalNamespace::BeatmapObjectSpawnMovementData::NoteJumpGravityForLineLayer)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2236ee0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnMovementData>::get(),
                            "NoteJumpGravityForLineLayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnMovementData.NoteJumpGravityForLineLayerWithoutJumpOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::BeatmapObjectSpawnMovementData::*)(::GlobalNamespace::NoteLineLayer, ::GlobalNamespace::NoteLineLayer)>(&::GlobalNamespace::BeatmapObjectSpawnMovementData::NoteJumpGravityForLineLayerWithoutJumpOffset)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2236fc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnMovementData>::get(),
                            "NoteJumpGravityForLineLayerWithoutJumpOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnMovementData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapObjectSpawnMovementData::*)()>(&::GlobalNamespace::BeatmapObjectSpawnMovementData::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2236cac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnMovementData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::BeatmapObjectSpawnMovementData::__set__centerPos(::UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3 ::GlobalNamespace::BeatmapObjectSpawnMovementData::__get__centerPos() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatmapObjectSpawnMovementData::__set__maxHalfJumpDistance(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::BeatmapObjectSpawnMovementData::__get__maxHalfJumpDistance() const {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatmapObjectSpawnMovementData::__set__startHalfJumpDurationInBeats(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::BeatmapObjectSpawnMovementData::__get__startHalfJumpDurationInBeats() const {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatmapObjectSpawnMovementData::__set__baseLinesHighestJumpPosY(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::BeatmapObjectSpawnMovementData::__get__baseLinesHighestJumpPosY() const {
return ::cordl_internals::getInstanceField<float_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatmapObjectSpawnMovementData::__set__upperLinesHighestJumpPosY(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::BeatmapObjectSpawnMovementData::__get__upperLinesHighestJumpPosY() const {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatmapObjectSpawnMovementData::__set__topLinesHighestJumpPosY(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::BeatmapObjectSpawnMovementData::__get__topLinesHighestJumpPosY() const {
return ::cordl_internals::getInstanceField<float_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatmapObjectSpawnMovementData::__set__moveSpeed(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::BeatmapObjectSpawnMovementData::__get__moveSpeed() const {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatmapObjectSpawnMovementData::__set__moveDuration(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x34>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::BeatmapObjectSpawnMovementData::__get__moveDuration() const {
return ::cordl_internals::getInstanceField<float_t, 0x34>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatmapObjectSpawnMovementData::__set__verticalObstaclePosY(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::BeatmapObjectSpawnMovementData::__get__verticalObstaclePosY() const {
return ::cordl_internals::getInstanceField<float_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatmapObjectSpawnMovementData::__set__obstacleTopPosY(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::BeatmapObjectSpawnMovementData::__get__obstacleTopPosY() const {
return ::cordl_internals::getInstanceField<float_t, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatmapObjectSpawnMovementData::__set__spawnAheadTime(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::BeatmapObjectSpawnMovementData::__get__spawnAheadTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatmapObjectSpawnMovementData::__set__jumpDuration(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x44>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::BeatmapObjectSpawnMovementData::__get__jumpDuration() const {
return ::cordl_internals::getInstanceField<float_t, 0x44>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatmapObjectSpawnMovementData::__set__noteJumpStartBeatOffset(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::BeatmapObjectSpawnMovementData::__get__noteJumpStartBeatOffset() const {
return ::cordl_internals::getInstanceField<float_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatmapObjectSpawnMovementData::__set__noteJumpMovementSpeed(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x4c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::BeatmapObjectSpawnMovementData::__get__noteJumpMovementSpeed() const {
return ::cordl_internals::getInstanceField<float_t, 0x4c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatmapObjectSpawnMovementData::__set__jumpDistance(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::BeatmapObjectSpawnMovementData::__get__jumpDistance() const {
return ::cordl_internals::getInstanceField<float_t, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatmapObjectSpawnMovementData::__set__moveDistance(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x54>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::BeatmapObjectSpawnMovementData::__get__moveDistance() const {
return ::cordl_internals::getInstanceField<float_t, 0x54>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatmapObjectSpawnMovementData::__set__moveStartPos(::UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3 ::GlobalNamespace::BeatmapObjectSpawnMovementData::__get__moveStartPos() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatmapObjectSpawnMovementData::__set__moveEndPos(::UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x64>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3 ::GlobalNamespace::BeatmapObjectSpawnMovementData::__get__moveEndPos() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x64>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatmapObjectSpawnMovementData::__set__jumpEndPos(::UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3 ::GlobalNamespace::BeatmapObjectSpawnMovementData::__get__jumpEndPos() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatmapObjectSpawnMovementData::__set__noteLinesCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x7c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::BeatmapObjectSpawnMovementData::__get__noteLinesCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x7c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatmapObjectSpawnMovementData::__set__jumpOffsetYProvider(::GlobalNamespace::IJumpOffsetYProvider value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IJumpOffsetYProvider, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::IJumpOffsetYProvider>(value));
}
constexpr ::GlobalNamespace::IJumpOffsetYProvider ::GlobalNamespace::BeatmapObjectSpawnMovementData::__get__jumpOffsetYProvider() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IJumpOffsetYProvider, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatmapObjectSpawnMovementData::__set__rightVec(::UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3 ::GlobalNamespace::BeatmapObjectSpawnMovementData::__get__rightVec() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatmapObjectSpawnMovementData::__set__forwardVec(::UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x94>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3 ::GlobalNamespace::BeatmapObjectSpawnMovementData::__get__forwardVec() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x94>(this->::bs_hook::Il2CppWrapperType::instance);
}
 float_t ::GlobalNamespace::BeatmapObjectSpawnMovementData::get_spawnAheadTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnMovementData>::get(),
                            "get_spawnAheadTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t ::GlobalNamespace::BeatmapObjectSpawnMovementData::get_moveDuration()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnMovementData>::get(),
                            "get_moveDuration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t ::GlobalNamespace::BeatmapObjectSpawnMovementData::get_jumpDuration()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnMovementData>::get(),
                            "get_jumpDuration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t ::GlobalNamespace::BeatmapObjectSpawnMovementData::get_noteLinesDistance()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnMovementData>::get(),
                            "get_noteLinesDistance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t ::GlobalNamespace::BeatmapObjectSpawnMovementData::get_verticalLayersDistance()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnMovementData>::get(),
                            "get_verticalLayersDistance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t ::GlobalNamespace::BeatmapObjectSpawnMovementData::get_jumpDistance()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnMovementData>::get(),
                            "get_jumpDistance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t ::GlobalNamespace::BeatmapObjectSpawnMovementData::get_noteJumpMovementSpeed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnMovementData>::get(),
                            "get_noteJumpMovementSpeed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::GlobalNamespace::BeatmapObjectSpawnMovementData::get_noteLinesCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnMovementData>::get(),
                            "get_noteLinesCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::Vector3 ::GlobalNamespace::BeatmapObjectSpawnMovementData::get_centerPos()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnMovementData>::get(),
                            "get_centerPos",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t ::GlobalNamespace::BeatmapObjectSpawnMovementData::get_jumpOffsetY()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnMovementData>::get(),
                            "get_jumpOffsetY",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::BeatmapObjectSpawnMovementData::Init(int32_t noteLinesCount, float_t startNoteJumpMovementSpeed, float_t startBpm, ::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__NoteJumpValueType noteJumpValueType, float_t noteJumpValue, ::GlobalNamespace::IJumpOffsetYProvider jumpOffsetYProvider, ::UnityEngine::Vector3 rightVec, ::UnityEngine::Vector3 forwardVec)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnMovementData>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__NoteJumpValueType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IJumpOffsetYProvider>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, noteLinesCount, startNoteJumpMovementSpeed, startBpm, noteJumpValueType, noteJumpValue, jumpOffsetYProvider, rightVec, forwardVec);
}
 ::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__ObstacleSpawnData ::GlobalNamespace::BeatmapObjectSpawnMovementData::GetObstacleSpawnData(::GlobalNamespace::ObstacleData obstacleData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnMovementData>::get(),
                            "GetObstacleSpawnData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ObstacleData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__ObstacleSpawnData, false>(const_cast<void*>(instance), ___internal_method, obstacleData);
}
 ::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__NoteSpawnData ::GlobalNamespace::BeatmapObjectSpawnMovementData::GetJumpingNoteSpawnData(::GlobalNamespace::NoteData noteData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnMovementData>::get(),
                            "GetJumpingNoteSpawnData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__NoteSpawnData, false>(const_cast<void*>(instance), ___internal_method, noteData);
}
 ::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__SliderSpawnData ::GlobalNamespace::BeatmapObjectSpawnMovementData::GetSliderSpawnData(::GlobalNamespace::SliderData sliderData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnMovementData>::get(),
                            "GetSliderSpawnData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SliderData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__SliderSpawnData, false>(const_cast<void*>(instance), ___internal_method, sliderData);
}
 ::UnityEngine::Vector3 ::GlobalNamespace::BeatmapObjectSpawnMovementData::GetNoteOffset(int32_t noteLineIndex, ::GlobalNamespace::NoteLineLayer noteLineLayer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnMovementData>::get(),
                            "GetNoteOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(const_cast<void*>(instance), ___internal_method, noteLineIndex, noteLineLayer);
}
 ::UnityEngine::Vector3 ::GlobalNamespace::BeatmapObjectSpawnMovementData::GetObstacleOffset(int32_t noteLineIndex, ::GlobalNamespace::NoteLineLayer noteLineLayer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnMovementData>::get(),
                            "GetObstacleOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(const_cast<void*>(instance), ___internal_method, noteLineIndex, noteLineLayer);
}
 ::UnityEngine::Vector2 ::GlobalNamespace::BeatmapObjectSpawnMovementData::Get2DNoteOffset(int32_t noteLineIndex, ::GlobalNamespace::NoteLineLayer noteLineLayer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnMovementData>::get(),
                            "Get2DNoteOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(const_cast<void*>(instance), ___internal_method, noteLineIndex, noteLineLayer);
}
 float_t ::GlobalNamespace::BeatmapObjectSpawnMovementData::JumpPosYForLineLayerAtDistanceFromPlayerWithoutJumpOffset(::GlobalNamespace::NoteLineLayer lineLayer, float_t distanceFromPlayer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnMovementData>::get(),
                            "JumpPosYForLineLayerAtDistanceFromPlayerWithoutJumpOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method, lineLayer, distanceFromPlayer);
}
 float_t ::GlobalNamespace::BeatmapObjectSpawnMovementData::HighestJumpPosYForLineLayer(::GlobalNamespace::NoteLineLayer lineLayer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnMovementData>::get(),
                            "HighestJumpPosYForLineLayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method, lineLayer);
}
 float_t ::GlobalNamespace::BeatmapObjectSpawnMovementData::HighestJumpPosYForLineLayerWithoutJumpOffset(::GlobalNamespace::NoteLineLayer lineLayer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnMovementData>::get(),
                            "HighestJumpPosYForLineLayerWithoutJumpOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method, lineLayer);
}
 float_t ::GlobalNamespace::BeatmapObjectSpawnMovementData::NoteJumpGravityForLineLayer(::GlobalNamespace::NoteLineLayer lineLayer, ::GlobalNamespace::NoteLineLayer beforeJumpLineLayer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnMovementData>::get(),
                            "NoteJumpGravityForLineLayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method, lineLayer, beforeJumpLineLayer);
}
 float_t ::GlobalNamespace::BeatmapObjectSpawnMovementData::NoteJumpGravityForLineLayerWithoutJumpOffset(::GlobalNamespace::NoteLineLayer lineLayer, ::GlobalNamespace::NoteLineLayer beforeJumpLineLayer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnMovementData>::get(),
                            "NoteJumpGravityForLineLayerWithoutJumpOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method, lineLayer, beforeJumpLineLayer);
}
// Ctor Parameters []
 ::GlobalNamespace::BeatmapObjectSpawnMovementData::BeatmapObjectSpawnMovementData()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<BeatmapObjectSpawnMovementData>())) {}
 void ::GlobalNamespace::BeatmapObjectSpawnMovementData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnMovementData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
