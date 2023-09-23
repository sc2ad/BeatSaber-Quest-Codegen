#pragma once
#include "UnityEngine/UIElements/zzzz__IGroupBoxOption_def.hpp"
//  Writing Method size for method: UnityEngine::UIElements::IGroupBoxOption.SetSelected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::IGroupBoxOption::*)(bool)>(&UnityEngine::UIElements::IGroupBoxOption::SetSelected)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UIElements::IGroupBoxOption),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::IGroupBoxOption>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 void UnityEngine::UIElements::IGroupBoxOption::SetSelected(bool selected)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::IGroupBoxOption>::get(),
                            "SetSelected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, selected);
}
