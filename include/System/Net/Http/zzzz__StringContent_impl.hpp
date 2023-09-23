#pragma once
#include "System/Net/Http/zzzz__ByteArrayContent_impl.hpp"
#include "System/Net/Http/zzzz__StringContent_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
//  Writing Method size for method: System::Net::Http::StringContent._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::StringContent::*)(::StringW)>(&System::Net::Http::StringContent::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x26a2d10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::StringContent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Http::StringContent._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::StringContent::*)(::StringW, System::Text::Encoding, ::StringW)>(&System::Net::Http::StringContent::_ctor)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x26a2d1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::StringContent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::Encoding>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Http::StringContent.GetByteArray
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(::StringW, System::Text::Encoding)>(&System::Net::Http::StringContent::GetByteArray)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x26a2e24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::StringContent>::get(),
                            "GetByteArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::Encoding>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "content", ty: "::StringW", modifiers: "", def_value: None }]
 System::Net::Http::StringContent::StringContent(::StringW content)  : System::Net::Http::ByteArrayContent(THROW_UNLESS(::il2cpp_utils::New<StringContent>(content))) {}
 void System::Net::Http::StringContent::_ctor(::StringW content)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::StringContent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, content);
}
// Ctor Parameters [CppParam { name: "content", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "encoding", ty: "System::Text::Encoding", modifiers: "", def_value: None }, CppParam { name: "mediaType", ty: "::StringW", modifiers: "", def_value: None }]
 System::Net::Http::StringContent::StringContent(::StringW content, System::Text::Encoding encoding, ::StringW mediaType)  : System::Net::Http::ByteArrayContent(THROW_UNLESS(::il2cpp_utils::New<StringContent>(content, encoding, mediaType))) {}
 void System::Net::Http::StringContent::_ctor(::StringW content, System::Text::Encoding encoding, ::StringW mediaType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::StringContent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::Encoding>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, content, encoding, mediaType);
}
 ::ArrayW<uint8_t> System::Net::Http::StringContent::GetByteArray(::StringW content, System::Text::Encoding encoding)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::StringContent>::get(),
                            "GetByteArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::Encoding>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(nullptr, ___internal_method, content, encoding);
}
