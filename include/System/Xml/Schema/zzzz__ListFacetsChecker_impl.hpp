#pragma once
#include "System/Xml/Schema/zzzz__FacetsChecker_impl.hpp"
namespace {
#include "System/Xml/Schema/zzzz__ListFacetsChecker_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaDatatype_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::ListFacetsChecker.CheckValueFacets
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception (::System::Xml::Schema::ListFacetsChecker::*)(::bs_hook::Il2CppWrapperType, ::System::Xml::Schema::XmlSchemaDatatype)>(&::System::Xml::Schema::ListFacetsChecker::CheckValueFacets)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x272fcbc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Xml::Schema::ListFacetsChecker),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::ListFacetsChecker>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::ListFacetsChecker.MatchEnumeration
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::ListFacetsChecker::*)(::bs_hook::Il2CppWrapperType, ::System::Collections::ArrayList, ::System::Xml::Schema::XmlSchemaDatatype)>(&::System::Xml::Schema::ListFacetsChecker::MatchEnumeration)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x272fef0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Xml::Schema::ListFacetsChecker),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::ListFacetsChecker>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::ListFacetsChecker._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::ListFacetsChecker::*)()>(&::System::Xml::Schema::ListFacetsChecker::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x272ffa4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::ListFacetsChecker>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 ::System::Exception ::System::Xml::Schema::ListFacetsChecker::CheckValueFacets(::bs_hook::Il2CppWrapperType value, ::System::Xml::Schema::XmlSchemaDatatype datatype)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::ListFacetsChecker>::get(),
                            "CheckValueFacets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaDatatype>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Exception, false>(const_cast<void*>(instance), ___internal_method, value, datatype);
}
 bool ::System::Xml::Schema::ListFacetsChecker::MatchEnumeration(::bs_hook::Il2CppWrapperType value, ::System::Collections::ArrayList enumeration, ::System::Xml::Schema::XmlSchemaDatatype datatype)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::ListFacetsChecker>::get(),
                            "MatchEnumeration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ArrayList>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaDatatype>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, value, enumeration, datatype);
}
// Ctor Parameters []
 ::System::Xml::Schema::ListFacetsChecker::ListFacetsChecker()  : ::System::Xml::Schema::FacetsChecker(THROW_UNLESS(::il2cpp_utils::New<ListFacetsChecker>())) {}
 void ::System::Xml::Schema::ListFacetsChecker::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::ListFacetsChecker>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
