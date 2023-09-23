#pragma once
#include "System/Runtime/Serialization/Formatters/Binary/zzzz____BinaryParser_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__SerStack_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__MemberReference_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__ParseRecord_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__ObjectNull_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__SizedArray_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__BinaryCrossAppDomainString_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__MessageEnd_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__BinaryObjectWithMapTyped_def.hpp"
#include "System/IO/zzzz__BinaryReader_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__BinaryObject_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__BinaryObjectWithMap_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__ObjectReader_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__MemberPrimitiveUnTyped_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__BinaryAssemblyInfo_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__BinaryHeaderEnum_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__InternalPrimitiveTypeE_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__MemberPrimitiveTyped_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__ObjectProgress_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__BinaryObjectString_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__BinaryTypeEnum_def.hpp"
//  Writing Method size for method: System::Runtime::Serialization::Formatters::Binary::__BinaryParser._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)(System::IO::Stream, System::Runtime::Serialization::Formatters::Binary::ObjectReader)>(&System::Runtime::Serialization::Formatters::Binary::__BinaryParser::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x2365c04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::__BinaryParser>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::ObjectReader>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::Formatters::Binary::__BinaryParser.get_SystemAssemblyInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo (System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)()>(&System::Runtime::Serialization::Formatters::Binary::__BinaryParser::get_SystemAssemblyInfo)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2365d10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::__BinaryParser>::get(),
                            "get_SystemAssemblyInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::Formatters::Binary::__BinaryParser.get_ObjectMapIdTable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Serialization::Formatters::Binary::SizedArray (System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)()>(&System::Runtime::Serialization::Formatters::Binary::__BinaryParser::get_ObjectMapIdTable)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2365dbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::__BinaryParser>::get(),
                            "get_ObjectMapIdTable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::Formatters::Binary::__BinaryParser.get_AssemIdToAssemblyTable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Serialization::Formatters::Binary::SizedArray (System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)()>(&System::Runtime::Serialization::Formatters::Binary::__BinaryParser::get_AssemIdToAssemblyTable)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2365e90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::__BinaryParser>::get(),
                            "get_AssemIdToAssemblyTable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::Formatters::Binary::__BinaryParser.get_prs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Serialization::Formatters::Binary::ParseRecord (System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)()>(&System::Runtime::Serialization::Formatters::Binary::__BinaryParser::get_prs)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2365f74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::__BinaryParser>::get(),
                            "get_prs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::Formatters::Binary::__BinaryParser.Run
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)()>(&System::Runtime::Serialization::Formatters::Binary::__BinaryParser::Run)> {
  constexpr static std::size_t size = 0x5d4;
  constexpr static std::size_t addrs = 0x235f6a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::__BinaryParser>::get(),
                            "Run",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadBegin
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)()>(&System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadBegin)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2365fe8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::__BinaryParser>::get(),
                            "ReadBegin",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadEnd
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)()>(&System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadEnd)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2367d6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::__BinaryParser>::get(),
                            "ReadEnd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadBoolean
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)()>(&System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadBoolean)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x23680f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::__BinaryParser>::get(),
                            "ReadBoolean",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadByte
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)()>(&System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadByte)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2368118;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::__BinaryParser>::get(),
                            "ReadByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadBytes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)(int32_t)>(&System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadBytes)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2368138;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::__BinaryParser>::get(),
                            "ReadBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadBytes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadBytes)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x236815c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::__BinaryParser>::get(),
                            "ReadBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadChar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)()>(&System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadChar)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x23681d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::__BinaryParser>::get(),
                            "ReadChar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadChars
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<char16_t> (System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)(int32_t)>(&System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadChars)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x23681f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::__BinaryParser>::get(),
                            "ReadChars",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadDecimal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Decimal (System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)()>(&System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadDecimal)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x236821c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::__BinaryParser>::get(),
                            "ReadDecimal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadSingle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)()>(&System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadSingle)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x23682d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::__BinaryParser>::get(),
                            "ReadSingle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadDouble
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)()>(&System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadDouble)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x23682f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::__BinaryParser>::get(),
                            "ReadDouble",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadInt16
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int16_t (System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)()>(&System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadInt16)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2368318;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::__BinaryParser>::get(),
                            "ReadInt16",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadInt32
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)()>(&System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadInt32)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x236833c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::__BinaryParser>::get(),
                            "ReadInt32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadInt64
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)()>(&System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadInt64)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2368360;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::__BinaryParser>::get(),
                            "ReadInt64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadSByte
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int8_t (System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)()>(&System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadSByte)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2368384;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::__BinaryParser>::get(),
                            "ReadSByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)()>(&System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadString)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x23683a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::__BinaryParser>::get(),
                            "ReadString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadTimeSpan
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::TimeSpan (System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)()>(&System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadTimeSpan)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x23683c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::__BinaryParser>::get(),
                            "ReadTimeSpan",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadDateTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::DateTime (System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)()>(&System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadDateTime)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x23683ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::__BinaryParser>::get(),
                            "ReadDateTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadUInt16
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)()>(&System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadUInt16)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2368468;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::__BinaryParser>::get(),
                            "ReadUInt16",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadUInt32
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)()>(&System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadUInt32)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x236848c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::__BinaryParser>::get(),
                            "ReadUInt32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadUInt64
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)()>(&System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadUInt64)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x23684b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::__BinaryParser>::get(),
                            "ReadUInt64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadSerializationHeaderRecord
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)()>(&System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadSerializationHeaderRecord)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2365fec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::__BinaryParser>::get(),
                            "ReadSerializationHeaderRecord",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadAssembly
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)(System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum)>(&System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadAssembly)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x23660ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::__BinaryParser>::get(),
                            "ReadAssembly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)()>(&System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadObject)> {
  constexpr static std::size_t size = 0x358;
  constexpr static std::size_t addrs = 0x2366320;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::__BinaryParser>::get(),
                            "ReadObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadCrossAppDomainMap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)()>(&System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadCrossAppDomainMap)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x2366678;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::__BinaryParser>::get(),
                            "ReadCrossAppDomainMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadObjectWithMap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)(System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum)>(&System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadObjectWithMap)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2366844;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::__BinaryParser>::get(),
                            "ReadObjectWithMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadObjectWithMap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)(System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap)>(&System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadObjectWithMap)> {
  constexpr static std::size_t size = 0x40c;
  constexpr static std::size_t addrs = 0x2368734;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::__BinaryParser>::get(),
                            "ReadObjectWithMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadObjectWithMapTyped
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)(System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum)>(&System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadObjectWithMapTyped)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x23668e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::__BinaryParser>::get(),
                            "ReadObjectWithMapTyped",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadObjectWithMapTyped
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)(System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped)>(&System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadObjectWithMapTyped)> {
  constexpr static std::size_t size = 0x42c;
  constexpr static std::size_t addrs = 0x2368b40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::__BinaryParser>::get(),
                            "ReadObjectWithMapTyped",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadObjectString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)(System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum)>(&System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadObjectString)> {
  constexpr static std::size_t size = 0x584;
  constexpr static std::size_t addrs = 0x2366974;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::__BinaryParser>::get(),
                            "ReadObjectString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadMemberPrimitiveTyped
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)()>(&System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadMemberPrimitiveTyped)> {
  constexpr static std::size_t size = 0x384;
  constexpr static std::size_t addrs = 0x2367494;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::__BinaryParser>::get(),
                            "ReadMemberPrimitiveTyped",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadArray
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)(System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum)>(&System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadArray)> {
  constexpr static std::size_t size = 0x59c;
  constexpr static std::size_t addrs = 0x2366ef8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::__BinaryParser>::get(),
                            "ReadArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadArrayAsBytes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)(System::Runtime::Serialization::Formatters::Binary::ParseRecord)>(&System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadArrayAsBytes)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0x2368f6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::__BinaryParser>::get(),
                            "ReadArrayAsBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::ParseRecord>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadMemberPrimitiveUnTyped
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)()>(&System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadMemberPrimitiveUnTyped)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x2367d70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::__BinaryParser>::get(),
                            "ReadMemberPrimitiveUnTyped",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadMemberReference
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)()>(&System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadMemberReference)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x2367818;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::__BinaryParser>::get(),
                            "ReadMemberReference",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadObjectNull
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)(System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum)>(&System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadObjectNull)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x2367a00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::__BinaryParser>::get(),
                            "ReadObjectNull",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadMessageEnd
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)()>(&System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadMessageEnd)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x2367bf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::__BinaryParser>::get(),
                            "ReadMessageEnd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)(System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE)>(&System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadValue)> {
  constexpr static std::size_t size = 0x420;
  constexpr static std::size_t addrs = 0x23692a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::__BinaryParser>::get(),
                            "ReadValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::Formatters::Binary::__BinaryParser.GetOp
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Serialization::Formatters::Binary::ObjectProgress (System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)()>(&System::Runtime::Serialization::Formatters::Binary::__BinaryParser::GetOp)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2368648;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::__BinaryParser>::get(),
                            "GetOp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::Formatters::Binary::__BinaryParser.PutOp
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)(System::Runtime::Serialization::Formatters::Binary::ObjectProgress)>(&System::Runtime::Serialization::Formatters::Binary::__BinaryParser::PutOp)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2368070;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::__BinaryParser>::get(),
                            "PutOp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::ObjectProgress>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__set_objectReader(System::Runtime::Serialization::Formatters::Binary::ObjectReader value)  {
