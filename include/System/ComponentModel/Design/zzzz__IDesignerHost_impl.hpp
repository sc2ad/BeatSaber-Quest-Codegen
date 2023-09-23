#pragma once
#include "System/ComponentModel/Design/zzzz__IDesignerHost_def.hpp"
#include "System/zzzz__IServiceProvider_def.hpp"
#include "System/ComponentModel/zzzz__IComponent_def.hpp"
#include "System/ComponentModel/Design/zzzz__IDesigner_def.hpp"
//  Writing Method size for method: System::ComponentModel::Design::IDesignerHost.get_RootComponent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::ComponentModel::IComponent (System::ComponentModel::Design::IDesignerHost::*)()>(&System::ComponentModel::Design::IDesignerHost::get_RootComponent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::ComponentModel::Design::IDesignerHost),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::Design::IDesignerHost>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::Design::IDesignerHost.GetDesigner
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::ComponentModel::Design::IDesigner (System::ComponentModel::Design::IDesignerHost::*)(System::ComponentModel::IComponent)>(&System::ComponentModel::Design::IDesignerHost::GetDesigner)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::ComponentModel::Design::IDesignerHost),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::Design::IDesignerHost>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::IServiceProvider
constexpr  System::ComponentModel::Design::IDesignerHost::operator System::IServiceProvider() const noexcept {
return System::IServiceProvider(::bs_hook::Il2CppWrapperType::instance);
}
 System::ComponentModel::IComponent System::ComponentModel::Design::IDesignerHost::get_RootComponent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::Design::IDesignerHost>::get(),
                            "get_RootComponent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::ComponentModel::IComponent, false>(const_cast<void*>(instance), ___internal_method);
}
 System::ComponentModel::Design::IDesigner System::ComponentModel::Design::IDesignerHost::GetDesigner(System::ComponentModel::IComponent component)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::Design::IDesignerHost>::get(),
                            "GetDesigner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ComponentModel::IComponent>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::ComponentModel::Design::IDesigner, false>(const_cast<void*>(instance), ___internal_method, component);
}
