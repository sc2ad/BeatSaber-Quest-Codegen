#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__WhiteColorOrAlphaGroupEffectManager_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "GlobalNamespace/zzzz__WhiteColorOrAlphaGroupEffect_def.hpp"
#include "GlobalNamespace/zzzz__LightGroup_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: GlobalNamespace::WhiteColorOrAlphaGroupEffectManager.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::WhiteColorOrAlphaGroupEffectManager::*)()>(&GlobalNamespace::WhiteColorOrAlphaGroupEffectManager::Start)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x225e15c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::WhiteColorOrAlphaGroupEffectManager>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::WhiteColorOrAlphaGroupEffectManager.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::WhiteColorOrAlphaGroupEffectManager::*)()>(&GlobalNamespace::WhiteColorOrAlphaGroupEffectManager::OnDestroy)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x225e3dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::WhiteColorOrAlphaGroupEffectManager>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::WhiteColorOrAlphaGroupEffectManager._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::WhiteColorOrAlphaGroupEffectManager::*)()>(&GlobalNamespace::WhiteColorOrAlphaGroupEffectManager::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x225e524;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::WhiteColorOrAlphaGroupEffectManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::WhiteColorOrAlphaGroupEffectManager::__set__lightGroup(::ArrayW<GlobalNamespace::LightGroup> value)  {
::cordl_internals::setInstanceField<::ArrayW<GlobalNamespace::LightGroup>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<GlobalNamespace::LightGroup>>(value));
}
constexpr ::ArrayW<GlobalNamespace::LightGroup> GlobalNamespace::WhiteColorOrAlphaGroupEffectManager::__get__lightGroup() const {
return ::cordl_internals::getInstanceField<::ArrayW<GlobalNamespace::LightGroup>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::WhiteColorOrAlphaGroupEffectManager::__set__color(UnityEngine::Color value)  {
::cordl_internals::setInstanceField<UnityEngine::Color, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Color>(value));
}
constexpr UnityEngine::Color GlobalNamespace::WhiteColorOrAlphaGroupEffectManager::__get__color() const {
return ::cordl_internals::getInstanceField<UnityEngine::Color, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::WhiteColorOrAlphaGroupEffectManager::__set__container(Zenject::DiContainer value)  {
::cordl_internals::setInstanceField<Zenject::DiContainer, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Zenject::DiContainer>(value));
}
constexpr Zenject::DiContainer GlobalNamespace::WhiteColorOrAlphaGroupEffectManager::__get__container() const {
return ::cordl_internals::getInstanceField<Zenject::DiContainer, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::WhiteColorOrAlphaGroupEffectManager::__set__whiteColorOrAlphaEffects(System::Collections::Generic::List_1<GlobalNamespace::WhiteColorOrAlphaGroupEffect> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<GlobalNamespace::WhiteColorOrAlphaGroupEffect>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<GlobalNamespace::WhiteColorOrAlphaGroupEffect>>(value));
}
constexpr System::Collections::Generic::List_1<GlobalNamespace::WhiteColorOrAlphaGroupEffect> GlobalNamespace::WhiteColorOrAlphaGroupEffectManager::__get__whiteColorOrAlphaEffects() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<GlobalNamespace::WhiteColorOrAlphaGroupEffect>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::WhiteColorOrAlphaGroupEffectManager::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::WhiteColorOrAlphaGroupEffectManager>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::WhiteColorOrAlphaGroupEffectManager::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::WhiteColorOrAlphaGroupEffectManager>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::WhiteColorOrAlphaGroupEffectManager GlobalNamespace::WhiteColorOrAlphaGroupEffectManager::New_ctor()  {
GlobalNamespace::WhiteColorOrAlphaGroupEffectManager o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::WhiteColorOrAlphaGroupEffectManager>())};
return o;
}
 void GlobalNamespace::WhiteColorOrAlphaGroupEffectManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::WhiteColorOrAlphaGroupEffectManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
