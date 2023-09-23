#pragma once
#include "UnityEngine/UI/zzzz__IClipper_def.hpp"
//  Writing Method size for method: UnityEngine::UI::IClipper.PerformClipping
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::IClipper::*)()>(&UnityEngine::UI::IClipper::PerformClipping)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UI::IClipper),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::IClipper>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 void UnityEngine::UI::IClipper::PerformClipping()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::IClipper>::get(),
                            "PerformClipping",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
