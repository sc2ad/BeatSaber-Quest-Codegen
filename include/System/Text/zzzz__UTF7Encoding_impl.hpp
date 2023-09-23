#pragma once
#include "System/Text/zzzz__DecoderFallbackBuffer_impl.hpp"
#include "System/Text/zzzz__DecoderFallback_impl.hpp"
#include "System/Text/zzzz__DecoderNLS_impl.hpp"
#include "System/Text/zzzz__EncoderNLS_impl.hpp"
#include "System/Text/zzzz__Encoding_impl.hpp"
#include "System/Text/zzzz__UTF7Encoding_def.hpp"
#include "System/Text/zzzz__DecoderFallbackBuffer_def.hpp"
#include "System/Text/zzzz__Decoder_def.hpp"
#include "System/Text/zzzz__EncoderNLS_def.hpp"
#include "System/Text/zzzz__Encoder_def.hpp"
#include "System/Text/zzzz__DecoderNLS_def.hpp"
//  Writing Method size for method: System::Text::System__Text__UTF7Encoding__Decoder._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::System__Text__UTF7Encoding__Decoder::*)(System::Text::UTF7Encoding)>(&System::Text::System__Text__UTF7Encoding__Decoder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22d478c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__UTF7Encoding__Decoder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::UTF7Encoding>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::System__Text__UTF7Encoding__Decoder.Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::System__Text__UTF7Encoding__Decoder::*)()>(&System::Text::System__Text__UTF7Encoding__Decoder::Reset)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x22d49b0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::System__Text__UTF7Encoding__Decoder),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__UTF7Encoding__Decoder>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::System__Text__UTF7Encoding__Decoder.get_HasState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Text::System__Text__UTF7Encoding__Decoder::*)()>(&System::Text::System__Text__UTF7Encoding__Decoder::get_HasState)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x22d49d8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::System__Text__UTF7Encoding__Decoder),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__UTF7Encoding__Decoder>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
constexpr void System::Text::System__Text__UTF7Encoding__Decoder::__set_bits(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Text::System__Text__UTF7Encoding__Decoder::__get_bits() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Text::System__Text__UTF7Encoding__Decoder::__set_bitCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x34>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Text::System__Text__UTF7Encoding__Decoder::__get_bitCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x34>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Text::System__Text__UTF7Encoding__Decoder::__set_firstByte(bool value)  {
::cordl_internals::setInstanceField<bool, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Text::System__Text__UTF7Encoding__Decoder::__get_firstByte() const {
return ::cordl_internals::getInstanceField<bool, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "encoding", ty: "System::Text::UTF7Encoding", modifiers: "", def_value: None }]
 System::Text::System__Text__UTF7Encoding__Decoder::System__Text__UTF7Encoding__Decoder(System::Text::UTF7Encoding encoding)  : System::Text::DecoderNLS(THROW_UNLESS(::il2cpp_utils::New<System__Text__UTF7Encoding__Decoder>(encoding))) {}
 void System::Text::System__Text__UTF7Encoding__Decoder::_ctor(System::Text::UTF7Encoding encoding)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__UTF7Encoding__Decoder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::UTF7Encoding>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, encoding);
}
 void System::Text::System__Text__UTF7Encoding__Decoder::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__UTF7Encoding__Decoder>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Text::System__Text__UTF7Encoding__Decoder::get_HasState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__UTF7Encoding__Decoder>::get(),
                            "get_HasState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: System::Text::System__Text__UTF7Encoding__Encoder._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::System__Text__UTF7Encoding__Encoder::*)(System::Text::UTF7Encoding)>(&System::Text::System__Text__UTF7Encoding__Encoder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22d47f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__UTF7Encoding__Encoder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::UTF7Encoding>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::System__Text__UTF7Encoding__Encoder.Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::System__Text__UTF7Encoding__Encoder::*)()>(&System::Text::System__Text__UTF7Encoding__Encoder::Reset)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x22d49e8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::System__Text__UTF7Encoding__Encoder),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__UTF7Encoding__Encoder>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::System__Text__UTF7Encoding__Encoder.get_HasState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Text::System__Text__UTF7Encoding__Encoder::*)()>(&System::Text::System__Text__UTF7Encoding__Encoder::get_HasState)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x22d4a0c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::System__Text__UTF7Encoding__Encoder),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__UTF7Encoding__Encoder>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
