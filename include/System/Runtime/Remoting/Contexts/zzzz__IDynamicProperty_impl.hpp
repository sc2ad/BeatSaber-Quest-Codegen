#pragma once
#include "System/Runtime/Remoting/Contexts/zzzz__IDynamicProperty_def.hpp"
//  Writing Method size for method: System::Runtime::Remoting::Contexts::IDynamicProperty.get_Name
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Runtime::Remoting::Contexts::IDynamicProperty::*)()>(&System::Runtime::Remoting::Contexts::IDynamicProperty::get_Name)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Runtime::Remoting::Contexts::IDynamicProperty),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Contexts::IDynamicProperty>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 ::StringW System::Runtime::Remoting::Contexts::IDynamicProperty::get_Name()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Contexts::IDynamicProperty>::get(),
                            "get_Name",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
