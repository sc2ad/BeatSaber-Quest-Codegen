#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__BaseTransitionSO_def.hpp"
#include "GlobalNamespace/zzzz__TransitionTimingSO_def.hpp"
#include "GlobalNamespace/zzzz__EaseType_def.hpp"
//  Writing Method size for method: GlobalNamespace::BaseTransitionSO.get_easeType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::EaseType (GlobalNamespace::BaseTransitionSO::*)()>(&GlobalNamespace::BaseTransitionSO::get_easeType)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2127e70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BaseTransitionSO>::get(),
                            "get_easeType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BaseTransitionSO.get_easeDuration
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (GlobalNamespace::BaseTransitionSO::*)()>(&GlobalNamespace::BaseTransitionSO::get_easeDuration)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2127e8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BaseTransitionSO>::get(),
                            "get_easeDuration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BaseTransitionSO._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BaseTransitionSO::*)()>(&GlobalNamespace::BaseTransitionSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2127ea8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BaseTransitionSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::BaseTransitionSO::__set__transitionTiming(GlobalNamespace::TransitionTimingSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::TransitionTimingSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::TransitionTimingSO>(value));
}
constexpr GlobalNamespace::TransitionTimingSO GlobalNamespace::BaseTransitionSO::__get__transitionTiming() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::TransitionTimingSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::EaseType GlobalNamespace::BaseTransitionSO::get_easeType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BaseTransitionSO>::get(),
                            "get_easeType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::EaseType, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t GlobalNamespace::BaseTransitionSO::get_easeDuration()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BaseTransitionSO>::get(),
                            "get_easeDuration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::BaseTransitionSO GlobalNamespace::BaseTransitionSO::New_ctor()  {
GlobalNamespace::BaseTransitionSO o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::BaseTransitionSO>())};
return o;
}
 void GlobalNamespace::BaseTransitionSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BaseTransitionSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
