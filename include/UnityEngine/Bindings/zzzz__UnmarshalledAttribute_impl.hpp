#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/Bindings/zzzz__UnmarshalledAttribute_def.hpp"
//  Writing Method size for method: UnityEngine::Bindings::UnmarshalledAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Bindings::UnmarshalledAttribute::*)()>(&UnityEngine::Bindings::UnmarshalledAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ba16e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Bindings::UnmarshalledAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 UnityEngine::Bindings::UnmarshalledAttribute UnityEngine::Bindings::UnmarshalledAttribute::New_ctor()  {
UnityEngine::Bindings::UnmarshalledAttribute o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::Bindings::UnmarshalledAttribute>())};
return o;
}
 void UnityEngine::Bindings::UnmarshalledAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Bindings::UnmarshalledAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
