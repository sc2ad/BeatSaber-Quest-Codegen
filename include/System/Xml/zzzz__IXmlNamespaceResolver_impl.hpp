#pragma once
namespace {
#include "System/Xml/zzzz__IXmlNamespaceResolver_def.hpp"
//  Writing Method size for method: ::System::Xml::IXmlNamespaceResolver.LookupNamespace
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::IXmlNamespaceResolver::*)(::StringW)>(&::System::Xml::IXmlNamespaceResolver::LookupNamespace)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Xml::IXmlNamespaceResolver),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::IXmlNamespaceResolver>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::IXmlNamespaceResolver.LookupPrefix
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::IXmlNamespaceResolver::*)(::StringW)>(&::System::Xml::IXmlNamespaceResolver::LookupPrefix)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Xml::IXmlNamespaceResolver),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::IXmlNamespaceResolver>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
 ::StringW ::System::Xml::IXmlNamespaceResolver::LookupNamespace(::StringW prefix)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::IXmlNamespaceResolver>::get(),
                            "LookupNamespace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, prefix);
}
 ::StringW ::System::Xml::IXmlNamespaceResolver::LookupPrefix(::StringW namespaceName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::IXmlNamespaceResolver>::get(),
                            "LookupPrefix",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, namespaceName);
}
} // end anonymous namespace
