#pragma once
#include "System/ComponentModel/zzzz__IContainer_def.hpp"
#include "System/ComponentModel/zzzz__ComponentCollection_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/ComponentModel/zzzz__IComponent_def.hpp"
//  Writing Method size for method: System::ComponentModel::IContainer.get_Components
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::ComponentModel::ComponentCollection (System::ComponentModel::IContainer::*)()>(&System::ComponentModel::IContainer::get_Components)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::ComponentModel::IContainer),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::IContainer>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::IContainer.Remove
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::IContainer::*)(System::ComponentModel::IComponent)>(&System::ComponentModel::IContainer::Remove)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::ComponentModel::IContainer),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::IContainer>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::IDisposable
constexpr  System::ComponentModel::IContainer::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
 System::ComponentModel::ComponentCollection System::ComponentModel::IContainer::get_Components()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::IContainer>::get(),
                            "get_Components",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::ComponentModel::ComponentCollection, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::ComponentModel::IContainer::Remove(System::ComponentModel::IComponent component)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::IContainer>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ComponentModel::IComponent>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, component);
}
