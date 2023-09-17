#pragma once
#include "System/Text/zzzz__EncoderFallback_impl.hpp"
namespace {
#include "System/Text/zzzz__InternalEncoderBestFitFallback_def.hpp"
#include "System/Text/zzzz__EncoderFallbackBuffer_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
//  Writing Method size for method: ::System::Text::InternalEncoderBestFitFallback._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::InternalEncoderBestFitFallback::*)(::System::Text::Encoding)>(&::System::Text::InternalEncoderBestFitFallback::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x24c4e6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::InternalEncoderBestFitFallback>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::InternalEncoderBestFitFallback.CreateFallbackBuffer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::EncoderFallbackBuffer (::System::Text::InternalEncoderBestFitFallback::*)()>(&::System::Text::InternalEncoderBestFitFallback::CreateFallbackBuffer)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x24c4e9c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Text::InternalEncoderBestFitFallback),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::InternalEncoderBestFitFallback>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::InternalEncoderBestFitFallback.get_MaxCharCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::InternalEncoderBestFitFallback::*)()>(&::System::Text::InternalEncoderBestFitFallback::get_MaxCharCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24c5024;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Text::InternalEncoderBestFitFallback),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::InternalEncoderBestFitFallback>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::InternalEncoderBestFitFallback.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Text::InternalEncoderBestFitFallback::*)(::bs_hook::Il2CppWrapperType)>(&::System::Text::InternalEncoderBestFitFallback::Equals)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x24c502c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Text::InternalEncoderBestFitFallback),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::InternalEncoderBestFitFallback>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::InternalEncoderBestFitFallback.GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::InternalEncoderBestFitFallback::*)()>(&::System::Text::InternalEncoderBestFitFallback::GetHashCode)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x24c50f0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Text::InternalEncoderBestFitFallback),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::InternalEncoderBestFitFallback>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
constexpr void ::System::Text::InternalEncoderBestFitFallback::__set__encoding(::System::Text::Encoding value)  {
::cordl_internals::setInstanceField<::System::Text::Encoding, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Text::Encoding>(value));
}
constexpr ::System::Text::Encoding ::System::Text::InternalEncoderBestFitFallback::__get__encoding() const {
return ::cordl_internals::getInstanceField<::System::Text::Encoding, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Text::InternalEncoderBestFitFallback::__set__arrayBestFit(::ArrayW<char16_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<char16_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<char16_t>>(value));
}
constexpr ::ArrayW<char16_t> ::System::Text::InternalEncoderBestFitFallback::__get__arrayBestFit() const {
return ::cordl_internals::getInstanceField<::ArrayW<char16_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "encoding", ty: "::System::Text::Encoding", modifiers: "", def_value: None }]
 ::System::Text::InternalEncoderBestFitFallback::InternalEncoderBestFitFallback(::System::Text::Encoding encoding)  : ::System::Text::EncoderFallback(THROW_UNLESS(::il2cpp_utils::New<InternalEncoderBestFitFallback>(encoding))) {}
 void ::System::Text::InternalEncoderBestFitFallback::_ctor(::System::Text::Encoding encoding)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::InternalEncoderBestFitFallback>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, encoding);
}
 ::System::Text::EncoderFallbackBuffer ::System::Text::InternalEncoderBestFitFallback::CreateFallbackBuffer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::InternalEncoderBestFitFallback>::get(),
                            "CreateFallbackBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Text::EncoderFallbackBuffer, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::System::Text::InternalEncoderBestFitFallback::get_MaxCharCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::InternalEncoderBestFitFallback>::get(),
                            "get_MaxCharCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::System::Text::InternalEncoderBestFitFallback::Equals(::bs_hook::Il2CppWrapperType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::InternalEncoderBestFitFallback>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t ::System::Text::InternalEncoderBestFitFallback::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::InternalEncoderBestFitFallback>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
