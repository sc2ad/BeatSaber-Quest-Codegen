#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/Xml/zzzz__OnRemoveWriter_def.hpp"
#include "System/Xml/zzzz__XmlRawWriter_def.hpp"
//  Writing Method size for method: System::Xml::OnRemoveWriter._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::OnRemoveWriter::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&System::Xml::OnRemoveWriter::_ctor)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x26c1010;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::OnRemoveWriter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::OnRemoveWriter.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::OnRemoveWriter::*)(System::Xml::XmlRawWriter)>(&System::Xml::OnRemoveWriter::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x26c113c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::OnRemoveWriter),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::OnRemoveWriter>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 System::Xml::OnRemoveWriter::OnRemoveWriter(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<OnRemoveWriter>(object, method))) {}
 void System::Xml::OnRemoveWriter::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::OnRemoveWriter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 void System::Xml::OnRemoveWriter::Invoke(System::Xml::XmlRawWriter writer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::OnRemoveWriter>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::XmlRawWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, writer);
}
