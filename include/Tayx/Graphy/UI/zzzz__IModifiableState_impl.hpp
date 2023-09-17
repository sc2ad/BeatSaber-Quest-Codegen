#pragma once
namespace {
#include "Tayx/Graphy/UI/zzzz__IModifiableState_def.hpp"
#include "Tayx/Graphy/zzzz__GraphyManager_def.hpp"
//  Writing Method size for method: ::Tayx::Graphy::UI::IModifiableState.SetState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::UI::IModifiableState::*)(::Tayx::Graphy::____Tayx__Graphy__GraphyManager__ModuleState, bool)>(&::Tayx::Graphy::UI::IModifiableState::SetState)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Tayx::Graphy::UI::IModifiableState),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::UI::IModifiableState>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 void ::Tayx::Graphy::UI::IModifiableState::SetState(::Tayx::Graphy::____Tayx__Graphy__GraphyManager__ModuleState newState, bool silentUpdate)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::UI::IModifiableState>::get(),
                            "SetState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tayx::Graphy::____Tayx__Graphy__GraphyManager__ModuleState>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, newState, silentUpdate);
}
} // end anonymous namespace
