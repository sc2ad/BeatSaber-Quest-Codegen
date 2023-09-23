#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__DisableSpatializerOnUnsupportedPlatforms_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
//  Writing Method size for method: GlobalNamespace::DisableSpatializerOnUnsupportedPlatforms._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DisableSpatializerOnUnsupportedPlatforms::*)()>(&GlobalNamespace::DisableSpatializerOnUnsupportedPlatforms::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20bad3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::DisableSpatializerOnUnsupportedPlatforms>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::DisableSpatializerOnUnsupportedPlatforms::__set__audioSource(UnityEngine::AudioSource value)  {
::cordl_internals::setInstanceField<UnityEngine::AudioSource, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::AudioSource>(value));
}
constexpr UnityEngine::AudioSource GlobalNamespace::DisableSpatializerOnUnsupportedPlatforms::__get__audioSource() const {
return ::cordl_internals::getInstanceField<UnityEngine::AudioSource, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 GlobalNamespace::DisableSpatializerOnUnsupportedPlatforms::DisableSpatializerOnUnsupportedPlatforms()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<DisableSpatializerOnUnsupportedPlatforms>())) {}
 void GlobalNamespace::DisableSpatializerOnUnsupportedPlatforms::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::DisableSpatializerOnUnsupportedPlatforms>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
