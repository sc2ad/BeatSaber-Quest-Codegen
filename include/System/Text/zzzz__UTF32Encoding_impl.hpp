#pragma once
#include "System/Text/zzzz__DecoderNLS_impl.hpp"
#include "System/Text/zzzz__Encoding_impl.hpp"
#include "System/Text/zzzz__UTF32Encoding_def.hpp"
#include "System/Text/zzzz__Decoder_def.hpp"
#include "System/Text/zzzz__Encoder_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/Text/zzzz__DecoderNLS_def.hpp"
#include "System/Text/zzzz__EncoderNLS_def.hpp"
//  Writing Method size for method: System::Text::System__Text__UTF32Encoding__UTF32Decoder._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::System__Text__UTF32Encoding__UTF32Decoder::*)(System::Text::UTF32Encoding)>(&System::Text::System__Text__UTF32Encoding__UTF32Decoder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22d2414;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__UTF32Encoding__UTF32Decoder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::UTF32Encoding>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::System__Text__UTF32Encoding__UTF32Decoder.Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::System__Text__UTF32Encoding__UTF32Decoder::*)()>(&System::Text::System__Text__UTF32Encoding__UTF32Decoder::Reset)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x22d2b4c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::System__Text__UTF32Encoding__UTF32Decoder),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__UTF32Encoding__UTF32Decoder>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::System__Text__UTF32Encoding__UTF32Decoder.get_HasState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Text::System__Text__UTF32Encoding__UTF32Decoder::*)()>(&System::Text::System__Text__UTF32Encoding__UTF32Decoder::get_HasState)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x22d2b6c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::System__Text__UTF32Encoding__UTF32Decoder),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__UTF32Encoding__UTF32Decoder>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
constexpr void System::Text::System__Text__UTF32Encoding__UTF32Decoder::__set_iChar(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Text::System__Text__UTF32Encoding__UTF32Decoder::__get_iChar() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Text::System__Text__UTF32Encoding__UTF32Decoder::__set_readByteCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x34>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Text::System__Text__UTF32Encoding__UTF32Decoder::__get_readByteCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x34>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "encoding", ty: "System::Text::UTF32Encoding", modifiers: "", def_value: None }]
 System::Text::System__Text__UTF32Encoding__UTF32Decoder::System__Text__UTF32Encoding__UTF32Decoder(System::Text::UTF32Encoding encoding)  : System::Text::DecoderNLS(THROW_UNLESS(::il2cpp_utils::New<System__Text__UTF32Encoding__UTF32Decoder>(encoding))) {}
 void System::Text::System__Text__UTF32Encoding__UTF32Decoder::_ctor(System::Text::UTF32Encoding encoding)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__UTF32Encoding__UTF32Decoder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::UTF32Encoding>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, encoding);
}
 void System::Text::System__Text__UTF32Encoding__UTF32Decoder::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__UTF32Encoding__UTF32Decoder>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Text::System__Text__UTF32Encoding__UTF32Decoder::get_HasState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__UTF32Encoding__UTF32Decoder>::get(),
                            "get_HasState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: System::Text::UTF32Encoding._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::UTF32Encoding::*)()>(&System::Text::UTF32Encoding::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x22d037c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF32Encoding>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::UTF32Encoding._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::UTF32Encoding::*)(bool, bool)>(&System::Text::UTF32Encoding::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x22d0414;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF32Encoding>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::UTF32Encoding._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::UTF32Encoding::*)(bool, bool, bool)>(&System::Text::UTF32Encoding::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x22d03a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF32Encoding>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::UTF32Encoding.SetDefaultFallbacks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::UTF32Encoding::*)()>(&System::Text::UTF32Encoding::SetDefaultFallbacks)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x22d0454;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::UTF32Encoding),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF32Encoding>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::UTF32Encoding.GetByteCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Text::UTF32Encoding::*)(::ArrayW<char16_t>, int32_t, int32_t)>(&System::Text::UTF32Encoding::GetByteCount)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x22d0528;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::UTF32Encoding),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF32Encoding>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::UTF32Encoding.GetByteCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Text::UTF32Encoding::*)(::StringW)>(&System::Text::UTF32Encoding::GetByteCount)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x22d06ac;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::UTF32Encoding),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF32Encoding>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::UTF32Encoding.GetByteCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Text::UTF32Encoding::*)(void*, int32_t)>(&System::Text::UTF32Encoding::GetByteCount)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x22d073c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::UTF32Encoding),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF32Encoding>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::UTF32Encoding.GetBytes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Text::UTF32Encoding::*)(::StringW, int32_t, int32_t, ::ArrayW<uint8_t>, int32_t)>(&System::Text::UTF32Encoding::GetBytes)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x22d0814;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::UTF32Encoding),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF32Encoding>::get(),
                                  19
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::UTF32Encoding.GetBytes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Text::UTF32Encoding::*)(::ArrayW<char16_t>, int32_t, int32_t, ::ArrayW<uint8_t>, int32_t)>(&System::Text::UTF32Encoding::GetBytes)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x22d0a74;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::UTF32Encoding),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF32Encoding>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::UTF32Encoding.GetBytes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Text::UTF32Encoding::*)(void*, int32_t, void*, int32_t)>(&System::Text::UTF32Encoding::GetBytes)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x22d0cf0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::UTF32Encoding),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF32Encoding>::get(),
                                  21
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::UTF32Encoding.GetCharCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Text::UTF32Encoding::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&System::Text::UTF32Encoding::GetCharCount)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x22d0df0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::UTF32Encoding),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF32Encoding>::get(),
                                  22
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::UTF32Encoding.GetCharCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Text::UTF32Encoding::*)(void*, int32_t)>(&System::Text::UTF32Encoding::GetCharCount)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x22d0f74;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::UTF32Encoding),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF32Encoding>::get(),
                                  23
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::UTF32Encoding.GetChars
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Text::UTF32Encoding::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::ArrayW<char16_t>, int32_t)>(&System::Text::UTF32Encoding::GetChars)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x22d104c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::UTF32Encoding),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF32Encoding>::get(),
                                  26
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::UTF32Encoding.GetChars
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Text::UTF32Encoding::*)(void*, int32_t, void*, int32_t)>(&System::Text::UTF32Encoding::GetChars)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x22d12c8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::UTF32Encoding),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF32Encoding>::get(),
                                  27
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::UTF32Encoding.GetString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Text::UTF32Encoding::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&System::Text::UTF32Encoding::GetString)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x22d13c8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::UTF32Encoding),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF32Encoding>::get(),
                                  36
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::UTF32Encoding.GetByteCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Text::UTF32Encoding::*)(void*, int32_t, System::Text::EncoderNLS)>(&System::Text::UTF32Encoding::GetByteCount)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x22d1590;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::UTF32Encoding),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF32Encoding>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::UTF32Encoding.GetBytes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Text::UTF32Encoding::*)(void*, int32_t, void*, int32_t, System::Text::EncoderNLS)>(&System::Text::UTF32Encoding::GetBytes)> {
  constexpr static std::size_t size = 0x3c8;
  constexpr static std::size_t addrs = 0x22d1868;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::UTF32Encoding),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF32Encoding>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::UTF32Encoding.GetCharCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Text::UTF32Encoding::*)(void*, int32_t, System::Text::DecoderNLS)>(&System::Text::UTF32Encoding::GetCharCount)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0x22d1c4c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::UTF32Encoding),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF32Encoding>::get(),
                                  24
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::UTF32Encoding.GetChars
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Text::UTF32Encoding::*)(void*, int32_t, void*, int32_t, System::Text::DecoderNLS)>(&System::Text::UTF32Encoding::GetChars)> {
  constexpr static std::size_t size = 0x3fc;
  constexpr static std::size_t addrs = 0x22d1f94;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::UTF32Encoding),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF32Encoding>::get(),
                                  28
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::UTF32Encoding.GetSurrogate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (System::Text::UTF32Encoding::*)(char16_t, char16_t)>(&System::Text::UTF32Encoding::GetSurrogate)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x22d1c30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF32Encoding>::get(),
                            "GetSurrogate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::UTF32Encoding.GetHighSurrogate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (System::Text::UTF32Encoding::*)(uint32_t)>(&System::Text::UTF32Encoding::GetHighSurrogate)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x22d2390;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF32Encoding>::get(),
                            "GetHighSurrogate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::UTF32Encoding.GetLowSurrogate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (System::Text::UTF32Encoding::*)(uint32_t)>(&System::Text::UTF32Encoding::GetLowSurrogate)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x22d23a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF32Encoding>::get(),
                            "GetLowSurrogate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::UTF32Encoding.GetDecoder
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Text::Decoder (System::Text::UTF32Encoding::*)()>(&System::Text::UTF32Encoding::GetDecoder)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x22d23b0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::UTF32Encoding),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF32Encoding>::get(),
                                  31
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::UTF32Encoding.GetEncoder
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Text::Encoder (System::Text::UTF32Encoding::*)()>(&System::Text::UTF32Encoding::GetEncoder)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x22d241c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::UTF32Encoding),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF32Encoding>::get(),
                                  32
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::UTF32Encoding.GetMaxByteCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Text::UTF32Encoding::*)(int32_t)>(&System::Text::UTF32Encoding::GetMaxByteCount)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x22d2480;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::UTF32Encoding),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF32Encoding>::get(),
                                  33
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::UTF32Encoding.GetMaxCharCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Text::UTF32Encoding::*)(int32_t)>(&System::Text::UTF32Encoding::GetMaxCharCount)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x22d2588;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::UTF32Encoding),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF32Encoding>::get(),
                                  34
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::UTF32Encoding.GetPreamble
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::Text::UTF32Encoding::*)()>(&System::Text::UTF32Encoding::GetPreamble)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x22d2658;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::UTF32Encoding),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF32Encoding>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::UTF32Encoding.get_Preamble
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::ReadOnlySpan_1<uint8_t> (System::Text::UTF32Encoding::*)()>(&System::Text::UTF32Encoding::get_Preamble)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x22d275c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::UTF32Encoding),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF32Encoding>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::UTF32Encoding.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Text::UTF32Encoding::*)(::bs_hook::Il2CppWrapperType)>(&System::Text::UTF32Encoding::Equals)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x22d28cc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::UTF32Encoding),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF32Encoding>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::UTF32Encoding.GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Text::UTF32Encoding::*)()>(&System::Text::UTF32Encoding::GetHashCode)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x22d2990;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::UTF32Encoding),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF32Encoding>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
 void System::Text::UTF32Encoding::__set_s_default(System::Text::UTF32Encoding value)  {
::cordl_internals::setStaticField<System::Text::UTF32Encoding, "s_default", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF32Encoding>::get>(std::forward<System::Text::UTF32Encoding>(value));
}
 System::Text::UTF32Encoding System::Text::UTF32Encoding::__get_s_default()  {
return ::cordl_internals::getStaticField<System::Text::UTF32Encoding, "s_default", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF32Encoding>::get>();
}
 void System::Text::UTF32Encoding::__set_s_bigEndianDefault(System::Text::UTF32Encoding value)  {
::cordl_internals::setStaticField<System::Text::UTF32Encoding, "s_bigEndianDefault", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF32Encoding>::get>(std::forward<System::Text::UTF32Encoding>(value));
}
 System::Text::UTF32Encoding System::Text::UTF32Encoding::__get_s_bigEndianDefault()  {
return ::cordl_internals::getStaticField<System::Text::UTF32Encoding, "s_bigEndianDefault", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF32Encoding>::get>();
}
 void System::Text::UTF32Encoding::__set_s_bigEndianPreamble(::ArrayW<uint8_t> value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "s_bigEndianPreamble", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF32Encoding>::get>(std::forward<::ArrayW<uint8_t>>(value));
}
 ::ArrayW<uint8_t> System::Text::UTF32Encoding::__get_s_bigEndianPreamble()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "s_bigEndianPreamble", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF32Encoding>::get>();
}
 void System::Text::UTF32Encoding::__set_s_littleEndianPreamble(::ArrayW<uint8_t> value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "s_littleEndianPreamble", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF32Encoding>::get>(std::forward<::ArrayW<uint8_t>>(value));
}
 ::ArrayW<uint8_t> System::Text::UTF32Encoding::__get_s_littleEndianPreamble()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "s_littleEndianPreamble", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF32Encoding>::get>();
}
constexpr void System::Text::UTF32Encoding::__set__emitUTF32ByteOrderMark(bool value)  {
::cordl_internals::setInstanceField<bool, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Text::UTF32Encoding::__get__emitUTF32ByteOrderMark() const {
return ::cordl_internals::getInstanceField<bool, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Text::UTF32Encoding::__set__isThrowException(bool value)  {
::cordl_internals::setInstanceField<bool, 0x39>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Text::UTF32Encoding::__get__isThrowException() const {
return ::cordl_internals::getInstanceField<bool, 0x39>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Text::UTF32Encoding::__set__bigEndian(bool value)  {
::cordl_internals::setInstanceField<bool, 0x3a>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Text::UTF32Encoding::__get__bigEndian() const {
return ::cordl_internals::getInstanceField<bool, 0x3a>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 System::Text::UTF32Encoding::UTF32Encoding()  : System::Text::Encoding(THROW_UNLESS(::il2cpp_utils::New<UTF32Encoding>())) {}
 void System::Text::UTF32Encoding::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF32Encoding>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "bigEndian", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "byteOrderMark", ty: "bool", modifiers: "", def_value: None }]
 System::Text::UTF32Encoding::UTF32Encoding(bool bigEndian, bool byteOrderMark)  : System::Text::Encoding(THROW_UNLESS(::il2cpp_utils::New<UTF32Encoding>(bigEndian, byteOrderMark))) {}
 void System::Text::UTF32Encoding::_ctor(bool bigEndian, bool byteOrderMark)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF32Encoding>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, bigEndian, byteOrderMark);
}
// Ctor Parameters [CppParam { name: "bigEndian", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "byteOrderMark", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "throwOnInvalidCharacters", ty: "bool", modifiers: "", def_value: None }]
 System::Text::UTF32Encoding::UTF32Encoding(bool bigEndian, bool byteOrderMark, bool throwOnInvalidCharacters)  : System::Text::Encoding(THROW_UNLESS(::il2cpp_utils::New<UTF32Encoding>(bigEndian, byteOrderMark, throwOnInvalidCharacters))) {}
 void System::Text::UTF32Encoding::_ctor(bool bigEndian, bool byteOrderMark, bool throwOnInvalidCharacters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF32Encoding>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, bigEndian, byteOrderMark, throwOnInvalidCharacters);
}
 void System::Text::UTF32Encoding::SetDefaultFallbacks()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF32Encoding>::get(),
                            "SetDefaultFallbacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::Text::UTF32Encoding::GetByteCount(::ArrayW<char16_t> chars, int32_t index, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF32Encoding>::get(),
                            "GetByteCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, chars, index, count);
}
 int32_t System::Text::UTF32Encoding::GetByteCount(::StringW s)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF32Encoding>::get(),
                            "GetByteCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, s);
}
 int32_t System::Text::UTF32Encoding::GetByteCount(void* chars, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF32Encoding>::get(),
                            "GetByteCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, chars, count);
}
 int32_t System::Text::UTF32Encoding::GetBytes(::StringW s, int32_t charIndex, int32_t charCount, ::ArrayW<uint8_t> bytes, int32_t byteIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF32Encoding>::get(),
                            "GetBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, s, charIndex, charCount, bytes, byteIndex);
}
 int32_t System::Text::UTF32Encoding::GetBytes(::ArrayW<char16_t> chars, int32_t charIndex, int32_t charCount, ::ArrayW<uint8_t> bytes, int32_t byteIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF32Encoding>::get(),
                            "GetBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, chars, charIndex, charCount, bytes, byteIndex);
}
 int32_t System::Text::UTF32Encoding::GetBytes(void* chars, int32_t charCount, void* bytes, int32_t byteCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF32Encoding>::get(),
                            "GetBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, chars, charCount, bytes, byteCount);
}
 int32_t System::Text::UTF32Encoding::GetCharCount(::ArrayW<uint8_t> bytes, int32_t index, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF32Encoding>::get(),
                            "GetCharCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, bytes, index, count);
}
 int32_t System::Text::UTF32Encoding::GetCharCount(void* bytes, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF32Encoding>::get(),
                            "GetCharCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, bytes, count);
}
 int32_t System::Text::UTF32Encoding::GetChars(::ArrayW<uint8_t> bytes, int32_t byteIndex, int32_t byteCount, ::ArrayW<char16_t> chars, int32_t charIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF32Encoding>::get(),
                            "GetChars",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, bytes, byteIndex, byteCount, chars, charIndex);
}
 int32_t System::Text::UTF32Encoding::GetChars(void* bytes, int32_t byteCount, void* chars, int32_t charCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF32Encoding>::get(),
                            "GetChars",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, bytes, byteCount, chars, charCount);
}
 ::StringW System::Text::UTF32Encoding::GetString(::ArrayW<uint8_t> bytes, int32_t index, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF32Encoding>::get(),
                            "GetString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, bytes, index, count);
}
 int32_t System::Text::UTF32Encoding::GetByteCount(void* chars, int32_t count, System::Text::EncoderNLS encoder)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF32Encoding>::get(),
                            "GetByteCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::EncoderNLS>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, chars, count, encoder);
}
 int32_t System::Text::UTF32Encoding::GetBytes(void* chars, int32_t charCount, void* bytes, int32_t byteCount, System::Text::EncoderNLS encoder)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF32Encoding>::get(),
                            "GetBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::EncoderNLS>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, chars, charCount, bytes, byteCount, encoder);
}
 int32_t System::Text::UTF32Encoding::GetCharCount(void* bytes, int32_t count, System::Text::DecoderNLS baseDecoder)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF32Encoding>::get(),
                            "GetCharCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::DecoderNLS>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, bytes, count, baseDecoder);
}
 int32_t System::Text::UTF32Encoding::GetChars(void* bytes, int32_t byteCount, void* chars, int32_t charCount, System::Text::DecoderNLS baseDecoder)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF32Encoding>::get(),
                            "GetChars",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::DecoderNLS>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, bytes, byteCount, chars, charCount, baseDecoder);
}
 uint32_t System::Text::UTF32Encoding::GetSurrogate(char16_t cHigh, char16_t cLow)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF32Encoding>::get(),
                            "GetSurrogate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(const_cast<void*>(instance), ___internal_method, cHigh, cLow);
}
 char16_t System::Text::UTF32Encoding::GetHighSurrogate(uint32_t iChar)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF32Encoding>::get(),
                            "GetHighSurrogate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<char16_t, false>(const_cast<void*>(instance), ___internal_method, iChar);
}
 char16_t System::Text::UTF32Encoding::GetLowSurrogate(uint32_t iChar)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF32Encoding>::get(),
                            "GetLowSurrogate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<char16_t, false>(const_cast<void*>(instance), ___internal_method, iChar);
}
 System::Text::Decoder System::Text::UTF32Encoding::GetDecoder()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF32Encoding>::get(),
                            "GetDecoder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Text::Decoder, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Text::Encoder System::Text::UTF32Encoding::GetEncoder()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF32Encoding>::get(),
                            "GetEncoder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Text::Encoder, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::Text::UTF32Encoding::GetMaxByteCount(int32_t charCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF32Encoding>::get(),
                            "GetMaxByteCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, charCount);
}
 int32_t System::Text::UTF32Encoding::GetMaxCharCount(int32_t byteCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF32Encoding>::get(),
                            "GetMaxCharCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, byteCount);
}
 ::ArrayW<uint8_t> System::Text::UTF32Encoding::GetPreamble()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF32Encoding>::get(),
                            "GetPreamble",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::ReadOnlySpan_1<uint8_t> System::Text::UTF32Encoding::get_Preamble()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF32Encoding>::get(),
                            "get_Preamble",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::ReadOnlySpan_1<uint8_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Text::UTF32Encoding::Equals(::bs_hook::Il2CppWrapperType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF32Encoding>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t System::Text::UTF32Encoding::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UTF32Encoding>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
