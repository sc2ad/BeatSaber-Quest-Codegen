#pragma once
#include "System/ComponentModel/zzzz__ITypeDescriptorContext_def.hpp"
#include "System/ComponentModel/zzzz__IContainer_def.hpp"
#include "System/zzzz__IServiceProvider_def.hpp"
//  Writing Method size for method: System::ComponentModel::ITypeDescriptorContext.get_Container
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::ComponentModel::IContainer (System::ComponentModel::ITypeDescriptorContext::*)()>(&System::ComponentModel::ITypeDescriptorContext::get_Container)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::ComponentModel::ITypeDescriptorContext),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::ITypeDescriptorContext>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::IServiceProvider
constexpr  System::ComponentModel::ITypeDescriptorContext::operator System::IServiceProvider() const noexcept {
return System::IServiceProvider(::bs_hook::Il2CppWrapperType::instance);
}
 System::ComponentModel::IContainer System::ComponentModel::ITypeDescriptorContext::get_Container()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::ITypeDescriptorContext>::get(),
                            "get_Container",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::ComponentModel::IContainer, false>(const_cast<void*>(instance), ___internal_method);
}
