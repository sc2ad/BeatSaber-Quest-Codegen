#pragma once
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__ObjectWriter_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationObjectManager_def.hpp"
#include "System/Collections/zzzz__Queue_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__InternalPrimitiveTypeE_def.hpp"
#include "System/Runtime/Serialization/zzzz__ObjectIDGenerator_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISurrogateSelector_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__WriteObjectInfo_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz____BinaryWriter_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__Header_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__SerObjectInfoInit_def.hpp"
#include "System/Runtime/Serialization/zzzz__IFormatterConverter_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__NameInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__SerStack_def.hpp"
#include "System/Runtime/Serialization/Formatters/zzzz__FormatterTypeStyle_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationBinder_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__InternalFE_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: System::Runtime::Serialization::Formatters::Binary::ObjectWriter._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::ObjectWriter::*)(System::Runtime::Serialization::ISurrogateSelector, System::Runtime::Serialization::StreamingContext, System::Runtime::Serialization::Formatters::Binary::InternalFE, System::Runtime::Serialization::SerializationBinder)>(&System::Runtime::Serialization::Formatters::Binary::ObjectWriter::_ctor)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x23635c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::ObjectWriter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::ISurrogateSelector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::InternalFE>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::SerializationBinder>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::Formatters::Binary::ObjectWriter.Serialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::ObjectWriter::*)(::bs_hook::Il2CppWrapperType, ::ArrayW<System::Runtime::Remoting::Messaging::Header>, System::Runtime::Serialization::Formatters::Binary::__BinaryWriter, bool)>(&System::Runtime::Serialization::Formatters::Binary::ObjectWriter::Serialize)> {
  constexpr static std::size_t size = 0x3e4;
  constexpr static std::size_t addrs = 0x23636c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::ObjectWriter>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Runtime::Remoting::Messaging::Header>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::__BinaryWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::Formatters::Binary::ObjectWriter.get_ObjectManager
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Serialization::SerializationObjectManager (System::Runtime::Serialization::Formatters::Binary::ObjectWriter::*)()>(&System::Runtime::Serialization::Formatters::Binary::ObjectWriter::get_ObjectManager)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23642ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::ObjectWriter>::get(),
                            "get_ObjectManager",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::Formatters::Binary::ObjectWriter.Write
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::ObjectWriter::*)(System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo)>(&System::Runtime::Serialization::Formatters::Binary::ObjectWriter::Write)> {
  constexpr static std::size_t size = 0x37c;
  constexpr static std::size_t addrs = 0x2363de0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::ObjectWriter>::get(),
                            "Write",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::NameInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::NameInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::Formatters::Binary::ObjectWriter.Write
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::ObjectWriter::*)(System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo, ::ArrayW<::StringW>, ::ArrayW<System::Type>, ::ArrayW<::bs_hook::Il2CppWrapperType>, ::ArrayW<System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo>)>(&System::Runtime::Serialization::Formatters::Binary::ObjectWriter::Write)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x2364ae4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::ObjectWriter>::get(),
                            "Write",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::NameInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::NameInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Type>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::Formatters::Binary::ObjectWriter.WriteMemberSetup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::ObjectWriter::*)(System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo, ::StringW, System::Type, ::bs_hook::Il2CppWrapperType, System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo)>(&System::Runtime::Serialization::Formatters::Binary::ObjectWriter::WriteMemberSetup)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2364d58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::ObjectWriter>::get(),
                            "WriteMemberSetup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::NameInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::NameInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::Formatters::Binary::ObjectWriter.WriteMembers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::ObjectWriter::*)(System::Runtime::Serialization::Formatters::Binary::NameInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo, ::bs_hook::Il2CppWrapperType, System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo, System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo)>(&System::Runtime::Serialization::Formatters::Binary::ObjectWriter::WriteMembers)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0x2364e70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::ObjectWriter>::get(),
                            "WriteMembers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::NameInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::NameInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::NameInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::Formatters::Binary::ObjectWriter.WriteArray
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::ObjectWriter::*)(System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo, System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo)>(&System::Runtime::Serialization::Formatters::Binary::ObjectWriter::WriteArray)> {
  constexpr static std::size_t size = 0x74c;
  constexpr static std::size_t addrs = 0x23642f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::ObjectWriter>::get(),
                            "WriteArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::NameInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::Formatters::Binary::ObjectWriter.WriteArrayMember
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::ObjectWriter::*)(System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo, ::bs_hook::Il2CppWrapperType)>(&System::Runtime::Serialization::Formatters::Binary::ObjectWriter::WriteArrayMember)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x2365474;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::ObjectWriter>::get(),
                            "WriteArrayMember",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::NameInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::Formatters::Binary::ObjectWriter.WriteRectangle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::ObjectWriter::*)(System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo, int32_t, ::ArrayW<int32_t>, System::Array, System::Runtime::Serialization::Formatters::Binary::NameInfo, ::ArrayW<int32_t>)>(&System::Runtime::Serialization::Formatters::Binary::ObjectWriter::WriteRectangle)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x23656ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::ObjectWriter>::get(),
                            "WriteRectangle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Array>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::NameInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::Formatters::Binary::ObjectWriter.GetNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (System::Runtime::Serialization::Formatters::Binary::ObjectWriter::*)(ByRef<int64_t>)>(&System::Runtime::Serialization::Formatters::Binary::ObjectWriter::GetNext)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x2364174;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::ObjectWriter>::get(),
                            "GetNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int64_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::Formatters::Binary::ObjectWriter.InternalGetId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::Runtime::Serialization::Formatters::Binary::ObjectWriter::*)(::bs_hook::Il2CppWrapperType, bool, System::Type, ByRef<bool>)>(&System::Runtime::Serialization::Formatters::Binary::ObjectWriter::InternalGetId)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2363ac8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::ObjectWriter>::get(),
                            "InternalGetId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::Formatters::Binary::ObjectWriter.Schedule
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::Runtime::Serialization::Formatters::Binary::ObjectWriter::*)(::bs_hook::Il2CppWrapperType, bool, System::Type)>(&System::Runtime::Serialization::Formatters::Binary::ObjectWriter::Schedule)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2365974;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::ObjectWriter>::get(),
                            "Schedule",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::Formatters::Binary::ObjectWriter.Schedule
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::Runtime::Serialization::Formatters::Binary::ObjectWriter::*)(::bs_hook::Il2CppWrapperType, bool, System::Type, System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo)>(&System::Runtime::Serialization::Formatters::Binary::ObjectWriter::Schedule)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x23652d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::ObjectWriter>::get(),
                            "Schedule",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::Formatters::Binary::ObjectWriter.WriteKnownValueClass
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::Serialization::Formatters::Binary::ObjectWriter::*)(System::Runtime::Serialization::Formatters::Binary::NameInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo, ::bs_hook::Il2CppWrapperType)>(&System::Runtime::Serialization::Formatters::Binary::ObjectWriter::WriteKnownValueClass)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2365380;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::ObjectWriter>::get(),
                            "WriteKnownValueClass",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::NameInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::NameInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::Formatters::Binary::ObjectWriter.WriteObjectRef
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::ObjectWriter::*)(System::Runtime::Serialization::Formatters::Binary::NameInfo, int64_t)>(&System::Runtime::Serialization::Formatters::Binary::ObjectWriter::WriteObjectRef)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2365364;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::ObjectWriter>::get(),
                            "WriteObjectRef",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::NameInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::Formatters::Binary::ObjectWriter.WriteString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::ObjectWriter::*)(System::Runtime::Serialization::Formatters::Binary::NameInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo, ::bs_hook::Il2CppWrapperType)>(&System::Runtime::Serialization::Formatters::Binary::ObjectWriter::WriteString)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x2365980;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::ObjectWriter>::get(),
                            "WriteString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::NameInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::NameInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::Formatters::Binary::ObjectWriter.CheckForNull
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::Serialization::Formatters::Binary::ObjectWriter::*)(System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo, ::bs_hook::Il2CppWrapperType)>(&System::Runtime::Serialization::Formatters::Binary::ObjectWriter::CheckForNull)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2365198;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::ObjectWriter>::get(),
                            "CheckForNull",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::NameInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::NameInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::Formatters::Binary::ObjectWriter.WriteSerializedStreamHeader
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::ObjectWriter::*)(int64_t, int64_t)>(&System::Runtime::Serialization::Formatters::Binary::ObjectWriter::WriteSerializedStreamHeader)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2363aa4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::ObjectWriter>::get(),
                            "WriteSerializedStreamHeader",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::Formatters::Binary::ObjectWriter.TypeToNameInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Serialization::Formatters::Binary::NameInfo (System::Runtime::Serialization::Formatters::Binary::ObjectWriter::*)(System::Type, System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo, System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE, System::Runtime::Serialization::Formatters::Binary::NameInfo)>(&System::Runtime::Serialization::Formatters::Binary::ObjectWriter::TypeToNameInfo)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2365a80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::ObjectWriter>::get(),
                            "TypeToNameInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::NameInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::Formatters::Binary::ObjectWriter.TypeToNameInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Serialization::Formatters::Binary::NameInfo (System::Runtime::Serialization::Formatters::Binary::ObjectWriter::*)(System::Type)>(&System::Runtime::Serialization::Formatters::Binary::ObjectWriter::TypeToNameInfo)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2364e34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::ObjectWriter>::get(),
                            "TypeToNameInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::Formatters::Binary::ObjectWriter.TypeToNameInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Serialization::Formatters::Binary::NameInfo (System::Runtime::Serialization::Formatters::Binary::ObjectWriter::*)(System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo)>(&System::Runtime::Serialization::Formatters::Binary::ObjectWriter::TypeToNameInfo)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2363d9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::ObjectWriter>::get(),
                            "TypeToNameInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::Formatters::Binary::ObjectWriter.TypeToNameInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Serialization::Formatters::Binary::NameInfo (System::Runtime::Serialization::Formatters::Binary::ObjectWriter::*)(System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo)>(&System::Runtime::Serialization::Formatters::Binary::ObjectWriter::TypeToNameInfo)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2365288;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::ObjectWriter>::get(),
                            "TypeToNameInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::NameInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::Formatters::Binary::ObjectWriter.TypeToNameInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::ObjectWriter::*)(System::Type, System::Runtime::Serialization::Formatters::Binary::NameInfo)>(&System::Runtime::Serialization::Formatters::Binary::ObjectWriter::TypeToNameInfo)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2365250;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::ObjectWriter>::get(),
                            "TypeToNameInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::NameInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::Formatters::Binary::ObjectWriter.MemberToNameInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Serialization::Formatters::Binary::NameInfo (System::Runtime::Serialization::Formatters::Binary::ObjectWriter::*)(::StringW)>(&System::Runtime::Serialization::Formatters::Binary::ObjectWriter::MemberToNameInfo)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2364d38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::ObjectWriter>::get(),
                            "MemberToNameInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::Formatters::Binary::ObjectWriter.ToCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE (System::Runtime::Serialization::Formatters::Binary::ObjectWriter::*)(System::Type)>(&System::Runtime::Serialization::Formatters::Binary::ObjectWriter::ToCode)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2364a64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::ObjectWriter>::get(),
                            "ToCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::Formatters::Binary::ObjectWriter.GetAssemblyId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::Runtime::Serialization::Formatters::Binary::ObjectWriter::*)(System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo)>(&System::Runtime::Serialization::Formatters::Binary::ObjectWriter::GetAssemblyId)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x2363b8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::ObjectWriter>::get(),
                            "GetAssemblyId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::Formatters::Binary::ObjectWriter.GetType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type (System::Runtime::Serialization::Formatters::Binary::ObjectWriter::*)(::bs_hook::Il2CppWrapperType)>(&System::Runtime::Serialization::Formatters::Binary::ObjectWriter::GetType)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2364a4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::ObjectWriter>::get(),
                            "GetType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::Formatters::Binary::ObjectWriter.GetNameInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Serialization::Formatters::Binary::NameInfo (System::Runtime::Serialization::Formatters::Binary::ObjectWriter::*)()>(&System::Runtime::Serialization::Formatters::Binary::ObjectWriter::GetNameInfo)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2365b14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::ObjectWriter>::get(),
                            "GetNameInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::Formatters::Binary::ObjectWriter.CheckTypeFormat
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::Serialization::Formatters::Binary::ObjectWriter::*)(System::Runtime::Serialization::Formatters::FormatterTypeStyle, System::Runtime::Serialization::Formatters::FormatterTypeStyle)>(&System::Runtime::Serialization::Formatters::Binary::ObjectWriter::CheckTypeFormat)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2364a40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::ObjectWriter>::get(),
                            "CheckTypeFormat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::FormatterTypeStyle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::FormatterTypeStyle>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::Formatters::Binary::ObjectWriter.PutNameInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::ObjectWriter::*)(System::Runtime::Serialization::Formatters::Binary::NameInfo)>(&System::Runtime::Serialization::Formatters::Binary::ObjectWriter::PutNameInfo)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x236415c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::ObjectWriter>::get(),
                            "PutNameInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::NameInfo>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectWriter::__set_m_objectQueue(System::Collections::Queue value)  {
