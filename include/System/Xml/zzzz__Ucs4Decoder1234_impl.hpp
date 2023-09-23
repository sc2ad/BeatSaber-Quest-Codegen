#pragma once
#include "System/Xml/zzzz__Ucs4Decoder_impl.hpp"
#include "System/Xml/zzzz__Ucs4Decoder1234_def.hpp"
//  Writing Method size for method: System::Xml::Ucs4Decoder1234.GetFullChars
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Xml::Ucs4Decoder1234::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::ArrayW<char16_t>, int32_t)>(&System::Xml::Ucs4Decoder1234::GetFullChars)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x2712f8c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::Ucs4Decoder1234),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Ucs4Decoder1234>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::Ucs4Decoder1234._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Ucs4Decoder1234::*)()>(&System::Xml::Ucs4Decoder1234::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2712658;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Ucs4Decoder1234>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 int32_t System::Xml::Ucs4Decoder1234::GetFullChars(::ArrayW<uint8_t> bytes, int32_t byteIndex, int32_t byteCount, ::ArrayW<char16_t> chars, int32_t charIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Ucs4Decoder1234>::get(),
                            "GetFullChars",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, bytes, byteIndex, byteCount, chars, charIndex);
}
// Ctor Parameters []
 System::Xml::Ucs4Decoder1234::Ucs4Decoder1234()  : System::Xml::Ucs4Decoder(THROW_UNLESS(::il2cpp_utils::New<Ucs4Decoder1234>())) {}
 void System::Xml::Ucs4Decoder1234::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Ucs4Decoder1234>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
