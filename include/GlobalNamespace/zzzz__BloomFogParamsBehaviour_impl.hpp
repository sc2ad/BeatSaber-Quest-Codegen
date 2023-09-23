#pragma once
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BloomFogParamsBehaviour_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "GlobalNamespace/zzzz__BloomFogEnvironmentParams_def.hpp"
#include "GlobalNamespace/zzzz__BloomFogSO_def.hpp"
#include "UnityEngine/Playables/zzzz__FrameData_def.hpp"
//  Writing Method size for method: GlobalNamespace::BloomFogParamsBehaviour.ProcessFrame
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomFogParamsBehaviour::*)(UnityEngine::Playables::Playable, UnityEngine::Playables::FrameData, ::bs_hook::Il2CppWrapperType)>(&GlobalNamespace::BloomFogParamsBehaviour::ProcessFrame)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x21b1b70;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::BloomFogParamsBehaviour),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BloomFogParamsBehaviour>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BloomFogParamsBehaviour.OnPlayableDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomFogParamsBehaviour::*)(UnityEngine::Playables::Playable)>(&GlobalNamespace::BloomFogParamsBehaviour::OnPlayableDestroy)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x21b1cc8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::BloomFogParamsBehaviour),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BloomFogParamsBehaviour>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BloomFogParamsBehaviour._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomFogParamsBehaviour::*)()>(&GlobalNamespace::BloomFogParamsBehaviour::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21b1d58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BloomFogParamsBehaviour>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::BloomFogParamsBehaviour::__set__bloomFogParams(GlobalNamespace::BloomFogEnvironmentParams value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BloomFogEnvironmentParams, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BloomFogEnvironmentParams>(value));
}
constexpr GlobalNamespace::BloomFogEnvironmentParams GlobalNamespace::BloomFogParamsBehaviour::__get__bloomFogParams() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BloomFogEnvironmentParams, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BloomFogParamsBehaviour::__set__blend(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::BloomFogParamsBehaviour::__get__blend() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BloomFogParamsBehaviour::__set__bloomFog(GlobalNamespace::BloomFogSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BloomFogSO, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BloomFogSO>(value));
}
constexpr GlobalNamespace::BloomFogSO GlobalNamespace::BloomFogParamsBehaviour::__get__bloomFog() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BloomFogSO, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BloomFogParamsBehaviour::__set__initialized(bool value)  {
::cordl_internals::setInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::BloomFogParamsBehaviour::__get__initialized() const {
return ::cordl_internals::getInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::BloomFogParamsBehaviour::ProcessFrame(UnityEngine::Playables::Playable playable, UnityEngine::Playables::FrameData info, ::bs_hook::Il2CppWrapperType playerData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BloomFogParamsBehaviour>::get(),
                            "ProcessFrame",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Playables::Playable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Playables::FrameData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, playable, info, playerData);
}
 void GlobalNamespace::BloomFogParamsBehaviour::OnPlayableDestroy(UnityEngine::Playables::Playable playable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BloomFogParamsBehaviour>::get(),
                            "OnPlayableDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Playables::Playable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, playable);
}
// Ctor Parameters []
 GlobalNamespace::BloomFogParamsBehaviour::BloomFogParamsBehaviour()  : UnityEngine::Playables::PlayableBehaviour(THROW_UNLESS(::il2cpp_utils::New<BloomFogParamsBehaviour>())) {}
 void GlobalNamespace::BloomFogParamsBehaviour::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BloomFogParamsBehaviour>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
