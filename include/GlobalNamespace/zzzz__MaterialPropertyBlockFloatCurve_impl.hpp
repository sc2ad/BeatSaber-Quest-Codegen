#pragma once
#include "GlobalNamespace/zzzz__MaterialPropertyBlockAnimator_impl.hpp"
#include "GlobalNamespace/zzzz__MaterialPropertyBlockFloatCurve_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
//  Writing Method size for method: GlobalNamespace::MaterialPropertyBlockFloatCurve.SetProperty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MaterialPropertyBlockFloatCurve::*)()>(&GlobalNamespace::MaterialPropertyBlockFloatCurve::SetProperty)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x1fa2638;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::MaterialPropertyBlockFloatCurve),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MaterialPropertyBlockFloatCurve>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MaterialPropertyBlockFloatCurve._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MaterialPropertyBlockFloatCurve::*)()>(&GlobalNamespace::MaterialPropertyBlockFloatCurve::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1fa26d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MaterialPropertyBlockFloatCurve>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::MaterialPropertyBlockFloatCurve::__set__curve(UnityEngine::AnimationCurve value)  {
::cordl_internals::setInstanceField<UnityEngine::AnimationCurve, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::AnimationCurve>(value));
}
constexpr UnityEngine::AnimationCurve GlobalNamespace::MaterialPropertyBlockFloatCurve::__get__curve() const {
return ::cordl_internals::getInstanceField<UnityEngine::AnimationCurve, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MaterialPropertyBlockFloatCurve::__set__valueMultiplier(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::MaterialPropertyBlockFloatCurve::__get__valueMultiplier() const {
return ::cordl_internals::getInstanceField<float_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MaterialPropertyBlockFloatCurve::__set__speedMultiplier(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::MaterialPropertyBlockFloatCurve::__get__speedMultiplier() const {
return ::cordl_internals::getInstanceField<float_t, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::MaterialPropertyBlockFloatCurve::SetProperty()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MaterialPropertyBlockFloatCurve>::get(),
                            "SetProperty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::MaterialPropertyBlockFloatCurve::MaterialPropertyBlockFloatCurve()  : GlobalNamespace::MaterialPropertyBlockAnimator(THROW_UNLESS(::il2cpp_utils::New<MaterialPropertyBlockFloatCurve>())) {}
 void GlobalNamespace::MaterialPropertyBlockFloatCurve::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MaterialPropertyBlockFloatCurve>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