::cordl_internals::setInstanceField<System::Collections::Queue, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Queue>(value));
}
constexpr System::Collections::Queue System::Runtime::Serialization::Formatters::Binary::ObjectWriter::__get_m_objectQueue() const {
return ::cordl_internals::getInstanceField<System::Collections::Queue, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectWriter::__set_m_idGenerator(System::Runtime::Serialization::ObjectIDGenerator value)  {
::cordl_internals::setInstanceField<System::Runtime::Serialization::ObjectIDGenerator, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Runtime::Serialization::ObjectIDGenerator>(value));
}
constexpr System::Runtime::Serialization::ObjectIDGenerator System::Runtime::Serialization::Formatters::Binary::ObjectWriter::__get_m_idGenerator() const {
return ::cordl_internals::getInstanceField<System::Runtime::Serialization::ObjectIDGenerator, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectWriter::__set_m_currentId(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Runtime::Serialization::Formatters::Binary::ObjectWriter::__get_m_currentId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectWriter::__set_m_surrogates(System::Runtime::Serialization::ISurrogateSelector value)  {
::cordl_internals::setInstanceField<System::Runtime::Serialization::ISurrogateSelector, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Runtime::Serialization::ISurrogateSelector>(value));
}
constexpr System::Runtime::Serialization::ISurrogateSelector System::Runtime::Serialization::Formatters::Binary::ObjectWriter::__get_m_surrogates() const {
return ::cordl_internals::getInstanceField<System::Runtime::Serialization::ISurrogateSelector, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectWriter::__set_m_context(System::Runtime::Serialization::StreamingContext value)  {
::cordl_internals::setInstanceField<System::Runtime::Serialization::StreamingContext, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Runtime::Serialization::StreamingContext>(value));
}
constexpr System::Runtime::Serialization::StreamingContext System::Runtime::Serialization::Formatters::Binary::ObjectWriter::__get_m_context() const {
return ::cordl_internals::getInstanceField<System::Runtime::Serialization::StreamingContext, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectWriter::__set_serWriter(System::Runtime::Serialization::Formatters::Binary::__BinaryWriter value)  {
::cordl_internals::setInstanceField<System::Runtime::Serialization::Formatters::Binary::__BinaryWriter, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Runtime::Serialization::Formatters::Binary::__BinaryWriter>(value));
}
constexpr System::Runtime::Serialization::Formatters::Binary::__BinaryWriter System::Runtime::Serialization::Formatters::Binary::ObjectWriter::__get_serWriter() const {
return ::cordl_internals::getInstanceField<System::Runtime::Serialization::Formatters::Binary::__BinaryWriter, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectWriter::__set_m_objectManager(System::Runtime::Serialization::SerializationObjectManager value)  {
::cordl_internals::setInstanceField<System::Runtime::Serialization::SerializationObjectManager, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Runtime::Serialization::SerializationObjectManager>(value));
}
constexpr System::Runtime::Serialization::SerializationObjectManager System::Runtime::Serialization::Formatters::Binary::ObjectWriter::__get_m_objectManager() const {
return ::cordl_internals::getInstanceField<System::Runtime::Serialization::SerializationObjectManager, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectWriter::__set_topId(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int64_t>(value));
}
constexpr int64_t System::Runtime::Serialization::Formatters::Binary::ObjectWriter::__get_topId() const {
return ::cordl_internals::getInstanceField<int64_t, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectWriter::__set_topName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Runtime::Serialization::Formatters::Binary::ObjectWriter::__get_topName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectWriter::__set_headers(::ArrayW<System::Runtime::Remoting::Messaging::Header> value)  {
::cordl_internals::setInstanceField<::ArrayW<System::Runtime::Remoting::Messaging::Header>, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<System::Runtime::Remoting::Messaging::Header>>(value));
}
constexpr ::ArrayW<System::Runtime::Remoting::Messaging::Header> System::Runtime::Serialization::Formatters::Binary::ObjectWriter::__get_headers() const {
return ::cordl_internals::getInstanceField<::ArrayW<System::Runtime::Remoting::Messaging::Header>, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectWriter::__set_formatterEnums(System::Runtime::Serialization::Formatters::Binary::InternalFE value)  {
::cordl_internals::setInstanceField<System::Runtime::Serialization::Formatters::Binary::InternalFE, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Runtime::Serialization::Formatters::Binary::InternalFE>(value));
}
constexpr System::Runtime::Serialization::Formatters::Binary::InternalFE System::Runtime::Serialization::Formatters::Binary::ObjectWriter::__get_formatterEnums() const {
return ::cordl_internals::getInstanceField<System::Runtime::Serialization::Formatters::Binary::InternalFE, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectWriter::__set_m_binder(System::Runtime::Serialization::SerializationBinder value)  {
::cordl_internals::setInstanceField<System::Runtime::Serialization::SerializationBinder, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Runtime::Serialization::SerializationBinder>(value));
}
constexpr System::Runtime::Serialization::SerializationBinder System::Runtime::Serialization::Formatters::Binary::ObjectWriter::__get_m_binder() const {
return ::cordl_internals::getInstanceField<System::Runtime::Serialization::SerializationBinder, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectWriter::__set_serObjectInfoInit(System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit value)  {
::cordl_internals::setInstanceField<System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit>(value));
}
constexpr System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit System::Runtime::Serialization::Formatters::Binary::ObjectWriter::__get_serObjectInfoInit() const {
return ::cordl_internals::getInstanceField<System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectWriter::__set_m_formatterConverter(System::Runtime::Serialization::IFormatterConverter value)  {
::cordl_internals::setInstanceField<System::Runtime::Serialization::IFormatterConverter, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Runtime::Serialization::IFormatterConverter>(value));
}
constexpr System::Runtime::Serialization::IFormatterConverter System::Runtime::Serialization::Formatters::Binary::ObjectWriter::__get_m_formatterConverter() const {
return ::cordl_internals::getInstanceField<System::Runtime::Serialization::IFormatterConverter, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectWriter::__set_crossAppDomainArray(::ArrayW<::bs_hook::Il2CppWrapperType> value)  {
::cordl_internals::setInstanceField<::ArrayW<::bs_hook::Il2CppWrapperType>, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::bs_hook::Il2CppWrapperType>>(value));
}
constexpr ::ArrayW<::bs_hook::Il2CppWrapperType> System::Runtime::Serialization::Formatters::Binary::ObjectWriter::__get_crossAppDomainArray() const {
return ::cordl_internals::getInstanceField<::ArrayW<::bs_hook::Il2CppWrapperType>, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectWriter::__set_previousObj(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType System::Runtime::Serialization::Formatters::Binary::ObjectWriter::__get_previousObj() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectWriter::__set_previousId(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int64_t>(value));
}
constexpr int64_t System::Runtime::Serialization::Formatters::Binary::ObjectWriter::__get_previousId() const {
return ::cordl_internals::getInstanceField<int64_t, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectWriter::__set_previousType(System::Type value)  {
::cordl_internals::setInstanceField<System::Type, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Type>(value));
}
constexpr System::Type System::Runtime::Serialization::Formatters::Binary::ObjectWriter::__get_previousType() const {
return ::cordl_internals::getInstanceField<System::Type, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectWriter::__set_previousCode(System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE value)  {
::cordl_internals::setInstanceField<System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE>(value));
}
constexpr System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE System::Runtime::Serialization::Formatters::Binary::ObjectWriter::__get_previousCode() const {
return ::cordl_internals::getInstanceField<System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectWriter::__set_assemblyToIdTable(System::Collections::Hashtable value)  {
::cordl_internals::setInstanceField<System::Collections::Hashtable, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Hashtable>(value));
}
constexpr System::Collections::Hashtable System::Runtime::Serialization::Formatters::Binary::ObjectWriter::__get_assemblyToIdTable() const {
return ::cordl_internals::getInstanceField<System::Collections::Hashtable, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectWriter::__set_niPool(System::Runtime::Serialization::Formatters::Binary::SerStack value)  {
::cordl_internals::setInstanceField<System::Runtime::Serialization::Formatters::Binary::SerStack, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Runtime::Serialization::Formatters::Binary::SerStack>(value));
}
constexpr System::Runtime::Serialization::Formatters::Binary::SerStack System::Runtime::Serialization::Formatters::Binary::ObjectWriter::__get_niPool() const {
return ::cordl_internals::getInstanceField<System::Runtime::Serialization::Formatters::Binary::SerStack, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "selector", ty: "System::Runtime::Serialization::ISurrogateSelector", modifiers: "", def_value: None }, CppParam { name: "context", ty: "System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }, CppParam { name: "formatterEnums", ty: "System::Runtime::Serialization::Formatters::Binary::InternalFE", modifiers: "", def_value: None }, CppParam { name: "binder", ty: "System::Runtime::Serialization::SerializationBinder", modifiers: "", def_value: None }]
 System::Runtime::Serialization::Formatters::Binary::ObjectWriter::ObjectWriter(System::Runtime::Serialization::ISurrogateSelector selector, System::Runtime::Serialization::StreamingContext context, System::Runtime::Serialization::Formatters::Binary::InternalFE formatterEnums, System::Runtime::Serialization::SerializationBinder binder)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<ObjectWriter>(selector, context, formatterEnums, binder))) {}
 void System::Runtime::Serialization::Formatters::Binary::ObjectWriter::_ctor(System::Runtime::Serialization::ISurrogateSelector selector, System::Runtime::Serialization::StreamingContext context, System::Runtime::Serialization::Formatters::Binary::InternalFE formatterEnums, System::Runtime::Serialization::SerializationBinder binder)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::ObjectWriter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::ISurrogateSelector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::InternalFE>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::SerializationBinder>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, selector, context, formatterEnums, binder);
}
 void System::Runtime::Serialization::Formatters::Binary::ObjectWriter::Serialize(::bs_hook::Il2CppWrapperType graph, ::ArrayW<System::Runtime::Remoting::Messaging::Header> inHeaders, System::Runtime::Serialization::Formatters::Binary::__BinaryWriter serWriter, bool fCheck)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::ObjectWriter>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Runtime::Remoting::Messaging::Header>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::__BinaryWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, graph, inHeaders, serWriter, fCheck);
}
 System::Runtime::Serialization::SerializationObjectManager System::Runtime::Serialization::Formatters::Binary::ObjectWriter::get_ObjectManager()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::ObjectWriter>::get(),
                            "get_ObjectManager",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Runtime::Serialization::SerializationObjectManager, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Runtime::Serialization::Formatters::Binary::ObjectWriter::Write(System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo objectInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo memberNameInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo typeNameInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::ObjectWriter>::get(),
                            "Write",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::NameInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::NameInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, objectInfo, memberNameInfo, typeNameInfo);
}
 void System::Runtime::Serialization::Formatters::Binary::ObjectWriter::Write(System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo objectInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo memberNameInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo typeNameInfo, ::ArrayW<::StringW> memberNames, ::ArrayW<System::Type> memberTypes, ::ArrayW<::bs_hook::Il2CppWrapperType> memberData, ::ArrayW<System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo> memberObjectInfos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::ObjectWriter>::get(),
                            "Write",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::NameInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::NameInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Type>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, objectInfo, memberNameInfo, typeNameInfo, memberNames, memberTypes, memberData, memberObjectInfos);
}
 void System::Runtime::Serialization::Formatters::Binary::ObjectWriter::WriteMemberSetup(System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo objectInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo memberNameInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo typeNameInfo, ::StringW memberName, System::Type memberType, ::bs_hook::Il2CppWrapperType memberData, System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo memberObjectInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::ObjectWriter>::get(),
                            "WriteMemberSetup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::NameInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::NameInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, objectInfo, memberNameInfo, typeNameInfo, memberName, memberType, memberData, memberObjectInfo);
}
 void System::Runtime::Serialization::Formatters::Binary::ObjectWriter::WriteMembers(System::Runtime::Serialization::Formatters::Binary::NameInfo memberNameInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo memberTypeNameInfo, ::bs_hook::Il2CppWrapperType memberData, System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo objectInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo typeNameInfo, System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo memberObjectInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::ObjectWriter>::get(),
                            "WriteMembers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::NameInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::NameInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::NameInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, memberNameInfo, memberTypeNameInfo, memberData, objectInfo, typeNameInfo, memberObjectInfo);
}
 void System::Runtime::Serialization::Formatters::Binary::ObjectWriter::WriteArray(System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo objectInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo memberNameInfo, System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo memberObjectInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::ObjectWriter>::get(),
                            "WriteArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::NameInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, objectInfo, memberNameInfo, memberObjectInfo);
}
 void System::Runtime::Serialization::Formatters::Binary::ObjectWriter::WriteArrayMember(System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo objectInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo arrayElemTypeNameInfo, ::bs_hook::Il2CppWrapperType data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::ObjectWriter>::get(),
                            "WriteArrayMember",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::NameInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, objectInfo, arrayElemTypeNameInfo, data);
}
 void System::Runtime::Serialization::Formatters::Binary::ObjectWriter::WriteRectangle(System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo objectInfo, int32_t rank, ::ArrayW<int32_t> maxA, System::Array array, System::Runtime::Serialization::Formatters::Binary::NameInfo arrayElemNameTypeInfo, ::ArrayW<int32_t> lowerBoundA)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::ObjectWriter>::get(),
                            "WriteRectangle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Array>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::NameInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, objectInfo, rank, maxA, array, arrayElemNameTypeInfo, lowerBoundA);
}
 ::bs_hook::Il2CppWrapperType System::Runtime::Serialization::Formatters::Binary::ObjectWriter::GetNext(ByRef<int64_t> objID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::ObjectWriter>::get(),
                            "GetNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int64_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, objID);
}
 int64_t System::Runtime::Serialization::Formatters::Binary::ObjectWriter::InternalGetId(::bs_hook::Il2CppWrapperType obj, bool assignUniqueIdToValueType, System::Type type, ByRef<bool> isNew)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::ObjectWriter>::get(),
                            "InternalGetId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(const_cast<void*>(instance), ___internal_method, obj, assignUniqueIdToValueType, type, isNew);
}
 int64_t System::Runtime::Serialization::Formatters::Binary::ObjectWriter::Schedule(::bs_hook::Il2CppWrapperType obj, bool assignUniqueIdToValueType, System::Type type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::ObjectWriter>::get(),
                            "Schedule",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(const_cast<void*>(instance), ___internal_method, obj, assignUniqueIdToValueType, type);
}
 int64_t System::Runtime::Serialization::Formatters::Binary::ObjectWriter::Schedule(::bs_hook::Il2CppWrapperType obj, bool assignUniqueIdToValueType, System::Type type, System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo objectInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::ObjectWriter>::get(),
                            "Schedule",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(const_cast<void*>(instance), ___internal_method, obj, assignUniqueIdToValueType, type, objectInfo);
}
 bool System::Runtime::Serialization::Formatters::Binary::ObjectWriter::WriteKnownValueClass(System::Runtime::Serialization::Formatters::Binary::NameInfo memberNameInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo typeNameInfo, ::bs_hook::Il2CppWrapperType data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::ObjectWriter>::get(),
                            "WriteKnownValueClass",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::NameInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::NameInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, memberNameInfo, typeNameInfo, data);
}
 void System::Runtime::Serialization::Formatters::Binary::ObjectWriter::WriteObjectRef(System::Runtime::Serialization::Formatters::Binary::NameInfo nameInfo, int64_t objectId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::ObjectWriter>::get(),
                            "WriteObjectRef",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::NameInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, nameInfo, objectId);
}
 void System::Runtime::Serialization::Formatters::Binary::ObjectWriter::WriteString(System::Runtime::Serialization::Formatters::Binary::NameInfo memberNameInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo typeNameInfo, ::bs_hook::Il2CppWrapperType stringObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::ObjectWriter>::get(),
                            "WriteString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::NameInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::NameInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, memberNameInfo, typeNameInfo, stringObject);
}
 bool System::Runtime::Serialization::Formatters::Binary::ObjectWriter::CheckForNull(System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo objectInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo memberNameInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo typeNameInfo, ::bs_hook::Il2CppWrapperType data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::ObjectWriter>::get(),
                            "CheckForNull",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::NameInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::NameInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, objectInfo, memberNameInfo, typeNameInfo, data);
}
 void System::Runtime::Serialization::Formatters::Binary::ObjectWriter::WriteSerializedStreamHeader(int64_t topId, int64_t headerId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::ObjectWriter>::get(),
                            "WriteSerializedStreamHeader",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, topId, headerId);
}
 System::Runtime::Serialization::Formatters::Binary::NameInfo System::Runtime::Serialization::Formatters::Binary::ObjectWriter::TypeToNameInfo(System::Type type, System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo objectInfo, System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code, System::Runtime::Serialization::Formatters::Binary::NameInfo nameInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::ObjectWriter>::get(),
                            "TypeToNameInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::NameInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Runtime::Serialization::Formatters::Binary::NameInfo, false>(const_cast<void*>(instance), ___internal_method, type, objectInfo, code, nameInfo);
}
 System::Runtime::Serialization::Formatters::Binary::NameInfo System::Runtime::Serialization::Formatters::Binary::ObjectWriter::TypeToNameInfo(System::Type type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::ObjectWriter>::get(),
                            "TypeToNameInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Runtime::Serialization::Formatters::Binary::NameInfo, false>(const_cast<void*>(instance), ___internal_method, type);
}
 System::Runtime::Serialization::Formatters::Binary::NameInfo System::Runtime::Serialization::Formatters::Binary::ObjectWriter::TypeToNameInfo(System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo objectInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::ObjectWriter>::get(),
                            "TypeToNameInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Runtime::Serialization::Formatters::Binary::NameInfo, false>(const_cast<void*>(instance), ___internal_method, objectInfo);
}
 System::Runtime::Serialization::Formatters::Binary::NameInfo System::Runtime::Serialization::Formatters::Binary::ObjectWriter::TypeToNameInfo(System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo objectInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo nameInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::ObjectWriter>::get(),
                            "TypeToNameInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::NameInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Runtime::Serialization::Formatters::Binary::NameInfo, false>(const_cast<void*>(instance), ___internal_method, objectInfo, nameInfo);
}
 void System::Runtime::Serialization::Formatters::Binary::ObjectWriter::TypeToNameInfo(System::Type type, System::Runtime::Serialization::Formatters::Binary::NameInfo nameInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::ObjectWriter>::get(),
                            "TypeToNameInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::NameInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, type, nameInfo);
}
 System::Runtime::Serialization::Formatters::Binary::NameInfo System::Runtime::Serialization::Formatters::Binary::ObjectWriter::MemberToNameInfo(::StringW name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::ObjectWriter>::get(),
                            "MemberToNameInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Runtime::Serialization::Formatters::Binary::NameInfo, false>(const_cast<void*>(instance), ___internal_method, name);
}
 System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE System::Runtime::Serialization::Formatters::Binary::ObjectWriter::ToCode(System::Type type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::ObjectWriter>::get(),
                            "ToCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE, false>(const_cast<void*>(instance), ___internal_method, type);
}
 int64_t System::Runtime::Serialization::Formatters::Binary::ObjectWriter::GetAssemblyId(System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo objectInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::ObjectWriter>::get(),
                            "GetAssemblyId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(const_cast<void*>(instance), ___internal_method, objectInfo);
}
 System::Type System::Runtime::Serialization::Formatters::Binary::ObjectWriter::GetType(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::ObjectWriter>::get(),
                            "GetType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Type, false>(const_cast<void*>(instance), ___internal_method, obj);
}
 System::Runtime::Serialization::Formatters::Binary::NameInfo System::Runtime::Serialization::Formatters::Binary::ObjectWriter::GetNameInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::ObjectWriter>::get(),
                            "GetNameInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Runtime::Serialization::Formatters::Binary::NameInfo, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Runtime::Serialization::Formatters::Binary::ObjectWriter::CheckTypeFormat(System::Runtime::Serialization::Formatters::FormatterTypeStyle test, System::Runtime::Serialization::Formatters::FormatterTypeStyle want)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::ObjectWriter>::get(),
                            "CheckTypeFormat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::FormatterTypeStyle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::FormatterTypeStyle>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, test, want);
}
 void System::Runtime::Serialization::Formatters::Binary::ObjectWriter::PutNameInfo(System::Runtime::Serialization::Formatters::Binary::NameInfo nameInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::ObjectWriter>::get(),
                            "PutNameInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::NameInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, nameInfo);
}
