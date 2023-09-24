#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__RandomAnimationStartTime_def.hpp"
#include "UnityEngine/zzzz__Animation_def.hpp"
//  Writing Method size for method: GlobalNamespace::RandomAnimationStartTime.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RandomAnimationStartTime::*)()>(&GlobalNamespace::RandomAnimationStartTime::Start)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x1f799f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::RandomAnimationStartTime>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::RandomAnimationStartTime._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RandomAnimationStartTime::*)()>(&GlobalNamespace::RandomAnimationStartTime::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1f79cd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::RandomAnimationStartTime>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::RandomAnimationStartTime::__set__animation(UnityEngine::Animation value)  {
::cordl_internals::setInstanceField<UnityEngine::Animation, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Animation>(value));
}
constexpr UnityEngine::Animation GlobalNamespace::RandomAnimationStartTime::__get__animation() const {
return ::cordl_internals::getInstanceField<UnityEngine::Animation, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::RandomAnimationStartTime::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::RandomAnimationStartTime>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::RandomAnimationStartTime GlobalNamespace::RandomAnimationStartTime::New_ctor()  {
GlobalNamespace::RandomAnimationStartTime o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::RandomAnimationStartTime>())};
return o;
}
 void GlobalNamespace::RandomAnimationStartTime::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::RandomAnimationStartTime>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
