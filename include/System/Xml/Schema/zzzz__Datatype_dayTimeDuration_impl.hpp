#pragma once
#include "System/Xml/Schema/zzzz__Datatype_duration_impl.hpp"
namespace {
#include "System/Xml/Schema/zzzz__Datatype_dayTimeDuration_def.hpp"
#include "System/Xml/zzzz__IXmlNamespaceResolver_def.hpp"
#include "System/Xml/zzzz__XmlNameTable_def.hpp"
#include "System/Xml/Schema/zzzz__XmlTypeCode_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::Datatype_dayTimeDuration.TryParseValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception (::System::Xml::Schema::Datatype_dayTimeDuration::*)(::StringW, ::System::Xml::XmlNameTable, ::System::Xml::IXmlNamespaceResolver, ByRef<::bs_hook::Il2CppWrapperType>)>(&::System::Xml::Schema::Datatype_dayTimeDuration::TryParseValue)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x2725b78;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Xml::Schema::Datatype_dayTimeDuration),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Datatype_dayTimeDuration>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Datatype_dayTimeDuration.get_TypeCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlTypeCode (::System::Xml::Schema::Datatype_dayTimeDuration::*)()>(&::System::Xml::Schema::Datatype_dayTimeDuration::get_TypeCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2725d3c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Xml::Schema::Datatype_dayTimeDuration),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Datatype_dayTimeDuration>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Datatype_dayTimeDuration._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::Datatype_dayTimeDuration::*)()>(&::System::Xml::Schema::Datatype_dayTimeDuration::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2725d44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Datatype_dayTimeDuration>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 ::System::Exception ::System::Xml::Schema::Datatype_dayTimeDuration::TryParseValue(::StringW s, ::System::Xml::XmlNameTable nameTable, ::System::Xml::IXmlNamespaceResolver nsmgr, ByRef<::bs_hook::Il2CppWrapperType> typedValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Datatype_dayTimeDuration>::get(),
                            "TryParseValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNameTable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::IXmlNamespaceResolver>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Exception, false>(const_cast<void*>(instance), ___internal_method, s, nameTable, nsmgr, typedValue);
}
 ::System::Xml::Schema::XmlTypeCode ::System::Xml::Schema::Datatype_dayTimeDuration::get_TypeCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Datatype_dayTimeDuration>::get(),
                            "get_TypeCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlTypeCode, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::System::Xml::Schema::Datatype_dayTimeDuration::Datatype_dayTimeDuration()  : ::System::Xml::Schema::Datatype_duration(THROW_UNLESS(::il2cpp_utils::New<Datatype_dayTimeDuration>())) {}
 void ::System::Xml::Schema::Datatype_dayTimeDuration::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Datatype_dayTimeDuration>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
