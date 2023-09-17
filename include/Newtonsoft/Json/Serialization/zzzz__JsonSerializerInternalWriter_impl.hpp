#pragma once
#include "Newtonsoft/Json/Serialization/zzzz__JsonSerializerInternalBase_impl.hpp"
namespace {
#include "Newtonsoft/Json/Serialization/zzzz__JsonSerializerInternalWriter_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonPrimitiveContract_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonSerializer_def.hpp"
#include "Newtonsoft/Json/zzzz__PreserveReferencesHandling_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonProperty_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonStringContract_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonContract_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "Newtonsoft/Json/zzzz__DefaultValueHandling_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonSerializerProxy_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonObjectContract_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonContainerContract_def.hpp"
#include "Newtonsoft/Json/zzzz__TypeNameHandling_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonArrayContract_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonISerializableContract_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonConverter_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonWriter_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonDictionaryContract_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)(::Newtonsoft::Json::JsonSerializer)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x250f984;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonSerializer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.Serialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)(::Newtonsoft::Json::JsonWriter, ::bs_hook::Il2CppWrapperType, ::System::Type)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::Serialize)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x250fa10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.GetInternalSerializer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Serialization::JsonSerializerProxy (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)()>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::GetInternalSerializer)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x25107b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter>::get(),
                            "GetInternalSerializer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.GetContractSafe
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Serialization::JsonContract (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)(::bs_hook::Il2CppWrapperType)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::GetContractSafe)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x250fc70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter>::get(),
                            "GetContractSafe",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.SerializePrimitive
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)(::Newtonsoft::Json::JsonWriter, ::bs_hook::Il2CppWrapperType, ::Newtonsoft::Json::Serialization::JsonPrimitiveContract, ::Newtonsoft::Json::Serialization::JsonProperty, ::Newtonsoft::Json::Serialization::JsonContainerContract, ::Newtonsoft::Json::Serialization::JsonProperty)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::SerializePrimitive)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x25108a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter>::get(),
                            "SerializePrimitive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonPrimitiveContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContainerContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.SerializeValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)(::Newtonsoft::Json::JsonWriter, ::bs_hook::Il2CppWrapperType, ::Newtonsoft::Json::Serialization::JsonContract, ::Newtonsoft::Json::Serialization::JsonProperty, ::Newtonsoft::Json::Serialization::JsonContainerContract, ::Newtonsoft::Json::Serialization::JsonProperty)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::SerializeValue)> {
  constexpr static std::size_t size = 0x5e0;
  constexpr static std::size_t addrs = 0x2510160;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter>::get(),
                            "SerializeValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContainerContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.ResolveIsReference
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<bool> (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)(::Newtonsoft::Json::Serialization::JsonContract, ::Newtonsoft::Json::Serialization::JsonProperty, ::Newtonsoft::Json::Serialization::JsonContainerContract, ::Newtonsoft::Json::Serialization::JsonProperty)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::ResolveIsReference)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x25130a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter>::get(),
                            "ResolveIsReference",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContainerContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.ShouldWriteReference
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)(::bs_hook::Il2CppWrapperType, ::Newtonsoft::Json::Serialization::JsonProperty, ::Newtonsoft::Json::Serialization::JsonContract, ::Newtonsoft::Json::Serialization::JsonContainerContract, ::Newtonsoft::Json::Serialization::JsonProperty)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::ShouldWriteReference)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x250fd44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter>::get(),
                            "ShouldWriteReference",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContainerContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.ShouldWriteProperty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)(::bs_hook::Il2CppWrapperType, ::Newtonsoft::Json::Serialization::JsonProperty)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::ShouldWriteProperty)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2513160;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter>::get(),
                            "ShouldWriteProperty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.CheckForCircularReference
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)(::Newtonsoft::Json::JsonWriter, ::bs_hook::Il2CppWrapperType, ::Newtonsoft::Json::Serialization::JsonProperty, ::Newtonsoft::Json::Serialization::JsonContract, ::Newtonsoft::Json::Serialization::JsonContainerContract, ::Newtonsoft::Json::Serialization::JsonProperty)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::CheckForCircularReference)> {
  constexpr static std::size_t size = 0x55c;
  constexpr static std::size_t addrs = 0x2513264;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter>::get(),
                            "CheckForCircularReference",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContainerContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.WriteReference
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)(::Newtonsoft::Json::JsonWriter, ::bs_hook::Il2CppWrapperType)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::WriteReference)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x250fedc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter>::get(),
                            "WriteReference",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.GetReference
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)(::Newtonsoft::Json::JsonWriter, ::bs_hook::Il2CppWrapperType)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::GetReference)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x25137c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter>::get(),
                            "GetReference",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.TryConvertToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::bs_hook::Il2CppWrapperType, ::System::Type, ByRef<::StringW>)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::TryConvertToString)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x25139ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter>::get(),
                            "TryConvertToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.SerializeString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)(::Newtonsoft::Json::JsonWriter, ::bs_hook::Il2CppWrapperType, ::Newtonsoft::Json::Serialization::JsonStringContract)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::SerializeString)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2512350;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter>::get(),
                            "SerializeString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonStringContract>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.OnSerializing
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)(::Newtonsoft::Json::JsonWriter, ::Newtonsoft::Json::Serialization::JsonContract, ::bs_hook::Il2CppWrapperType)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::OnSerializing)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x2513b80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter>::get(),
                            "OnSerializing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.OnSerialized
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)(::Newtonsoft::Json::JsonWriter, ::Newtonsoft::Json::Serialization::JsonContract, ::bs_hook::Il2CppWrapperType)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::OnSerialized)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x2513d88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter>::get(),
                            "OnSerialized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.SerializeObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)(::Newtonsoft::Json::JsonWriter, ::bs_hook::Il2CppWrapperType, ::Newtonsoft::Json::Serialization::JsonObjectContract, ::Newtonsoft::Json::Serialization::JsonProperty, ::Newtonsoft::Json::Serialization::JsonContainerContract, ::Newtonsoft::Json::Serialization::JsonProperty)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::SerializeObject)> {
  constexpr static std::size_t size = 0x724;
  constexpr static std::size_t addrs = 0x251137c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter>::get(),
                            "SerializeObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonObjectContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContainerContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.CalculatePropertyValues
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)(::Newtonsoft::Json::JsonWriter, ::bs_hook::Il2CppWrapperType, ::Newtonsoft::Json::Serialization::JsonContainerContract, ::Newtonsoft::Json::Serialization::JsonProperty, ::Newtonsoft::Json::Serialization::JsonProperty, ByRef<::Newtonsoft::Json::Serialization::JsonContract>, ByRef<::bs_hook::Il2CppWrapperType>)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::CalculatePropertyValues)> {
  constexpr static std::size_t size = 0x3f4;
  constexpr static std::size_t addrs = 0x25140c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter>::get(),
                            "CalculatePropertyValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContainerContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Newtonsoft::Json::Serialization::JsonContract>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.WriteObjectStart
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)(::Newtonsoft::Json::JsonWriter, ::bs_hook::Il2CppWrapperType, ::Newtonsoft::Json::Serialization::JsonContract, ::Newtonsoft::Json::Serialization::JsonProperty, ::Newtonsoft::Json::Serialization::JsonContainerContract, ::Newtonsoft::Json::Serialization::JsonProperty)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::WriteObjectStart)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x2513f90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter>::get(),
                            "WriteObjectStart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContainerContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.WriteReferenceIdProperty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)(::Newtonsoft::Json::JsonWriter, ::System::Type, ::bs_hook::Il2CppWrapperType)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::WriteReferenceIdProperty)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x2514cf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter>::get(),
                            "WriteReferenceIdProperty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.WriteTypeProperty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)(::Newtonsoft::Json::JsonWriter, ::System::Type)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::WriteTypeProperty)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x2510bd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter>::get(),
                            "WriteTypeProperty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.HasFlag
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)(::Newtonsoft::Json::DefaultValueHandling, ::Newtonsoft::Json::DefaultValueHandling)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::HasFlag)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2513258;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter>::get(),
                            "HasFlag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::DefaultValueHandling>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::DefaultValueHandling>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.HasFlag
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)(::Newtonsoft::Json::PreserveReferencesHandling, ::Newtonsoft::Json::PreserveReferencesHandling)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::HasFlag)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2513154;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter>::get(),
                            "HasFlag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::PreserveReferencesHandling>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::PreserveReferencesHandling>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.HasFlag
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)(::Newtonsoft::Json::TypeNameHandling, ::Newtonsoft::Json::TypeNameHandling)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::HasFlag)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2514f4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter>::get(),
                            "HasFlag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::TypeNameHandling>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::TypeNameHandling>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.SerializeConvertable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)(::Newtonsoft::Json::JsonWriter, ::Newtonsoft::Json::JsonConverter, ::bs_hook::Il2CppWrapperType, ::Newtonsoft::Json::Serialization::JsonContract, ::Newtonsoft::Json::Serialization::JsonContainerContract, ::Newtonsoft::Json::Serialization::JsonProperty)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::SerializeConvertable)> {
  constexpr static std::size_t size = 0x524;
  constexpr static std::size_t addrs = 0x2510e58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter>::get(),
                            "SerializeConvertable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonConverter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContainerContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.SerializeList
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)(::Newtonsoft::Json::JsonWriter, ::System::Collections::IEnumerable, ::Newtonsoft::Json::Serialization::JsonArrayContract, ::Newtonsoft::Json::Serialization::JsonProperty, ::Newtonsoft::Json::Serialization::JsonContainerContract, ::Newtonsoft::Json::Serialization::JsonProperty)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::SerializeList)> {
  constexpr static std::size_t size = 0x6f4;
  constexpr static std::size_t addrs = 0x2511aa0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter>::get(),
                            "SerializeList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEnumerable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonArrayContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContainerContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.SerializeMultidimensionalArray
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)(::Newtonsoft::Json::JsonWriter, ::System::Array, ::Newtonsoft::Json::Serialization::JsonArrayContract, ::Newtonsoft::Json::Serialization::JsonProperty, ::Newtonsoft::Json::Serialization::JsonContainerContract, ::Newtonsoft::Json::Serialization::JsonProperty)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::SerializeMultidimensionalArray)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x2512194;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter>::get(),
                            "SerializeMultidimensionalArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonArrayContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContainerContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.SerializeMultidimensionalArray
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)(::Newtonsoft::Json::JsonWriter, ::System::Array, ::Newtonsoft::Json::Serialization::JsonArrayContract, ::Newtonsoft::Json::Serialization::JsonProperty, int32_t, ::ArrayW<int32_t>)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::SerializeMultidimensionalArray)> {
  constexpr static std::size_t size = 0x36c;
  constexpr static std::size_t addrs = 0x25151f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter>::get(),
                            "SerializeMultidimensionalArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonArrayContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.WriteStartArray
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)(::Newtonsoft::Json::JsonWriter, ::bs_hook::Il2CppWrapperType, ::Newtonsoft::Json::Serialization::JsonArrayContract, ::Newtonsoft::Json::Serialization::JsonProperty, ::Newtonsoft::Json::Serialization::JsonContainerContract, ::Newtonsoft::Json::Serialization::JsonProperty)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::WriteStartArray)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x2514f58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter>::get(),
                            "WriteStartArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonArrayContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContainerContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.SerializeISerializable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)(::Newtonsoft::Json::JsonWriter, ::System::Runtime::Serialization::ISerializable, ::Newtonsoft::Json::Serialization::JsonISerializableContract, ::Newtonsoft::Json::Serialization::JsonProperty, ::Newtonsoft::Json::Serialization::JsonContainerContract, ::Newtonsoft::Json::Serialization::JsonProperty)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::SerializeISerializable)> {
  constexpr static std::size_t size = 0x464;
  constexpr static std::size_t addrs = 0x2512c40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter>::get(),
                            "SerializeISerializable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ISerializable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonISerializableContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContainerContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.ShouldWriteDynamicProperty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)(::bs_hook::Il2CppWrapperType)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::ShouldWriteDynamicProperty)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x251573c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter>::get(),
                            "ShouldWriteDynamicProperty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.ShouldWriteType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)(::Newtonsoft::Json::TypeNameHandling, ::Newtonsoft::Json::Serialization::JsonContract, ::Newtonsoft::Json::Serialization::JsonProperty, ::Newtonsoft::Json::Serialization::JsonContainerContract, ::Newtonsoft::Json::Serialization::JsonProperty)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::ShouldWriteType)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x2510a08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter>::get(),
                            "ShouldWriteType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::TypeNameHandling>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContainerContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.SerializeDictionary
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)(::Newtonsoft::Json::JsonWriter, ::System::Collections::IDictionary, ::Newtonsoft::Json::Serialization::JsonDictionaryContract, ::Newtonsoft::Json::Serialization::JsonProperty, ::Newtonsoft::Json::Serialization::JsonContainerContract, ::Newtonsoft::Json::Serialization::JsonProperty)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::SerializeDictionary)> {
  constexpr static std::size_t size = 0x870;
  constexpr static std::size_t addrs = 0x25123d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter>::get(),
                            "SerializeDictionary",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IDictionary>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonDictionaryContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContainerContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.GetPropertyName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)(::Newtonsoft::Json::JsonWriter, ::bs_hook::Il2CppWrapperType, ::Newtonsoft::Json::Serialization::JsonContract, ByRef<bool>)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::GetPropertyName)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x25144b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter>::get(),
                            "GetPropertyName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.HandleError
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)(::Newtonsoft::Json::JsonWriter, int32_t)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::HandleError)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2510740;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter>::get(),
                            "HandleError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.ShouldSerialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)(::Newtonsoft::Json::JsonWriter, ::Newtonsoft::Json::Serialization::JsonProperty, ::bs_hook::Il2CppWrapperType)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::ShouldSerialize)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x2514818;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter>::get(),
                            "ShouldSerialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.IsSpecified
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)(::Newtonsoft::Json::JsonWriter, ::Newtonsoft::Json::Serialization::JsonProperty, ::bs_hook::Il2CppWrapperType)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::IsSpecified)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x2514a88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter>::get(),
                            "IsSpecified",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::__set__rootType(::System::Type value)  {
::cordl_internals::setInstanceField<::System::Type, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Type>(value));
}
constexpr ::System::Type ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::__get__rootType() const {
return ::cordl_internals::getInstanceField<::System::Type, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::__set__rootLevel(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::__get__rootLevel() const {
return ::cordl_internals::getInstanceField<int32_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::__set__serializeStack(::System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType>>(value));
}
constexpr ::System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType> ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::__get__serializeStack() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "serializer", ty: "::Newtonsoft::Json::JsonSerializer", modifiers: "", def_value: None }]
 ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::JsonSerializerInternalWriter(::Newtonsoft::Json::JsonSerializer serializer)  : ::Newtonsoft::Json::Serialization::JsonSerializerInternalBase(THROW_UNLESS(::il2cpp_utils::New<JsonSerializerInternalWriter>(serializer))) {}
 void ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::_ctor(::Newtonsoft::Json::JsonSerializer serializer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonSerializer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, serializer);
}
 void ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::Serialize(::Newtonsoft::Json::JsonWriter jsonWriter, ::bs_hook::Il2CppWrapperType value, ::System::Type objectType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, jsonWriter, value, objectType);
}
 ::Newtonsoft::Json::Serialization::JsonSerializerProxy ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::GetInternalSerializer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter>::get(),
                            "GetInternalSerializer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Serialization::JsonSerializerProxy, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Newtonsoft::Json::Serialization::JsonContract ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::GetContractSafe(::bs_hook::Il2CppWrapperType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter>::get(),
                            "GetContractSafe",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Serialization::JsonContract, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::SerializePrimitive(::Newtonsoft::Json::JsonWriter writer, ::bs_hook::Il2CppWrapperType value, ::Newtonsoft::Json::Serialization::JsonPrimitiveContract contract, ::Newtonsoft::Json::Serialization::JsonProperty member, ::Newtonsoft::Json::Serialization::JsonContainerContract containerContract, ::Newtonsoft::Json::Serialization::JsonProperty containerProperty)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter>::get(),
                            "SerializePrimitive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonPrimitiveContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContainerContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, writer, value, contract, member, containerContract, containerProperty);
}
 void ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::SerializeValue(::Newtonsoft::Json::JsonWriter writer, ::bs_hook::Il2CppWrapperType value, ::Newtonsoft::Json::Serialization::JsonContract valueContract, ::Newtonsoft::Json::Serialization::JsonProperty member, ::Newtonsoft::Json::Serialization::JsonContainerContract containerContract, ::Newtonsoft::Json::Serialization::JsonProperty containerProperty)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter>::get(),
                            "SerializeValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContainerContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, writer, value, valueContract, member, containerContract, containerProperty);
}
 ::System::Nullable_1<bool> ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::ResolveIsReference(::Newtonsoft::Json::Serialization::JsonContract contract, ::Newtonsoft::Json::Serialization::JsonProperty property, ::Newtonsoft::Json::Serialization::JsonContainerContract collectionContract, ::Newtonsoft::Json::Serialization::JsonProperty containerProperty)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter>::get(),
                            "ResolveIsReference",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContainerContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<bool>, false>(const_cast<void*>(instance), ___internal_method, contract, property, collectionContract, containerProperty);
}
 bool ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::ShouldWriteReference(::bs_hook::Il2CppWrapperType value, ::Newtonsoft::Json::Serialization::JsonProperty property, ::Newtonsoft::Json::Serialization::JsonContract valueContract, ::Newtonsoft::Json::Serialization::JsonContainerContract collectionContract, ::Newtonsoft::Json::Serialization::JsonProperty containerProperty)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter>::get(),
                            "ShouldWriteReference",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContainerContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, value, property, valueContract, collectionContract, containerProperty);
}
 bool ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::ShouldWriteProperty(::bs_hook::Il2CppWrapperType memberValue, ::Newtonsoft::Json::Serialization::JsonProperty property)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter>::get(),
                            "ShouldWriteProperty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, memberValue, property);
}
 bool ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::CheckForCircularReference(::Newtonsoft::Json::JsonWriter writer, ::bs_hook::Il2CppWrapperType value, ::Newtonsoft::Json::Serialization::JsonProperty property, ::Newtonsoft::Json::Serialization::JsonContract contract, ::Newtonsoft::Json::Serialization::JsonContainerContract containerContract, ::Newtonsoft::Json::Serialization::JsonProperty containerProperty)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter>::get(),
                            "CheckForCircularReference",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContainerContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, writer, value, property, contract, containerContract, containerProperty);
}
 void ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::WriteReference(::Newtonsoft::Json::JsonWriter writer, ::bs_hook::Il2CppWrapperType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter>::get(),
                            "WriteReference",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, writer, value);
}
 ::StringW ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::GetReference(::Newtonsoft::Json::JsonWriter writer, ::bs_hook::Il2CppWrapperType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter>::get(),
                            "GetReference",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, writer, value);
}
 bool ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::TryConvertToString(::bs_hook::Il2CppWrapperType value, ::System::Type type, ByRef<::StringW> s)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter>::get(),
                            "TryConvertToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, value, type, s);
}
 void ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::SerializeString(::Newtonsoft::Json::JsonWriter writer, ::bs_hook::Il2CppWrapperType value, ::Newtonsoft::Json::Serialization::JsonStringContract contract)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter>::get(),
                            "SerializeString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonStringContract>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, writer, value, contract);
}
 void ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::OnSerializing(::Newtonsoft::Json::JsonWriter writer, ::Newtonsoft::Json::Serialization::JsonContract contract, ::bs_hook::Il2CppWrapperType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter>::get(),
                            "OnSerializing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, writer, contract, value);
}
 void ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::OnSerialized(::Newtonsoft::Json::JsonWriter writer, ::Newtonsoft::Json::Serialization::JsonContract contract, ::bs_hook::Il2CppWrapperType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter>::get(),
                            "OnSerialized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, writer, contract, value);
}
 void ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::SerializeObject(::Newtonsoft::Json::JsonWriter writer, ::bs_hook::Il2CppWrapperType value, ::Newtonsoft::Json::Serialization::JsonObjectContract contract, ::Newtonsoft::Json::Serialization::JsonProperty member, ::Newtonsoft::Json::Serialization::JsonContainerContract collectionContract, ::Newtonsoft::Json::Serialization::JsonProperty containerProperty)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter>::get(),
                            "SerializeObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonObjectContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContainerContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, writer, value, contract, member, collectionContract, containerProperty);
}
 bool ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::CalculatePropertyValues(::Newtonsoft::Json::JsonWriter writer, ::bs_hook::Il2CppWrapperType value, ::Newtonsoft::Json::Serialization::JsonContainerContract contract, ::Newtonsoft::Json::Serialization::JsonProperty member, ::Newtonsoft::Json::Serialization::JsonProperty property, ByRef<::Newtonsoft::Json::Serialization::JsonContract> memberContract, ByRef<::bs_hook::Il2CppWrapperType> memberValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter>::get(),
                            "CalculatePropertyValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContainerContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Newtonsoft::Json::Serialization::JsonContract>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, writer, value, contract, member, property, memberContract, memberValue);
}
 void ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::WriteObjectStart(::Newtonsoft::Json::JsonWriter writer, ::bs_hook::Il2CppWrapperType value, ::Newtonsoft::Json::Serialization::JsonContract contract, ::Newtonsoft::Json::Serialization::JsonProperty member, ::Newtonsoft::Json::Serialization::JsonContainerContract collectionContract, ::Newtonsoft::Json::Serialization::JsonProperty containerProperty)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter>::get(),
                            "WriteObjectStart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContainerContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, writer, value, contract, member, collectionContract, containerProperty);
}
 void ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::WriteReferenceIdProperty(::Newtonsoft::Json::JsonWriter writer, ::System::Type type, ::bs_hook::Il2CppWrapperType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter>::get(),
                            "WriteReferenceIdProperty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, writer, type, value);
}
 void ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::WriteTypeProperty(::Newtonsoft::Json::JsonWriter writer, ::System::Type type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter>::get(),
                            "WriteTypeProperty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, writer, type);
}
 bool ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::HasFlag(::Newtonsoft::Json::DefaultValueHandling value, ::Newtonsoft::Json::DefaultValueHandling flag)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter>::get(),
                            "HasFlag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::DefaultValueHandling>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::DefaultValueHandling>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, value, flag);
}
 bool ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::HasFlag(::Newtonsoft::Json::PreserveReferencesHandling value, ::Newtonsoft::Json::PreserveReferencesHandling flag)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter>::get(),
                            "HasFlag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::PreserveReferencesHandling>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::PreserveReferencesHandling>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, value, flag);
}
 bool ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::HasFlag(::Newtonsoft::Json::TypeNameHandling value, ::Newtonsoft::Json::TypeNameHandling flag)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter>::get(),
                            "HasFlag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::TypeNameHandling>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::TypeNameHandling>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, value, flag);
}
 void ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::SerializeConvertable(::Newtonsoft::Json::JsonWriter writer, ::Newtonsoft::Json::JsonConverter converter, ::bs_hook::Il2CppWrapperType value, ::Newtonsoft::Json::Serialization::JsonContract contract, ::Newtonsoft::Json::Serialization::JsonContainerContract collectionContract, ::Newtonsoft::Json::Serialization::JsonProperty containerProperty)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter>::get(),
                            "SerializeConvertable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonConverter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContainerContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, writer, converter, value, contract, collectionContract, containerProperty);
}
 void ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::SerializeList(::Newtonsoft::Json::JsonWriter writer, ::System::Collections::IEnumerable values, ::Newtonsoft::Json::Serialization::JsonArrayContract contract, ::Newtonsoft::Json::Serialization::JsonProperty member, ::Newtonsoft::Json::Serialization::JsonContainerContract collectionContract, ::Newtonsoft::Json::Serialization::JsonProperty containerProperty)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter>::get(),
                            "SerializeList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEnumerable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonArrayContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContainerContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, writer, values, contract, member, collectionContract, containerProperty);
}
 void ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::SerializeMultidimensionalArray(::Newtonsoft::Json::JsonWriter writer, ::System::Array values, ::Newtonsoft::Json::Serialization::JsonArrayContract contract, ::Newtonsoft::Json::Serialization::JsonProperty member, ::Newtonsoft::Json::Serialization::JsonContainerContract collectionContract, ::Newtonsoft::Json::Serialization::JsonProperty containerProperty)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter>::get(),
                            "SerializeMultidimensionalArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonArrayContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContainerContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, writer, values, contract, member, collectionContract, containerProperty);
}
 void ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::SerializeMultidimensionalArray(::Newtonsoft::Json::JsonWriter writer, ::System::Array values, ::Newtonsoft::Json::Serialization::JsonArrayContract contract, ::Newtonsoft::Json::Serialization::JsonProperty member, int32_t initialDepth, ::ArrayW<int32_t> indices)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter>::get(),
                            "SerializeMultidimensionalArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonArrayContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, writer, values, contract, member, initialDepth, indices);
}
 bool ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::WriteStartArray(::Newtonsoft::Json::JsonWriter writer, ::bs_hook::Il2CppWrapperType values, ::Newtonsoft::Json::Serialization::JsonArrayContract contract, ::Newtonsoft::Json::Serialization::JsonProperty member, ::Newtonsoft::Json::Serialization::JsonContainerContract containerContract, ::Newtonsoft::Json::Serialization::JsonProperty containerProperty)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter>::get(),
                            "WriteStartArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonArrayContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContainerContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, writer, values, contract, member, containerContract, containerProperty);
}
 void ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::SerializeISerializable(::Newtonsoft::Json::JsonWriter writer, ::System::Runtime::Serialization::ISerializable value, ::Newtonsoft::Json::Serialization::JsonISerializableContract contract, ::Newtonsoft::Json::Serialization::JsonProperty member, ::Newtonsoft::Json::Serialization::JsonContainerContract collectionContract, ::Newtonsoft::Json::Serialization::JsonProperty containerProperty)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter>::get(),
                            "SerializeISerializable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ISerializable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonISerializableContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContainerContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, writer, value, contract, member, collectionContract, containerProperty);
}
 bool ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::ShouldWriteDynamicProperty(::bs_hook::Il2CppWrapperType memberValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter>::get(),
                            "ShouldWriteDynamicProperty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, memberValue);
}
 bool ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::ShouldWriteType(::Newtonsoft::Json::TypeNameHandling typeNameHandlingFlag, ::Newtonsoft::Json::Serialization::JsonContract contract, ::Newtonsoft::Json::Serialization::JsonProperty member, ::Newtonsoft::Json::Serialization::JsonContainerContract containerContract, ::Newtonsoft::Json::Serialization::JsonProperty containerProperty)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter>::get(),
                            "ShouldWriteType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::TypeNameHandling>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContainerContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, typeNameHandlingFlag, contract, member, containerContract, containerProperty);
}
 void ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::SerializeDictionary(::Newtonsoft::Json::JsonWriter writer, ::System::Collections::IDictionary values, ::Newtonsoft::Json::Serialization::JsonDictionaryContract contract, ::Newtonsoft::Json::Serialization::JsonProperty member, ::Newtonsoft::Json::Serialization::JsonContainerContract collectionContract, ::Newtonsoft::Json::Serialization::JsonProperty containerProperty)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter>::get(),
                            "SerializeDictionary",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IDictionary>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonDictionaryContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContainerContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, writer, values, contract, member, collectionContract, containerProperty);
}
 ::StringW ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::GetPropertyName(::Newtonsoft::Json::JsonWriter writer, ::bs_hook::Il2CppWrapperType name, ::Newtonsoft::Json::Serialization::JsonContract contract, ByRef<bool> escape)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter>::get(),
                            "GetPropertyName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonContract>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, writer, name, contract, escape);
}
 void ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::HandleError(::Newtonsoft::Json::JsonWriter writer, int32_t initialDepth)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter>::get(),
                            "HandleError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, writer, initialDepth);
}
 bool ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::ShouldSerialize(::Newtonsoft::Json::JsonWriter writer, ::Newtonsoft::Json::Serialization::JsonProperty property, ::bs_hook::Il2CppWrapperType target)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter>::get(),
                            "ShouldSerialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, writer, property, target);
}
 bool ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::IsSpecified(::Newtonsoft::Json::JsonWriter writer, ::Newtonsoft::Json::Serialization::JsonProperty property, ::bs_hook::Il2CppWrapperType target)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter>::get(),
                            "IsSpecified",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::JsonProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, writer, property, target);
}
} // end anonymous namespace
