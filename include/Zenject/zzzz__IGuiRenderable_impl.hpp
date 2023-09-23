#pragma once
#include "Zenject/zzzz__IGuiRenderable_def.hpp"
//  Writing Method size for method: Zenject::IGuiRenderable.GuiRender
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::IGuiRenderable::*)()>(&Zenject::IGuiRenderable::GuiRender)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Zenject::IGuiRenderable),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::IGuiRenderable>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 void Zenject::IGuiRenderable::GuiRender()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::IGuiRenderable>::get(),
                            "GuiRender",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