constexpr void System::Text::System__Text__UTF7Encoding__Encoder::__set_bits(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Text::System__Text__UTF7Encoding__Encoder::__get_bits() const {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Text::System__Text__UTF7Encoding__Encoder::__set_bitCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Text::System__Text__UTF7Encoding__Encoder::__get_bitCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "encoding", ty: "System::Text::UTF7Encoding", modifiers: "", def_value: None }]
 System::Text::System__Text__UTF7Encoding__Encoder::System__Text__UTF7Encoding__Encoder(System::Text::UTF7Encoding encoding)  : System::Text::EncoderNLS(THROW_UNLESS(::il2cpp_utils::New<System__Text__UTF7Encoding__Encoder>(encoding))) {}
 void System::Text::System__Text__UTF7Encoding__Encoder::_ctor(System::Text::UTF7Encoding encoding)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__UTF7Encoding__Encoder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::UTF7Encoding>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, encoding);
}
 void System::Text::System__Text__UTF7Encoding__Encoder::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__UTF7Encoding__Encoder>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Text::System__Text__UTF7Encoding__Encoder::get_HasState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__UTF7Encoding__Encoder>::get(),
                            "get_HasState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: System::Text::System__Text__UTF7Encoding__DecoderUTF7Fallback._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::System__Text__UTF7Encoding__DecoderUTF7Fallback::*)()>(&System::Text::System__Text__UTF7Encoding__DecoderUTF7Fallback::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22d2f0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__UTF7Encoding__DecoderUTF7Fallback>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::System__Text__UTF7Encoding__DecoderUTF7Fallback.CreateFallbackBuffer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Text::DecoderFallbackBuffer (System::Text::System__Text__UTF7Encoding__DecoderUTF7Fallback::*)()>(&System::Text::System__Text__UTF7Encoding__DecoderUTF7Fallback::CreateFallbackBuffer)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x22d4a2c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::System__Text__UTF7Encoding__DecoderUTF7Fallback),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__UTF7Encoding__DecoderUTF7Fallback>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::System__Text__UTF7Encoding__DecoderUTF7Fallback.get_MaxCharCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Text::System__Text__UTF7Encoding__DecoderUTF7Fallback::*)()>(&System::Text::System__Text__UTF7Encoding__DecoderUTF7Fallback::get_MaxCharCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22d4aa0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::System__Text__UTF7Encoding__DecoderUTF7Fallback),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__UTF7Encoding__DecoderUTF7Fallback>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::System__Text__UTF7Encoding__DecoderUTF7Fallback.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Text::System__Text__UTF7Encoding__DecoderUTF7Fallback::*)(::bs_hook::Il2CppWrapperType)>(&System::Text::System__Text__UTF7Encoding__DecoderUTF7Fallback::Equals)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x22d4aa8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::System__Text__UTF7Encoding__DecoderUTF7Fallback),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__UTF7Encoding__DecoderUTF7Fallback>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::System__Text__UTF7Encoding__DecoderUTF7Fallback.GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Text::System__Text__UTF7Encoding__DecoderUTF7Fallback::*)()>(&System::Text::System__Text__UTF7Encoding__DecoderUTF7Fallback::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22d4b04;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::System__Text__UTF7Encoding__DecoderUTF7Fallback),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__UTF7Encoding__DecoderUTF7Fallback>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters []
 System::Text::System__Text__UTF7Encoding__DecoderUTF7Fallback::System__Text__UTF7Encoding__DecoderUTF7Fallback()  : System::Text::DecoderFallback(THROW_UNLESS(::il2cpp_utils::New<System__Text__UTF7Encoding__DecoderUTF7Fallback>())) {}
 void System::Text::System__Text__UTF7Encoding__DecoderUTF7Fallback::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__UTF7Encoding__DecoderUTF7Fallback>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Text::DecoderFallbackBuffer System::Text::System__Text__UTF7Encoding__DecoderUTF7Fallback::CreateFallbackBuffer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__UTF7Encoding__DecoderUTF7Fallback>::get(),
                            "CreateFallbackBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Text::DecoderFallbackBuffer, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::Text::System__Text__UTF7Encoding__DecoderUTF7Fallback::get_MaxCharCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__UTF7Encoding__DecoderUTF7Fallback>::get(),
                            "get_MaxCharCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Text::System__Text__UTF7Encoding__DecoderUTF7Fallback::Equals(::bs_hook::Il2CppWrapperType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__UTF7Encoding__DecoderUTF7Fallback>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t System::Text::System__Text__UTF7Encoding__DecoderUTF7Fallback::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__UTF7Encoding__DecoderUTF7Fallback>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: System::Text::System__Text__UTF7Encoding__DecoderUTF7FallbackBuffer._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::System__Text__UTF7Encoding__DecoderUTF7FallbackBuffer::*)(System::Text::System__Text__UTF7Encoding__DecoderUTF7Fallback)>(&System::Text::System__Text__UTF7Encoding__DecoderUTF7FallbackBuffer::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x22d4a90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__UTF7Encoding__DecoderUTF7FallbackBuffer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::System__Text__UTF7Encoding__DecoderUTF7Fallback>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::System__Text__UTF7Encoding__DecoderUTF7FallbackBuffer.Fallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Text::System__Text__UTF7Encoding__DecoderUTF7FallbackBuffer::*)(::ArrayW<uint8_t>, int32_t)>(&System::Text::System__Text__UTF7Encoding__DecoderUTF7FallbackBuffer::Fallback)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x22d4b0c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::System__Text__UTF7Encoding__DecoderUTF7FallbackBuffer),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__UTF7Encoding__DecoderUTF7FallbackBuffer>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::System__Text__UTF7Encoding__DecoderUTF7FallbackBuffer.GetNextChar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (System::Text::System__Text__UTF7Encoding__DecoderUTF7FallbackBuffer::*)()>(&System::Text::System__Text__UTF7Encoding__DecoderUTF7FallbackBuffer::GetNextChar)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x22d4b4c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::System__Text__UTF7Encoding__DecoderUTF7FallbackBuffer),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__UTF7Encoding__DecoderUTF7FallbackBuffer>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::System__Text__UTF7Encoding__DecoderUTF7FallbackBuffer.get_Remaining
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Text::System__Text__UTF7Encoding__DecoderUTF7FallbackBuffer::*)()>(&System::Text::System__Text__UTF7Encoding__DecoderUTF7FallbackBuffer::get_Remaining)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x22d4b6c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::System__Text__UTF7Encoding__DecoderUTF7FallbackBuffer),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__UTF7Encoding__DecoderUTF7FallbackBuffer>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::System__Text__UTF7Encoding__DecoderUTF7FallbackBuffer.Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::System__Text__UTF7Encoding__DecoderUTF7FallbackBuffer::*)()>(&System::Text::System__Text__UTF7Encoding__DecoderUTF7FallbackBuffer::Reset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x22d4b78;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::System__Text__UTF7Encoding__DecoderUTF7FallbackBuffer),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__UTF7Encoding__DecoderUTF7FallbackBuffer>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::System__Text__UTF7Encoding__DecoderUTF7FallbackBuffer.InternalFallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Text::System__Text__UTF7Encoding__DecoderUTF7FallbackBuffer::*)(::ArrayW<uint8_t>, void*)>(&System::Text::System__Text__UTF7Encoding__DecoderUTF7FallbackBuffer::InternalFallback)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x22d4b88;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::System__Text__UTF7Encoding__DecoderUTF7FallbackBuffer),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__UTF7Encoding__DecoderUTF7FallbackBuffer>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
constexpr void System::Text::System__Text__UTF7Encoding__DecoderUTF7FallbackBuffer::__set_cFallback(char16_t value)  {
::cordl_internals::setInstanceField<char16_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<char16_t>(value));
}
constexpr char16_t System::Text::System__Text__UTF7Encoding__DecoderUTF7FallbackBuffer::__get_cFallback() const {
return ::cordl_internals::getInstanceField<char16_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Text::System__Text__UTF7Encoding__DecoderUTF7FallbackBuffer::__set_iCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Text::System__Text__UTF7Encoding__DecoderUTF7FallbackBuffer::__get_iCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Text::System__Text__UTF7Encoding__DecoderUTF7FallbackBuffer::__set_iSize(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Text::System__Text__UTF7Encoding__DecoderUTF7FallbackBuffer::__get_iSize() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "fallback", ty: "System::Text::System__Text__UTF7Encoding__DecoderUTF7Fallback", modifiers: "", def_value: None }]
 System::Text::System__Text__UTF7Encoding__DecoderUTF7FallbackBuffer::System__Text__UTF7Encoding__DecoderUTF7FallbackBuffer(System::Text::System__Text__UTF7Encoding__DecoderUTF7Fallback fallback)  : System::Text::DecoderFallbackBuffer(THROW_UNLESS(::il2cpp_utils::New<System__Text__UTF7Encoding__DecoderUTF7FallbackBuffer>(fallback))) {}
 void System::Text::System__Text__UTF7Encoding__DecoderUTF7FallbackBuffer::_ctor(System::Text::System__Text__UTF7Encoding__DecoderUTF7Fallback fallback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__UTF7Encoding__DecoderUTF7FallbackBuffer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::System__Text__UTF7Encoding__DecoderUTF7Fallback>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, fallback);
}
 bool System::Text::System__Text__UTF7Encoding__DecoderUTF7FallbackBuffer::Fallback(::ArrayW<uint8_t> bytesUnknown, int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__UTF7Encoding__DecoderUTF7FallbackBuffer>::get(),
                            "Fallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, bytesUnknown, index);
}
 char16_t System::Text::System__Text__UTF7Encoding__DecoderUTF7FallbackBuffer::GetNextChar()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__UTF7Encoding__DecoderUTF7FallbackBuffer>::get(),
                            "GetNextChar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<char16_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::Text::System__Text__UTF7Encoding__DecoderUTF7FallbackBuffer::get_Remaining()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__UTF7Encoding__DecoderUTF7FallbackBuffer>::get(),
                            "get_Remaining",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Text::System__Text__UTF7Encoding__DecoderUTF7FallbackBuffer::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__UTF7Encoding__DecoderUTF7FallbackBuffer>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::Text::System__Text__UTF7Encoding__DecoderUTF7FallbackBuffer::InternalFallback(::ArrayW<uint8_t> bytes, void* pBytes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__UTF7Encoding__DecoderUTF7FallbackBuffer>::get(),
                            "InternalFallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, bytes, pBytes);
}
//  Writing Method size for method: System::Text::UTF7Encoding._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::UTF7Encoding::*)()>(&System::Text::UTF7Encoding::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x22d2b7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF7Encoding>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::UTF7Encoding._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::UTF7Encoding::*)(bool)>(&System::Text::UTF7Encoding::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x22d2ba0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF7Encoding>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::UTF7Encoding.MakeTables
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::UTF7Encoding::*)()>(&System::Text::UTF7Encoding::MakeTables)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x22d2bd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF7Encoding>::get(),
                            "MakeTables",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::UTF7Encoding.SetDefaultFallbacks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::UTF7Encoding::*)()>(&System::Text::UTF7Encoding::SetDefaultFallbacks)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x22d2e54;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::UTF7Encoding),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF7Encoding>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::UTF7Encoding.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Text::UTF7Encoding::*)(::bs_hook::Il2CppWrapperType)>(&System::Text::UTF7Encoding::Equals)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x22d2f14;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::UTF7Encoding),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF7Encoding>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::UTF7Encoding.GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Text::UTF7Encoding::*)()>(&System::Text::UTF7Encoding::GetHashCode)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x22d2fe4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::UTF7Encoding),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF7Encoding>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::UTF7Encoding.GetByteCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Text::UTF7Encoding::*)(::ArrayW<char16_t>, int32_t, int32_t)>(&System::Text::UTF7Encoding::GetByteCount)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x22d3050;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::UTF7Encoding),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF7Encoding>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::UTF7Encoding.GetByteCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Text::UTF7Encoding::*)(::StringW)>(&System::Text::UTF7Encoding::GetByteCount)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x22d31d4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::UTF7Encoding),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF7Encoding>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::UTF7Encoding.GetByteCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Text::UTF7Encoding::*)(void*, int32_t)>(&System::Text::UTF7Encoding::GetByteCount)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x22d3264;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::UTF7Encoding),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF7Encoding>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::UTF7Encoding.GetBytes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Text::UTF7Encoding::*)(::StringW, int32_t, int32_t, ::ArrayW<uint8_t>, int32_t)>(&System::Text::UTF7Encoding::GetBytes)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x22d333c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::UTF7Encoding),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF7Encoding>::get(),
                                  19
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::UTF7Encoding.GetBytes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Text::UTF7Encoding::*)(::ArrayW<char16_t>, int32_t, int32_t, ::ArrayW<uint8_t>, int32_t)>(&System::Text::UTF7Encoding::GetBytes)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x22d359c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::UTF7Encoding),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF7Encoding>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::UTF7Encoding.GetBytes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Text::UTF7Encoding::*)(void*, int32_t, void*, int32_t)>(&System::Text::UTF7Encoding::GetBytes)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x22d3818;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::UTF7Encoding),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF7Encoding>::get(),
                                  21
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::UTF7Encoding.GetCharCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Text::UTF7Encoding::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&System::Text::UTF7Encoding::GetCharCount)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x22d3918;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::UTF7Encoding),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF7Encoding>::get(),
                                  22
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::UTF7Encoding.GetCharCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Text::UTF7Encoding::*)(void*, int32_t)>(&System::Text::UTF7Encoding::GetCharCount)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x22d3a9c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::UTF7Encoding),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF7Encoding>::get(),
                                  23
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::UTF7Encoding.GetChars
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Text::UTF7Encoding::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::ArrayW<char16_t>, int32_t)>(&System::Text::UTF7Encoding::GetChars)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x22d3b74;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::UTF7Encoding),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF7Encoding>::get(),
                                  26
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::UTF7Encoding.GetChars
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Text::UTF7Encoding::*)(void*, int32_t, void*, int32_t)>(&System::Text::UTF7Encoding::GetChars)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x22d3df0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::UTF7Encoding),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF7Encoding>::get(),
                                  27
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::UTF7Encoding.GetString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Text::UTF7Encoding::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&System::Text::UTF7Encoding::GetString)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x22d3ef0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::UTF7Encoding),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF7Encoding>::get(),
                                  36
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::UTF7Encoding.GetByteCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Text::UTF7Encoding::*)(void*, int32_t, System::Text::EncoderNLS)>(&System::Text::UTF7Encoding::GetByteCount)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x22d40b8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::UTF7Encoding),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF7Encoding>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::UTF7Encoding.GetBytes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Text::UTF7Encoding::*)(void*, int32_t, void*, int32_t, System::Text::EncoderNLS)>(&System::Text::UTF7Encoding::GetBytes)> {
  constexpr static std::size_t size = 0x39c;
  constexpr static std::size_t addrs = 0x22d40d4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::UTF7Encoding),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF7Encoding>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::UTF7Encoding.GetCharCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Text::UTF7Encoding::*)(void*, int32_t, System::Text::DecoderNLS)>(&System::Text::UTF7Encoding::GetCharCount)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x22d4470;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::UTF7Encoding),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF7Encoding>::get(),
                                  24
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::UTF7Encoding.GetChars
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Text::UTF7Encoding::*)(void*, int32_t, void*, int32_t, System::Text::DecoderNLS)>(&System::Text::UTF7Encoding::GetChars)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x22d448c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::UTF7Encoding),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF7Encoding>::get(),
                                  28
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::UTF7Encoding.GetDecoder
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Text::Decoder (System::Text::UTF7Encoding::*)()>(&System::Text::UTF7Encoding::GetDecoder)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x22d4728;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::UTF7Encoding),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF7Encoding>::get(),
                                  31
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::UTF7Encoding.GetEncoder
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Text::Encoder (System::Text::UTF7Encoding::*)()>(&System::Text::UTF7Encoding::GetEncoder)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x22d4794;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::UTF7Encoding),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF7Encoding>::get(),
                                  32
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::UTF7Encoding.GetMaxByteCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Text::UTF7Encoding::*)(int32_t)>(&System::Text::UTF7Encoding::GetMaxByteCount)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x22d4800;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::UTF7Encoding),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF7Encoding>::get(),
                                  33
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::UTF7Encoding.GetMaxCharCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Text::UTF7Encoding::*)(int32_t)>(&System::Text::UTF7Encoding::GetMaxCharCount)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x22d48c4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::UTF7Encoding),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF7Encoding>::get(),
                                  34
                                ));
    return ___internal_method;
  }
};
 void System::Text::UTF7Encoding::__set_s_default(System::Text::UTF7Encoding value)  {
::cordl_internals::setStaticField<System::Text::UTF7Encoding, "s_default", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF7Encoding>::get>(std::forward<System::Text::UTF7Encoding>(value));
}
 System::Text::UTF7Encoding System::Text::UTF7Encoding::__get_s_default()  {
return ::cordl_internals::getStaticField<System::Text::UTF7Encoding, "s_default", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF7Encoding>::get>();
}
constexpr void System::Text::UTF7Encoding::__set__base64Bytes(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> System::Text::UTF7Encoding::__get__base64Bytes() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Text::UTF7Encoding::__set__base64Values(::ArrayW<int8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<int8_t>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<int8_t>>(value));
}
constexpr ::ArrayW<int8_t> System::Text::UTF7Encoding::__get__base64Values() const {
return ::cordl_internals::getInstanceField<::ArrayW<int8_t>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Text::UTF7Encoding::__set__directEncode(::ArrayW<bool> value)  {
::cordl_internals::setInstanceField<::ArrayW<bool>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<bool>>(value));
}
constexpr ::ArrayW<bool> System::Text::UTF7Encoding::__get__directEncode() const {
return ::cordl_internals::getInstanceField<::ArrayW<bool>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Text::UTF7Encoding::__set__allowOptionals(bool value)  {
::cordl_internals::setInstanceField<bool, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Text::UTF7Encoding::__get__allowOptionals() const {
return ::cordl_internals::getInstanceField<bool, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 System::Text::UTF7Encoding::UTF7Encoding()  : System::Text::Encoding(THROW_UNLESS(::il2cpp_utils::New<UTF7Encoding>())) {}
 void System::Text::UTF7Encoding::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF7Encoding>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "allowOptionals", ty: "bool", modifiers: "", def_value: None }]
 System::Text::UTF7Encoding::UTF7Encoding(bool allowOptionals)  : System::Text::Encoding(THROW_UNLESS(::il2cpp_utils::New<UTF7Encoding>(allowOptionals))) {}
 void System::Text::UTF7Encoding::_ctor(bool allowOptionals)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF7Encoding>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, allowOptionals);
}
 void System::Text::UTF7Encoding::MakeTables()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF7Encoding>::get(),
                            "MakeTables",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Text::UTF7Encoding::SetDefaultFallbacks()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF7Encoding>::get(),
                            "SetDefaultFallbacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Text::UTF7Encoding::Equals(::bs_hook::Il2CppWrapperType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF7Encoding>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t System::Text::UTF7Encoding::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF7Encoding>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::Text::UTF7Encoding::GetByteCount(::ArrayW<char16_t> chars, int32_t index, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF7Encoding>::get(),
                            "GetByteCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, chars, index, count);
}
 int32_t System::Text::UTF7Encoding::GetByteCount(::StringW s)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF7Encoding>::get(),
                            "GetByteCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, s);
}
 int32_t System::Text::UTF7Encoding::GetByteCount(void* chars, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF7Encoding>::get(),
                            "GetByteCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, chars, count);
}
 int32_t System::Text::UTF7Encoding::GetBytes(::StringW s, int32_t charIndex, int32_t charCount, ::ArrayW<uint8_t> bytes, int32_t byteIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF7Encoding>::get(),
                            "GetBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, s, charIndex, charCount, bytes, byteIndex);
}
 int32_t System::Text::UTF7Encoding::GetBytes(::ArrayW<char16_t> chars, int32_t charIndex, int32_t charCount, ::ArrayW<uint8_t> bytes, int32_t byteIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF7Encoding>::get(),
                            "GetBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, chars, charIndex, charCount, bytes, byteIndex);
}
 int32_t System::Text::UTF7Encoding::GetBytes(void* chars, int32_t charCount, void* bytes, int32_t byteCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF7Encoding>::get(),
                            "GetBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, chars, charCount, bytes, byteCount);
}
 int32_t System::Text::UTF7Encoding::GetCharCount(::ArrayW<uint8_t> bytes, int32_t index, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF7Encoding>::get(),
                            "GetCharCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, bytes, index, count);
}
 int32_t System::Text::UTF7Encoding::GetCharCount(void* bytes, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF7Encoding>::get(),
                            "GetCharCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, bytes, count);
}
 int32_t System::Text::UTF7Encoding::GetChars(::ArrayW<uint8_t> bytes, int32_t byteIndex, int32_t byteCount, ::ArrayW<char16_t> chars, int32_t charIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF7Encoding>::get(),
                            "GetChars",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, bytes, byteIndex, byteCount, chars, charIndex);
}
 int32_t System::Text::UTF7Encoding::GetChars(void* bytes, int32_t byteCount, void* chars, int32_t charCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF7Encoding>::get(),
                            "GetChars",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, bytes, byteCount, chars, charCount);
}
 ::StringW System::Text::UTF7Encoding::GetString(::ArrayW<uint8_t> bytes, int32_t index, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF7Encoding>::get(),
                            "GetString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, bytes, index, count);
}
 int32_t System::Text::UTF7Encoding::GetByteCount(void* chars, int32_t count, System::Text::EncoderNLS baseEncoder)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF7Encoding>::get(),
                            "GetByteCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::EncoderNLS>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, chars, count, baseEncoder);
}
 int32_t System::Text::UTF7Encoding::GetBytes(void* chars, int32_t charCount, void* bytes, int32_t byteCount, System::Text::EncoderNLS baseEncoder)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF7Encoding>::get(),
                            "GetBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::EncoderNLS>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, chars, charCount, bytes, byteCount, baseEncoder);
}
 int32_t System::Text::UTF7Encoding::GetCharCount(void* bytes, int32_t count, System::Text::DecoderNLS baseDecoder)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF7Encoding>::get(),
                            "GetCharCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::DecoderNLS>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, bytes, count, baseDecoder);
}
 int32_t System::Text::UTF7Encoding::GetChars(void* bytes, int32_t byteCount, void* chars, int32_t charCount, System::Text::DecoderNLS baseDecoder)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF7Encoding>::get(),
                            "GetChars",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::DecoderNLS>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, bytes, byteCount, chars, charCount, baseDecoder);
}
 System::Text::Decoder System::Text::UTF7Encoding::GetDecoder()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF7Encoding>::get(),
                            "GetDecoder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Text::Decoder, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Text::Encoder System::Text::UTF7Encoding::GetEncoder()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF7Encoding>::get(),
                            "GetEncoder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Text::Encoder, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::Text::UTF7Encoding::GetMaxByteCount(int32_t charCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF7Encoding>::get(),
                            "GetMaxByteCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, charCount);
}
 int32_t System::Text::UTF7Encoding::GetMaxCharCount(int32_t byteCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF7Encoding>::get(),
                            "GetMaxCharCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, byteCount);
}
