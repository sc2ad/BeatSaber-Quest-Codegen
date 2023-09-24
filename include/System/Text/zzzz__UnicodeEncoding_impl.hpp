#pragma once
#include "System/Text/zzzz__DecoderNLS_impl.hpp"
#include "System/Text/zzzz__Encoding_impl.hpp"
#include "System/Text/zzzz__UnicodeEncoding_def.hpp"
#include "System/Text/zzzz__Decoder_def.hpp"
#include "System/Text/zzzz__UnicodeEncoding_def.hpp"
#include "System/Text/zzzz__EncoderNLS_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/Text/zzzz__DecoderNLS_def.hpp"
#include "System/Text/zzzz__Encoder_def.hpp"
//  Writing Method size for method: System::Text::System__Text__UnicodeEncoding__Decoder._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::System__Text__UnicodeEncoding__Decoder::*)(System::Text::UnicodeEncoding)>(&System::Text::System__Text__UnicodeEncoding__Decoder::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x22dcad0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__UnicodeEncoding__Decoder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::UnicodeEncoding>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::System__Text__UnicodeEncoding__Decoder.Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::System__Text__UnicodeEncoding__Decoder::*)()>(&System::Text::System__Text__UnicodeEncoding__Decoder::Reset)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x22dcae0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::System__Text__UnicodeEncoding__Decoder),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__UnicodeEncoding__Decoder>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::System__Text__UnicodeEncoding__Decoder.get_HasState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Text::System__Text__UnicodeEncoding__Decoder::*)()>(&System::Text::System__Text__UnicodeEncoding__Decoder::get_HasState)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x22dcb08;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::System__Text__UnicodeEncoding__Decoder),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__UnicodeEncoding__Decoder>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
constexpr void System::Text::System__Text__UnicodeEncoding__Decoder::__set_lastByte(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Text::System__Text__UnicodeEncoding__Decoder::__get_lastByte() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Text::System__Text__UnicodeEncoding__Decoder::__set_lastChar(char16_t value)  {
::cordl_internals::setInstanceField<char16_t, 0x34>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<char16_t>(value));
}
constexpr char16_t System::Text::System__Text__UnicodeEncoding__Decoder::__get_lastChar() const {
return ::cordl_internals::getInstanceField<char16_t, 0x34>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Text::System__Text__UnicodeEncoding__Decoder System::Text::System__Text__UnicodeEncoding__Decoder::New_ctor(System::Text::UnicodeEncoding encoding)  {
System::Text::System__Text__UnicodeEncoding__Decoder o{THROW_UNLESS(::il2cpp_utils::New<System::Text::System__Text__UnicodeEncoding__Decoder>(encoding))};
return o;
}
 void System::Text::System__Text__UnicodeEncoding__Decoder::_ctor(System::Text::UnicodeEncoding encoding)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__UnicodeEncoding__Decoder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::UnicodeEncoding>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, encoding);
}
 void System::Text::System__Text__UnicodeEncoding__Decoder::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__UnicodeEncoding__Decoder>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Text::System__Text__UnicodeEncoding__Decoder::get_HasState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__UnicodeEncoding__Decoder>::get(),
                            "get_HasState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: System::Text::UnicodeEncoding._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::UnicodeEncoding::*)()>(&System::Text::UnicodeEncoding::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x22d839c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UnicodeEncoding>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::UnicodeEncoding._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::UnicodeEncoding::*)(bool, bool)>(&System::Text::UnicodeEncoding::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x22d83d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UnicodeEncoding>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::UnicodeEncoding._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::UnicodeEncoding::*)(bool, bool, bool)>(&System::Text::UnicodeEncoding::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x22d8418;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UnicodeEncoding>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::UnicodeEncoding.SetDefaultFallbacks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::UnicodeEncoding::*)()>(&System::Text::UnicodeEncoding::SetDefaultFallbacks)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x22d8490;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::UnicodeEncoding),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UnicodeEncoding>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::UnicodeEncoding.GetByteCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Text::UnicodeEncoding::*)(::ArrayW<char16_t>, int32_t, int32_t)>(&System::Text::UnicodeEncoding::GetByteCount)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x22d8564;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::UnicodeEncoding),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UnicodeEncoding>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::UnicodeEncoding.GetByteCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Text::UnicodeEncoding::*)(::StringW)>(&System::Text::UnicodeEncoding::GetByteCount)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x22d86e8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::UnicodeEncoding),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UnicodeEncoding>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::UnicodeEncoding.GetByteCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Text::UnicodeEncoding::*)(void*, int32_t)>(&System::Text::UnicodeEncoding::GetByteCount)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x22d8778;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::UnicodeEncoding),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UnicodeEncoding>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::UnicodeEncoding.GetBytes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Text::UnicodeEncoding::*)(::StringW, int32_t, int32_t, ::ArrayW<uint8_t>, int32_t)>(&System::Text::UnicodeEncoding::GetBytes)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x22d8850;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::UnicodeEncoding),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UnicodeEncoding>::get(),
                                  19
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::UnicodeEncoding.GetBytes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Text::UnicodeEncoding::*)(::ArrayW<char16_t>, int32_t, int32_t, ::ArrayW<uint8_t>, int32_t)>(&System::Text::UnicodeEncoding::GetBytes)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x22d8ab0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::UnicodeEncoding),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UnicodeEncoding>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::UnicodeEncoding.GetBytes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Text::UnicodeEncoding::*)(void*, int32_t, void*, int32_t)>(&System::Text::UnicodeEncoding::GetBytes)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x22d8d2c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::UnicodeEncoding),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UnicodeEncoding>::get(),
                                  21
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::UnicodeEncoding.GetCharCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Text::UnicodeEncoding::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&System::Text::UnicodeEncoding::GetCharCount)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x22d8e2c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::UnicodeEncoding),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UnicodeEncoding>::get(),
                                  22
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::UnicodeEncoding.GetCharCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Text::UnicodeEncoding::*)(void*, int32_t)>(&System::Text::UnicodeEncoding::GetCharCount)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x22d8fb0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::UnicodeEncoding),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UnicodeEncoding>::get(),
                                  23
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::UnicodeEncoding.GetChars
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Text::UnicodeEncoding::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::ArrayW<char16_t>, int32_t)>(&System::Text::UnicodeEncoding::GetChars)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x22d9088;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::UnicodeEncoding),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UnicodeEncoding>::get(),
                                  26
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::UnicodeEncoding.GetChars
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Text::UnicodeEncoding::*)(void*, int32_t, void*, int32_t)>(&System::Text::UnicodeEncoding::GetChars)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x22d9304;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::UnicodeEncoding),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UnicodeEncoding>::get(),
                                  27
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::UnicodeEncoding.GetString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Text::UnicodeEncoding::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&System::Text::UnicodeEncoding::GetString)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x22d9404;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::UnicodeEncoding),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UnicodeEncoding>::get(),
                                  36
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::UnicodeEncoding.GetByteCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Text::UnicodeEncoding::*)(void*, int32_t, System::Text::EncoderNLS)>(&System::Text::UnicodeEncoding::GetByteCount)> {
  constexpr static std::size_t size = 0x56c;
  constexpr static std::size_t addrs = 0x22d95cc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::UnicodeEncoding),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UnicodeEncoding>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::UnicodeEncoding.GetBytes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Text::UnicodeEncoding::*)(void*, int32_t, void*, int32_t, System::Text::EncoderNLS)>(&System::Text::UnicodeEncoding::GetBytes)> {
  constexpr static std::size_t size = 0x734;
  constexpr static std::size_t addrs = 0x22d9b38;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::UnicodeEncoding),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UnicodeEncoding>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::UnicodeEncoding.GetCharCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Text::UnicodeEncoding::*)(void*, int32_t, System::Text::DecoderNLS)>(&System::Text::UnicodeEncoding::GetCharCount)> {
  constexpr static std::size_t size = 0x6c0;
  constexpr static std::size_t addrs = 0x22da26c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::UnicodeEncoding),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UnicodeEncoding>::get(),
                                  24
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::UnicodeEncoding.GetChars
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Text::UnicodeEncoding::*)(void*, int32_t, void*, int32_t, System::Text::DecoderNLS)>(&System::Text::UnicodeEncoding::GetChars)> {
  constexpr static std::size_t size = 0x920;
  constexpr static std::size_t addrs = 0x22da92c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::UnicodeEncoding),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UnicodeEncoding>::get(),
                                  28
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::UnicodeEncoding.GetEncoder
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Text::Encoder (System::Text::UnicodeEncoding::*)()>(&System::Text::UnicodeEncoding::GetEncoder)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x22db24c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::UnicodeEncoding),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UnicodeEncoding>::get(),
                                  32
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::UnicodeEncoding.GetDecoder
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Text::Decoder (System::Text::UnicodeEncoding::*)()>(&System::Text::UnicodeEncoding::GetDecoder)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x22db2b0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::UnicodeEncoding),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UnicodeEncoding>::get(),
                                  31
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::UnicodeEncoding.GetPreamble
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::Text::UnicodeEncoding::*)()>(&System::Text::UnicodeEncoding::GetPreamble)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x22db314;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::UnicodeEncoding),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UnicodeEncoding>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::UnicodeEncoding.get_Preamble
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::ReadOnlySpan_1<uint8_t> (System::Text::UnicodeEncoding::*)()>(&System::Text::UnicodeEncoding::get_Preamble)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x22db410;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::UnicodeEncoding),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UnicodeEncoding>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::UnicodeEncoding.GetMaxByteCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Text::UnicodeEncoding::*)(int32_t)>(&System::Text::UnicodeEncoding::GetMaxByteCount)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x22db580;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::UnicodeEncoding),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UnicodeEncoding>::get(),
                                  33
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::UnicodeEncoding.GetMaxCharCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Text::UnicodeEncoding::*)(int32_t)>(&System::Text::UnicodeEncoding::GetMaxCharCount)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x22db688;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::UnicodeEncoding),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UnicodeEncoding>::get(),
                                  34
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::UnicodeEncoding.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Text::UnicodeEncoding::*)(::bs_hook::Il2CppWrapperType)>(&System::Text::UnicodeEncoding::Equals)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x22db794;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::UnicodeEncoding),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UnicodeEncoding>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::UnicodeEncoding.GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Text::UnicodeEncoding::*)()>(&System::Text::UnicodeEncoding::GetHashCode)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x22db8a8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::UnicodeEncoding),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UnicodeEncoding>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
 void System::Text::UnicodeEncoding::__set_s_bigEndianDefault(System::Text::UnicodeEncoding value)  {
::cordl_internals::setStaticField<System::Text::UnicodeEncoding, "s_bigEndianDefault", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UnicodeEncoding>::get>(std::forward<System::Text::UnicodeEncoding>(value));
}
 System::Text::UnicodeEncoding System::Text::UnicodeEncoding::__get_s_bigEndianDefault()  {
return ::cordl_internals::getStaticField<System::Text::UnicodeEncoding, "s_bigEndianDefault", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UnicodeEncoding>::get>();
}
 void System::Text::UnicodeEncoding::__set_s_littleEndianDefault(System::Text::UnicodeEncoding value)  {
::cordl_internals::setStaticField<System::Text::UnicodeEncoding, "s_littleEndianDefault", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UnicodeEncoding>::get>(std::forward<System::Text::UnicodeEncoding>(value));
}
 System::Text::UnicodeEncoding System::Text::UnicodeEncoding::__get_s_littleEndianDefault()  {
return ::cordl_internals::getStaticField<System::Text::UnicodeEncoding, "s_littleEndianDefault", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UnicodeEncoding>::get>();
}
 void System::Text::UnicodeEncoding::__set_s_bigEndianPreamble(::ArrayW<uint8_t> value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "s_bigEndianPreamble", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UnicodeEncoding>::get>(std::forward<::ArrayW<uint8_t>>(value));
}
 ::ArrayW<uint8_t> System::Text::UnicodeEncoding::__get_s_bigEndianPreamble()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "s_bigEndianPreamble", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UnicodeEncoding>::get>();
}
 void System::Text::UnicodeEncoding::__set_s_littleEndianPreamble(::ArrayW<uint8_t> value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "s_littleEndianPreamble", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UnicodeEncoding>::get>(std::forward<::ArrayW<uint8_t>>(value));
}
 ::ArrayW<uint8_t> System::Text::UnicodeEncoding::__get_s_littleEndianPreamble()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "s_littleEndianPreamble", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UnicodeEncoding>::get>();
}
constexpr void System::Text::UnicodeEncoding::__set_isThrowException(bool value)  {
::cordl_internals::setInstanceField<bool, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Text::UnicodeEncoding::__get_isThrowException() const {
return ::cordl_internals::getInstanceField<bool, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Text::UnicodeEncoding::__set_bigEndian(bool value)  {
::cordl_internals::setInstanceField<bool, 0x39>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Text::UnicodeEncoding::__get_bigEndian() const {
return ::cordl_internals::getInstanceField<bool, 0x39>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Text::UnicodeEncoding::__set_byteOrderMark(bool value)  {
::cordl_internals::setInstanceField<bool, 0x3a>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Text::UnicodeEncoding::__get_byteOrderMark() const {
return ::cordl_internals::getInstanceField<bool, 0x3a>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void System::Text::UnicodeEncoding::__set_highLowPatternMask(uint64_t value)  {
::cordl_internals::setStaticField<uint64_t, "highLowPatternMask", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UnicodeEncoding>::get>(std::forward<uint64_t>(value));
}
 uint64_t System::Text::UnicodeEncoding::__get_highLowPatternMask()  {
return ::cordl_internals::getStaticField<uint64_t, "highLowPatternMask", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UnicodeEncoding>::get>();
}
 System::Text::UnicodeEncoding System::Text::UnicodeEncoding::New_ctor()  {
System::Text::UnicodeEncoding o{THROW_UNLESS(::il2cpp_utils::New<System::Text::UnicodeEncoding>())};
return o;
}
 void System::Text::UnicodeEncoding::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UnicodeEncoding>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Text::UnicodeEncoding System::Text::UnicodeEncoding::New_ctor(bool bigEndian, bool byteOrderMark)  {
System::Text::UnicodeEncoding o{THROW_UNLESS(::il2cpp_utils::New<System::Text::UnicodeEncoding>(bigEndian, byteOrderMark))};
return o;
}
 void System::Text::UnicodeEncoding::_ctor(bool bigEndian, bool byteOrderMark)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UnicodeEncoding>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, bigEndian, byteOrderMark);
}
 System::Text::UnicodeEncoding System::Text::UnicodeEncoding::New_ctor(bool bigEndian, bool byteOrderMark, bool throwOnInvalidBytes)  {
System::Text::UnicodeEncoding o{THROW_UNLESS(::il2cpp_utils::New<System::Text::UnicodeEncoding>(bigEndian, byteOrderMark, throwOnInvalidBytes))};
return o;
}
 void System::Text::UnicodeEncoding::_ctor(bool bigEndian, bool byteOrderMark, bool throwOnInvalidBytes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UnicodeEncoding>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, bigEndian, byteOrderMark, throwOnInvalidBytes);
}
 void System::Text::UnicodeEncoding::SetDefaultFallbacks()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UnicodeEncoding>::get(),
                            "SetDefaultFallbacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::Text::UnicodeEncoding::GetByteCount(::ArrayW<char16_t> chars, int32_t index, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UnicodeEncoding>::get(),
                            "GetByteCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, chars, index, count);
}
 int32_t System::Text::UnicodeEncoding::GetByteCount(::StringW s)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UnicodeEncoding>::get(),
                            "GetByteCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, s);
}
 int32_t System::Text::UnicodeEncoding::GetByteCount(void* chars, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UnicodeEncoding>::get(),
                            "GetByteCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, chars, count);
}
 int32_t System::Text::UnicodeEncoding::GetBytes(::StringW s, int32_t charIndex, int32_t charCount, ::ArrayW<uint8_t> bytes, int32_t byteIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UnicodeEncoding>::get(),
                            "GetBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, s, charIndex, charCount, bytes, byteIndex);
}
 int32_t System::Text::UnicodeEncoding::GetBytes(::ArrayW<char16_t> chars, int32_t charIndex, int32_t charCount, ::ArrayW<uint8_t> bytes, int32_t byteIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UnicodeEncoding>::get(),
                            "GetBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, chars, charIndex, charCount, bytes, byteIndex);
}
 int32_t System::Text::UnicodeEncoding::GetBytes(void* chars, int32_t charCount, void* bytes, int32_t byteCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UnicodeEncoding>::get(),
                            "GetBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, chars, charCount, bytes, byteCount);
}
 int32_t System::Text::UnicodeEncoding::GetCharCount(::ArrayW<uint8_t> bytes, int32_t index, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UnicodeEncoding>::get(),
                            "GetCharCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, bytes, index, count);
}
 int32_t System::Text::UnicodeEncoding::GetCharCount(void* bytes, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UnicodeEncoding>::get(),
                            "GetCharCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, bytes, count);
}
 int32_t System::Text::UnicodeEncoding::GetChars(::ArrayW<uint8_t> bytes, int32_t byteIndex, int32_t byteCount, ::ArrayW<char16_t> chars, int32_t charIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UnicodeEncoding>::get(),
                            "GetChars",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, bytes, byteIndex, byteCount, chars, charIndex);
}
 int32_t System::Text::UnicodeEncoding::GetChars(void* bytes, int32_t byteCount, void* chars, int32_t charCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UnicodeEncoding>::get(),
                            "GetChars",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, bytes, byteCount, chars, charCount);
}
 ::StringW System::Text::UnicodeEncoding::GetString(::ArrayW<uint8_t> bytes, int32_t index, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UnicodeEncoding>::get(),
                            "GetString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, bytes, index, count);
}
 int32_t System::Text::UnicodeEncoding::GetByteCount(void* chars, int32_t count, System::Text::EncoderNLS encoder)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UnicodeEncoding>::get(),
                            "GetByteCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::EncoderNLS>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, chars, count, encoder);
}
 int32_t System::Text::UnicodeEncoding::GetBytes(void* chars, int32_t charCount, void* bytes, int32_t byteCount, System::Text::EncoderNLS encoder)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UnicodeEncoding>::get(),
                            "GetBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::EncoderNLS>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, chars, charCount, bytes, byteCount, encoder);
}
 int32_t System::Text::UnicodeEncoding::GetCharCount(void* bytes, int32_t count, System::Text::DecoderNLS baseDecoder)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UnicodeEncoding>::get(),
                            "GetCharCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::DecoderNLS>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, bytes, count, baseDecoder);
}
 int32_t System::Text::UnicodeEncoding::GetChars(void* bytes, int32_t byteCount, void* chars, int32_t charCount, System::Text::DecoderNLS baseDecoder)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UnicodeEncoding>::get(),
                            "GetChars",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::DecoderNLS>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, bytes, byteCount, chars, charCount, baseDecoder);
}
 System::Text::Encoder System::Text::UnicodeEncoding::GetEncoder()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UnicodeEncoding>::get(),
                            "GetEncoder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Text::Encoder, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Text::Decoder System::Text::UnicodeEncoding::GetDecoder()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UnicodeEncoding>::get(),
                            "GetDecoder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Text::Decoder, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<uint8_t> System::Text::UnicodeEncoding::GetPreamble()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UnicodeEncoding>::get(),
                            "GetPreamble",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::ReadOnlySpan_1<uint8_t> System::Text::UnicodeEncoding::get_Preamble()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UnicodeEncoding>::get(),
                            "get_Preamble",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::ReadOnlySpan_1<uint8_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::Text::UnicodeEncoding::GetMaxByteCount(int32_t charCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UnicodeEncoding>::get(),
                            "GetMaxByteCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, charCount);
}
 int32_t System::Text::UnicodeEncoding::GetMaxCharCount(int32_t byteCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UnicodeEncoding>::get(),
                            "GetMaxCharCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, byteCount);
}
 bool System::Text::UnicodeEncoding::Equals(::bs_hook::Il2CppWrapperType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UnicodeEncoding>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t System::Text::UnicodeEncoding::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::UnicodeEncoding>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
