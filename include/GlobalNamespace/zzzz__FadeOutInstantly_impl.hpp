#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__FadeOutInstantly_def.hpp"
#include "GlobalNamespace/zzzz__FadeInOutController_def.hpp"
//  Writing Method size for method: GlobalNamespace::FadeOutInstantly.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FadeOutInstantly::*)()>(&GlobalNamespace::FadeOutInstantly::Start)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2676318;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FadeOutInstantly>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::FadeOutInstantly._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FadeOutInstantly::*)()>(&GlobalNamespace::FadeOutInstantly::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2676334;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FadeOutInstantly>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::FadeOutInstantly::__set__fadeInOut(GlobalNamespace::FadeInOutController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::FadeInOutController, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::FadeInOutController>(value));
}
constexpr GlobalNamespace::FadeInOutController GlobalNamespace::FadeOutInstantly::__get__fadeInOut() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::FadeInOutController, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::FadeOutInstantly::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FadeOutInstantly>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::FadeOutInstantly::FadeOutInstantly()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<FadeOutInstantly>())) {}
 void GlobalNamespace::FadeOutInstantly::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FadeOutInstantly>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