::cordl_internals::setInstanceField<System::Runtime::Serialization::Formatters::Binary::ObjectReader, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Runtime::Serialization::Formatters::Binary::ObjectReader>(value));
}
constexpr System::Runtime::Serialization::Formatters::Binary::ObjectReader System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__get_objectReader() const {
return ::cordl_internals::getInstanceField<System::Runtime::Serialization::Formatters::Binary::ObjectReader, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__set_input(System::IO::Stream value)  {
::cordl_internals::setInstanceField<System::IO::Stream, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::IO::Stream>(value));
}
constexpr System::IO::Stream System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__get_input() const {
return ::cordl_internals::getInstanceField<System::IO::Stream, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__set_topId(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int64_t>(value));
}
constexpr int64_t System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__get_topId() const {
return ::cordl_internals::getInstanceField<int64_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__set_headerId(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int64_t>(value));
}
constexpr int64_t System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__get_headerId() const {
return ::cordl_internals::getInstanceField<int64_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__set_objectMapIdTable(System::Runtime::Serialization::Formatters::Binary::SizedArray value)  {
::cordl_internals::setInstanceField<System::Runtime::Serialization::Formatters::Binary::SizedArray, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Runtime::Serialization::Formatters::Binary::SizedArray>(value));
}
constexpr System::Runtime::Serialization::Formatters::Binary::SizedArray System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__get_objectMapIdTable() const {
return ::cordl_internals::getInstanceField<System::Runtime::Serialization::Formatters::Binary::SizedArray, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__set_assemIdToAssemblyTable(System::Runtime::Serialization::Formatters::Binary::SizedArray value)  {
::cordl_internals::setInstanceField<System::Runtime::Serialization::Formatters::Binary::SizedArray, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Runtime::Serialization::Formatters::Binary::SizedArray>(value));
}
constexpr System::Runtime::Serialization::Formatters::Binary::SizedArray System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__get_assemIdToAssemblyTable() const {
return ::cordl_internals::getInstanceField<System::Runtime::Serialization::Formatters::Binary::SizedArray, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__set_stack(System::Runtime::Serialization::Formatters::Binary::SerStack value)  {
::cordl_internals::setInstanceField<System::Runtime::Serialization::Formatters::Binary::SerStack, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Runtime::Serialization::Formatters::Binary::SerStack>(value));
}
constexpr System::Runtime::Serialization::Formatters::Binary::SerStack System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__get_stack() const {
return ::cordl_internals::getInstanceField<System::Runtime::Serialization::Formatters::Binary::SerStack, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__set_expectedType(System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum value)  {
::cordl_internals::setInstanceField<System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>(value));
}
constexpr System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__get_expectedType() const {
return ::cordl_internals::getInstanceField<System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__set_expectedTypeInformation(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__get_expectedTypeInformation() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__set_PRS(System::Runtime::Serialization::Formatters::Binary::ParseRecord value)  {
::cordl_internals::setInstanceField<System::Runtime::Serialization::Formatters::Binary::ParseRecord, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Runtime::Serialization::Formatters::Binary::ParseRecord>(value));
}
constexpr System::Runtime::Serialization::Formatters::Binary::ParseRecord System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__get_PRS() const {
return ::cordl_internals::getInstanceField<System::Runtime::Serialization::Formatters::Binary::ParseRecord, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__set_systemAssemblyInfo(System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo value)  {
::cordl_internals::setInstanceField<System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo>(value));
}
constexpr System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__get_systemAssemblyInfo() const {
return ::cordl_internals::getInstanceField<System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__set_dataReader(System::IO::BinaryReader value)  {
::cordl_internals::setInstanceField<System::IO::BinaryReader, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::IO::BinaryReader>(value));
}
constexpr System::IO::BinaryReader System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__get_dataReader() const {
return ::cordl_internals::getInstanceField<System::IO::BinaryReader, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__set_encoding(System::Text::Encoding value)  {
::cordl_internals::setStaticField<System::Text::Encoding, "encoding", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::__BinaryParser>::get>(std::forward<System::Text::Encoding>(value));
}
 System::Text::Encoding System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__get_encoding()  {
return ::cordl_internals::getStaticField<System::Text::Encoding, "encoding", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::__BinaryParser>::get>();
}
constexpr void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__set_opPool(System::Runtime::Serialization::Formatters::Binary::SerStack value)  {
::cordl_internals::setInstanceField<System::Runtime::Serialization::Formatters::Binary::SerStack, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Runtime::Serialization::Formatters::Binary::SerStack>(value));
}
constexpr System::Runtime::Serialization::Formatters::Binary::SerStack System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__get_opPool() const {
return ::cordl_internals::getInstanceField<System::Runtime::Serialization::Formatters::Binary::SerStack, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__set_binaryObject(System::Runtime::Serialization::Formatters::Binary::BinaryObject value)  {
::cordl_internals::setInstanceField<System::Runtime::Serialization::Formatters::Binary::BinaryObject, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Runtime::Serialization::Formatters::Binary::BinaryObject>(value));
}
constexpr System::Runtime::Serialization::Formatters::Binary::BinaryObject System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__get_binaryObject() const {
return ::cordl_internals::getInstanceField<System::Runtime::Serialization::Formatters::Binary::BinaryObject, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__set_bowm(System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap value)  {
::cordl_internals::setInstanceField<System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap>(value));
}
constexpr System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__get_bowm() const {
return ::cordl_internals::getInstanceField<System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__set_bowmt(System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped value)  {
::cordl_internals::setInstanceField<System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped>(value));
}
constexpr System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__get_bowmt() const {
return ::cordl_internals::getInstanceField<System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__set_objectString(System::Runtime::Serialization::Formatters::Binary::BinaryObjectString value)  {
::cordl_internals::setInstanceField<System::Runtime::Serialization::Formatters::Binary::BinaryObjectString, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Runtime::Serialization::Formatters::Binary::BinaryObjectString>(value));
}
constexpr System::Runtime::Serialization::Formatters::Binary::BinaryObjectString System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__get_objectString() const {
return ::cordl_internals::getInstanceField<System::Runtime::Serialization::Formatters::Binary::BinaryObjectString, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__set_crossAppDomainString(System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainString value)  {
::cordl_internals::setInstanceField<System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainString, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainString>(value));
}
constexpr System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainString System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__get_crossAppDomainString() const {
return ::cordl_internals::getInstanceField<System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainString, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__set_memberPrimitiveTyped(System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped value)  {
::cordl_internals::setInstanceField<System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped>(value));
}
constexpr System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__get_memberPrimitiveTyped() const {
return ::cordl_internals::getInstanceField<System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__set_byteBuffer(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__get_byteBuffer() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__set_memberPrimitiveUnTyped(System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveUnTyped value)  {
::cordl_internals::setInstanceField<System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveUnTyped, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveUnTyped>(value));
}
constexpr System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveUnTyped System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__get_memberPrimitiveUnTyped() const {
return ::cordl_internals::getInstanceField<System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveUnTyped, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__set_memberReference(System::Runtime::Serialization::Formatters::Binary::MemberReference value)  {
::cordl_internals::setInstanceField<System::Runtime::Serialization::Formatters::Binary::MemberReference, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Runtime::Serialization::Formatters::Binary::MemberReference>(value));
}
constexpr System::Runtime::Serialization::Formatters::Binary::MemberReference System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__get_memberReference() const {
return ::cordl_internals::getInstanceField<System::Runtime::Serialization::Formatters::Binary::MemberReference, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__set_objectNull(System::Runtime::Serialization::Formatters::Binary::ObjectNull value)  {
::cordl_internals::setInstanceField<System::Runtime::Serialization::Formatters::Binary::ObjectNull, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Runtime::Serialization::Formatters::Binary::ObjectNull>(value));
}
constexpr System::Runtime::Serialization::Formatters::Binary::ObjectNull System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__get_objectNull() const {
return ::cordl_internals::getInstanceField<System::Runtime::Serialization::Formatters::Binary::ObjectNull, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__set_messageEnd(System::Runtime::Serialization::Formatters::Binary::MessageEnd value)  {
::cordl_internals::setStaticField<System::Runtime::Serialization::Formatters::Binary::MessageEnd, "messageEnd", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::__BinaryParser>::get>(std::forward<System::Runtime::Serialization::Formatters::Binary::MessageEnd>(value));
}
 System::Runtime::Serialization::Formatters::Binary::MessageEnd System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__get_messageEnd()  {
return ::cordl_internals::getStaticField<System::Runtime::Serialization::Formatters::Binary::MessageEnd, "messageEnd", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::__BinaryParser>::get>();
}
// Ctor Parameters [CppParam { name: "stream", ty: "System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "objectReader", ty: "System::Runtime::Serialization::Formatters::Binary::ObjectReader", modifiers: "", def_value: None }]
 System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__BinaryParser(System::IO::Stream stream, System::Runtime::Serialization::Formatters::Binary::ObjectReader objectReader)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<__BinaryParser>(stream, objectReader))) {}
 void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::_ctor(System::IO::Stream stream, System::Runtime::Serialization::Formatters::Binary::ObjectReader objectReader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::__BinaryParser>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::ObjectReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, stream, objectReader);
}
 System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo System::Runtime::Serialization::Formatters::Binary::__BinaryParser::get_SystemAssemblyInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::__BinaryParser>::get(),
                            "get_SystemAssemblyInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Runtime::Serialization::Formatters::Binary::SizedArray System::Runtime::Serialization::Formatters::Binary::__BinaryParser::get_ObjectMapIdTable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::__BinaryParser>::get(),
                            "get_ObjectMapIdTable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Runtime::Serialization::Formatters::Binary::SizedArray, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Runtime::Serialization::Formatters::Binary::SizedArray System::Runtime::Serialization::Formatters::Binary::__BinaryParser::get_AssemIdToAssemblyTable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::__BinaryParser>::get(),
                            "get_AssemIdToAssemblyTable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Runtime::Serialization::Formatters::Binary::SizedArray, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Runtime::Serialization::Formatters::Binary::ParseRecord System::Runtime::Serialization::Formatters::Binary::__BinaryParser::get_prs()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::__BinaryParser>::get(),
                            "get_prs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Runtime::Serialization::Formatters::Binary::ParseRecord, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::Run()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::__BinaryParser>::get(),
                            "Run",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadBegin()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::__BinaryParser>::get(),
                            "ReadBegin",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadEnd()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::__BinaryParser>::get(),
                            "ReadEnd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadBoolean()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::__BinaryParser>::get(),
                            "ReadBoolean",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 uint8_t System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadByte()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::__BinaryParser>::get(),
                            "ReadByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint8_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<uint8_t> System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadBytes(int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::__BinaryParser>::get(),
                            "ReadBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method, length);
}
 void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadBytes(::ArrayW<uint8_t> byteA, int32_t offset, int32_t size)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::__BinaryParser>::get(),
                            "ReadBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, byteA, offset, size);
}
 char16_t System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadChar()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::__BinaryParser>::get(),
                            "ReadChar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<char16_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<char16_t> System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadChars(int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::__BinaryParser>::get(),
                            "ReadChars",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<char16_t>, false>(const_cast<void*>(instance), ___internal_method, length);
}
 System::Decimal System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadDecimal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::__BinaryParser>::get(),
                            "ReadDecimal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Decimal, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadSingle()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::__BinaryParser>::get(),
                            "ReadSingle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 double_t System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadDouble()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::__BinaryParser>::get(),
                            "ReadDouble",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int16_t System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadInt16()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::__BinaryParser>::get(),
                            "ReadInt16",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int16_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadInt32()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::__BinaryParser>::get(),
                            "ReadInt32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int64_t System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadInt64()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::__BinaryParser>::get(),
                            "ReadInt64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int8_t System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadSByte()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::__BinaryParser>::get(),
                            "ReadSByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int8_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::__BinaryParser>::get(),
                            "ReadString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 System::TimeSpan System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadTimeSpan()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::__BinaryParser>::get(),
                            "ReadTimeSpan",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::TimeSpan, false>(const_cast<void*>(instance), ___internal_method);
}
 System::DateTime System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadDateTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::__BinaryParser>::get(),
                            "ReadDateTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::DateTime, false>(const_cast<void*>(instance), ___internal_method);
}
 uint16_t System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadUInt16()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::__BinaryParser>::get(),
                            "ReadUInt16",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint16_t, false>(const_cast<void*>(instance), ___internal_method);
}
 uint32_t System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadUInt32()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::__BinaryParser>::get(),
                            "ReadUInt32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 uint64_t System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadUInt64()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::__BinaryParser>::get(),
                            "ReadUInt64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint64_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadSerializationHeaderRecord()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::__BinaryParser>::get(),
                            "ReadSerializationHeaderRecord",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadAssembly(System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::__BinaryParser>::get(),
                            "ReadAssembly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, binaryHeaderEnum);
}
 void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadObject()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::__BinaryParser>::get(),
                            "ReadObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadCrossAppDomainMap()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::__BinaryParser>::get(),
                            "ReadCrossAppDomainMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadObjectWithMap(System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::__BinaryParser>::get(),
                            "ReadObjectWithMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, binaryHeaderEnum);
}
 void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadObjectWithMap(System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap record)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::__BinaryParser>::get(),
                            "ReadObjectWithMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, record);
}
 void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadObjectWithMapTyped(System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::__BinaryParser>::get(),
                            "ReadObjectWithMapTyped",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, binaryHeaderEnum);
}
 void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadObjectWithMapTyped(System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped record)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::__BinaryParser>::get(),
                            "ReadObjectWithMapTyped",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, record);
}
 void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadObjectString(System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::__BinaryParser>::get(),
                            "ReadObjectString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, binaryHeaderEnum);
}
 void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadMemberPrimitiveTyped()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::__BinaryParser>::get(),
                            "ReadMemberPrimitiveTyped",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadArray(System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::__BinaryParser>::get(),
                            "ReadArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, binaryHeaderEnum);
}
 void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadArrayAsBytes(System::Runtime::Serialization::Formatters::Binary::ParseRecord pr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::__BinaryParser>::get(),
                            "ReadArrayAsBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::ParseRecord>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, pr);
}
 void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadMemberPrimitiveUnTyped()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::__BinaryParser>::get(),
                            "ReadMemberPrimitiveUnTyped",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadMemberReference()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::__BinaryParser>::get(),
                            "ReadMemberReference",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadObjectNull(System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::__BinaryParser>::get(),
                            "ReadObjectNull",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, binaryHeaderEnum);
}
 void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadMessageEnd()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::__BinaryParser>::get(),
                            "ReadMessageEnd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadValue(System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::__BinaryParser>::get(),
                            "ReadValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, code);
}
 System::Runtime::Serialization::Formatters::Binary::ObjectProgress System::Runtime::Serialization::Formatters::Binary::__BinaryParser::GetOp()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::__BinaryParser>::get(),
                            "GetOp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Runtime::Serialization::Formatters::Binary::ObjectProgress, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::PutOp(System::Runtime::Serialization::Formatters::Binary::ObjectProgress op)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::__BinaryParser>::get(),
                            "PutOp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::ObjectProgress>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, op);
}
