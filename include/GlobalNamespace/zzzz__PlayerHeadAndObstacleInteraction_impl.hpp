#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__PlayerHeadAndObstacleInteraction_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectManager_def.hpp"
#include "GlobalNamespace/zzzz__PlayerTransforms_def.hpp"
#include "GlobalNamespace/zzzz__ObstacleController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlayerHeadAndObstacleInteraction.add_headDidEnterObstaclesEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerHeadAndObstacleInteraction::*)(::System::Action)>(&::GlobalNamespace::PlayerHeadAndObstacleInteraction::add_headDidEnterObstaclesEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2108388;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerHeadAndObstacleInteraction>::get(),
                            "add_headDidEnterObstaclesEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerHeadAndObstacleInteraction.remove_headDidEnterObstaclesEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerHeadAndObstacleInteraction::*)(::System::Action)>(&::GlobalNamespace::PlayerHeadAndObstacleInteraction::remove_headDidEnterObstaclesEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2108424;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerHeadAndObstacleInteraction>::get(),
                            "remove_headDidEnterObstaclesEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerHeadAndObstacleInteraction.add_headDidEnterObstacleEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerHeadAndObstacleInteraction::*)(::System::Action_1<::GlobalNamespace::ObstacleController>)>(&::GlobalNamespace::PlayerHeadAndObstacleInteraction::add_headDidEnterObstacleEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x21084c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerHeadAndObstacleInteraction>::get(),
                            "add_headDidEnterObstacleEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::ObstacleController>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerHeadAndObstacleInteraction.remove_headDidEnterObstacleEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerHeadAndObstacleInteraction::*)(::System::Action_1<::GlobalNamespace::ObstacleController>)>(&::GlobalNamespace::PlayerHeadAndObstacleInteraction::remove_headDidEnterObstacleEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2108570;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerHeadAndObstacleInteraction>::get(),
                            "remove_headDidEnterObstacleEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::ObstacleController>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerHeadAndObstacleInteraction.get_playerHeadIsInObstacle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::PlayerHeadAndObstacleInteraction::*)()>(&::GlobalNamespace::PlayerHeadAndObstacleInteraction::get_playerHeadIsInObstacle)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2107a94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerHeadAndObstacleInteraction>::get(),
                            "get_playerHeadIsInObstacle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerHeadAndObstacleInteraction.RefreshIntersectingObstacles
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerHeadAndObstacleInteraction::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::PlayerHeadAndObstacleInteraction::RefreshIntersectingObstacles)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x2108620;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerHeadAndObstacleInteraction>::get(),
                            "RefreshIntersectingObstacles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerHeadAndObstacleInteraction.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerHeadAndObstacleInteraction::*)()>(&::GlobalNamespace::PlayerHeadAndObstacleInteraction::Update)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2108920;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerHeadAndObstacleInteraction>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerHeadAndObstacleInteraction._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerHeadAndObstacleInteraction::*)()>(&::GlobalNamespace::PlayerHeadAndObstacleInteraction::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x21089ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerHeadAndObstacleInteraction>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::PlayerHeadAndObstacleInteraction::__set__playerTransforms(::GlobalNamespace::PlayerTransforms value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PlayerTransforms, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::PlayerTransforms>(value));
}
constexpr ::GlobalNamespace::PlayerTransforms ::GlobalNamespace::PlayerHeadAndObstacleInteraction::__get__playerTransforms() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlayerTransforms, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::PlayerHeadAndObstacleInteraction::__set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapObjectManager, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::BeatmapObjectManager>(value));
}
constexpr ::GlobalNamespace::BeatmapObjectManager ::GlobalNamespace::PlayerHeadAndObstacleInteraction::__get__beatmapObjectManager() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapObjectManager, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::PlayerHeadAndObstacleInteraction::__set_headDidEnterObstaclesEvent(::System::Action value)  {
::cordl_internals::setInstanceField<::System::Action, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Action>(value));
}
constexpr ::System::Action ::GlobalNamespace::PlayerHeadAndObstacleInteraction::__get_headDidEnterObstaclesEvent() const {
return ::cordl_internals::getInstanceField<::System::Action, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::PlayerHeadAndObstacleInteraction::__set_headDidEnterObstacleEvent(::System::Action_1<::GlobalNamespace::ObstacleController> value)  {
::cordl_internals::setInstanceField<::System::Action_1<::GlobalNamespace::ObstacleController>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Action_1<::GlobalNamespace::ObstacleController>>(value));
}
constexpr ::System::Action_1<::GlobalNamespace::ObstacleController> ::GlobalNamespace::PlayerHeadAndObstacleInteraction::__get_headDidEnterObstacleEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::GlobalNamespace::ObstacleController>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::PlayerHeadAndObstacleInteraction::__set__lastFrameNumCheck(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::PlayerHeadAndObstacleInteraction::__get__lastFrameNumCheck() const {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::PlayerHeadAndObstacleInteraction::__set__intersectingObstacles(::System::Collections::Generic::HashSet_1<::GlobalNamespace::ObstacleController> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::HashSet_1<::GlobalNamespace::ObstacleController>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::HashSet_1<::GlobalNamespace::ObstacleController>>(value));
}
constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::ObstacleController> ::GlobalNamespace::PlayerHeadAndObstacleInteraction::__get__intersectingObstacles() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::HashSet_1<::GlobalNamespace::ObstacleController>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::PlayerHeadAndObstacleInteraction::__set__prevFrameNumberOfIntersectingObstaclesCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::PlayerHeadAndObstacleInteraction::__get__prevFrameNumberOfIntersectingObstaclesCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::GlobalNamespace::PlayerHeadAndObstacleInteraction::add_headDidEnterObstaclesEvent(::System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerHeadAndObstacleInteraction>::get(),
                            "add_headDidEnterObstaclesEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::GlobalNamespace::PlayerHeadAndObstacleInteraction::remove_headDidEnterObstaclesEvent(::System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerHeadAndObstacleInteraction>::get(),
                            "remove_headDidEnterObstaclesEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::GlobalNamespace::PlayerHeadAndObstacleInteraction::add_headDidEnterObstacleEvent(::System::Action_1<::GlobalNamespace::ObstacleController> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerHeadAndObstacleInteraction>::get(),
                            "add_headDidEnterObstacleEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::ObstacleController>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::GlobalNamespace::PlayerHeadAndObstacleInteraction::remove_headDidEnterObstacleEvent(::System::Action_1<::GlobalNamespace::ObstacleController> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerHeadAndObstacleInteraction>::get(),
                            "remove_headDidEnterObstacleEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::ObstacleController>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::GlobalNamespace::PlayerHeadAndObstacleInteraction::get_playerHeadIsInObstacle()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerHeadAndObstacleInteraction>::get(),
                            "get_playerHeadIsInObstacle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::PlayerHeadAndObstacleInteraction::RefreshIntersectingObstacles(::UnityEngine::Vector3 worldPos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerHeadAndObstacleInteraction>::get(),
                            "RefreshIntersectingObstacles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, worldPos);
}
 void ::GlobalNamespace::PlayerHeadAndObstacleInteraction::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerHeadAndObstacleInteraction>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::GlobalNamespace::PlayerHeadAndObstacleInteraction::PlayerHeadAndObstacleInteraction()  : ::UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<PlayerHeadAndObstacleInteraction>())) {}
 void ::GlobalNamespace::PlayerHeadAndObstacleInteraction::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerHeadAndObstacleInteraction>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
