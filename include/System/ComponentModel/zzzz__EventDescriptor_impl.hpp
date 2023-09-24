#pragma once
#include "System/ComponentModel/zzzz__MemberDescriptor_impl.hpp"
#include "System/ComponentModel/zzzz__EventDescriptor_def.hpp"
#include "System/zzzz__Attribute_def.hpp"
//  Writing Method size for method: System::ComponentModel::EventDescriptor._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::EventDescriptor::*)(::StringW, ::ArrayW<System::Attribute>)>(&System::ComponentModel::EventDescriptor::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x277c54c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::EventDescriptor>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Attribute>>::get()}
                        )));
    return ___internal_method;
  }
};
 System::ComponentModel::EventDescriptor System::ComponentModel::EventDescriptor::New_ctor(::StringW name, ::ArrayW<System::Attribute> attrs)  {
System::ComponentModel::EventDescriptor o{THROW_UNLESS(::il2cpp_utils::New<System::ComponentModel::EventDescriptor>(name, attrs))};
return o;
}
 void System::ComponentModel::EventDescriptor::_ctor(::StringW name, ::ArrayW<System::Attribute> attrs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::EventDescriptor>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Attribute>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, name, attrs);
}
