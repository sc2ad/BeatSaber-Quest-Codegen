#pragma once
#include "System/Xml/Schema/zzzz__Datatype_NMTOKEN_impl.hpp"
#include "System/Xml/Schema/zzzz__Datatype_ENUMERATION_def.hpp"
#include "System/Xml/zzzz__XmlTokenizedType_def.hpp"
//  Writing Method size for method: System::Xml::Schema::Datatype_ENUMERATION.get_TokenizedType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Xml::XmlTokenizedType (System::Xml::Schema::Datatype_ENUMERATION::*)()>(&System::Xml::Schema::Datatype_ENUMERATION::get_TokenizedType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x272ba50;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::Schema::Datatype_ENUMERATION),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::Datatype_ENUMERATION>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::Schema::Datatype_ENUMERATION._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::Datatype_ENUMERATION::*)()>(&System::Xml::Schema::Datatype_ENUMERATION::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x272ba58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::Datatype_ENUMERATION>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 System::Xml::XmlTokenizedType System::Xml::Schema::Datatype_ENUMERATION::get_TokenizedType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::Datatype_ENUMERATION>::get(),
                            "get_TokenizedType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Xml::XmlTokenizedType, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 System::Xml::Schema::Datatype_ENUMERATION::Datatype_ENUMERATION()  : System::Xml::Schema::Datatype_NMTOKEN(THROW_UNLESS(::il2cpp_utils::New<Datatype_ENUMERATION>())) {}
 void System::Xml::Schema::Datatype_ENUMERATION::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::Datatype_ENUMERATION>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
