#pragma once
#include "UnityEngine/UIElements/Experimental/zzzz__IValueAnimationUpdate_def.hpp"
//  Writing Method size for method: UnityEngine::UIElements::Experimental::IValueAnimationUpdate.Tick
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::Experimental::IValueAnimationUpdate::*)(int64_t)>(&UnityEngine::UIElements::Experimental::IValueAnimationUpdate::Tick)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UIElements::Experimental::IValueAnimationUpdate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::Experimental::IValueAnimationUpdate>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 void UnityEngine::UIElements::Experimental::IValueAnimationUpdate::Tick(int64_t currentTimeMs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::Experimental::IValueAnimationUpdate>::get(),
                            "Tick",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, currentTimeMs);
}
