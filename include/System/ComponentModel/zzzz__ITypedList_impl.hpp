#pragma once
#include "System/ComponentModel/zzzz__ITypedList_def.hpp"
#include "System/ComponentModel/zzzz__PropertyDescriptor_def.hpp"
#include "System/ComponentModel/zzzz__PropertyDescriptorCollection_def.hpp"
//  Writing Method size for method: System::ComponentModel::ITypedList.GetListName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::ComponentModel::ITypedList::*)(::ArrayW<System::ComponentModel::PropertyDescriptor>)>(&System::ComponentModel::ITypedList::GetListName)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::ComponentModel::ITypedList),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::ITypedList>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::ITypedList.GetItemProperties
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::ComponentModel::PropertyDescriptorCollection (System::ComponentModel::ITypedList::*)(::ArrayW<System::ComponentModel::PropertyDescriptor>)>(&System::ComponentModel::ITypedList::GetItemProperties)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::ComponentModel::ITypedList),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::ITypedList>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
 ::StringW System::ComponentModel::ITypedList::GetListName(::ArrayW<System::ComponentModel::PropertyDescriptor> listAccessors)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::ITypedList>::get(),
                            "GetListName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::ComponentModel::PropertyDescriptor>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, listAccessors);
}
 System::ComponentModel::PropertyDescriptorCollection System::ComponentModel::ITypedList::GetItemProperties(::ArrayW<System::ComponentModel::PropertyDescriptor> listAccessors)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::ITypedList>::get(),
                            "GetItemProperties",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::ComponentModel::PropertyDescriptor>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::ComponentModel::PropertyDescriptorCollection, false>(const_cast<void*>(instance), ___internal_method, listAccessors);
}
