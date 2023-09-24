#pragma once
#include "System/Xml/zzzz__IDtdParser_def.hpp"
#include "System/Xml/zzzz__IDtdParserAdapter_def.hpp"
#include "System/Xml/zzzz__IDtdInfo_def.hpp"
//  Writing Method size for method: System::Xml::IDtdParser.ParseInternalDtd
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Xml::IDtdInfo (System::Xml::IDtdParser::*)(System::Xml::IDtdParserAdapter, bool)>(&System::Xml::IDtdParser::ParseInternalDtd)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::IDtdParser),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::IDtdParser>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::IDtdParser.ParseFreeFloatingDtd
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Xml::IDtdInfo (System::Xml::IDtdParser::*)(::StringW, ::StringW, ::StringW, ::StringW, ::StringW, System::Xml::IDtdParserAdapter)>(&System::Xml::IDtdParser::ParseFreeFloatingDtd)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::IDtdParser),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::IDtdParser>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
 System::Xml::IDtdInfo System::Xml::IDtdParser::ParseInternalDtd(System::Xml::IDtdParserAdapter adapter, bool saveInternalSubset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::IDtdParser>::get(),
                            "ParseInternalDtd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::IDtdParserAdapter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Xml::IDtdInfo, false>(const_cast<void*>(instance), ___internal_method, adapter, saveInternalSubset);
}
 System::Xml::IDtdInfo System::Xml::IDtdParser::ParseFreeFloatingDtd(::StringW baseUri, ::StringW docTypeName, ::StringW publicId, ::StringW systemId, ::StringW internalSubset, System::Xml::IDtdParserAdapter adapter)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::IDtdParser>::get(),
                            "ParseFreeFloatingDtd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::IDtdParserAdapter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Xml::IDtdInfo, false>(const_cast<void*>(instance), ___internal_method, baseUri, docTypeName, publicId, systemId, internalSubset, adapter);
}
