#pragma once
#include "System/Security/zzzz__ISecurityEncodable_def.hpp"
#include "System/Security/zzzz__SecurityElement_def.hpp"
//  Writing Method size for method: System::Security::ISecurityEncodable.ToXml
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::SecurityElement (System::Security::ISecurityEncodable::*)()>(&System::Security::ISecurityEncodable::ToXml)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Security::ISecurityEncodable),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::ISecurityEncodable>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 System::Security::SecurityElement System::Security::ISecurityEncodable::ToXml()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::ISecurityEncodable>::get(),
                            "ToXml",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Security::SecurityElement, false>(const_cast<void*>(instance), ___internal_method);
}
