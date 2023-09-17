#pragma once
namespace {
#include "System/ComponentModel/zzzz__INotifyCollectionChanged_def.hpp"
#include "System/ComponentModel/zzzz__NotifyCollectionChangedEventHandler_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::INotifyCollectionChanged.add_CollectionChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::INotifyCollectionChanged::*)(::System::ComponentModel::NotifyCollectionChangedEventHandler)>(&::System::ComponentModel::INotifyCollectionChanged::add_CollectionChanged)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::ComponentModel::INotifyCollectionChanged),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::INotifyCollectionChanged>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::INotifyCollectionChanged.remove_CollectionChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::INotifyCollectionChanged::*)(::System::ComponentModel::NotifyCollectionChangedEventHandler)>(&::System::ComponentModel::INotifyCollectionChanged::remove_CollectionChanged)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::ComponentModel::INotifyCollectionChanged),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::INotifyCollectionChanged>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
 void ::System::ComponentModel::INotifyCollectionChanged::add_CollectionChanged(::System::ComponentModel::NotifyCollectionChangedEventHandler value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::INotifyCollectionChanged>::get(),
                            "add_CollectionChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::NotifyCollectionChangedEventHandler>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::System::ComponentModel::INotifyCollectionChanged::remove_CollectionChanged(::System::ComponentModel::NotifyCollectionChangedEventHandler value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::INotifyCollectionChanged>::get(),
                            "remove_CollectionChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::NotifyCollectionChangedEventHandler>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
} // end anonymous namespace
