#pragma once
namespace {
#include "GlobalNamespace/zzzz__IActivationFactory_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IActivationFactory.ActivateInstance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (::GlobalNamespace::IActivationFactory::*)()>(&::GlobalNamespace::IActivationFactory::ActivateInstance)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::IActivationFactory),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IActivationFactory>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 ::bs_hook::Il2CppWrapperType ::GlobalNamespace::IActivationFactory::ActivateInstance()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IActivationFactory>::get(),
                            "ActivateInstance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
