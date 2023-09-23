#pragma once
#include "Tayx/Graphy/UI/zzzz__IMovable_def.hpp"
#include "Tayx/Graphy/zzzz__GraphyManager_def.hpp"
//  Writing Method size for method: Tayx::Graphy::UI::IMovable.SetPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Tayx::Graphy::UI::IMovable::*)(Tayx::Graphy::Tayx__Graphy__GraphyManager__ModulePosition)>(&Tayx::Graphy::UI::IMovable::SetPosition)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Tayx::Graphy::UI::IMovable),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tayx::Graphy::UI::IMovable>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 void Tayx::Graphy::UI::IMovable::SetPosition(Tayx::Graphy::Tayx__Graphy__GraphyManager__ModulePosition newModulePosition)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tayx::Graphy::UI::IMovable>::get(),
                            "SetPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Tayx::Graphy::Tayx__Graphy__GraphyManager__ModulePosition>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, newModulePosition);
}
