#pragma once
namespace {
#include "UnityEngine/UIElements/zzzz__IPointerCaptureEventInternal_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::IPointerCaptureEventInternal.get_pointerId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::IPointerCaptureEventInternal::*)()>(&::UnityEngine::UIElements::IPointerCaptureEventInternal::get_pointerId)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::UIElements::IPointerCaptureEventInternal),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IPointerCaptureEventInternal>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 int32_t ::UnityEngine::UIElements::IPointerCaptureEventInternal::get_pointerId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IPointerCaptureEventInternal>::get(),
                            "get_pointerId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
