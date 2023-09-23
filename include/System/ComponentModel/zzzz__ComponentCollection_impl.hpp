#pragma once
#include "System/Collections/zzzz__ReadOnlyCollectionBase_impl.hpp"
#include "System/ComponentModel/zzzz__ComponentCollection_def.hpp"
#include "System/ComponentModel/zzzz__IComponent_def.hpp"
//  Writing Method size for method: System::ComponentModel::ComponentCollection.get_Item
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::ComponentModel::IComponent (System::ComponentModel::ComponentCollection::*)(::StringW)>(&System::ComponentModel::ComponentCollection::get_Item)> {
  constexpr static std::size_t size = 0x588;
  constexpr static std::size_t addrs = 0x2771294;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::ComponentModel::ComponentCollection),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::ComponentCollection>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
 System::ComponentModel::IComponent System::ComponentModel::ComponentCollection::get_Item(::StringW name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::ComponentCollection>::get(),
                            "get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::ComponentModel::IComponent, false>(const_cast<void*>(instance), ___internal_method, name);
}
