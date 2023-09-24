#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/zzzz__ExtensionOfNativeClassAttribute_def.hpp"
//  Writing Method size for method: UnityEngine::ExtensionOfNativeClassAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ExtensionOfNativeClassAttribute::*)()>(&UnityEngine::ExtensionOfNativeClassAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b5c1e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ExtensionOfNativeClassAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 UnityEngine::ExtensionOfNativeClassAttribute UnityEngine::ExtensionOfNativeClassAttribute::New_ctor()  {
UnityEngine::ExtensionOfNativeClassAttribute o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::ExtensionOfNativeClassAttribute>())};
return o;
}
 void UnityEngine::ExtensionOfNativeClassAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ExtensionOfNativeClassAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
