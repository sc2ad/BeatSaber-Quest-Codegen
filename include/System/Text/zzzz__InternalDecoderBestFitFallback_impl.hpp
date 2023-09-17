#pragma once
#include "System/Text/zzzz__DecoderFallback_impl.hpp"
namespace {
#include "System/Text/zzzz__InternalDecoderBestFitFallback_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "System/Text/zzzz__DecoderFallbackBuffer_def.hpp"
//  Writing Method size for method: ::System::Text::InternalDecoderBestFitFallback._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::InternalDecoderBestFitFallback::*)(::System::Text::Encoding)>(&::System::Text::InternalDecoderBestFitFallback::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x24c25c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::InternalDecoderBestFitFallback>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::InternalDecoderBestFitFallback.CreateFallbackBuffer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::DecoderFallbackBuffer (::System::Text::InternalDecoderBestFitFallback::*)()>(&::System::Text::InternalDecoderBestFitFallback::CreateFallbackBuffer)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x24c25fc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Text::InternalDecoderBestFitFallback),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::InternalDecoderBestFitFallback>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::InternalDecoderBestFitFallback.get_MaxCharCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::InternalDecoderBestFitFallback::*)()>(&::System::Text::InternalDecoderBestFitFallback::get_MaxCharCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24c2784;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Text::InternalDecoderBestFitFallback),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::InternalDecoderBestFitFallback>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::InternalDecoderBestFitFallback.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Text::InternalDecoderBestFitFallback::*)(::bs_hook::Il2CppWrapperType)>(&::System::Text::InternalDecoderBestFitFallback::Equals)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x24c278c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Text::InternalDecoderBestFitFallback),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::InternalDecoderBestFitFallback>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::InternalDecoderBestFitFallback.GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::InternalDecoderBestFitFallback::*)()>(&::System::Text::InternalDecoderBestFitFallback::GetHashCode)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x24c2834;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Text::InternalDecoderBestFitFallback),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::InternalDecoderBestFitFallback>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
constexpr void ::System::Text::InternalDecoderBestFitFallback::__set__encoding(::System::Text::Encoding value)  {
::cordl_internals::setInstanceField<::System::Text::Encoding, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Text::Encoding>(value));
}
constexpr ::System::Text::Encoding ::System::Text::InternalDecoderBestFitFallback::__get__encoding() const {
return ::cordl_internals::getInstanceField<::System::Text::Encoding, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Text::InternalDecoderBestFitFallback::__set__arrayBestFit(::ArrayW<char16_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<char16_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<char16_t>>(value));
}
constexpr ::ArrayW<char16_t> ::System::Text::InternalDecoderBestFitFallback::__get__arrayBestFit() const {
return ::cordl_internals::getInstanceField<::ArrayW<char16_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Text::InternalDecoderBestFitFallback::__set__cReplacement(char16_t value)  {
::cordl_internals::setInstanceField<char16_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<char16_t>(value));
}
constexpr char16_t ::System::Text::InternalDecoderBestFitFallback::__get__cReplacement() const {
return ::cordl_internals::getInstanceField<char16_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "encoding", ty: "::System::Text::Encoding", modifiers: "", def_value: None }]
 ::System::Text::InternalDecoderBestFitFallback::InternalDecoderBestFitFallback(::System::Text::Encoding encoding)  : ::System::Text::DecoderFallback(THROW_UNLESS(::il2cpp_utils::New<InternalDecoderBestFitFallback>(encoding))) {}
 void ::System::Text::InternalDecoderBestFitFallback::_ctor(::System::Text::Encoding encoding)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::InternalDecoderBestFitFallback>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, encoding);
}
 ::System::Text::DecoderFallbackBuffer ::System::Text::InternalDecoderBestFitFallback::CreateFallbackBuffer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::InternalDecoderBestFitFallback>::get(),
                            "CreateFallbackBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Text::DecoderFallbackBuffer, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::System::Text::InternalDecoderBestFitFallback::get_MaxCharCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::InternalDecoderBestFitFallback>::get(),
                            "get_MaxCharCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::System::Text::InternalDecoderBestFitFallback::Equals(::bs_hook::Il2CppWrapperType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::InternalDecoderBestFitFallback>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t ::System::Text::InternalDecoderBestFitFallback::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::InternalDecoderBestFitFallback>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
