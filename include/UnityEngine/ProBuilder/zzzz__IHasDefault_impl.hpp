#pragma once
namespace {
#include "UnityEngine/ProBuilder/zzzz__IHasDefault_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::IHasDefault.SetDefaultValues
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::IHasDefault::*)()>(&::UnityEngine::ProBuilder::IHasDefault::SetDefaultValues)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::ProBuilder::IHasDefault),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::IHasDefault>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 void ::UnityEngine::ProBuilder::IHasDefault::SetDefaultValues()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::IHasDefault>::get(),
                            "SetDefaultValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
