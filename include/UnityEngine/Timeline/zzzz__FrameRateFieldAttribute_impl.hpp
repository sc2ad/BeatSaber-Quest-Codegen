#pragma once
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "UnityEngine/Timeline/zzzz__FrameRateFieldAttribute_def.hpp"
//  Writing Method size for method: UnityEngine::Timeline::FrameRateFieldAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::FrameRateFieldAttribute::*)()>(&UnityEngine::Timeline::FrameRateFieldAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ad5e14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::FrameRateFieldAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 UnityEngine::Timeline::FrameRateFieldAttribute::FrameRateFieldAttribute()  : UnityEngine::PropertyAttribute(THROW_UNLESS(::il2cpp_utils::New<FrameRateFieldAttribute>())) {}
 void UnityEngine::Timeline::FrameRateFieldAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::FrameRateFieldAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
