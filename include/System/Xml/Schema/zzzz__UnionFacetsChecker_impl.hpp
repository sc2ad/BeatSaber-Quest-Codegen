#pragma once
#include "System/Xml/Schema/zzzz__FacetsChecker_impl.hpp"
namespace {
#include "System/Xml/Schema/zzzz__UnionFacetsChecker_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaDatatype_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::UnionFacetsChecker.CheckValueFacets
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception (::System::Xml::Schema::UnionFacetsChecker::*)(::bs_hook::Il2CppWrapperType, ::System::Xml::Schema::XmlSchemaDatatype)>(&::System::Xml::Schema::UnionFacetsChecker::CheckValueFacets)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x272ffac;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Xml::Schema::UnionFacetsChecker),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::UnionFacetsChecker>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::UnionFacetsChecker.MatchEnumeration
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::UnionFacetsChecker::*)(::bs_hook::Il2CppWrapperType, ::System::Collections::ArrayList, ::System::Xml::Schema::XmlSchemaDatatype)>(&::System::Xml::Schema::UnionFacetsChecker::MatchEnumeration)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x27300a0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Xml::Schema::UnionFacetsChecker),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::UnionFacetsChecker>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::UnionFacetsChecker._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::UnionFacetsChecker::*)()>(&::System::Xml::Schema::UnionFacetsChecker::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2730154;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::UnionFacetsChecker>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 ::System::Exception ::System::Xml::Schema::UnionFacetsChecker::CheckValueFacets(::bs_hook::Il2CppWrapperType value, ::System::Xml::Schema::XmlSchemaDatatype datatype)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::UnionFacetsChecker>::get(),
                            "CheckValueFacets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaDatatype>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Exception, false>(const_cast<void*>(instance), ___internal_method, value, datatype);
}
 bool ::System::Xml::Schema::UnionFacetsChecker::MatchEnumeration(::bs_hook::Il2CppWrapperType value, ::System::Collections::ArrayList enumeration, ::System::Xml::Schema::XmlSchemaDatatype datatype)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::UnionFacetsChecker>::get(),
                            "MatchEnumeration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ArrayList>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaDatatype>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, value, enumeration, datatype);
}
// Ctor Parameters []
 ::System::Xml::Schema::UnionFacetsChecker::UnionFacetsChecker()  : ::System::Xml::Schema::FacetsChecker(THROW_UNLESS(::il2cpp_utils::New<UnionFacetsChecker>())) {}
 void ::System::Xml::Schema::UnionFacetsChecker::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::UnionFacetsChecker>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
