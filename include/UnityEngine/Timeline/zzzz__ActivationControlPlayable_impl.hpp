#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_impl.hpp"
#include "UnityEngine/Timeline/zzzz__ActivationControlPlayable_def.hpp"
#include "UnityEngine/Playables/zzzz__ScriptPlayable_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/Playables/zzzz__FrameData_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::Timeline::UnityEngine__Timeline__ActivationControlPlayable__PostPlaybackState::UnityEngine__Timeline__ActivationControlPlayable__PostPlaybackState(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::Timeline::UnityEngine__Timeline__ActivationControlPlayable__PostPlaybackState::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::Timeline::UnityEngine__Timeline__ActivationControlPlayable__PostPlaybackState::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::Timeline::UnityEngine__Timeline__ActivationControlPlayable__PostPlaybackState  UnityEngine::Timeline::UnityEngine__Timeline__ActivationControlPlayable__PostPlaybackState::Active{0};
constexpr UnityEngine::Timeline::UnityEngine__Timeline__ActivationControlPlayable__PostPlaybackState  UnityEngine::Timeline::UnityEngine__Timeline__ActivationControlPlayable__PostPlaybackState::Inactive{1};
constexpr UnityEngine::Timeline::UnityEngine__Timeline__ActivationControlPlayable__PostPlaybackState  UnityEngine::Timeline::UnityEngine__Timeline__ActivationControlPlayable__PostPlaybackState::Revert{2};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::Timeline::UnityEngine__Timeline__ActivationControlPlayable__InitialState::UnityEngine__Timeline__ActivationControlPlayable__InitialState(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::Timeline::UnityEngine__Timeline__ActivationControlPlayable__InitialState::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::Timeline::UnityEngine__Timeline__ActivationControlPlayable__InitialState::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::Timeline::UnityEngine__Timeline__ActivationControlPlayable__InitialState  UnityEngine::Timeline::UnityEngine__Timeline__ActivationControlPlayable__InitialState::Unset{0};
constexpr UnityEngine::Timeline::UnityEngine__Timeline__ActivationControlPlayable__InitialState  UnityEngine::Timeline::UnityEngine__Timeline__ActivationControlPlayable__InitialState::Active{1};
constexpr UnityEngine::Timeline::UnityEngine__Timeline__ActivationControlPlayable__InitialState  UnityEngine::Timeline::UnityEngine__Timeline__ActivationControlPlayable__InitialState::Inactive{2};
//  Writing Method size for method: UnityEngine::Timeline::ActivationControlPlayable.Create
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Playables::ScriptPlayable_1<UnityEngine::Timeline::ActivationControlPlayable> (*)(UnityEngine::Playables::PlayableGraph, UnityEngine::GameObject, UnityEngine::Timeline::UnityEngine__Timeline__ActivationControlPlayable__PostPlaybackState)>(&UnityEngine::Timeline::ActivationControlPlayable::Create)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x2acc8a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::ActivationControlPlayable>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Playables::PlayableGraph>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Timeline::UnityEngine__Timeline__ActivationControlPlayable__PostPlaybackState>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::ActivationControlPlayable.OnBehaviourPlay
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::ActivationControlPlayable::*)(UnityEngine::Playables::Playable, UnityEngine::Playables::FrameData)>(&UnityEngine::Timeline::ActivationControlPlayable::OnBehaviourPlay)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2ad19a0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::Timeline::ActivationControlPlayable),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::ActivationControlPlayable>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::ActivationControlPlayable.OnBehaviourPause
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::ActivationControlPlayable::*)(UnityEngine::Playables::Playable, UnityEngine::Playables::FrameData)>(&UnityEngine::Timeline::ActivationControlPlayable::OnBehaviourPause)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2ad1a28;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::Timeline::ActivationControlPlayable),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::ActivationControlPlayable>::get(),
                                  18
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::ActivationControlPlayable.ProcessFrame
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::ActivationControlPlayable::*)(UnityEngine::Playables::Playable, UnityEngine::Playables::FrameData, ::bs_hook::Il2CppWrapperType)>(&UnityEngine::Timeline::ActivationControlPlayable::ProcessFrame)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2ad1ad0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::Timeline::ActivationControlPlayable),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::ActivationControlPlayable>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::ActivationControlPlayable.OnGraphStart
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::ActivationControlPlayable::*)(UnityEngine::Playables::Playable)>(&UnityEngine::Timeline::ActivationControlPlayable::OnGraphStart)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2ad1b58;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::Timeline::ActivationControlPlayable),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::ActivationControlPlayable>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::ActivationControlPlayable.OnPlayableDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::ActivationControlPlayable::*)(UnityEngine::Playables::Playable)>(&UnityEngine::Timeline::ActivationControlPlayable::OnPlayableDestroy)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2ad1bec;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::Timeline::ActivationControlPlayable),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::ActivationControlPlayable>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::ActivationControlPlayable._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::ActivationControlPlayable::*)()>(&UnityEngine::Timeline::ActivationControlPlayable::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2ad1cb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::ActivationControlPlayable>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::Timeline::ActivationControlPlayable::__set_gameObject(UnityEngine::GameObject value)  {
::cordl_internals::setInstanceField<UnityEngine::GameObject, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::GameObject>(value));
}
constexpr UnityEngine::GameObject UnityEngine::Timeline::ActivationControlPlayable::__get_gameObject() const {
return ::cordl_internals::getInstanceField<UnityEngine::GameObject, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::Timeline::ActivationControlPlayable::__set_postPlayback(UnityEngine::Timeline::UnityEngine__Timeline__ActivationControlPlayable__PostPlaybackState value)  {
::cordl_internals::setInstanceField<UnityEngine::Timeline::UnityEngine__Timeline__ActivationControlPlayable__PostPlaybackState, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Timeline::UnityEngine__Timeline__ActivationControlPlayable__PostPlaybackState>(value));
}
constexpr UnityEngine::Timeline::UnityEngine__Timeline__ActivationControlPlayable__PostPlaybackState UnityEngine::Timeline::ActivationControlPlayable::__get_postPlayback() const {
return ::cordl_internals::getInstanceField<UnityEngine::Timeline::UnityEngine__Timeline__ActivationControlPlayable__PostPlaybackState, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::Timeline::ActivationControlPlayable::__set_m_InitialState(UnityEngine::Timeline::UnityEngine__Timeline__ActivationControlPlayable__InitialState value)  {
::cordl_internals::setInstanceField<UnityEngine::Timeline::UnityEngine__Timeline__ActivationControlPlayable__InitialState, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Timeline::UnityEngine__Timeline__ActivationControlPlayable__InitialState>(value));
}
constexpr UnityEngine::Timeline::UnityEngine__Timeline__ActivationControlPlayable__InitialState UnityEngine::Timeline::ActivationControlPlayable::__get_m_InitialState() const {
return ::cordl_internals::getInstanceField<UnityEngine::Timeline::UnityEngine__Timeline__ActivationControlPlayable__InitialState, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
 UnityEngine::Playables::ScriptPlayable_1<UnityEngine::Timeline::ActivationControlPlayable> UnityEngine::Timeline::ActivationControlPlayable::Create(UnityEngine::Playables::PlayableGraph graph, UnityEngine::GameObject gameObject, UnityEngine::Timeline::UnityEngine__Timeline__ActivationControlPlayable__PostPlaybackState postPlaybackState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::ActivationControlPlayable>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Playables::PlayableGraph>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Timeline::UnityEngine__Timeline__ActivationControlPlayable__PostPlaybackState>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Playables::ScriptPlayable_1<UnityEngine::Timeline::ActivationControlPlayable>, false>(nullptr, ___internal_method, graph, gameObject, postPlaybackState);
}
 void UnityEngine::Timeline::ActivationControlPlayable::OnBehaviourPlay(UnityEngine::Playables::Playable playable, UnityEngine::Playables::FrameData info)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::ActivationControlPlayable>::get(),
                            "OnBehaviourPlay",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Playables::Playable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Playables::FrameData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, playable, info);
}
 void UnityEngine::Timeline::ActivationControlPlayable::OnBehaviourPause(UnityEngine::Playables::Playable playable, UnityEngine::Playables::FrameData info)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::ActivationControlPlayable>::get(),
                            "OnBehaviourPause",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Playables::Playable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Playables::FrameData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, playable, info);
}
 void UnityEngine::Timeline::ActivationControlPlayable::ProcessFrame(UnityEngine::Playables::Playable playable, UnityEngine::Playables::FrameData info, ::bs_hook::Il2CppWrapperType userData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::ActivationControlPlayable>::get(),
                            "ProcessFrame",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Playables::Playable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Playables::FrameData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, playable, info, userData);
}
 void UnityEngine::Timeline::ActivationControlPlayable::OnGraphStart(UnityEngine::Playables::Playable playable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::ActivationControlPlayable>::get(),
                            "OnGraphStart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Playables::Playable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, playable);
}
 void UnityEngine::Timeline::ActivationControlPlayable::OnPlayableDestroy(UnityEngine::Playables::Playable playable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::ActivationControlPlayable>::get(),
                            "OnPlayableDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Playables::Playable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, playable);
}
// Ctor Parameters []
 UnityEngine::Timeline::ActivationControlPlayable::ActivationControlPlayable()  : UnityEngine::Playables::PlayableBehaviour(THROW_UNLESS(::il2cpp_utils::New<ActivationControlPlayable>())) {}
 void UnityEngine::Timeline::ActivationControlPlayable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::ActivationControlPlayable>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
