#pragma once
#include "System/Text/zzzz__Decoder_impl.hpp"
#include "System/Text/zzzz__Encoder_impl.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Text/zzzz__Encoder_def.hpp"
#include "System/Text/zzzz__EncoderNLS_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Text/zzzz__EncoderFallback_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/Text/zzzz__Decoder_def.hpp"
#include "System/Globalization/zzzz__CodePageDataItem_def.hpp"
#include "System/zzzz__ICloneable_def.hpp"
#include "System/Text/zzzz__DecoderFallback_def.hpp"
#include "System/Text/zzzz__DecoderNLS_def.hpp"
#include "System/Runtime/Serialization/zzzz__IObjectReference_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Text/zzzz__EncoderFallbackBuffer_def.hpp"
#include "System/Text/zzzz__DecoderFallbackBuffer_def.hpp"
//  Writing Method size for method: System::Text::System__Text__Encoding__DefaultEncoder._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::System__Text__Encoding__DefaultEncoder::*)(System::Text::Encoding)>(&System::Text::System__Text__Encoding__DefaultEncoder::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x22e0f40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__Encoding__DefaultEncoder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::Encoding>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::System__Text__Encoding__DefaultEncoder._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::System__Text__Encoding__DefaultEncoder::*)(System::Runtime::Serialization::SerializationInfo, System::Runtime::Serialization::StreamingContext)>(&System::Text::System__Text__Encoding__DefaultEncoder::_ctor)> {
  constexpr static std::size_t size = 0x358;
  constexpr static std::size_t addrs = 0x22e15b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__Encoding__DefaultEncoder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::System__Text__Encoding__DefaultEncoder.GetRealObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (System::Text::System__Text__Encoding__DefaultEncoder::*)(System::Runtime::Serialization::StreamingContext)>(&System::Text::System__Text__Encoding__DefaultEncoder::GetRealObject)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x22e1908;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__Encoding__DefaultEncoder>::get(),
                            "GetRealObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::System__Text__Encoding__DefaultEncoder.System_Runtime_Serialization_ISerializable_GetObjectData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::System__Text__Encoding__DefaultEncoder::*)(System::Runtime::Serialization::SerializationInfo, System::Runtime::Serialization::StreamingContext)>(&System::Text::System__Text__Encoding__DefaultEncoder::System_Runtime_Serialization_ISerializable_GetObjectData)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x22e19c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__Encoding__DefaultEncoder>::get(),
                            "System.Runtime.Serialization.ISerializable.GetObjectData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::System__Text__Encoding__DefaultEncoder.GetByteCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Text::System__Text__Encoding__DefaultEncoder::*)(::ArrayW<char16_t>, int32_t, int32_t, bool)>(&System::Text::System__Text__Encoding__DefaultEncoder::GetByteCount)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x22e1a64;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::System__Text__Encoding__DefaultEncoder),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__Encoding__DefaultEncoder>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::System__Text__Encoding__DefaultEncoder.GetByteCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Text::System__Text__Encoding__DefaultEncoder::*)(void*, int32_t, bool)>(&System::Text::System__Text__Encoding__DefaultEncoder::GetByteCount)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x22e1a84;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::System__Text__Encoding__DefaultEncoder),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__Encoding__DefaultEncoder>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::System__Text__Encoding__DefaultEncoder.GetBytes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Text::System__Text__Encoding__DefaultEncoder::*)(::ArrayW<char16_t>, int32_t, int32_t, ::ArrayW<uint8_t>, int32_t, bool)>(&System::Text::System__Text__Encoding__DefaultEncoder::GetBytes)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x22e1aa8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::System__Text__Encoding__DefaultEncoder),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__Encoding__DefaultEncoder>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::System__Text__Encoding__DefaultEncoder.GetBytes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Text::System__Text__Encoding__DefaultEncoder::*)(void*, int32_t, void*, int32_t, bool)>(&System::Text::System__Text__Encoding__DefaultEncoder::GetBytes)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x22e1acc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::System__Text__Encoding__DefaultEncoder),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__Encoding__DefaultEncoder>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::Serialization::ISerializable
