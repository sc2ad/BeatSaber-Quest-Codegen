#pragma once
#include "UnityEngine/UI/zzzz__ILayoutIgnorer_def.hpp"
//  Writing Method size for method: UnityEngine::UI::ILayoutIgnorer.get_ignoreLayout
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UI::ILayoutIgnorer::*)()>(&UnityEngine::UI::ILayoutIgnorer::get_ignoreLayout)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UI::ILayoutIgnorer),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::ILayoutIgnorer>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 bool UnityEngine::UI::ILayoutIgnorer::get_ignoreLayout()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::ILayoutIgnorer>::get(),
                            "get_ignoreLayout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
