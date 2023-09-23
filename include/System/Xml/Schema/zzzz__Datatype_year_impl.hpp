#pragma once
#include "System/Xml/Schema/zzzz__Datatype_dateTimeBase_impl.hpp"
#include "System/Xml/Schema/zzzz__Datatype_year_def.hpp"
#include "System/Xml/Schema/zzzz__XmlTypeCode_def.hpp"
//  Writing Method size for method: System::Xml::Schema::Datatype_year.get_TypeCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Xml::Schema::XmlTypeCode (System::Xml::Schema::Datatype_year::*)()>(&System::Xml::Schema::Datatype_year::get_TypeCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2726740;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::Schema::Datatype_year),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::Datatype_year>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::Schema::Datatype_year._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::Datatype_year::*)()>(&System::Xml::Schema::Datatype_year::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2726748;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::Datatype_year>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 System::Xml::Schema::XmlTypeCode System::Xml::Schema::Datatype_year::get_TypeCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::Datatype_year>::get(),
                            "get_TypeCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Xml::Schema::XmlTypeCode, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 System::Xml::Schema::Datatype_year::Datatype_year()  : System::Xml::Schema::Datatype_dateTimeBase(THROW_UNLESS(::il2cpp_utils::New<Datatype_year>())) {}
 void System::Xml::Schema::Datatype_year::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::Datatype_year>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
