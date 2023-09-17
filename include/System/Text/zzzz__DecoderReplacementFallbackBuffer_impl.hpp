#pragma once
#include "System/Text/zzzz__DecoderFallbackBuffer_impl.hpp"
namespace {
#include "System/Text/zzzz__DecoderReplacementFallbackBuffer_def.hpp"
#include "System/Text/zzzz__DecoderReplacementFallback_def.hpp"
//  Writing Method size for method: ::System::Text::DecoderReplacementFallbackBuffer._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::DecoderReplacementFallbackBuffer::*)(::System::Text::DecoderReplacementFallback)>(&::System::Text::DecoderReplacementFallbackBuffer::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x24c430c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::DecoderReplacementFallbackBuffer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::DecoderReplacementFallback>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::DecoderReplacementFallbackBuffer.Fallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Text::DecoderReplacementFallbackBuffer::*)(::ArrayW<uint8_t>, int32_t)>(&::System::Text::DecoderReplacementFallbackBuffer::Fallback)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x24c4404;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Text::DecoderReplacementFallbackBuffer),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::DecoderReplacementFallbackBuffer>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::DecoderReplacementFallbackBuffer.GetNextChar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (::System::Text::DecoderReplacementFallbackBuffer::*)()>(&::System::Text::DecoderReplacementFallbackBuffer::GetNextChar)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x24c4448;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Text::DecoderReplacementFallbackBuffer),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::DecoderReplacementFallbackBuffer>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::DecoderReplacementFallbackBuffer.get_Remaining
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::DecoderReplacementFallbackBuffer::*)()>(&::System::Text::DecoderReplacementFallbackBuffer::get_Remaining)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x24c4498;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Text::DecoderReplacementFallbackBuffer),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::DecoderReplacementFallbackBuffer>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::DecoderReplacementFallbackBuffer.Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::DecoderReplacementFallbackBuffer::*)()>(&::System::Text::DecoderReplacementFallbackBuffer::Reset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x24c44a4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Text::DecoderReplacementFallbackBuffer),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::DecoderReplacementFallbackBuffer>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::DecoderReplacementFallbackBuffer.InternalFallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::DecoderReplacementFallbackBuffer::*)(::ArrayW<uint8_t>, void*)>(&::System::Text::DecoderReplacementFallbackBuffer::InternalFallback)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x24c44b4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Text::DecoderReplacementFallbackBuffer),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::DecoderReplacementFallbackBuffer>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
constexpr void ::System::Text::DecoderReplacementFallbackBuffer::__set__strDefault(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::System::Text::DecoderReplacementFallbackBuffer::__get__strDefault() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Text::DecoderReplacementFallbackBuffer::__set__fallbackCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Text::DecoderReplacementFallbackBuffer::__get__fallbackCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Text::DecoderReplacementFallbackBuffer::__set__fallbackIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Text::DecoderReplacementFallbackBuffer::__get__fallbackIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "fallback", ty: "::System::Text::DecoderReplacementFallback", modifiers: "", def_value: None }]
 ::System::Text::DecoderReplacementFallbackBuffer::DecoderReplacementFallbackBuffer(::System::Text::DecoderReplacementFallback fallback)  : ::System::Text::DecoderFallbackBuffer(THROW_UNLESS(::il2cpp_utils::New<DecoderReplacementFallbackBuffer>(fallback))) {}
 void ::System::Text::DecoderReplacementFallbackBuffer::_ctor(::System::Text::DecoderReplacementFallback fallback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::DecoderReplacementFallbackBuffer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::DecoderReplacementFallback>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, fallback);
}
 bool ::System::Text::DecoderReplacementFallbackBuffer::Fallback(::ArrayW<uint8_t> bytesUnknown, int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::DecoderReplacementFallbackBuffer>::get(),
                            "Fallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, bytesUnknown, index);
}
 char16_t ::System::Text::DecoderReplacementFallbackBuffer::GetNextChar()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::DecoderReplacementFallbackBuffer>::get(),
                            "GetNextChar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<char16_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::System::Text::DecoderReplacementFallbackBuffer::get_Remaining()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::DecoderReplacementFallbackBuffer>::get(),
                            "get_Remaining",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Text::DecoderReplacementFallbackBuffer::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::DecoderReplacementFallbackBuffer>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::System::Text::DecoderReplacementFallbackBuffer::InternalFallback(::ArrayW<uint8_t> bytes, void* pBytes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::DecoderReplacementFallbackBuffer>::get(),
                            "InternalFallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, bytes, pBytes);
}
} // end anonymous namespace
