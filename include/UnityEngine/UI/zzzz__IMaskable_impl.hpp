#pragma once
namespace {
#include "UnityEngine/UI/zzzz__IMaskable_def.hpp"
//  Writing Method size for method: ::UnityEngine::UI::IMaskable.RecalculateMasking
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::IMaskable::*)()>(&::UnityEngine::UI::IMaskable::RecalculateMasking)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::UI::IMaskable),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::IMaskable>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 void ::UnityEngine::UI::IMaskable::RecalculateMasking()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::IMaskable>::get(),
                            "RecalculateMasking",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
