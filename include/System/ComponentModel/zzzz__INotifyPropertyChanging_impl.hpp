#pragma once
#include "System/ComponentModel/zzzz__INotifyPropertyChanging_def.hpp"
#include "System/ComponentModel/zzzz__PropertyChangingEventHandler_def.hpp"
//  Writing Method size for method: System::ComponentModel::INotifyPropertyChanging.add_PropertyChanging
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::INotifyPropertyChanging::*)(System::ComponentModel::PropertyChangingEventHandler)>(&System::ComponentModel::INotifyPropertyChanging::add_PropertyChanging)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::ComponentModel::INotifyPropertyChanging),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::INotifyPropertyChanging>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::INotifyPropertyChanging.remove_PropertyChanging
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::INotifyPropertyChanging::*)(System::ComponentModel::PropertyChangingEventHandler)>(&System::ComponentModel::INotifyPropertyChanging::remove_PropertyChanging)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::ComponentModel::INotifyPropertyChanging),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::INotifyPropertyChanging>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
 void System::ComponentModel::INotifyPropertyChanging::add_PropertyChanging(System::ComponentModel::PropertyChangingEventHandler value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::INotifyPropertyChanging>::get(),
                            "add_PropertyChanging",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ComponentModel::PropertyChangingEventHandler>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void System::ComponentModel::INotifyPropertyChanging::remove_PropertyChanging(System::ComponentModel::PropertyChangingEventHandler value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::INotifyPropertyChanging>::get(),
                            "remove_PropertyChanging",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ComponentModel::PropertyChangingEventHandler>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
