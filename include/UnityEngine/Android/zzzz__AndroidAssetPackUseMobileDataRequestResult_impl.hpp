#pragma once
#include "UnityEngine/Android/zzzz__AndroidAssetPackUseMobileDataRequestResult_def.hpp"
//  Writing Method size for method: UnityEngine::Android::AndroidAssetPackUseMobileDataRequestResult._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Android::AndroidAssetPackUseMobileDataRequestResult::*)(bool)>(&UnityEngine::Android::AndroidAssetPackUseMobileDataRequestResult::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2b16e44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Android::AndroidAssetPackUseMobileDataRequestResult>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::Android::AndroidAssetPackUseMobileDataRequestResult::__set__allowed_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::Android::AndroidAssetPackUseMobileDataRequestResult::__get__allowed_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 UnityEngine::Android::AndroidAssetPackUseMobileDataRequestResult UnityEngine::Android::AndroidAssetPackUseMobileDataRequestResult::New_ctor(bool allowed)  {
UnityEngine::Android::AndroidAssetPackUseMobileDataRequestResult o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::Android::AndroidAssetPackUseMobileDataRequestResult>(allowed))};
return o;
}
 void UnityEngine::Android::AndroidAssetPackUseMobileDataRequestResult::_ctor(bool allowed)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Android::AndroidAssetPackUseMobileDataRequestResult>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, allowed);
}
