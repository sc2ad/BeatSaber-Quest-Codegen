#pragma once
#include "Newtonsoft/Json/zzzz__JsonReader_impl.hpp"
#include "Newtonsoft/Json/zzzz__JsonTextReader_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include "Newtonsoft/Json/zzzz__IArrayPool_1_def.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__StringReference_def.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__PropertyNameTable_def.hpp"
#include "System/zzzz__DateTimeOffset_def.hpp"
#include "Newtonsoft/Json/zzzz__ReadType_def.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__StringBuffer_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonReaderException_def.hpp"
#include "Newtonsoft/Json/zzzz__IJsonLineInfo_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/IO/zzzz__TextReader_def.hpp"
//  Writing Method size for method: Newtonsoft::Json::JsonTextReader._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::JsonTextReader::*)(System::IO::TextReader)>(&Newtonsoft::Json::JsonTextReader::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x24c984c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::TextReader>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::JsonTextReader.get_ArrayPool
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Newtonsoft::Json::IArrayPool_1<char16_t> (Newtonsoft::Json::JsonTextReader::*)()>(&Newtonsoft::Json::JsonTextReader::get_ArrayPool)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24c9920;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                            "get_ArrayPool",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::JsonTextReader.set_ArrayPool
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::JsonTextReader::*)(Newtonsoft::Json::IArrayPool_1<char16_t>)>(&Newtonsoft::Json::JsonTextReader::set_ArrayPool)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x24c9928;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                            "set_ArrayPool",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::IArrayPool_1<char16_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::JsonTextReader.EnsureBufferNotEmpty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::JsonTextReader::*)()>(&Newtonsoft::Json::JsonTextReader::EnsureBufferNotEmpty)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x24c9988;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                            "EnsureBufferNotEmpty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::JsonTextReader.OnNewLine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::JsonTextReader::*)(int32_t)>(&Newtonsoft::Json::JsonTextReader::OnNewLine)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x24c99dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                            "OnNewLine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::JsonTextReader.ParseString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::JsonTextReader::*)(char16_t, Newtonsoft::Json::ReadType)>(&Newtonsoft::Json::JsonTextReader::ParseString)> {
  constexpr static std::size_t size = 0x3b8;
  constexpr static std::size_t addrs = 0x24c99ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                            "ParseString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::ReadType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::JsonTextReader.BlockCopyChars
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<char16_t>, int32_t, ::ArrayW<char16_t>, int32_t, int32_t)>(&Newtonsoft::Json::JsonTextReader::BlockCopyChars)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x24ca4e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                            "BlockCopyChars",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::JsonTextReader.ShiftBufferIfNeeded
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::JsonTextReader::*)()>(&Newtonsoft::Json::JsonTextReader::ShiftBufferIfNeeded)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x24c9da4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                            "ShiftBufferIfNeeded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::JsonTextReader.ReadData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (Newtonsoft::Json::JsonTextReader::*)(bool)>(&Newtonsoft::Json::JsonTextReader::ReadData)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x24ca4f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                            "ReadData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::JsonTextReader.ReadData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (Newtonsoft::Json::JsonTextReader::*)(bool, int32_t)>(&Newtonsoft::Json::JsonTextReader::ReadData)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x24ca504;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                            "ReadData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::JsonTextReader.EnsureChars
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::JsonTextReader::*)(int32_t, bool)>(&Newtonsoft::Json::JsonTextReader::EnsureChars)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x24ca710;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                            "EnsureChars",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::JsonTextReader.ReadChars
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::JsonTextReader::*)(int32_t, bool)>(&Newtonsoft::Json::JsonTextReader::ReadChars)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x24ca730;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                            "ReadChars",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::JsonTextReader.Read
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::JsonTextReader::*)()>(&Newtonsoft::Json::JsonTextReader::Read)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x24ca7a0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Newtonsoft::Json::JsonTextReader),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::JsonTextReader.ReadAsInt32
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Nullable_1<int32_t> (Newtonsoft::Json::JsonTextReader::*)()>(&Newtonsoft::Json::JsonTextReader::ReadAsInt32)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x24cb5e8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Newtonsoft::Json::JsonTextReader),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::JsonTextReader.ReadAsDateTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Nullable_1<System::DateTime> (Newtonsoft::Json::JsonTextReader::*)()>(&Newtonsoft::Json::JsonTextReader::ReadAsDateTime)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x24cbb30;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Newtonsoft::Json::JsonTextReader),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                                  19
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::JsonTextReader.ReadAsString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Newtonsoft::Json::JsonTextReader::*)()>(&Newtonsoft::Json::JsonTextReader::ReadAsString)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x24cc2d0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Newtonsoft::Json::JsonTextReader),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::JsonTextReader.ReadAsBytes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Newtonsoft::Json::JsonTextReader::*)()>(&Newtonsoft::Json::JsonTextReader::ReadAsBytes)> {
  constexpr static std::size_t size = 0x480;
  constexpr static std::size_t addrs = 0x24cc334;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Newtonsoft::Json::JsonTextReader),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::JsonTextReader.ReadStringValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (Newtonsoft::Json::JsonTextReader::*)(Newtonsoft::Json::ReadType)>(&Newtonsoft::Json::JsonTextReader::ReadStringValue)> {
  constexpr static std::size_t size = 0x710;
  constexpr static std::size_t addrs = 0x24cbbc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                            "ReadStringValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::ReadType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::JsonTextReader.CreateUnexpectedCharacterException
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Newtonsoft::Json::JsonReaderException (Newtonsoft::Json::JsonTextReader::*)(char16_t)>(&Newtonsoft::Json::JsonTextReader::CreateUnexpectedCharacterException)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x24ccdc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                            "CreateUnexpectedCharacterException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::JsonTextReader.ReadAsBoolean
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Nullable_1<bool> (Newtonsoft::Json::JsonTextReader::*)()>(&Newtonsoft::Json::JsonTextReader::ReadAsBoolean)> {
  constexpr static std::size_t size = 0x4e0;
  constexpr static std::size_t addrs = 0x24ce81c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Newtonsoft::Json::JsonTextReader),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::JsonTextReader.ProcessValueComma
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::JsonTextReader::*)()>(&Newtonsoft::Json::JsonTextReader::ProcessValueComma)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x24ccd6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                            "ProcessValueComma",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::JsonTextReader.ReadNumberValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (Newtonsoft::Json::JsonTextReader::*)(Newtonsoft::Json::ReadType)>(&Newtonsoft::Json::JsonTextReader::ReadNumberValue)> {
  constexpr static std::size_t size = 0x4b8;
  constexpr static std::size_t addrs = 0x24cb678;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                            "ReadNumberValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::ReadType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::JsonTextReader.ReadAsDateTimeOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Nullable_1<System::DateTimeOffset> (Newtonsoft::Json::JsonTextReader::*)()>(&Newtonsoft::Json::JsonTextReader::ReadAsDateTimeOffset)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x24cf5c4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Newtonsoft::Json::JsonTextReader),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::JsonTextReader.ReadAsDecimal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Nullable_1<System::Decimal> (Newtonsoft::Json::JsonTextReader::*)()>(&Newtonsoft::Json::JsonTextReader::ReadAsDecimal)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x24cf690;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Newtonsoft::Json::JsonTextReader),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                                  18
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::JsonTextReader.ReadAsDouble
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Nullable_1<double_t> (Newtonsoft::Json::JsonTextReader::*)()>(&Newtonsoft::Json::JsonTextReader::ReadAsDouble)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x24cf75c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Newtonsoft::Json::JsonTextReader),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::JsonTextReader.HandleNull
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::JsonTextReader::*)()>(&Newtonsoft::Json::JsonTextReader::HandleNull)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x24ccc9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                            "HandleNull",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::JsonTextReader.ReadFinished
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::JsonTextReader::*)()>(&Newtonsoft::Json::JsonTextReader::ReadFinished)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x24ccf30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                            "ReadFinished",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::JsonTextReader.ReadNullChar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::JsonTextReader::*)()>(&Newtonsoft::Json::JsonTextReader::ReadNullChar)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x24cc7b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                            "ReadNullChar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::JsonTextReader.EnsureBuffer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::JsonTextReader::*)()>(&Newtonsoft::Json::JsonTextReader::EnsureBuffer)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x24ca9b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                            "EnsureBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::JsonTextReader.ReadStringIntoBuffer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::JsonTextReader::*)(char16_t)>(&Newtonsoft::Json::JsonTextReader::ReadStringIntoBuffer)> {
  constexpr static std::size_t size = 0x498;
  constexpr static std::size_t addrs = 0x24c9e4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                            "ReadStringIntoBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::JsonTextReader.WriteCharToBuffer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::JsonTextReader::*)(char16_t, int32_t, int32_t)>(&Newtonsoft::Json::JsonTextReader::WriteCharToBuffer)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x24cfa18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                            "WriteCharToBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::JsonTextReader.ParseUnicode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (Newtonsoft::Json::JsonTextReader::*)()>(&Newtonsoft::Json::JsonTextReader::ParseUnicode)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x24cf908;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                            "ParseUnicode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::JsonTextReader.ReadNumberIntoBuffer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::JsonTextReader::*)()>(&Newtonsoft::Json::JsonTextReader::ReadNumberIntoBuffer)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x24cfa68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                            "ReadNumberIntoBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::JsonTextReader.ClearRecentString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::JsonTextReader::*)()>(&Newtonsoft::Json::JsonTextReader::ClearRecentString)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x24cfc38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                            "ClearRecentString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::JsonTextReader.ParsePostValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::JsonTextReader::*)()>(&Newtonsoft::Json::JsonTextReader::ParsePostValue)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x24cafa8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                            "ParsePostValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::JsonTextReader.ParseObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::JsonTextReader::*)()>(&Newtonsoft::Json::JsonTextReader::ParseObject)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x24cae18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                            "ParseObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::JsonTextReader.ParseProperty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::JsonTextReader::*)()>(&Newtonsoft::Json::JsonTextReader::ParseProperty)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x24cfc44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                            "ParseProperty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::JsonTextReader.ValidIdentifierChar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::JsonTextReader::*)(char16_t)>(&Newtonsoft::Json::JsonTextReader::ValidIdentifierChar)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x24cfe68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                            "ValidIdentifierChar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::JsonTextReader.ParseUnquotedProperty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::JsonTextReader::*)()>(&Newtonsoft::Json::JsonTextReader::ParseUnquotedProperty)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x24cfee8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                            "ParseUnquotedProperty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::JsonTextReader.ParseValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::JsonTextReader::*)()>(&Newtonsoft::Json::JsonTextReader::ParseValue)> {
  constexpr static std::size_t size = 0x41c;
  constexpr static std::size_t addrs = 0x24ca9fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                            "ParseValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::JsonTextReader.ProcessLineFeed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::JsonTextReader::*)()>(&Newtonsoft::Json::JsonTextReader::ProcessLineFeed)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x24ccf14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                            "ProcessLineFeed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::JsonTextReader.ProcessCarriageReturn
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::JsonTextReader::*)(bool)>(&Newtonsoft::Json::JsonTextReader::ProcessCarriageReturn)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x24cce94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                            "ProcessCarriageReturn",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::JsonTextReader.EatWhitespace
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::JsonTextReader::*)(bool)>(&Newtonsoft::Json::JsonTextReader::EatWhitespace)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x24cb218;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                            "EatWhitespace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::JsonTextReader.ParseConstructor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::JsonTextReader::*)()>(&Newtonsoft::Json::JsonTextReader::ParseConstructor)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0x24d0258;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                            "ParseConstructor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::JsonTextReader.ParseNumber
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::JsonTextReader::*)(Newtonsoft::Json::ReadType)>(&Newtonsoft::Json::JsonTextReader::ParseNumber)> {
  constexpr static std::size_t size = 0xde0;
  constexpr static std::size_t addrs = 0x24cd6d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                            "ParseNumber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::ReadType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::JsonTextReader.ParseComment
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::JsonTextReader::*)(bool)>(&Newtonsoft::Json::JsonTextReader::ParseComment)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x24cb354;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                            "ParseComment",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::JsonTextReader.EndComment
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::JsonTextReader::*)(bool, int32_t, int32_t)>(&Newtonsoft::Json::JsonTextReader::EndComment)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x24d06b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                            "EndComment",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::JsonTextReader.MatchValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::JsonTextReader::*)(::StringW)>(&Newtonsoft::Json::JsonTextReader::MatchValue)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x24d0710;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                            "MatchValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::JsonTextReader.MatchValueWithTrailingSeparator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::JsonTextReader::*)(::StringW)>(&Newtonsoft::Json::JsonTextReader::MatchValueWithTrailingSeparator)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x24ce4b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                            "MatchValueWithTrailingSeparator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::JsonTextReader.IsSeparator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::JsonTextReader::*)(char16_t)>(&Newtonsoft::Json::JsonTextReader::IsSeparator)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x24d0814;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                            "IsSeparator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::JsonTextReader.ParseTrue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::JsonTextReader::*)()>(&Newtonsoft::Json::JsonTextReader::ParseTrue)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x24d009c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                            "ParseTrue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::JsonTextReader.ParseNull
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::JsonTextReader::*)()>(&Newtonsoft::Json::JsonTextReader::ParseNull)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x24cf810;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                            "ParseNull",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::JsonTextReader.ParseUndefined
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::JsonTextReader::*)()>(&Newtonsoft::Json::JsonTextReader::ParseUndefined)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x24d0580;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                            "ParseUndefined",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::JsonTextReader.ParseFalse
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::JsonTextReader::*)()>(&Newtonsoft::Json::JsonTextReader::ParseFalse)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x24d017c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                            "ParseFalse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::JsonTextReader.ParseNumberNegativeInfinity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (Newtonsoft::Json::JsonTextReader::*)(Newtonsoft::Json::ReadType)>(&Newtonsoft::Json::JsonTextReader::ParseNumberNegativeInfinity)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x24cd570;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                            "ParseNumberNegativeInfinity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::ReadType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::JsonTextReader.ParseNumberPositiveInfinity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (Newtonsoft::Json::JsonTextReader::*)(Newtonsoft::Json::ReadType)>(&Newtonsoft::Json::JsonTextReader::ParseNumberPositiveInfinity)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x24ce55c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                            "ParseNumberPositiveInfinity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::ReadType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::JsonTextReader.ParseNumberNaN
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (Newtonsoft::Json::JsonTextReader::*)(Newtonsoft::Json::ReadType)>(&Newtonsoft::Json::JsonTextReader::ParseNumberNaN)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x24ce6bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                            "ParseNumberNaN",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::ReadType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::JsonTextReader.Close
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::JsonTextReader::*)()>(&Newtonsoft::Json::JsonTextReader::Close)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x24d096c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Newtonsoft::Json::JsonTextReader),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                                  22
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::JsonTextReader.HasLineInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::JsonTextReader::*)()>(&Newtonsoft::Json::JsonTextReader::HasLineInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24d09e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                            "HasLineInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::JsonTextReader.get_LineNumber
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (Newtonsoft::Json::JsonTextReader::*)()>(&Newtonsoft::Json::JsonTextReader::get_LineNumber)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x24d09e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                            "get_LineNumber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::JsonTextReader.get_LinePosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (Newtonsoft::Json::JsonTextReader::*)()>(&Newtonsoft::Json::JsonTextReader::get_LinePosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x24d0a30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                            "get_LinePosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to Newtonsoft::Json::IJsonLineInfo
constexpr  Newtonsoft::Json::JsonTextReader::operator Newtonsoft::Json::IJsonLineInfo() const noexcept {
return Newtonsoft::Json::IJsonLineInfo(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Newtonsoft::Json::JsonTextReader::__set__reader(System::IO::TextReader value)  {
::cordl_internals::setInstanceField<System::IO::TextReader, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::IO::TextReader>(value));
}
constexpr System::IO::TextReader Newtonsoft::Json::JsonTextReader::__get__reader() const {
return ::cordl_internals::getInstanceField<System::IO::TextReader, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Newtonsoft::Json::JsonTextReader::__set__chars(::ArrayW<char16_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<char16_t>, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<char16_t>>(value));
}
constexpr ::ArrayW<char16_t> Newtonsoft::Json::JsonTextReader::__get__chars() const {
return ::cordl_internals::getInstanceField<::ArrayW<char16_t>, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Newtonsoft::Json::JsonTextReader::__set__charsUsed(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t Newtonsoft::Json::JsonTextReader::__get__charsUsed() const {
return ::cordl_internals::getInstanceField<int32_t, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Newtonsoft::Json::JsonTextReader::__set__charPos(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t Newtonsoft::Json::JsonTextReader::__get__charPos() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Newtonsoft::Json::JsonTextReader::__set__lineStartPos(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t Newtonsoft::Json::JsonTextReader::__get__lineStartPos() const {
return ::cordl_internals::getInstanceField<int32_t, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Newtonsoft::Json::JsonTextReader::__set__lineNumber(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x94>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t Newtonsoft::Json::JsonTextReader::__get__lineNumber() const {
return ::cordl_internals::getInstanceField<int32_t, 0x94>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Newtonsoft::Json::JsonTextReader::__set__isEndOfFile(bool value)  {
::cordl_internals::setInstanceField<bool, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool Newtonsoft::Json::JsonTextReader::__get__isEndOfFile() const {
return ::cordl_internals::getInstanceField<bool, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Newtonsoft::Json::JsonTextReader::__set__stringBuffer(Newtonsoft::Json::Utilities::StringBuffer value)  {
::cordl_internals::setInstanceField<Newtonsoft::Json::Utilities::StringBuffer, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Newtonsoft::Json::Utilities::StringBuffer>(value));
}
constexpr Newtonsoft::Json::Utilities::StringBuffer Newtonsoft::Json::JsonTextReader::__get__stringBuffer() const {
return ::cordl_internals::getInstanceField<Newtonsoft::Json::Utilities::StringBuffer, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Newtonsoft::Json::JsonTextReader::__set__stringReference(Newtonsoft::Json::Utilities::StringReference value)  {
::cordl_internals::setInstanceField<Newtonsoft::Json::Utilities::StringReference, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Newtonsoft::Json::Utilities::StringReference>(value));
}
constexpr Newtonsoft::Json::Utilities::StringReference Newtonsoft::Json::JsonTextReader::__get__stringReference() const {
return ::cordl_internals::getInstanceField<Newtonsoft::Json::Utilities::StringReference, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Newtonsoft::Json::JsonTextReader::__set__arrayPool(Newtonsoft::Json::IArrayPool_1<char16_t> value)  {
::cordl_internals::setInstanceField<Newtonsoft::Json::IArrayPool_1<char16_t>, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Newtonsoft::Json::IArrayPool_1<char16_t>>(value));
}
constexpr Newtonsoft::Json::IArrayPool_1<char16_t> Newtonsoft::Json::JsonTextReader::__get__arrayPool() const {
return ::cordl_internals::getInstanceField<Newtonsoft::Json::IArrayPool_1<char16_t>, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Newtonsoft::Json::JsonTextReader::__set_NameTable(Newtonsoft::Json::Utilities::PropertyNameTable value)  {
::cordl_internals::setInstanceField<Newtonsoft::Json::Utilities::PropertyNameTable, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Newtonsoft::Json::Utilities::PropertyNameTable>(value));
}
constexpr Newtonsoft::Json::Utilities::PropertyNameTable Newtonsoft::Json::JsonTextReader::__get_NameTable() const {
return ::cordl_internals::getInstanceField<Newtonsoft::Json::Utilities::PropertyNameTable, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "reader", ty: "System::IO::TextReader", modifiers: "", def_value: None }]
 Newtonsoft::Json::JsonTextReader::JsonTextReader(System::IO::TextReader reader)  : Newtonsoft::Json::JsonReader(THROW_UNLESS(::il2cpp_utils::New<JsonTextReader>(reader))) {}
 void Newtonsoft::Json::JsonTextReader::_ctor(System::IO::TextReader reader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::TextReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, reader);
}
 Newtonsoft::Json::IArrayPool_1<char16_t> Newtonsoft::Json::JsonTextReader::get_ArrayPool()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                            "get_ArrayPool",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Newtonsoft::Json::IArrayPool_1<char16_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 void Newtonsoft::Json::JsonTextReader::set_ArrayPool(Newtonsoft::Json::IArrayPool_1<char16_t> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                            "set_ArrayPool",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::IArrayPool_1<char16_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void Newtonsoft::Json::JsonTextReader::EnsureBufferNotEmpty()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                            "EnsureBufferNotEmpty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void Newtonsoft::Json::JsonTextReader::OnNewLine(int32_t pos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                            "OnNewLine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, pos);
}
 void Newtonsoft::Json::JsonTextReader::ParseString(char16_t quote, Newtonsoft::Json::ReadType readType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                            "ParseString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::ReadType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, quote, readType);
}
 void Newtonsoft::Json::JsonTextReader::BlockCopyChars(::ArrayW<char16_t> src, int32_t srcOffset, ::ArrayW<char16_t> dst, int32_t dstOffset, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                            "BlockCopyChars",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, src, srcOffset, dst, dstOffset, count);
}
 void Newtonsoft::Json::JsonTextReader::ShiftBufferIfNeeded()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                            "ShiftBufferIfNeeded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t Newtonsoft::Json::JsonTextReader::ReadData(bool append)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                            "ReadData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, append);
}
 int32_t Newtonsoft::Json::JsonTextReader::ReadData(bool append, int32_t charsRequired)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                            "ReadData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, append, charsRequired);
}
 bool Newtonsoft::Json::JsonTextReader::EnsureChars(int32_t relativePosition, bool append)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                            "EnsureChars",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, relativePosition, append);
}
 bool Newtonsoft::Json::JsonTextReader::ReadChars(int32_t relativePosition, bool append)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                            "ReadChars",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, relativePosition, append);
}
 bool Newtonsoft::Json::JsonTextReader::Read()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                            "Read",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Nullable_1<int32_t> Newtonsoft::Json::JsonTextReader::ReadAsInt32()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                            "ReadAsInt32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Nullable_1<int32_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Nullable_1<System::DateTime> Newtonsoft::Json::JsonTextReader::ReadAsDateTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                            "ReadAsDateTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Nullable_1<System::DateTime>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW Newtonsoft::Json::JsonTextReader::ReadAsString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                            "ReadAsString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<uint8_t> Newtonsoft::Json::JsonTextReader::ReadAsBytes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                            "ReadAsBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType Newtonsoft::Json::JsonTextReader::ReadStringValue(Newtonsoft::Json::ReadType readType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                            "ReadStringValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::ReadType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, readType);
}
 Newtonsoft::Json::JsonReaderException Newtonsoft::Json::JsonTextReader::CreateUnexpectedCharacterException(char16_t c)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                            "CreateUnexpectedCharacterException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Newtonsoft::Json::JsonReaderException, false>(const_cast<void*>(instance), ___internal_method, c);
}
 System::Nullable_1<bool> Newtonsoft::Json::JsonTextReader::ReadAsBoolean()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                            "ReadAsBoolean",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Nullable_1<bool>, false>(const_cast<void*>(instance), ___internal_method);
}
 void Newtonsoft::Json::JsonTextReader::ProcessValueComma()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                            "ProcessValueComma",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType Newtonsoft::Json::JsonTextReader::ReadNumberValue(Newtonsoft::Json::ReadType readType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                            "ReadNumberValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::ReadType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, readType);
}
 System::Nullable_1<System::DateTimeOffset> Newtonsoft::Json::JsonTextReader::ReadAsDateTimeOffset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                            "ReadAsDateTimeOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Nullable_1<System::DateTimeOffset>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Nullable_1<System::Decimal> Newtonsoft::Json::JsonTextReader::ReadAsDecimal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                            "ReadAsDecimal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Nullable_1<System::Decimal>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Nullable_1<double_t> Newtonsoft::Json::JsonTextReader::ReadAsDouble()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                            "ReadAsDouble",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Nullable_1<double_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 void Newtonsoft::Json::JsonTextReader::HandleNull()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                            "HandleNull",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void Newtonsoft::Json::JsonTextReader::ReadFinished()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                            "ReadFinished",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool Newtonsoft::Json::JsonTextReader::ReadNullChar()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                            "ReadNullChar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void Newtonsoft::Json::JsonTextReader::EnsureBuffer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                            "EnsureBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void Newtonsoft::Json::JsonTextReader::ReadStringIntoBuffer(char16_t quote)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                            "ReadStringIntoBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, quote);
}
 void Newtonsoft::Json::JsonTextReader::WriteCharToBuffer(char16_t writeChar, int32_t lastWritePosition, int32_t writeToPosition)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                            "WriteCharToBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, writeChar, lastWritePosition, writeToPosition);
}
 char16_t Newtonsoft::Json::JsonTextReader::ParseUnicode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                            "ParseUnicode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<char16_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void Newtonsoft::Json::JsonTextReader::ReadNumberIntoBuffer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                            "ReadNumberIntoBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void Newtonsoft::Json::JsonTextReader::ClearRecentString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                            "ClearRecentString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool Newtonsoft::Json::JsonTextReader::ParsePostValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                            "ParsePostValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool Newtonsoft::Json::JsonTextReader::ParseObject()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                            "ParseObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool Newtonsoft::Json::JsonTextReader::ParseProperty()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                            "ParseProperty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool Newtonsoft::Json::JsonTextReader::ValidIdentifierChar(char16_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                            "ValidIdentifierChar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void Newtonsoft::Json::JsonTextReader::ParseUnquotedProperty()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                            "ParseUnquotedProperty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool Newtonsoft::Json::JsonTextReader::ParseValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                            "ParseValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void Newtonsoft::Json::JsonTextReader::ProcessLineFeed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                            "ProcessLineFeed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void Newtonsoft::Json::JsonTextReader::ProcessCarriageReturn(bool append)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                            "ProcessCarriageReturn",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, append);
}
 bool Newtonsoft::Json::JsonTextReader::EatWhitespace(bool oneOrMore)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                            "EatWhitespace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, oneOrMore);
}
 void Newtonsoft::Json::JsonTextReader::ParseConstructor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                            "ParseConstructor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void Newtonsoft::Json::JsonTextReader::ParseNumber(Newtonsoft::Json::ReadType readType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                            "ParseNumber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::ReadType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, readType);
}
 void Newtonsoft::Json::JsonTextReader::ParseComment(bool setToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                            "ParseComment",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, setToken);
}
 void Newtonsoft::Json::JsonTextReader::EndComment(bool setToken, int32_t initialPosition, int32_t endPosition)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                            "EndComment",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, setToken, initialPosition, endPosition);
}
 bool Newtonsoft::Json::JsonTextReader::MatchValue(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                            "MatchValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool Newtonsoft::Json::JsonTextReader::MatchValueWithTrailingSeparator(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                            "MatchValueWithTrailingSeparator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool Newtonsoft::Json::JsonTextReader::IsSeparator(char16_t c)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                            "IsSeparator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, c);
}
 void Newtonsoft::Json::JsonTextReader::ParseTrue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                            "ParseTrue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void Newtonsoft::Json::JsonTextReader::ParseNull()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                            "ParseNull",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void Newtonsoft::Json::JsonTextReader::ParseUndefined()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                            "ParseUndefined",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void Newtonsoft::Json::JsonTextReader::ParseFalse()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                            "ParseFalse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType Newtonsoft::Json::JsonTextReader::ParseNumberNegativeInfinity(Newtonsoft::Json::ReadType readType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                            "ParseNumberNegativeInfinity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::ReadType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, readType);
}
 ::bs_hook::Il2CppWrapperType Newtonsoft::Json::JsonTextReader::ParseNumberPositiveInfinity(Newtonsoft::Json::ReadType readType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                            "ParseNumberPositiveInfinity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::ReadType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, readType);
}
 ::bs_hook::Il2CppWrapperType Newtonsoft::Json::JsonTextReader::ParseNumberNaN(Newtonsoft::Json::ReadType readType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                            "ParseNumberNaN",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::ReadType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, readType);
}
 void Newtonsoft::Json::JsonTextReader::Close()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                            "Close",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool Newtonsoft::Json::JsonTextReader::HasLineInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                            "HasLineInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t Newtonsoft::Json::JsonTextReader::get_LineNumber()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                            "get_LineNumber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t Newtonsoft::Json::JsonTextReader::get_LinePosition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonTextReader>::get(),
                            "get_LinePosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
