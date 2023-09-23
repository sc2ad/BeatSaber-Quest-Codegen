#pragma once
#include "System/Text/zzzz__EncodingProvider_def.hpp"
#include "System/Text/zzzz__EncoderFallback_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "System/Text/zzzz__DecoderFallback_def.hpp"
//  Writing Method size for method: System::Text::EncodingProvider.GetEncoding
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Text::Encoding (System::Text::EncodingProvider::*)(::StringW)>(&System::Text::EncodingProvider::GetEncoding)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::EncodingProvider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::EncodingProvider>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::EncodingProvider.GetEncoding
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Text::Encoding (System::Text::EncodingProvider::*)(int32_t)>(&System::Text::EncodingProvider::GetEncoding)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::EncodingProvider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::EncodingProvider>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::EncodingProvider.GetEncoding
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Text::Encoding (System::Text::EncodingProvider::*)(int32_t, System::Text::EncoderFallback, System::Text::DecoderFallback)>(&System::Text::EncodingProvider::GetEncoding)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x22cb1b8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::EncodingProvider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::EncodingProvider>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::EncodingProvider.GetEncodingFromProvider
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Text::Encoding (*)(int32_t)>(&System::Text::EncodingProvider::GetEncodingFromProvider)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x22cb2b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::EncodingProvider>::get(),
                            "GetEncodingFromProvider",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::EncodingProvider.GetEncodingFromProvider
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Text::Encoding (*)(::StringW)>(&System::Text::EncodingProvider::GetEncodingFromProvider)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x22cb390;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::EncodingProvider>::get(),
                            "GetEncodingFromProvider",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::EncodingProvider.GetEncodingFromProvider
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Text::Encoding (*)(int32_t, System::Text::EncoderFallback, System::Text::DecoderFallback)>(&System::Text::EncodingProvider::GetEncodingFromProvider)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x22cb46c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::EncodingProvider>::get(),
                            "GetEncodingFromProvider",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::EncoderFallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::DecoderFallback>::get()}
                        )));
    return ___internal_method;
  }
};
 void System::Text::EncodingProvider::__set_s_InternalSyncObject(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setStaticField<::bs_hook::Il2CppWrapperType, "s_InternalSyncObject", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::EncodingProvider>::get>(std::forward<::bs_hook::Il2CppWrapperType>(value));
}
 ::bs_hook::Il2CppWrapperType System::Text::EncodingProvider::__get_s_InternalSyncObject()  {
return ::cordl_internals::getStaticField<::bs_hook::Il2CppWrapperType, "s_InternalSyncObject", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::EncodingProvider>::get>();
}
 void System::Text::EncodingProvider::__set_s_providers(::ArrayW<System::Text::EncodingProvider> value)  {
::cordl_internals::setStaticField<::ArrayW<System::Text::EncodingProvider>, "s_providers", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::EncodingProvider>::get>(std::forward<::ArrayW<System::Text::EncodingProvider>>(value));
}
 ::ArrayW<System::Text::EncodingProvider> System::Text::EncodingProvider::__get_s_providers()  {
return ::cordl_internals::getStaticField<::ArrayW<System::Text::EncodingProvider>, "s_providers", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::EncodingProvider>::get>();
}
 System::Text::Encoding System::Text::EncodingProvider::GetEncoding(::StringW name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::EncodingProvider>::get(),
                            "GetEncoding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Text::Encoding, false>(const_cast<void*>(instance), ___internal_method, name);
}
 System::Text::Encoding System::Text::EncodingProvider::GetEncoding(int32_t codepage)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::EncodingProvider>::get(),
                            "GetEncoding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Text::Encoding, false>(const_cast<void*>(instance), ___internal_method, codepage);
}
 System::Text::Encoding System::Text::EncodingProvider::GetEncoding(int32_t codepage, System::Text::EncoderFallback encoderFallback, System::Text::DecoderFallback decoderFallback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::EncodingProvider>::get(),
                            "GetEncoding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::EncoderFallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::DecoderFallback>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Text::Encoding, false>(const_cast<void*>(instance), ___internal_method, codepage, encoderFallback, decoderFallback);
}
 System::Text::Encoding System::Text::EncodingProvider::GetEncodingFromProvider(int32_t codepage)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::EncodingProvider>::get(),
                            "GetEncodingFromProvider",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Text::Encoding, false>(nullptr, ___internal_method, codepage);
}
 System::Text::Encoding System::Text::EncodingProvider::GetEncodingFromProvider(::StringW encodingName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::EncodingProvider>::get(),
                            "GetEncodingFromProvider",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Text::Encoding, false>(nullptr, ___internal_method, encodingName);
}
 System::Text::Encoding System::Text::EncodingProvider::GetEncodingFromProvider(int32_t codepage, System::Text::EncoderFallback enc, System::Text::DecoderFallback dec)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::EncodingProvider>::get(),
                            "GetEncodingFromProvider",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::EncoderFallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::DecoderFallback>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Text::Encoding, false>(nullptr, ___internal_method, codepage, enc, dec);
}
