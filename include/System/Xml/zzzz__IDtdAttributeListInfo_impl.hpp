#pragma once
namespace {
#include "System/Xml/zzzz__IDtdAttributeListInfo_def.hpp"
#include "System/Xml/zzzz__IDtdAttributeInfo_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Xml/zzzz__IDtdDefaultAttributeInfo_def.hpp"
//  Writing Method size for method: ::System::Xml::IDtdAttributeListInfo.get_HasNonCDataAttributes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::IDtdAttributeListInfo::*)()>(&::System::Xml::IDtdAttributeListInfo::get_HasNonCDataAttributes)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Xml::IDtdAttributeListInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::IDtdAttributeListInfo>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::IDtdAttributeListInfo.LookupAttribute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::IDtdAttributeInfo (::System::Xml::IDtdAttributeListInfo::*)(::StringW, ::StringW)>(&::System::Xml::IDtdAttributeListInfo::LookupAttribute)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Xml::IDtdAttributeListInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::IDtdAttributeListInfo>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::IDtdAttributeListInfo.LookupDefaultAttributes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Xml::IDtdDefaultAttributeInfo> (::System::Xml::IDtdAttributeListInfo::*)()>(&::System::Xml::IDtdAttributeListInfo::LookupDefaultAttributes)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Xml::IDtdAttributeListInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::IDtdAttributeListInfo>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
 bool ::System::Xml::IDtdAttributeListInfo::get_HasNonCDataAttributes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::IDtdAttributeListInfo>::get(),
                            "get_HasNonCDataAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Xml::IDtdAttributeInfo ::System::Xml::IDtdAttributeListInfo::LookupAttribute(::StringW prefix, ::StringW localName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::IDtdAttributeListInfo>::get(),
                            "LookupAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::IDtdAttributeInfo, false>(const_cast<void*>(instance), ___internal_method, prefix, localName);
}
 ::System::Collections::Generic::IEnumerable_1<::System::Xml::IDtdDefaultAttributeInfo> ::System::Xml::IDtdAttributeListInfo::LookupDefaultAttributes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::IDtdAttributeListInfo>::get(),
                            "LookupDefaultAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Xml::IDtdDefaultAttributeInfo>, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
