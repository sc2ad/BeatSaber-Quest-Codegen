#pragma once
#include "UnityEngine/Playables/zzzz__PlayableAsset_impl.hpp"
#include "GlobalNamespace/zzzz__SinglePositionTween_def.hpp"
#include "UnityEngine/Timeline/zzzz__ClipCaps_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "UnityEngine/Timeline/zzzz__ITimelineClipAsset_def.hpp"
#include "UnityEngine/zzzz__ExposedReference_1_def.hpp"
#include "GlobalNamespace/zzzz__CustomTweenBehaviour_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: GlobalNamespace::SinglePositionTween.get_clipCaps
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Timeline::ClipCaps (GlobalNamespace::SinglePositionTween::*)()>(&GlobalNamespace::SinglePositionTween::get_clipCaps)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21b3034;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SinglePositionTween>::get(),
                            "get_clipCaps",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SinglePositionTween.CreatePlayable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Playables::Playable (GlobalNamespace::SinglePositionTween::*)(UnityEngine::Playables::PlayableGraph, UnityEngine::GameObject)>(&GlobalNamespace::SinglePositionTween::CreatePlayable)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x21b303c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::SinglePositionTween),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SinglePositionTween>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SinglePositionTween._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SinglePositionTween::*)()>(&GlobalNamespace::SinglePositionTween::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21b3200;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SinglePositionTween>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to UnityEngine::Timeline::ITimelineClipAsset
constexpr  GlobalNamespace::SinglePositionTween::operator UnityEngine::Timeline::ITimelineClipAsset() const noexcept {
return UnityEngine::Timeline::ITimelineClipAsset(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::SinglePositionTween::__set_transformReference(UnityEngine::ExposedReference_1<UnityEngine::Transform> value)  {
::cordl_internals::setInstanceField<UnityEngine::ExposedReference_1<UnityEngine::Transform>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::ExposedReference_1<UnityEngine::Transform>>(value));
}
constexpr UnityEngine::ExposedReference_1<UnityEngine::Transform> GlobalNamespace::SinglePositionTween::__get_transformReference() const {
return ::cordl_internals::getInstanceField<UnityEngine::ExposedReference_1<UnityEngine::Transform>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::SinglePositionTween::__set_template(GlobalNamespace::CustomTweenBehaviour value)  {
::cordl_internals::setInstanceField<GlobalNamespace::CustomTweenBehaviour, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::CustomTweenBehaviour>(value));
}
constexpr GlobalNamespace::CustomTweenBehaviour GlobalNamespace::SinglePositionTween::__get_template() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::CustomTweenBehaviour, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 UnityEngine::Timeline::ClipCaps GlobalNamespace::SinglePositionTween::get_clipCaps()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SinglePositionTween>::get(),
                            "get_clipCaps",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Timeline::ClipCaps, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::Playables::Playable GlobalNamespace::SinglePositionTween::CreatePlayable(UnityEngine::Playables::PlayableGraph graph, UnityEngine::GameObject go)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SinglePositionTween>::get(),
                            "CreatePlayable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Playables::PlayableGraph>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Playables::Playable, false>(const_cast<void*>(instance), ___internal_method, graph, go);
}
 GlobalNamespace::SinglePositionTween GlobalNamespace::SinglePositionTween::New_ctor()  {
GlobalNamespace::SinglePositionTween o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::SinglePositionTween>())};
return o;
}
 void GlobalNamespace::SinglePositionTween::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SinglePositionTween>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
