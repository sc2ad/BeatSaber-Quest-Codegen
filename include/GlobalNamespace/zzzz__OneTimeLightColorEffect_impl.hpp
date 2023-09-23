#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OneTimeLightColorEffect_def.hpp"
#include "GlobalNamespace/zzzz__ColorSO_def.hpp"
#include "GlobalNamespace/zzzz__LightWithIdManager_def.hpp"
//  Writing Method size for method: GlobalNamespace::OneTimeLightColorEffect.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OneTimeLightColorEffect::*)()>(&GlobalNamespace::OneTimeLightColorEffect::Update)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2252eb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OneTimeLightColorEffect>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OneTimeLightColorEffect._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OneTimeLightColorEffect::*)()>(&GlobalNamespace::OneTimeLightColorEffect::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2252f14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OneTimeLightColorEffect>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::OneTimeLightColorEffect::__set__color(GlobalNamespace::ColorSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::ColorSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::ColorSO>(value));
}
constexpr GlobalNamespace::ColorSO GlobalNamespace::OneTimeLightColorEffect::__get__color() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::ColorSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OneTimeLightColorEffect::__set__alpha(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::OneTimeLightColorEffect::__get__alpha() const {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OneTimeLightColorEffect::__set__lightsId(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::OneTimeLightColorEffect::__get__lightsId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OneTimeLightColorEffect::__set__lightWithIdManager(GlobalNamespace::LightWithIdManager value)  {
::cordl_internals::setInstanceField<GlobalNamespace::LightWithIdManager, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::LightWithIdManager>(value));
}
constexpr GlobalNamespace::LightWithIdManager GlobalNamespace::OneTimeLightColorEffect::__get__lightWithIdManager() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::LightWithIdManager, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::OneTimeLightColorEffect::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OneTimeLightColorEffect>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::OneTimeLightColorEffect::OneTimeLightColorEffect()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<OneTimeLightColorEffect>())) {}
 void GlobalNamespace::OneTimeLightColorEffect::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OneTimeLightColorEffect>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
