#pragma once
namespace {
#include "GlobalNamespace/zzzz__IReturnToMenuController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IReturnToMenuController.ReturnToMenu
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::IReturnToMenuController::*)()>(&::GlobalNamespace::IReturnToMenuController::ReturnToMenu)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::IReturnToMenuController),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IReturnToMenuController>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 void ::GlobalNamespace::IReturnToMenuController::ReturnToMenu()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IReturnToMenuController>::get(),
                            "ReturnToMenu",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
