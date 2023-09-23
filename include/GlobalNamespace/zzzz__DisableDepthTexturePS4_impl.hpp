#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__DisableDepthTexturePS4_def.hpp"
#include "GlobalNamespace/zzzz__BoolSO_def.hpp"
//  Writing Method size for method: GlobalNamespace::DisableDepthTexturePS4._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DisableDepthTexturePS4::*)()>(&GlobalNamespace::DisableDepthTexturePS4::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2675f78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::DisableDepthTexturePS4>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::DisableDepthTexturePS4::__set__depthTextureEnabled(GlobalNamespace::BoolSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BoolSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BoolSO>(value));
}
constexpr GlobalNamespace::BoolSO GlobalNamespace::DisableDepthTexturePS4::__get__depthTextureEnabled() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BoolSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 GlobalNamespace::DisableDepthTexturePS4::DisableDepthTexturePS4()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<DisableDepthTexturePS4>())) {}
 void GlobalNamespace::DisableDepthTexturePS4::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::DisableDepthTexturePS4>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
