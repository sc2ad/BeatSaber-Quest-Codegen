#pragma once
#include "System/Xml/zzzz__Ucs4Encoding_impl.hpp"
namespace {
#include "System/Xml/zzzz__Ucs4Encoding1234_def.hpp"
//  Writing Method size for method: ::System::Xml::Ucs4Encoding1234._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Ucs4Encoding1234::*)()>(&::System::Xml::Ucs4Encoding1234::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2712468;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Ucs4Encoding1234>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Ucs4Encoding1234.get_EncodingName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::Ucs4Encoding1234::*)()>(&::System::Xml::Ucs4Encoding1234::get_EncodingName)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x271265c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Xml::Ucs4Encoding1234),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Ucs4Encoding1234>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Ucs4Encoding1234.GetPreamble
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (::System::Xml::Ucs4Encoding1234::*)()>(&::System::Xml::Ucs4Encoding1234::GetPreamble)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x271269c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Xml::Ucs4Encoding1234),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Ucs4Encoding1234>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters []
 ::System::Xml::Ucs4Encoding1234::Ucs4Encoding1234()  : ::System::Xml::Ucs4Encoding(THROW_UNLESS(::il2cpp_utils::New<Ucs4Encoding1234>())) {}
 void ::System::Xml::Ucs4Encoding1234::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Ucs4Encoding1234>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW ::System::Xml::Ucs4Encoding1234::get_EncodingName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Ucs4Encoding1234>::get(),
                            "get_EncodingName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<uint8_t> ::System::Xml::Ucs4Encoding1234::GetPreamble()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Ucs4Encoding1234>::get(),
                            "GetPreamble",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