constexpr  System::Text::System__Text__Encoding__DefaultEncoder::operator System::Runtime::Serialization::ISerializable() const noexcept {
return System::Runtime::Serialization::ISerializable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Runtime::Serialization::IObjectReference
constexpr  System::Text::System__Text__Encoding__DefaultEncoder::operator System::Runtime::Serialization::IObjectReference() const noexcept {
return System::Runtime::Serialization::IObjectReference(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Text::System__Text__Encoding__DefaultEncoder::__set_m_encoding(System::Text::Encoding value)  {
::cordl_internals::setInstanceField<System::Text::Encoding, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Text::Encoding>(value));
}
constexpr System::Text::Encoding System::Text::System__Text__Encoding__DefaultEncoder::__get_m_encoding() const {
return ::cordl_internals::getInstanceField<System::Text::Encoding, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Text::System__Text__Encoding__DefaultEncoder::__set_m_hasInitializedEncoding(bool value)  {
::cordl_internals::setInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Text::System__Text__Encoding__DefaultEncoder::__get_m_hasInitializedEncoding() const {
return ::cordl_internals::getInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Text::System__Text__Encoding__DefaultEncoder::__set_charLeftOver(char16_t value)  {
::cordl_internals::setInstanceField<char16_t, 0x2a>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<char16_t>(value));
}
constexpr char16_t System::Text::System__Text__Encoding__DefaultEncoder::__get_charLeftOver() const {
return ::cordl_internals::getInstanceField<char16_t, 0x2a>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Text::System__Text__Encoding__DefaultEncoder System::Text::System__Text__Encoding__DefaultEncoder::New_ctor(System::Text::Encoding encoding)  {
System::Text::System__Text__Encoding__DefaultEncoder o{THROW_UNLESS(::il2cpp_utils::New<System::Text::System__Text__Encoding__DefaultEncoder>(encoding))};
return o;
}
 void System::Text::System__Text__Encoding__DefaultEncoder::_ctor(System::Text::Encoding encoding)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__Encoding__DefaultEncoder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::Encoding>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, encoding);
}
 System::Text::System__Text__Encoding__DefaultEncoder System::Text::System__Text__Encoding__DefaultEncoder::New_ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context)  {
System::Text::System__Text__Encoding__DefaultEncoder o{THROW_UNLESS(::il2cpp_utils::New<System::Text::System__Text__Encoding__DefaultEncoder>(info, context))};
return o;
}
 void System::Text::System__Text__Encoding__DefaultEncoder::_ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__Encoding__DefaultEncoder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, info, context);
}
 ::bs_hook::Il2CppWrapperType System::Text::System__Text__Encoding__DefaultEncoder::GetRealObject(System::Runtime::Serialization::StreamingContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__Encoding__DefaultEncoder>::get(),
                            "GetRealObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, context);
}
 void System::Text::System__Text__Encoding__DefaultEncoder::System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__Encoding__DefaultEncoder>::get(),
                            "System.Runtime.Serialization.ISerializable.GetObjectData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, info, context);
}
 int32_t System::Text::System__Text__Encoding__DefaultEncoder::GetByteCount(::ArrayW<char16_t> chars, int32_t index, int32_t count, bool flush)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__Encoding__DefaultEncoder>::get(),
                            "GetByteCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, chars, index, count, flush);
}
 int32_t System::Text::System__Text__Encoding__DefaultEncoder::GetByteCount(void* chars, int32_t count, bool flush)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__Encoding__DefaultEncoder>::get(),
                            "GetByteCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, chars, count, flush);
}
 int32_t System::Text::System__Text__Encoding__DefaultEncoder::GetBytes(::ArrayW<char16_t> chars, int32_t charIndex, int32_t charCount, ::ArrayW<uint8_t> bytes, int32_t byteIndex, bool flush)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__Encoding__DefaultEncoder>::get(),
                            "GetBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, chars, charIndex, charCount, bytes, byteIndex, flush);
}
 int32_t System::Text::System__Text__Encoding__DefaultEncoder::GetBytes(void* chars, int32_t charCount, void* bytes, int32_t byteCount, bool flush)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__Encoding__DefaultEncoder>::get(),
                            "GetBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, chars, charCount, bytes, byteCount, flush);
}
//  Writing Method size for method: System::Text::System__Text__Encoding__DefaultDecoder._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::System__Text__Encoding__DefaultDecoder::*)(System::Text::Encoding)>(&System::Text::System__Text__Encoding__DefaultDecoder::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x22e0cbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__Encoding__DefaultDecoder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::Encoding>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::System__Text__Encoding__DefaultDecoder._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::System__Text__Encoding__DefaultDecoder::*)(System::Runtime::Serialization::SerializationInfo, System::Runtime::Serialization::StreamingContext)>(&System::Text::System__Text__Encoding__DefaultDecoder::_ctor)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x22e1af0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__Encoding__DefaultDecoder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::System__Text__Encoding__DefaultDecoder.GetRealObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (System::Text::System__Text__Encoding__DefaultDecoder::*)(System::Runtime::Serialization::StreamingContext)>(&System::Text::System__Text__Encoding__DefaultDecoder::GetRealObject)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x22e1da8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__Encoding__DefaultDecoder>::get(),
                            "GetRealObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::System__Text__Encoding__DefaultDecoder.System_Runtime_Serialization_ISerializable_GetObjectData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::System__Text__Encoding__DefaultDecoder::*)(System::Runtime::Serialization::SerializationInfo, System::Runtime::Serialization::StreamingContext)>(&System::Text::System__Text__Encoding__DefaultDecoder::System_Runtime_Serialization_ISerializable_GetObjectData)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x22e1df4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__Encoding__DefaultDecoder>::get(),
                            "System.Runtime.Serialization.ISerializable.GetObjectData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::System__Text__Encoding__DefaultDecoder.GetCharCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Text::System__Text__Encoding__DefaultDecoder::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&System::Text::System__Text__Encoding__DefaultDecoder::GetCharCount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x22e1e98;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::System__Text__Encoding__DefaultDecoder),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__Encoding__DefaultDecoder>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::System__Text__Encoding__DefaultDecoder.GetCharCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Text::System__Text__Encoding__DefaultDecoder::*)(::ArrayW<uint8_t>, int32_t, int32_t, bool)>(&System::Text::System__Text__Encoding__DefaultDecoder::GetCharCount)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x22e1ea8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::System__Text__Encoding__DefaultDecoder),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__Encoding__DefaultDecoder>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::System__Text__Encoding__DefaultDecoder.GetCharCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Text::System__Text__Encoding__DefaultDecoder::*)(void*, int32_t, bool)>(&System::Text::System__Text__Encoding__DefaultDecoder::GetCharCount)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x22e1ecc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::System__Text__Encoding__DefaultDecoder),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__Encoding__DefaultDecoder>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::System__Text__Encoding__DefaultDecoder.GetChars
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Text::System__Text__Encoding__DefaultDecoder::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::ArrayW<char16_t>, int32_t)>(&System::Text::System__Text__Encoding__DefaultDecoder::GetChars)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x22e1ef0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::System__Text__Encoding__DefaultDecoder),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__Encoding__DefaultDecoder>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::System__Text__Encoding__DefaultDecoder.GetChars
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Text::System__Text__Encoding__DefaultDecoder::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::ArrayW<char16_t>, int32_t, bool)>(&System::Text::System__Text__Encoding__DefaultDecoder::GetChars)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x22e1f00;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::System__Text__Encoding__DefaultDecoder),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__Encoding__DefaultDecoder>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::System__Text__Encoding__DefaultDecoder.GetChars
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Text::System__Text__Encoding__DefaultDecoder::*)(void*, int32_t, void*, int32_t, bool)>(&System::Text::System__Text__Encoding__DefaultDecoder::GetChars)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x22e1f24;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::System__Text__Encoding__DefaultDecoder),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__Encoding__DefaultDecoder>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::Serialization::ISerializable
constexpr  System::Text::System__Text__Encoding__DefaultDecoder::operator System::Runtime::Serialization::ISerializable() const noexcept {
return System::Runtime::Serialization::ISerializable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Runtime::Serialization::IObjectReference
constexpr  System::Text::System__Text__Encoding__DefaultDecoder::operator System::Runtime::Serialization::IObjectReference() const noexcept {
return System::Runtime::Serialization::IObjectReference(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Text::System__Text__Encoding__DefaultDecoder::__set_m_encoding(System::Text::Encoding value)  {
::cordl_internals::setInstanceField<System::Text::Encoding, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Text::Encoding>(value));
}
constexpr System::Text::Encoding System::Text::System__Text__Encoding__DefaultDecoder::__get_m_encoding() const {
return ::cordl_internals::getInstanceField<System::Text::Encoding, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Text::System__Text__Encoding__DefaultDecoder::__set_m_hasInitializedEncoding(bool value)  {
::cordl_internals::setInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Text::System__Text__Encoding__DefaultDecoder::__get_m_hasInitializedEncoding() const {
return ::cordl_internals::getInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Text::System__Text__Encoding__DefaultDecoder System::Text::System__Text__Encoding__DefaultDecoder::New_ctor(System::Text::Encoding encoding)  {
System::Text::System__Text__Encoding__DefaultDecoder o{THROW_UNLESS(::il2cpp_utils::New<System::Text::System__Text__Encoding__DefaultDecoder>(encoding))};
return o;
}
 void System::Text::System__Text__Encoding__DefaultDecoder::_ctor(System::Text::Encoding encoding)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__Encoding__DefaultDecoder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::Encoding>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, encoding);
}
 System::Text::System__Text__Encoding__DefaultDecoder System::Text::System__Text__Encoding__DefaultDecoder::New_ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context)  {
System::Text::System__Text__Encoding__DefaultDecoder o{THROW_UNLESS(::il2cpp_utils::New<System::Text::System__Text__Encoding__DefaultDecoder>(info, context))};
return o;
}
 void System::Text::System__Text__Encoding__DefaultDecoder::_ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__Encoding__DefaultDecoder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, info, context);
}
 ::bs_hook::Il2CppWrapperType System::Text::System__Text__Encoding__DefaultDecoder::GetRealObject(System::Runtime::Serialization::StreamingContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__Encoding__DefaultDecoder>::get(),
                            "GetRealObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, context);
}
 void System::Text::System__Text__Encoding__DefaultDecoder::System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__Encoding__DefaultDecoder>::get(),
                            "System.Runtime.Serialization.ISerializable.GetObjectData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, info, context);
}
 int32_t System::Text::System__Text__Encoding__DefaultDecoder::GetCharCount(::ArrayW<uint8_t> bytes, int32_t index, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__Encoding__DefaultDecoder>::get(),
                            "GetCharCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, bytes, index, count);
}
 int32_t System::Text::System__Text__Encoding__DefaultDecoder::GetCharCount(::ArrayW<uint8_t> bytes, int32_t index, int32_t count, bool flush)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__Encoding__DefaultDecoder>::get(),
                            "GetCharCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, bytes, index, count, flush);
}
 int32_t System::Text::System__Text__Encoding__DefaultDecoder::GetCharCount(void* bytes, int32_t count, bool flush)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__Encoding__DefaultDecoder>::get(),
                            "GetCharCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, bytes, count, flush);
}
 int32_t System::Text::System__Text__Encoding__DefaultDecoder::GetChars(::ArrayW<uint8_t> bytes, int32_t byteIndex, int32_t byteCount, ::ArrayW<char16_t> chars, int32_t charIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__Encoding__DefaultDecoder>::get(),
                            "GetChars",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, bytes, byteIndex, byteCount, chars, charIndex);
}
 int32_t System::Text::System__Text__Encoding__DefaultDecoder::GetChars(::ArrayW<uint8_t> bytes, int32_t byteIndex, int32_t byteCount, ::ArrayW<char16_t> chars, int32_t charIndex, bool flush)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__Encoding__DefaultDecoder>::get(),
                            "GetChars",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, bytes, byteIndex, byteCount, chars, charIndex, flush);
}
 int32_t System::Text::System__Text__Encoding__DefaultDecoder::GetChars(void* bytes, int32_t byteCount, void* chars, int32_t charCount, bool flush)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__Encoding__DefaultDecoder>::get(),
                            "GetChars",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, bytes, byteCount, chars, charCount, flush);
}
//  Writing Method size for method: System::Text::System__Text__Encoding__EncodingCharBuffer._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::System__Text__Encoding__EncodingCharBuffer::*)(System::Text::Encoding, System::Text::DecoderNLS, void*, int32_t, void*, int32_t)>(&System::Text::System__Text__Encoding__EncodingCharBuffer::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x22e1f48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__Encoding__EncodingCharBuffer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::Encoding>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::DecoderNLS>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::System__Text__Encoding__EncodingCharBuffer.AddChar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Text::System__Text__Encoding__EncodingCharBuffer::*)(char16_t, int32_t)>(&System::Text::System__Text__Encoding__EncodingCharBuffer::AddChar)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x22e1ff0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__Encoding__EncodingCharBuffer>::get(),
                            "AddChar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::System__Text__Encoding__EncodingCharBuffer.AddChar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Text::System__Text__Encoding__EncodingCharBuffer::*)(char16_t)>(&System::Text::System__Text__Encoding__EncodingCharBuffer::AddChar)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22e2060;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__Encoding__EncodingCharBuffer>::get(),
                            "AddChar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::System__Text__Encoding__EncodingCharBuffer.AdjustBytes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::System__Text__Encoding__EncodingCharBuffer::*)(int32_t)>(&System::Text::System__Text__Encoding__EncodingCharBuffer::AdjustBytes)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x22e2068;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__Encoding__EncodingCharBuffer>::get(),
                            "AdjustBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::System__Text__Encoding__EncodingCharBuffer.get_MoreData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Text::System__Text__Encoding__EncodingCharBuffer::*)()>(&System::Text::System__Text__Encoding__EncodingCharBuffer::get_MoreData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x22e2078;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__Encoding__EncodingCharBuffer>::get(),
                            "get_MoreData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::System__Text__Encoding__EncodingCharBuffer.GetNextByte
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (System::Text::System__Text__Encoding__EncodingCharBuffer::*)()>(&System::Text::System__Text__Encoding__EncodingCharBuffer::GetNextByte)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x22e2088;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__Encoding__EncodingCharBuffer>::get(),
                            "GetNextByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::System__Text__Encoding__EncodingCharBuffer.get_BytesUsed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Text::System__Text__Encoding__EncodingCharBuffer::*)()>(&System::Text::System__Text__Encoding__EncodingCharBuffer::get_BytesUsed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x22e20ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__Encoding__EncodingCharBuffer>::get(),
                            "get_BytesUsed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::System__Text__Encoding__EncodingCharBuffer.Fallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Text::System__Text__Encoding__EncodingCharBuffer::*)(uint8_t)>(&System::Text::System__Text__Encoding__EncodingCharBuffer::Fallback)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x22e20bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__Encoding__EncodingCharBuffer>::get(),
                            "Fallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::System__Text__Encoding__EncodingCharBuffer.Fallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Text::System__Text__Encoding__EncodingCharBuffer::*)(::ArrayW<uint8_t>)>(&System::Text::System__Text__Encoding__EncodingCharBuffer::Fallback)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x22e2134;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__Encoding__EncodingCharBuffer>::get(),
                            "Fallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::System__Text__Encoding__EncodingCharBuffer.get_Count
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Text::System__Text__Encoding__EncodingCharBuffer::*)()>(&System::Text::System__Text__Encoding__EncodingCharBuffer::get_Count)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22e2210;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__Encoding__EncodingCharBuffer>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Text::System__Text__Encoding__EncodingCharBuffer::__set_chars(void* value)  {
::cordl_internals::setInstanceField<void*, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<void*>(value));
}
constexpr void* System::Text::System__Text__Encoding__EncodingCharBuffer::__get_chars() const {
return ::cordl_internals::getInstanceField<void*, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Text::System__Text__Encoding__EncodingCharBuffer::__set_charStart(void* value)  {
::cordl_internals::setInstanceField<void*, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<void*>(value));
}
constexpr void* System::Text::System__Text__Encoding__EncodingCharBuffer::__get_charStart() const {
return ::cordl_internals::getInstanceField<void*, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Text::System__Text__Encoding__EncodingCharBuffer::__set_charEnd(void* value)  {
::cordl_internals::setInstanceField<void*, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<void*>(value));
}
constexpr void* System::Text::System__Text__Encoding__EncodingCharBuffer::__get_charEnd() const {
return ::cordl_internals::getInstanceField<void*, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Text::System__Text__Encoding__EncodingCharBuffer::__set_charCountResult(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Text::System__Text__Encoding__EncodingCharBuffer::__get_charCountResult() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Text::System__Text__Encoding__EncodingCharBuffer::__set_enc(System::Text::Encoding value)  {
::cordl_internals::setInstanceField<System::Text::Encoding, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Text::Encoding>(value));
}
constexpr System::Text::Encoding System::Text::System__Text__Encoding__EncodingCharBuffer::__get_enc() const {
return ::cordl_internals::getInstanceField<System::Text::Encoding, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Text::System__Text__Encoding__EncodingCharBuffer::__set_decoder(System::Text::DecoderNLS value)  {
::cordl_internals::setInstanceField<System::Text::DecoderNLS, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Text::DecoderNLS>(value));
}
constexpr System::Text::DecoderNLS System::Text::System__Text__Encoding__EncodingCharBuffer::__get_decoder() const {
return ::cordl_internals::getInstanceField<System::Text::DecoderNLS, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Text::System__Text__Encoding__EncodingCharBuffer::__set_byteStart(void* value)  {
::cordl_internals::setInstanceField<void*, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<void*>(value));
}
constexpr void* System::Text::System__Text__Encoding__EncodingCharBuffer::__get_byteStart() const {
return ::cordl_internals::getInstanceField<void*, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Text::System__Text__Encoding__EncodingCharBuffer::__set_byteEnd(void* value)  {
::cordl_internals::setInstanceField<void*, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<void*>(value));
}
constexpr void* System::Text::System__Text__Encoding__EncodingCharBuffer::__get_byteEnd() const {
return ::cordl_internals::getInstanceField<void*, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Text::System__Text__Encoding__EncodingCharBuffer::__set_bytes(void* value)  {
::cordl_internals::setInstanceField<void*, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<void*>(value));
}
constexpr void* System::Text::System__Text__Encoding__EncodingCharBuffer::__get_bytes() const {
return ::cordl_internals::getInstanceField<void*, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Text::System__Text__Encoding__EncodingCharBuffer::__set_fallbackBuffer(System::Text::DecoderFallbackBuffer value)  {
::cordl_internals::setInstanceField<System::Text::DecoderFallbackBuffer, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Text::DecoderFallbackBuffer>(value));
}
constexpr System::Text::DecoderFallbackBuffer System::Text::System__Text__Encoding__EncodingCharBuffer::__get_fallbackBuffer() const {
return ::cordl_internals::getInstanceField<System::Text::DecoderFallbackBuffer, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Text::System__Text__Encoding__EncodingCharBuffer System::Text::System__Text__Encoding__EncodingCharBuffer::New_ctor(System::Text::Encoding enc, System::Text::DecoderNLS decoder, void* charStart, int32_t charCount, void* byteStart, int32_t byteCount)  {
System::Text::System__Text__Encoding__EncodingCharBuffer o{THROW_UNLESS(::il2cpp_utils::New<System::Text::System__Text__Encoding__EncodingCharBuffer>(enc, decoder, charStart, charCount, byteStart, byteCount))};
return o;
}
 void System::Text::System__Text__Encoding__EncodingCharBuffer::_ctor(System::Text::Encoding enc, System::Text::DecoderNLS decoder, void* charStart, int32_t charCount, void* byteStart, int32_t byteCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__Encoding__EncodingCharBuffer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::Encoding>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::DecoderNLS>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, enc, decoder, charStart, charCount, byteStart, byteCount);
}
 bool System::Text::System__Text__Encoding__EncodingCharBuffer::AddChar(char16_t ch, int32_t numBytes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__Encoding__EncodingCharBuffer>::get(),
                            "AddChar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, ch, numBytes);
}
 bool System::Text::System__Text__Encoding__EncodingCharBuffer::AddChar(char16_t ch)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__Encoding__EncodingCharBuffer>::get(),
                            "AddChar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, ch);
}
 void System::Text::System__Text__Encoding__EncodingCharBuffer::AdjustBytes(int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__Encoding__EncodingCharBuffer>::get(),
                            "AdjustBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, count);
}
 bool System::Text::System__Text__Encoding__EncodingCharBuffer::get_MoreData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__Encoding__EncodingCharBuffer>::get(),
                            "get_MoreData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 uint8_t System::Text::System__Text__Encoding__EncodingCharBuffer::GetNextByte()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__Encoding__EncodingCharBuffer>::get(),
                            "GetNextByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint8_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::Text::System__Text__Encoding__EncodingCharBuffer::get_BytesUsed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__Encoding__EncodingCharBuffer>::get(),
                            "get_BytesUsed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Text::System__Text__Encoding__EncodingCharBuffer::Fallback(uint8_t fallbackByte)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__Encoding__EncodingCharBuffer>::get(),
                            "Fallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, fallbackByte);
}
 bool System::Text::System__Text__Encoding__EncodingCharBuffer::Fallback(::ArrayW<uint8_t> byteBuffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__Encoding__EncodingCharBuffer>::get(),
                            "Fallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, byteBuffer);
}
 int32_t System::Text::System__Text__Encoding__EncodingCharBuffer::get_Count()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__Encoding__EncodingCharBuffer>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: System::Text::System__Text__Encoding__EncodingByteBuffer._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::System__Text__Encoding__EncodingByteBuffer::*)(System::Text::Encoding, System::Text::EncoderNLS, void*, int32_t, void*, int32_t)>(&System::Text::System__Text__Encoding__EncodingByteBuffer::_ctor)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x22e2218;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__Encoding__EncodingByteBuffer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::Encoding>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::EncoderNLS>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::System__Text__Encoding__EncodingByteBuffer.AddByte
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Text::System__Text__Encoding__EncodingByteBuffer::*)(uint8_t, int32_t)>(&System::Text::System__Text__Encoding__EncodingByteBuffer::AddByte)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x22e241c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__Encoding__EncodingByteBuffer>::get(),
                            "AddByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::System__Text__Encoding__EncodingByteBuffer.AddByte
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Text::System__Text__Encoding__EncodingByteBuffer::*)(uint8_t)>(&System::Text::System__Text__Encoding__EncodingByteBuffer::AddByte)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22e24ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__Encoding__EncodingByteBuffer>::get(),
                            "AddByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::System__Text__Encoding__EncodingByteBuffer.AddByte
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Text::System__Text__Encoding__EncodingByteBuffer::*)(uint8_t, uint8_t)>(&System::Text::System__Text__Encoding__EncodingByteBuffer::AddByte)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22e24f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__Encoding__EncodingByteBuffer>::get(),
                            "AddByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::System__Text__Encoding__EncodingByteBuffer.AddByte
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Text::System__Text__Encoding__EncodingByteBuffer::*)(uint8_t, uint8_t, int32_t)>(&System::Text::System__Text__Encoding__EncodingByteBuffer::AddByte)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x22e24fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__Encoding__EncodingByteBuffer>::get(),
                            "AddByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::System__Text__Encoding__EncodingByteBuffer.MovePrevious
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::System__Text__Encoding__EncodingByteBuffer::*)(bool)>(&System::Text::System__Text__Encoding__EncodingByteBuffer::MovePrevious)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x22e246c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__Encoding__EncodingByteBuffer>::get(),
                            "MovePrevious",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::System__Text__Encoding__EncodingByteBuffer.get_MoreData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Text::System__Text__Encoding__EncodingByteBuffer::*)()>(&System::Text::System__Text__Encoding__EncodingByteBuffer::get_MoreData)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x22e2544;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__Encoding__EncodingByteBuffer>::get(),
                            "get_MoreData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::System__Text__Encoding__EncodingByteBuffer.GetNextChar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (System::Text::System__Text__Encoding__EncodingByteBuffer::*)()>(&System::Text::System__Text__Encoding__EncodingByteBuffer::GetNextChar)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x22e258c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__Encoding__EncodingByteBuffer>::get(),
                            "GetNextChar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::System__Text__Encoding__EncodingByteBuffer.get_CharsUsed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Text::System__Text__Encoding__EncodingByteBuffer::*)()>(&System::Text::System__Text__Encoding__EncodingByteBuffer::get_CharsUsed)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x22e25dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__Encoding__EncodingByteBuffer>::get(),
                            "get_CharsUsed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::System__Text__Encoding__EncodingByteBuffer.get_Count
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Text::System__Text__Encoding__EncodingByteBuffer::*)()>(&System::Text::System__Text__Encoding__EncodingByteBuffer::get_Count)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22e25f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__Encoding__EncodingByteBuffer>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Text::System__Text__Encoding__EncodingByteBuffer::__set_bytes(void* value)  {
::cordl_internals::setInstanceField<void*, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<void*>(value));
}
constexpr void* System::Text::System__Text__Encoding__EncodingByteBuffer::__get_bytes() const {
return ::cordl_internals::getInstanceField<void*, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Text::System__Text__Encoding__EncodingByteBuffer::__set_byteStart(void* value)  {
::cordl_internals::setInstanceField<void*, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<void*>(value));
}
constexpr void* System::Text::System__Text__Encoding__EncodingByteBuffer::__get_byteStart() const {
return ::cordl_internals::getInstanceField<void*, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Text::System__Text__Encoding__EncodingByteBuffer::__set_byteEnd(void* value)  {
::cordl_internals::setInstanceField<void*, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<void*>(value));
}
constexpr void* System::Text::System__Text__Encoding__EncodingByteBuffer::__get_byteEnd() const {
return ::cordl_internals::getInstanceField<void*, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Text::System__Text__Encoding__EncodingByteBuffer::__set_chars(void* value)  {
::cordl_internals::setInstanceField<void*, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<void*>(value));
}
constexpr void* System::Text::System__Text__Encoding__EncodingByteBuffer::__get_chars() const {
return ::cordl_internals::getInstanceField<void*, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Text::System__Text__Encoding__EncodingByteBuffer::__set_charStart(void* value)  {
::cordl_internals::setInstanceField<void*, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<void*>(value));
}
constexpr void* System::Text::System__Text__Encoding__EncodingByteBuffer::__get_charStart() const {
return ::cordl_internals::getInstanceField<void*, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Text::System__Text__Encoding__EncodingByteBuffer::__set_charEnd(void* value)  {
::cordl_internals::setInstanceField<void*, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<void*>(value));
}
constexpr void* System::Text::System__Text__Encoding__EncodingByteBuffer::__get_charEnd() const {
return ::cordl_internals::getInstanceField<void*, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Text::System__Text__Encoding__EncodingByteBuffer::__set_byteCountResult(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Text::System__Text__Encoding__EncodingByteBuffer::__get_byteCountResult() const {
return ::cordl_internals::getInstanceField<int32_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Text::System__Text__Encoding__EncodingByteBuffer::__set_enc(System::Text::Encoding value)  {
::cordl_internals::setInstanceField<System::Text::Encoding, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Text::Encoding>(value));
}
constexpr System::Text::Encoding System::Text::System__Text__Encoding__EncodingByteBuffer::__get_enc() const {
return ::cordl_internals::getInstanceField<System::Text::Encoding, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Text::System__Text__Encoding__EncodingByteBuffer::__set_encoder(System::Text::EncoderNLS value)  {
::cordl_internals::setInstanceField<System::Text::EncoderNLS, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Text::EncoderNLS>(value));
}
constexpr System::Text::EncoderNLS System::Text::System__Text__Encoding__EncodingByteBuffer::__get_encoder() const {
return ::cordl_internals::getInstanceField<System::Text::EncoderNLS, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Text::System__Text__Encoding__EncodingByteBuffer::__set_fallbackBuffer(System::Text::EncoderFallbackBuffer value)  {
::cordl_internals::setInstanceField<System::Text::EncoderFallbackBuffer, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Text::EncoderFallbackBuffer>(value));
}
constexpr System::Text::EncoderFallbackBuffer System::Text::System__Text__Encoding__EncodingByteBuffer::__get_fallbackBuffer() const {
return ::cordl_internals::getInstanceField<System::Text::EncoderFallbackBuffer, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Text::System__Text__Encoding__EncodingByteBuffer System::Text::System__Text__Encoding__EncodingByteBuffer::New_ctor(System::Text::Encoding inEncoding, System::Text::EncoderNLS inEncoder, void* inByteStart, int32_t inByteCount, void* inCharStart, int32_t inCharCount)  {
System::Text::System__Text__Encoding__EncodingByteBuffer o{THROW_UNLESS(::il2cpp_utils::New<System::Text::System__Text__Encoding__EncodingByteBuffer>(inEncoding, inEncoder, inByteStart, inByteCount, inCharStart, inCharCount))};
return o;
}
 void System::Text::System__Text__Encoding__EncodingByteBuffer::_ctor(System::Text::Encoding inEncoding, System::Text::EncoderNLS inEncoder, void* inByteStart, int32_t inByteCount, void* inCharStart, int32_t inCharCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__Encoding__EncodingByteBuffer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::Encoding>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::EncoderNLS>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inEncoding, inEncoder, inByteStart, inByteCount, inCharStart, inCharCount);
}
 bool System::Text::System__Text__Encoding__EncodingByteBuffer::AddByte(uint8_t b, int32_t moreBytesExpected)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__Encoding__EncodingByteBuffer>::get(),
                            "AddByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, b, moreBytesExpected);
}
 bool System::Text::System__Text__Encoding__EncodingByteBuffer::AddByte(uint8_t b1)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__Encoding__EncodingByteBuffer>::get(),
                            "AddByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, b1);
}
 bool System::Text::System__Text__Encoding__EncodingByteBuffer::AddByte(uint8_t b1, uint8_t b2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__Encoding__EncodingByteBuffer>::get(),
                            "AddByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, b1, b2);
}
 bool System::Text::System__Text__Encoding__EncodingByteBuffer::AddByte(uint8_t b1, uint8_t b2, int32_t moreBytesExpected)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__Encoding__EncodingByteBuffer>::get(),
                            "AddByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, b1, b2, moreBytesExpected);
}
 void System::Text::System__Text__Encoding__EncodingByteBuffer::MovePrevious(bool bThrow)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__Encoding__EncodingByteBuffer>::get(),
                            "MovePrevious",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, bThrow);
}
 bool System::Text::System__Text__Encoding__EncodingByteBuffer::get_MoreData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__Encoding__EncodingByteBuffer>::get(),
                            "get_MoreData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 char16_t System::Text::System__Text__Encoding__EncodingByteBuffer::GetNextChar()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__Encoding__EncodingByteBuffer>::get(),
                            "GetNextChar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<char16_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::Text::System__Text__Encoding__EncodingByteBuffer::get_CharsUsed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__Encoding__EncodingByteBuffer>::get(),
                            "get_CharsUsed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::Text::System__Text__Encoding__EncodingByteBuffer::get_Count()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::System__Text__Encoding__EncodingByteBuffer>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: System::Text::Encoding._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::Encoding::*)()>(&System::Text::Encoding::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x22ddbec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::Encoding._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::Encoding::*)(int32_t)>(&System::Text::Encoding::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x22ddc1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::Encoding.SetDefaultFallbacks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::Encoding::*)()>(&System::Text::Encoding::SetDefaultFallbacks)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x22ddca8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::Encoding),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::Encoding.OnDeserializing
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::Encoding::*)()>(&System::Text::Encoding::OnDeserializing)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x22ddd40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                            "OnDeserializing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::Encoding.OnDeserialized
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::Encoding::*)()>(&System::Text::Encoding::OnDeserialized)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x22ddd50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                            "OnDeserialized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::Encoding.OnDeserializing
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::Encoding::*)(System::Runtime::Serialization::StreamingContext)>(&System::Text::Encoding::OnDeserializing)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x22ddd8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                            "OnDeserializing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::Encoding.OnDeserialized
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::Encoding::*)(System::Runtime::Serialization::StreamingContext)>(&System::Text::Encoding::OnDeserialized)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x22ddd9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                            "OnDeserialized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::Encoding.OnSerializing
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::Encoding::*)(System::Runtime::Serialization::StreamingContext)>(&System::Text::Encoding::OnSerializing)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22dddd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                            "OnSerializing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::Encoding.DeserializeEncoding
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::Encoding::*)(System::Runtime::Serialization::SerializationInfo, System::Runtime::Serialization::StreamingContext)>(&System::Text::Encoding::DeserializeEncoding)> {
  constexpr static std::size_t size = 0x400;
  constexpr static std::size_t addrs = 0x22ddde0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                            "DeserializeEncoding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::Encoding.SerializeEncoding
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::Encoding::*)(System::Runtime::Serialization::SerializationInfo, System::Runtime::Serialization::StreamingContext)>(&System::Text::Encoding::SerializeEncoding)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x22de1e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                            "SerializeEncoding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::Encoding.get_InternalSyncObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (*)()>(&System::Text::Encoding::get_InternalSyncObject)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x22de38c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                            "get_InternalSyncObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::Encoding.GetEncoding
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Text::Encoding (*)(int32_t)>(&System::Text::Encoding::GetEncoding)> {
  constexpr static std::size_t size = 0x8ec;
  constexpr static std::size_t addrs = 0x22de42c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                            "GetEncoding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::Encoding.GetEncoding
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Text::Encoding (*)(int32_t, System::Text::EncoderFallback, System::Text::DecoderFallback)>(&System::Text::Encoding::GetEncoding)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x22df8a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                            "GetEncoding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::EncoderFallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::DecoderFallback>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::Encoding.GetEncoding
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Text::Encoding (*)(::StringW)>(&System::Text::Encoding::GetEncoding)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x22dfb3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                            "GetEncoding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::Encoding.GetPreamble
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::Text::Encoding::*)()>(&System::Text::Encoding::GetPreamble)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x22dfbd8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::Encoding),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::Encoding.get_Preamble
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::ReadOnlySpan_1<uint8_t> (System::Text::Encoding::*)()>(&System::Text::Encoding::get_Preamble)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x22dfc30;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::Encoding),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::Encoding.GetDataItem
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::Encoding::*)()>(&System::Text::Encoding::GetDataItem)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x22dfc84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                            "GetDataItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::Encoding.get_EncodingName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Text::Encoding::*)()>(&System::Text::Encoding::get_EncodingName)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x22dfdac;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::Encoding),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::Encoding.get_WebName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Text::Encoding::*)()>(&System::Text::Encoding::get_WebName)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x22dfdb8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::Encoding),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::Encoding.get_EncoderFallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Text::EncoderFallback (System::Text::Encoding::*)()>(&System::Text::Encoding::get_EncoderFallback)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22dfde8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                            "get_EncoderFallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::Encoding.set_EncoderFallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::Encoding::*)(System::Text::EncoderFallback)>(&System::Text::Encoding::set_EncoderFallback)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x22df9ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                            "set_EncoderFallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::EncoderFallback>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::Encoding.get_DecoderFallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Text::DecoderFallback (System::Text::Encoding::*)()>(&System::Text::Encoding::get_DecoderFallback)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22dfdf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                            "get_DecoderFallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::Encoding.set_DecoderFallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::Encoding::*)(System::Text::DecoderFallback)>(&System::Text::Encoding::set_DecoderFallback)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x22dfa74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                            "set_DecoderFallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::DecoderFallback>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::Encoding.Clone
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (System::Text::Encoding::*)()>(&System::Text::Encoding::Clone)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x22dfdf8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::Encoding),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::Encoding.get_IsReadOnly
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Text::Encoding::*)()>(&System::Text::Encoding::get_IsReadOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22dfe80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                            "get_IsReadOnly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::Encoding.get_ASCII
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Text::Encoding (*)()>(&System::Text::Encoding::get_ASCII)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x22df04c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                            "get_ASCII",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::Encoding.get_Latin1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Text::Encoding (*)()>(&System::Text::Encoding::get_Latin1)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x22df0f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                            "get_Latin1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::Encoding.GetByteCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Text::Encoding::*)(::StringW)>(&System::Text::Encoding::GetByteCount)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x22dfe88;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::Encoding),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::Encoding.GetByteCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Text::Encoding::*)(::ArrayW<char16_t>, int32_t, int32_t)>(&System::Text::Encoding::GetByteCount)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::Encoding),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::Encoding.GetByteCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Text::Encoding::*)(void*, int32_t)>(&System::Text::Encoding::GetByteCount)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x22dff14;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::Encoding),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::Encoding.GetByteCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Text::Encoding::*)(void*, int32_t, System::Text::EncoderNLS)>(&System::Text::Encoding::GetByteCount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x22e0088;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::Encoding),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::Encoding.GetBytes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::Text::Encoding::*)(::ArrayW<char16_t>)>(&System::Text::Encoding::GetBytes)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x22e0098;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::Encoding),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::Encoding.GetBytes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::Text::Encoding::*)(::ArrayW<char16_t>, int32_t, int32_t)>(&System::Text::Encoding::GetBytes)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x22e012c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::Encoding),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::Encoding.GetBytes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Text::Encoding::*)(::ArrayW<char16_t>, int32_t, int32_t, ::ArrayW<uint8_t>, int32_t)>(&System::Text::Encoding::GetBytes)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::Encoding),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::Encoding.GetBytes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::Text::Encoding::*)(::StringW)>(&System::Text::Encoding::GetBytes)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x22e01e4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::Encoding),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                                  18
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::Encoding.GetBytes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Text::Encoding::*)(::StringW, int32_t, int32_t, ::ArrayW<uint8_t>, int32_t)>(&System::Text::Encoding::GetBytes)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22e02e8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::Encoding),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                                  19
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::Encoding.GetBytes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Text::Encoding::*)(void*, int32_t, void*, int32_t, System::Text::EncoderNLS)>(&System::Text::Encoding::GetBytes)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x22e0398;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::Encoding),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::Encoding.GetBytes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Text::Encoding::*)(void*, int32_t, void*, int32_t)>(&System::Text::Encoding::GetBytes)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x22e03a8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::Encoding),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                                  21
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::Encoding.GetCharCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Text::Encoding::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&System::Text::Encoding::GetCharCount)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::Encoding),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                                  22
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::Encoding.GetCharCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Text::Encoding::*)(void*, int32_t)>(&System::Text::Encoding::GetCharCount)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x22e05d4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::Encoding),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                                  23
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::Encoding.GetCharCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Text::Encoding::*)(void*, int32_t, System::Text::DecoderNLS)>(&System::Text::Encoding::GetCharCount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x22e074c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::Encoding),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                                  24
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::Encoding.GetChars
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<char16_t> (System::Text::Encoding::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&System::Text::Encoding::GetChars)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x22e075c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::Encoding),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                                  25
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::Encoding.GetChars
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Text::Encoding::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::ArrayW<char16_t>, int32_t)>(&System::Text::Encoding::GetChars)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::Encoding),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                                  26
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::Encoding.GetChars
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Text::Encoding::*)(void*, int32_t, void*, int32_t)>(&System::Text::Encoding::GetChars)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x22e0818;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::Encoding),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                                  27
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::Encoding.GetChars
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Text::Encoding::*)(void*, int32_t, void*, int32_t, System::Text::DecoderNLS)>(&System::Text::Encoding::GetChars)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x22e0a44;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::Encoding),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                                  28
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::Encoding.GetString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Text::Encoding::*)(void*, int32_t)>(&System::Text::Encoding::GetString)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x22e0a54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                            "GetString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::Encoding.GetChars
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Text::Encoding::*)(System::ReadOnlySpan_1<uint8_t>, System::Span_1<char16_t>)>(&System::Text::Encoding::GetChars)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x22e0b40;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::Encoding),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                                  29
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::Encoding.GetString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Text::Encoding::*)(System::ReadOnlySpan_1<uint8_t>)>(&System::Text::Encoding::GetString)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x22e0be4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                            "GetString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::Encoding.get_CodePage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Text::Encoding::*)()>(&System::Text::Encoding::get_CodePage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22e0c48;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::Encoding),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                                  30
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::Encoding.GetDecoder
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Text::Decoder (System::Text::Encoding::*)()>(&System::Text::Encoding::GetDecoder)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x22e0c50;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::Encoding),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                                  31
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::Encoding.CreateDefaultEncoding
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Text::Encoding (*)()>(&System::Text::Encoding::CreateDefaultEncoding)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x22e0cec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                            "CreateDefaultEncoding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::Encoding.setReadOnly
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::Encoding::*)(bool)>(&System::Text::Encoding::setReadOnly)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x22e0ec8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                            "setReadOnly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::Encoding.get_Default
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Text::Encoding (*)()>(&System::Text::Encoding::get_Default)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x22ded18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                            "get_Default",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::Encoding.GetEncoder
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Text::Encoder (System::Text::Encoding::*)()>(&System::Text::Encoding::GetEncoder)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x22e0ed4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::Encoding),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                                  32
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::Encoding.GetMaxByteCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Text::Encoding::*)(int32_t)>(&System::Text::Encoding::GetMaxByteCount)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::Encoding),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                                  33
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::Encoding.GetMaxCharCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Text::Encoding::*)(int32_t)>(&System::Text::Encoding::GetMaxCharCount)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::Encoding),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                                  34
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::Encoding.GetString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Text::Encoding::*)(::ArrayW<uint8_t>)>(&System::Text::Encoding::GetString)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x22e0f70;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::Encoding),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                                  35
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::Encoding.GetString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Text::Encoding::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&System::Text::Encoding::GetString)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x22e1004;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::Encoding),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                                  36
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::Encoding.get_Unicode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Text::Encoding (*)()>(&System::Text::Encoding::get_Unicode)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22ded94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                            "get_Unicode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::Encoding.get_BigEndianUnicode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Text::Encoding (*)()>(&System::Text::Encoding::get_BigEndianUnicode)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22dee44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                            "get_BigEndianUnicode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::Encoding.get_UTF7
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Text::Encoding (*)()>(&System::Text::Encoding::get_UTF7)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x22deef4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                            "get_UTF7",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::Encoding.get_UTF8
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Text::Encoding (*)()>(&System::Text::Encoding::get_UTF8)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x22dda4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                            "get_UTF8",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::Encoding.get_UTF32
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Text::Encoding (*)()>(&System::Text::Encoding::get_UTF32)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22def9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                            "get_UTF32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::Encoding.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Text::Encoding::*)(::bs_hook::Il2CppWrapperType)>(&System::Text::Encoding::Equals)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x22e102c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::Encoding),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::Encoding.GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Text::Encoding::*)()>(&System::Text::Encoding::GetHashCode)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x22e10fc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::Encoding),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::Encoding.GetBestFitUnicodeToBytesData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<char16_t> (System::Text::Encoding::*)()>(&System::Text::Encoding::GetBestFitUnicodeToBytesData)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x22e1154;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::Encoding),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                                  37
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::Encoding.GetBestFitBytesToUnicodeData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<char16_t> (System::Text::Encoding::*)()>(&System::Text::Encoding::GetBestFitBytesToUnicodeData)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x22e11ac;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::Encoding),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                                  38
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::Encoding.ThrowBytesOverflow
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::Encoding::*)()>(&System::Text::Encoding::ThrowBytesOverflow)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x22e1204;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                            "ThrowBytesOverflow",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::Encoding.ThrowBytesOverflow
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::Encoding::*)(System::Text::EncoderNLS, bool)>(&System::Text::Encoding::ThrowBytesOverflow)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x22e130c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                            "ThrowBytesOverflow",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::EncoderNLS>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::Encoding.ThrowCharsOverflow
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::Encoding::*)()>(&System::Text::Encoding::ThrowCharsOverflow)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x22e1388;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                            "ThrowCharsOverflow",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::Encoding.ThrowCharsOverflow
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::Encoding::*)(System::Text::DecoderNLS, bool)>(&System::Text::Encoding::ThrowCharsOverflow)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x22e1490;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                            "ThrowCharsOverflow",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::DecoderNLS>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Text::Encoding.GetBytes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Text::Encoding::*)(System::ReadOnlySpan_1<char16_t>, System::Span_1<uint8_t>)>(&System::Text::Encoding::GetBytes)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x22e150c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Text::Encoding),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                                  39
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::ICloneable
constexpr  System::Text::Encoding::operator System::ICloneable() const noexcept {
return System::ICloneable(::bs_hook::Il2CppWrapperType::instance);
}
 void System::Text::Encoding::__set_defaultEncoding(System::Text::Encoding value)  {
::cordl_internals::setStaticField<System::Text::Encoding, "defaultEncoding", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get>(std::forward<System::Text::Encoding>(value));
}
 System::Text::Encoding System::Text::Encoding::__get_defaultEncoding()  {
return ::cordl_internals::getStaticField<System::Text::Encoding, "defaultEncoding", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get>();
}
 void System::Text::Encoding::__set_unicodeEncoding(System::Text::Encoding value)  {
::cordl_internals::setStaticField<System::Text::Encoding, "unicodeEncoding", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get>(std::forward<System::Text::Encoding>(value));
}
 System::Text::Encoding System::Text::Encoding::__get_unicodeEncoding()  {
return ::cordl_internals::getStaticField<System::Text::Encoding, "unicodeEncoding", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get>();
}
 void System::Text::Encoding::__set_bigEndianUnicode(System::Text::Encoding value)  {
::cordl_internals::setStaticField<System::Text::Encoding, "bigEndianUnicode", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get>(std::forward<System::Text::Encoding>(value));
}
 System::Text::Encoding System::Text::Encoding::__get_bigEndianUnicode()  {
return ::cordl_internals::getStaticField<System::Text::Encoding, "bigEndianUnicode", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get>();
}
 void System::Text::Encoding::__set_utf7Encoding(System::Text::Encoding value)  {
::cordl_internals::setStaticField<System::Text::Encoding, "utf7Encoding", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get>(std::forward<System::Text::Encoding>(value));
}
 System::Text::Encoding System::Text::Encoding::__get_utf7Encoding()  {
return ::cordl_internals::getStaticField<System::Text::Encoding, "utf7Encoding", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get>();
}
 void System::Text::Encoding::__set_utf8Encoding(System::Text::Encoding value)  {
::cordl_internals::setStaticField<System::Text::Encoding, "utf8Encoding", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get>(std::forward<System::Text::Encoding>(value));
}
 System::Text::Encoding System::Text::Encoding::__get_utf8Encoding()  {
return ::cordl_internals::getStaticField<System::Text::Encoding, "utf8Encoding", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get>();
}
 void System::Text::Encoding::__set_utf32Encoding(System::Text::Encoding value)  {
::cordl_internals::setStaticField<System::Text::Encoding, "utf32Encoding", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get>(std::forward<System::Text::Encoding>(value));
}
 System::Text::Encoding System::Text::Encoding::__get_utf32Encoding()  {
return ::cordl_internals::getStaticField<System::Text::Encoding, "utf32Encoding", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get>();
}
 void System::Text::Encoding::__set_asciiEncoding(System::Text::Encoding value)  {
::cordl_internals::setStaticField<System::Text::Encoding, "asciiEncoding", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get>(std::forward<System::Text::Encoding>(value));
}
 System::Text::Encoding System::Text::Encoding::__get_asciiEncoding()  {
return ::cordl_internals::getStaticField<System::Text::Encoding, "asciiEncoding", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get>();
}
 void System::Text::Encoding::__set_latin1Encoding(System::Text::Encoding value)  {
::cordl_internals::setStaticField<System::Text::Encoding, "latin1Encoding", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get>(std::forward<System::Text::Encoding>(value));
}
 System::Text::Encoding System::Text::Encoding::__get_latin1Encoding()  {
return ::cordl_internals::getStaticField<System::Text::Encoding, "latin1Encoding", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get>();
}
 void System::Text::Encoding::__set_encodings(System::Collections::Generic::Dictionary_2<int32_t,System::Text::Encoding> value)  {
::cordl_internals::setStaticField<System::Collections::Generic::Dictionary_2<int32_t,System::Text::Encoding>, "encodings", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get>(std::forward<System::Collections::Generic::Dictionary_2<int32_t,System::Text::Encoding>>(value));
}
 System::Collections::Generic::Dictionary_2<int32_t,System::Text::Encoding> System::Text::Encoding::__get_encodings()  {
return ::cordl_internals::getStaticField<System::Collections::Generic::Dictionary_2<int32_t,System::Text::Encoding>, "encodings", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get>();
}
constexpr void System::Text::Encoding::__set_m_codePage(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Text::Encoding::__get_m_codePage() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Text::Encoding::__set_dataItem(System::Globalization::CodePageDataItem value)  {
::cordl_internals::setInstanceField<System::Globalization::CodePageDataItem, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Globalization::CodePageDataItem>(value));
}
constexpr System::Globalization::CodePageDataItem System::Text::Encoding::__get_dataItem() const {
return ::cordl_internals::getInstanceField<System::Globalization::CodePageDataItem, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Text::Encoding::__set_m_deserializedFromEverett(bool value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Text::Encoding::__get_m_deserializedFromEverett() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Text::Encoding::__set_m_isReadOnly(bool value)  {
::cordl_internals::setInstanceField<bool, 0x21>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Text::Encoding::__get_m_isReadOnly() const {
return ::cordl_internals::getInstanceField<bool, 0x21>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Text::Encoding::__set_encoderFallback(System::Text::EncoderFallback value)  {
::cordl_internals::setInstanceField<System::Text::EncoderFallback, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Text::EncoderFallback>(value));
}
constexpr System::Text::EncoderFallback System::Text::Encoding::__get_encoderFallback() const {
return ::cordl_internals::getInstanceField<System::Text::EncoderFallback, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Text::Encoding::__set_decoderFallback(System::Text::DecoderFallback value)  {
::cordl_internals::setInstanceField<System::Text::DecoderFallback, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Text::DecoderFallback>(value));
}
constexpr System::Text::DecoderFallback System::Text::Encoding::__get_decoderFallback() const {
return ::cordl_internals::getInstanceField<System::Text::DecoderFallback, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void System::Text::Encoding::__set_s_InternalSyncObject(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setStaticField<::bs_hook::Il2CppWrapperType, "s_InternalSyncObject", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get>(std::forward<::bs_hook::Il2CppWrapperType>(value));
}
 ::bs_hook::Il2CppWrapperType System::Text::Encoding::__get_s_InternalSyncObject()  {
return ::cordl_internals::getStaticField<::bs_hook::Il2CppWrapperType, "s_InternalSyncObject", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get>();
}
 System::Text::Encoding System::Text::Encoding::New_ctor()  {
System::Text::Encoding o{THROW_UNLESS(::il2cpp_utils::New<System::Text::Encoding>())};
return o;
}
 void System::Text::Encoding::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Text::Encoding System::Text::Encoding::New_ctor(int32_t codePage)  {
System::Text::Encoding o{THROW_UNLESS(::il2cpp_utils::New<System::Text::Encoding>(codePage))};
return o;
}
 void System::Text::Encoding::_ctor(int32_t codePage)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, codePage);
}
 void System::Text::Encoding::SetDefaultFallbacks()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                            "SetDefaultFallbacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Text::Encoding::OnDeserializing()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                            "OnDeserializing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Text::Encoding::OnDeserialized()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                            "OnDeserialized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Text::Encoding::OnDeserializing(System::Runtime::Serialization::StreamingContext ctx)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                            "OnDeserializing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ctx);
}
 void System::Text::Encoding::OnDeserialized(System::Runtime::Serialization::StreamingContext ctx)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                            "OnDeserialized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ctx);
}
 void System::Text::Encoding::OnSerializing(System::Runtime::Serialization::StreamingContext ctx)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                            "OnSerializing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ctx);
}
 void System::Text::Encoding::DeserializeEncoding(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                            "DeserializeEncoding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, info, context);
}
 void System::Text::Encoding::SerializeEncoding(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                            "SerializeEncoding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, info, context);
}
 ::bs_hook::Il2CppWrapperType System::Text::Encoding::get_InternalSyncObject()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                            "get_InternalSyncObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method);
}
 System::Text::Encoding System::Text::Encoding::GetEncoding(int32_t codepage)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                            "GetEncoding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Text::Encoding, false>(nullptr, ___internal_method, codepage);
}
 System::Text::Encoding System::Text::Encoding::GetEncoding(int32_t codepage, System::Text::EncoderFallback encoderFallback, System::Text::DecoderFallback decoderFallback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                            "GetEncoding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::EncoderFallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::DecoderFallback>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Text::Encoding, false>(nullptr, ___internal_method, codepage, encoderFallback, decoderFallback);
}
 System::Text::Encoding System::Text::Encoding::GetEncoding(::StringW name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                            "GetEncoding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Text::Encoding, false>(nullptr, ___internal_method, name);
}
 ::ArrayW<uint8_t> System::Text::Encoding::GetPreamble()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                            "GetPreamble",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::ReadOnlySpan_1<uint8_t> System::Text::Encoding::get_Preamble()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                            "get_Preamble",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::ReadOnlySpan_1<uint8_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Text::Encoding::GetDataItem()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                            "GetDataItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Text::Encoding::get_EncodingName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                            "get_EncodingName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Text::Encoding::get_WebName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                            "get_WebName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Text::EncoderFallback System::Text::Encoding::get_EncoderFallback()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                            "get_EncoderFallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Text::EncoderFallback, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Text::Encoding::set_EncoderFallback(System::Text::EncoderFallback value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                            "set_EncoderFallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::EncoderFallback>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 System::Text::DecoderFallback System::Text::Encoding::get_DecoderFallback()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                            "get_DecoderFallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Text::DecoderFallback, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Text::Encoding::set_DecoderFallback(System::Text::DecoderFallback value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                            "set_DecoderFallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::DecoderFallback>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::bs_hook::Il2CppWrapperType System::Text::Encoding::Clone()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                            "Clone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Text::Encoding::get_IsReadOnly()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                            "get_IsReadOnly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Text::Encoding System::Text::Encoding::get_ASCII()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                            "get_ASCII",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Text::Encoding, false>(nullptr, ___internal_method);
}
 System::Text::Encoding System::Text::Encoding::get_Latin1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                            "get_Latin1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Text::Encoding, false>(nullptr, ___internal_method);
}
 int32_t System::Text::Encoding::GetByteCount(::StringW s)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                            "GetByteCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, s);
}
 int32_t System::Text::Encoding::GetByteCount(::ArrayW<char16_t> chars, int32_t index, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                            "GetByteCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, chars, index, count);
}
 int32_t System::Text::Encoding::GetByteCount(void* chars, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                            "GetByteCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, chars, count);
}
 int32_t System::Text::Encoding::GetByteCount(void* chars, int32_t count, System::Text::EncoderNLS encoder)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                            "GetByteCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::EncoderNLS>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, chars, count, encoder);
}
 ::ArrayW<uint8_t> System::Text::Encoding::GetBytes(::ArrayW<char16_t> chars)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                            "GetBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method, chars);
}
 ::ArrayW<uint8_t> System::Text::Encoding::GetBytes(::ArrayW<char16_t> chars, int32_t index, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                            "GetBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method, chars, index, count);
}
 int32_t System::Text::Encoding::GetBytes(::ArrayW<char16_t> chars, int32_t charIndex, int32_t charCount, ::ArrayW<uint8_t> bytes, int32_t byteIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                            "GetBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, chars, charIndex, charCount, bytes, byteIndex);
}
 ::ArrayW<uint8_t> System::Text::Encoding::GetBytes(::StringW s)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                            "GetBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method, s);
}
 int32_t System::Text::Encoding::GetBytes(::StringW s, int32_t charIndex, int32_t charCount, ::ArrayW<uint8_t> bytes, int32_t byteIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                            "GetBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, s, charIndex, charCount, bytes, byteIndex);
}
 int32_t System::Text::Encoding::GetBytes(void* chars, int32_t charCount, void* bytes, int32_t byteCount, System::Text::EncoderNLS encoder)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                            "GetBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::EncoderNLS>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, chars, charCount, bytes, byteCount, encoder);
}
 int32_t System::Text::Encoding::GetBytes(void* chars, int32_t charCount, void* bytes, int32_t byteCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                            "GetBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, chars, charCount, bytes, byteCount);
}
 int32_t System::Text::Encoding::GetCharCount(::ArrayW<uint8_t> bytes, int32_t index, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                            "GetCharCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, bytes, index, count);
}
 int32_t System::Text::Encoding::GetCharCount(void* bytes, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                            "GetCharCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, bytes, count);
}
 int32_t System::Text::Encoding::GetCharCount(void* bytes, int32_t count, System::Text::DecoderNLS decoder)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                            "GetCharCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::DecoderNLS>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, bytes, count, decoder);
}
 ::ArrayW<char16_t> System::Text::Encoding::GetChars(::ArrayW<uint8_t> bytes, int32_t index, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                            "GetChars",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<char16_t>, false>(const_cast<void*>(instance), ___internal_method, bytes, index, count);
}
 int32_t System::Text::Encoding::GetChars(::ArrayW<uint8_t> bytes, int32_t byteIndex, int32_t byteCount, ::ArrayW<char16_t> chars, int32_t charIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                            "GetChars",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, bytes, byteIndex, byteCount, chars, charIndex);
}
 int32_t System::Text::Encoding::GetChars(void* bytes, int32_t byteCount, void* chars, int32_t charCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                            "GetChars",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, bytes, byteCount, chars, charCount);
}
 int32_t System::Text::Encoding::GetChars(void* bytes, int32_t byteCount, void* chars, int32_t charCount, System::Text::DecoderNLS decoder)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                            "GetChars",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::DecoderNLS>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, bytes, byteCount, chars, charCount, decoder);
}
 ::StringW System::Text::Encoding::GetString(void* bytes, int32_t byteCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                            "GetString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, bytes, byteCount);
}
 int32_t System::Text::Encoding::GetChars(System::ReadOnlySpan_1<uint8_t> bytes, System::Span_1<char16_t> chars)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                            "GetChars",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Span_1<char16_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, bytes, chars);
}
 ::StringW System::Text::Encoding::GetString(System::ReadOnlySpan_1<uint8_t> bytes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                            "GetString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, bytes);
}
 int32_t System::Text::Encoding::get_CodePage()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                            "get_CodePage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Text::Decoder System::Text::Encoding::GetDecoder()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                            "GetDecoder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Text::Decoder, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Text::Encoding System::Text::Encoding::CreateDefaultEncoding()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                            "CreateDefaultEncoding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Text::Encoding, false>(nullptr, ___internal_method);
}
/// @param value: bool (default: true)
 void System::Text::Encoding::setReadOnly(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                            "setReadOnly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 System::Text::Encoding System::Text::Encoding::get_Default()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                            "get_Default",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Text::Encoding, false>(nullptr, ___internal_method);
}
 System::Text::Encoder System::Text::Encoding::GetEncoder()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                            "GetEncoder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Text::Encoder, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::Text::Encoding::GetMaxByteCount(int32_t charCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                            "GetMaxByteCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, charCount);
}
 int32_t System::Text::Encoding::GetMaxCharCount(int32_t byteCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                            "GetMaxCharCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, byteCount);
}
 ::StringW System::Text::Encoding::GetString(::ArrayW<uint8_t> bytes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                            "GetString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, bytes);
}
 ::StringW System::Text::Encoding::GetString(::ArrayW<uint8_t> bytes, int32_t index, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                            "GetString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, bytes, index, count);
}
 System::Text::Encoding System::Text::Encoding::get_Unicode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                            "get_Unicode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Text::Encoding, false>(nullptr, ___internal_method);
}
 System::Text::Encoding System::Text::Encoding::get_BigEndianUnicode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                            "get_BigEndianUnicode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Text::Encoding, false>(nullptr, ___internal_method);
}
 System::Text::Encoding System::Text::Encoding::get_UTF7()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                            "get_UTF7",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Text::Encoding, false>(nullptr, ___internal_method);
}
 System::Text::Encoding System::Text::Encoding::get_UTF8()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                            "get_UTF8",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Text::Encoding, false>(nullptr, ___internal_method);
}
 System::Text::Encoding System::Text::Encoding::get_UTF32()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                            "get_UTF32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Text::Encoding, false>(nullptr, ___internal_method);
}
 bool System::Text::Encoding::Equals(::bs_hook::Il2CppWrapperType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t System::Text::Encoding::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<char16_t> System::Text::Encoding::GetBestFitUnicodeToBytesData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                            "GetBestFitUnicodeToBytesData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<char16_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<char16_t> System::Text::Encoding::GetBestFitBytesToUnicodeData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                            "GetBestFitBytesToUnicodeData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<char16_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Text::Encoding::ThrowBytesOverflow()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                            "ThrowBytesOverflow",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Text::Encoding::ThrowBytesOverflow(System::Text::EncoderNLS encoder, bool nothingEncoded)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                            "ThrowBytesOverflow",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::EncoderNLS>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, encoder, nothingEncoded);
}
 void System::Text::Encoding::ThrowCharsOverflow()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                            "ThrowCharsOverflow",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Text::Encoding::ThrowCharsOverflow(System::Text::DecoderNLS decoder, bool nothingDecoded)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                            "ThrowCharsOverflow",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::DecoderNLS>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, decoder, nothingDecoded);
}
 int32_t System::Text::Encoding::GetBytes(System::ReadOnlySpan_1<char16_t> chars, System::Span_1<uint8_t> bytes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Text::Encoding>::get(),
                            "GetBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Span_1<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, chars, bytes);
}
