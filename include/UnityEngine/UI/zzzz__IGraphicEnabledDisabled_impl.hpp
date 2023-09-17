#pragma once
namespace {
#include "UnityEngine/UI/zzzz__IGraphicEnabledDisabled_def.hpp"
//  Writing Method size for method: ::UnityEngine::UI::IGraphicEnabledDisabled.OnSiblingGraphicEnabledDisabled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::IGraphicEnabledDisabled::*)()>(&::UnityEngine::UI::IGraphicEnabledDisabled::OnSiblingGraphicEnabledDisabled)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::UI::IGraphicEnabledDisabled),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::IGraphicEnabledDisabled>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 void ::UnityEngine::UI::IGraphicEnabledDisabled::OnSiblingGraphicEnabledDisabled()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::IGraphicEnabledDisabled>::get(),
                            "OnSiblingGraphicEnabledDisabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
