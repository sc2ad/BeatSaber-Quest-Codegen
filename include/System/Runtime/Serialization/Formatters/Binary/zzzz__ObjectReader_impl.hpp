#pragma once
namespace {
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__ObjectReader_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__HeaderHandler_def.hpp"
#include "System/Reflection/zzzz__AssemblyName_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__SerStack_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__Header_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__SerObjectInfoInit_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__ReadObjectInfo_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__InternalFE_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationBinder_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/Reflection/zzzz__Assembly_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__BinaryAssemblyInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__ObjectManager_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__NameCache_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__ParseRecord_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISurrogateSelector_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__IntSizedArray_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz____BinaryParser_def.hpp"
#include "System/Runtime/Serialization/zzzz__IFormatterConverter_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::____System__Runtime__Serialization__Formatters__Binary__ObjectReader__TypeNAssembly._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::____System__Runtime__Serialization__Formatters__Binary__ObjectReader__TypeNAssembly::*)()>(&::System::Runtime::Serialization::Formatters::Binary::____System__Runtime__Serialization__Formatters__Binary__ObjectReader__TypeNAssembly::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23632ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::____System__Runtime__Serialization__Formatters__Binary__ObjectReader__TypeNAssembly>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::System::Runtime::Serialization::Formatters::Binary::____System__Runtime__Serialization__Formatters__Binary__ObjectReader__TypeNAssembly::__set_type(::System::Type value)  {
::cordl_internals::setInstanceField<::System::Type, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Type>(value));
}
constexpr ::System::Type ::System::Runtime::Serialization::Formatters::Binary::____System__Runtime__Serialization__Formatters__Binary__ObjectReader__TypeNAssembly::__get_type() const {
return ::cordl_internals::getInstanceField<::System::Type, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Runtime::Serialization::Formatters::Binary::____System__Runtime__Serialization__Formatters__Binary__ObjectReader__TypeNAssembly::__set_assemblyName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::System::Runtime::Serialization::Formatters::Binary::____System__Runtime__Serialization__Formatters__Binary__ObjectReader__TypeNAssembly::__get_assemblyName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::System::Runtime::Serialization::Formatters::Binary::____System__Runtime__Serialization__Formatters__Binary__ObjectReader__TypeNAssembly::____System__Runtime__Serialization__Formatters__Binary__ObjectReader__TypeNAssembly()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____System__Runtime__Serialization__Formatters__Binary__ObjectReader__TypeNAssembly>())) {}
 void ::System::Runtime::Serialization::Formatters::Binary::____System__Runtime__Serialization__Formatters__Binary__ObjectReader__TypeNAssembly::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::____System__Runtime__Serialization__Formatters__Binary__ObjectReader__TypeNAssembly>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::____System__Runtime__Serialization__Formatters__Binary__ObjectReader__TopLevelAssemblyTypeResolver._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::____System__Runtime__Serialization__Formatters__Binary__ObjectReader__TopLevelAssemblyTypeResolver::*)(::System::Reflection::Assembly)>(&::System::Runtime::Serialization::Formatters::Binary::____System__Runtime__Serialization__Formatters__Binary__ObjectReader__TopLevelAssemblyTypeResolver::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2363384;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::____System__Runtime__Serialization__Formatters__Binary__ObjectReader__TopLevelAssemblyTypeResolver>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Assembly>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::____System__Runtime__Serialization__Formatters__Binary__ObjectReader__TopLevelAssemblyTypeResolver.ResolveType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type (::System::Runtime::Serialization::Formatters::Binary::____System__Runtime__Serialization__Formatters__Binary__ObjectReader__TopLevelAssemblyTypeResolver::*)(::System::Reflection::Assembly, ::StringW, bool)>(&::System::Runtime::Serialization::Formatters::Binary::____System__Runtime__Serialization__Formatters__Binary__ObjectReader__TopLevelAssemblyTypeResolver::ResolveType)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2363560;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::____System__Runtime__Serialization__Formatters__Binary__ObjectReader__TopLevelAssemblyTypeResolver>::get(),
                            "ResolveType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Assembly>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::System::Runtime::Serialization::Formatters::Binary::____System__Runtime__Serialization__Formatters__Binary__ObjectReader__TopLevelAssemblyTypeResolver::__set_m_topLevelAssembly(::System::Reflection::Assembly value)  {
::cordl_internals::setInstanceField<::System::Reflection::Assembly, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Reflection::Assembly>(value));
}
constexpr ::System::Reflection::Assembly ::System::Runtime::Serialization::Formatters::Binary::____System__Runtime__Serialization__Formatters__Binary__ObjectReader__TopLevelAssemblyTypeResolver::__get_m_topLevelAssembly() const {
return ::cordl_internals::getInstanceField<::System::Reflection::Assembly, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "topLevelAssembly", ty: "::System::Reflection::Assembly", modifiers: "", def_value: None }]
 ::System::Runtime::Serialization::Formatters::Binary::____System__Runtime__Serialization__Formatters__Binary__ObjectReader__TopLevelAssemblyTypeResolver::____System__Runtime__Serialization__Formatters__Binary__ObjectReader__TopLevelAssemblyTypeResolver(::System::Reflection::Assembly topLevelAssembly)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____System__Runtime__Serialization__Formatters__Binary__ObjectReader__TopLevelAssemblyTypeResolver>(topLevelAssembly))) {}
 void ::System::Runtime::Serialization::Formatters::Binary::____System__Runtime__Serialization__Formatters__Binary__ObjectReader__TopLevelAssemblyTypeResolver::_ctor(::System::Reflection::Assembly topLevelAssembly)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::____System__Runtime__Serialization__Formatters__Binary__ObjectReader__TopLevelAssemblyTypeResolver>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Assembly>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, topLevelAssembly);
}
 ::System::Type ::System::Runtime::Serialization::Formatters::Binary::____System__Runtime__Serialization__Formatters__Binary__ObjectReader__TopLevelAssemblyTypeResolver::ResolveType(::System::Reflection::Assembly assembly, ::StringW simpleTypeName, bool ignoreCase)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::____System__Runtime__Serialization__Formatters__Binary__ObjectReader__TopLevelAssemblyTypeResolver>::get(),
                            "ResolveType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Assembly>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Type, false>(const_cast<void*>(instance), ___internal_method, assembly, simpleTypeName, ignoreCase);
}
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectReader.get_ValueFixupStack
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Serialization::Formatters::Binary::SerStack (::System::Runtime::Serialization::Formatters::Binary::ObjectReader::*)()>(&::System::Runtime::Serialization::Formatters::Binary::ObjectReader::get_ValueFixupStack)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x235f1d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader>::get(),
                            "get_ValueFixupStack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectReader.get_TopObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (::System::Runtime::Serialization::Formatters::Binary::ObjectReader::*)()>(&::System::Runtime::Serialization::Formatters::Binary::ObjectReader::get_TopObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x235f258;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader>::get(),
                            "get_TopObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectReader.set_TopObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::ObjectReader::*)(::bs_hook::Il2CppWrapperType)>(&::System::Runtime::Serialization::Formatters::Binary::ObjectReader::set_TopObject)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x235f260;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader>::get(),
                            "set_TopObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectReader._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::ObjectReader::*)(::System::IO::Stream, ::System::Runtime::Serialization::ISurrogateSelector, ::System::Runtime::Serialization::StreamingContext, ::System::Runtime::Serialization::Formatters::Binary::InternalFE, ::System::Runtime::Serialization::SerializationBinder)>(&::System::Runtime::Serialization::Formatters::Binary::ObjectReader::_ctor)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x235f274;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ISurrogateSelector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::InternalFE>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationBinder>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectReader.Deserialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (::System::Runtime::Serialization::Formatters::Binary::ObjectReader::*)(::System::Runtime::Remoting::Messaging::HeaderHandler, ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser, bool)>(&::System::Runtime::Serialization::Formatters::Binary::ObjectReader::Deserialize)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x235f390;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::HeaderHandler>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectReader.HasSurrogate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::Formatters::Binary::ObjectReader::*)(::System::Type)>(&::System::Runtime::Serialization::Formatters::Binary::ObjectReader::HasSurrogate)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x235fc74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader>::get(),
                            "HasSurrogate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectReader.CheckSerializable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::ObjectReader::*)(::System::Type)>(&::System::Runtime::Serialization::Formatters::Binary::ObjectReader::CheckSerializable)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x235fd48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader>::get(),
                            "CheckSerializable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectReader.InitFullDeserialization
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::ObjectReader::*)()>(&::System::Runtime::Serialization::Formatters::Binary::ObjectReader::InitFullDeserialization)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x235fe80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader>::get(),
                            "InitFullDeserialization",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectReader.CrossAppDomainArray
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (::System::Runtime::Serialization::Formatters::Binary::ObjectReader::*)(int32_t)>(&::System::Runtime::Serialization::Formatters::Binary::ObjectReader::CrossAppDomainArray)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x235ff90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader>::get(),
                            "CrossAppDomainArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectReader.CreateReadObjectInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo (::System::Runtime::Serialization::Formatters::Binary::ObjectReader::*)(::System::Type)>(&::System::Runtime::Serialization::Formatters::Binary::ObjectReader::CreateReadObjectInfo)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x235ffc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader>::get(),
                            "CreateReadObjectInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectReader.CreateReadObjectInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo (::System::Runtime::Serialization::Formatters::Binary::ObjectReader::*)(::System::Type, ::ArrayW<::StringW>, ::ArrayW<::System::Type>)>(&::System::Runtime::Serialization::Formatters::Binary::ObjectReader::CreateReadObjectInfo)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x235fff4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader>::get(),
                            "CreateReadObjectInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectReader.Parse
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::ObjectReader::*)(::System::Runtime::Serialization::Formatters::Binary::ParseRecord)>(&::System::Runtime::Serialization::Formatters::Binary::ObjectReader::Parse)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x2360038;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader>::get(),
                            "Parse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::ParseRecord>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectReader.ParseError
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::ObjectReader::*)(::System::Runtime::Serialization::Formatters::Binary::ParseRecord, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord)>(&::System::Runtime::Serialization::Formatters::Binary::ObjectReader::ParseError)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x2360c84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader>::get(),
                            "ParseError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::ParseRecord>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::ParseRecord>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectReader.ParseSerializedStreamHeader
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::ObjectReader::*)(::System::Runtime::Serialization::Formatters::Binary::ParseRecord)>(&::System::Runtime::Serialization::Formatters::Binary::ObjectReader::ParseSerializedStreamHeader)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x236017c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader>::get(),
                            "ParseSerializedStreamHeader",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::ParseRecord>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectReader.ParseSerializedStreamHeaderEnd
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::ObjectReader::*)(::System::Runtime::Serialization::Formatters::Binary::ParseRecord)>(&::System::Runtime::Serialization::Formatters::Binary::ObjectReader::ParseSerializedStreamHeaderEnd)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2360194;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader>::get(),
                            "ParseSerializedStreamHeaderEnd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::ParseRecord>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectReader.ParseObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::ObjectReader::*)(::System::Runtime::Serialization::Formatters::Binary::ParseRecord)>(&::System::Runtime::Serialization::Formatters::Binary::ObjectReader::ParseObject)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x23601ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader>::get(),
                            "ParseObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::ParseRecord>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectReader.ParseObjectEnd
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::ObjectReader::*)(::System::Runtime::Serialization::Formatters::Binary::ParseRecord)>(&::System::Runtime::Serialization::Formatters::Binary::ObjectReader::ParseObjectEnd)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x23604c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader>::get(),
                            "ParseObjectEnd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::ParseRecord>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectReader.ParseArray
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::ObjectReader::*)(::System::Runtime::Serialization::Formatters::Binary::ParseRecord)>(&::System::Runtime::Serialization::Formatters::Binary::ObjectReader::ParseArray)> {
  constexpr static std::size_t size = 0x68c;
  constexpr static std::size_t addrs = 0x2361058;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader>::get(),
                            "ParseArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::ParseRecord>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectReader.NextRectangleMap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::ObjectReader::*)(::System::Runtime::Serialization::Formatters::Binary::ParseRecord)>(&::System::Runtime::Serialization::Formatters::Binary::ObjectReader::NextRectangleMap)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2361a74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader>::get(),
                            "NextRectangleMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::ParseRecord>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectReader.ParseArrayMember
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::ObjectReader::*)(::System::Runtime::Serialization::Formatters::Binary::ParseRecord)>(&::System::Runtime::Serialization::Formatters::Binary::ObjectReader::ParseArrayMember)> {
  constexpr static std::size_t size = 0x79c;
  constexpr static std::size_t addrs = 0x2361b38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader>::get(),
                            "ParseArrayMember",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::ParseRecord>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectReader.ParseArrayMemberEnd
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::ObjectReader::*)(::System::Runtime::Serialization::Formatters::Binary::ParseRecord)>(&::System::Runtime::Serialization::Formatters::Binary::ObjectReader::ParseArrayMemberEnd)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2362704;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader>::get(),
                            "ParseArrayMemberEnd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::ParseRecord>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectReader.ParseMember
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::ObjectReader::*)(::System::Runtime::Serialization::Formatters::Binary::ParseRecord)>(&::System::Runtime::Serialization::Formatters::Binary::ObjectReader::ParseMember)> {
  constexpr static std::size_t size = 0x4d8;
  constexpr static std::size_t addrs = 0x23606f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader>::get(),
                            "ParseMember",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::ParseRecord>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectReader.ParseMemberEnd
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::ObjectReader::*)(::System::Runtime::Serialization::Formatters::Binary::ParseRecord)>(&::System::Runtime::Serialization::Formatters::Binary::ObjectReader::ParseMemberEnd)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2360bc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader>::get(),
                            "ParseMemberEnd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::ParseRecord>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectReader.ParseString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::ObjectReader::*)(::System::Runtime::Serialization::Formatters::Binary::ParseRecord, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord)>(&::System::Runtime::Serialization::Formatters::Binary::ObjectReader::ParseString)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2362308;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader>::get(),
                            "ParseString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::ParseRecord>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::ParseRecord>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectReader.RegisterObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::ObjectReader::*)(::bs_hook::Il2CppWrapperType, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord)>(&::System::Runtime::Serialization::Formatters::Binary::ObjectReader::RegisterObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2361724;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader>::get(),
                            "RegisterObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::ParseRecord>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::ParseRecord>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectReader.RegisterObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::ObjectReader::*)(::bs_hook::Il2CppWrapperType, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord, bool)>(&::System::Runtime::Serialization::Formatters::Binary::ObjectReader::RegisterObject)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x2362770;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader>::get(),
                            "RegisterObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::ParseRecord>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::ParseRecord>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectReader.GetId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::System::Runtime::Serialization::Formatters::Binary::ObjectReader::*)(int64_t)>(&::System::Runtime::Serialization::Formatters::Binary::ObjectReader::GetId)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2362894;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader>::get(),
                            "GetId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectReader.Bind
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type (::System::Runtime::Serialization::Formatters::Binary::ObjectReader::*)(::StringW, ::StringW)>(&::System::Runtime::Serialization::Formatters::Binary::ObjectReader::Bind)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2362b04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader>::get(),
                            "Bind",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectReader.FastBindToType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type (::System::Runtime::Serialization::Formatters::Binary::ObjectReader::*)(::StringW, ::StringW)>(&::System::Runtime::Serialization::Formatters::Binary::ObjectReader::FastBindToType)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x2362b5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader>::get(),
                            "FastBindToType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectReader.ResolveSimpleAssemblyName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::Assembly (*)(::System::Reflection::AssemblyName)>(&::System::Runtime::Serialization::Formatters::Binary::ObjectReader::ResolveSimpleAssemblyName)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2362ef4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader>::get(),
                            "ResolveSimpleAssemblyName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::AssemblyName>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectReader.GetSimplyNamedTypeFromAssembly
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Reflection::Assembly, ::StringW, ByRef<::System::Type>)>(&::System::Runtime::Serialization::Formatters::Binary::ObjectReader::GetSimplyNamedTypeFromAssembly)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x2362f54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader>::get(),
                            "GetSimplyNamedTypeFromAssembly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Assembly>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Type>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectReader.GetType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type (::System::Runtime::Serialization::Formatters::Binary::ObjectReader::*)(::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo, ::StringW)>(&::System::Runtime::Serialization::Formatters::Binary::ObjectReader::GetType)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x23633ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader>::get(),
                            "GetType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectReader.CheckTypeForwardedTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Reflection::Assembly, ::System::Reflection::Assembly, ::System::Type)>(&::System::Runtime::Serialization::Formatters::Binary::ObjectReader::CheckTypeForwardedTo)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x23631a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader>::get(),
                            "CheckTypeForwardedTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Assembly>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Assembly>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::System::Runtime::Serialization::Formatters::Binary::ObjectReader::__set_m_stream(::System::IO::Stream value)  {
::cordl_internals::setInstanceField<::System::IO::Stream, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::IO::Stream>(value));
}
constexpr ::System::IO::Stream ::System::Runtime::Serialization::Formatters::Binary::ObjectReader::__get_m_stream() const {
return ::cordl_internals::getInstanceField<::System::IO::Stream, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Runtime::Serialization::Formatters::Binary::ObjectReader::__set_m_surrogates(::System::Runtime::Serialization::ISurrogateSelector value)  {
::cordl_internals::setInstanceField<::System::Runtime::Serialization::ISurrogateSelector, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Runtime::Serialization::ISurrogateSelector>(value));
}
constexpr ::System::Runtime::Serialization::ISurrogateSelector ::System::Runtime::Serialization::Formatters::Binary::ObjectReader::__get_m_surrogates() const {
return ::cordl_internals::getInstanceField<::System::Runtime::Serialization::ISurrogateSelector, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Runtime::Serialization::Formatters::Binary::ObjectReader::__set_m_context(::System::Runtime::Serialization::StreamingContext value)  {
::cordl_internals::setInstanceField<::System::Runtime::Serialization::StreamingContext, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Runtime::Serialization::StreamingContext>(value));
}
constexpr ::System::Runtime::Serialization::StreamingContext ::System::Runtime::Serialization::Formatters::Binary::ObjectReader::__get_m_context() const {
return ::cordl_internals::getInstanceField<::System::Runtime::Serialization::StreamingContext, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Runtime::Serialization::Formatters::Binary::ObjectReader::__set_m_objectManager(::System::Runtime::Serialization::ObjectManager value)  {
::cordl_internals::setInstanceField<::System::Runtime::Serialization::ObjectManager, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Runtime::Serialization::ObjectManager>(value));
}
constexpr ::System::Runtime::Serialization::ObjectManager ::System::Runtime::Serialization::Formatters::Binary::ObjectReader::__get_m_objectManager() const {
return ::cordl_internals::getInstanceField<::System::Runtime::Serialization::ObjectManager, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Runtime::Serialization::Formatters::Binary::ObjectReader::__set_formatterEnums(::System::Runtime::Serialization::Formatters::Binary::InternalFE value)  {
::cordl_internals::setInstanceField<::System::Runtime::Serialization::Formatters::Binary::InternalFE, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Runtime::Serialization::Formatters::Binary::InternalFE>(value));
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalFE ::System::Runtime::Serialization::Formatters::Binary::ObjectReader::__get_formatterEnums() const {
return ::cordl_internals::getInstanceField<::System::Runtime::Serialization::Formatters::Binary::InternalFE, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Runtime::Serialization::Formatters::Binary::ObjectReader::__set_m_binder(::System::Runtime::Serialization::SerializationBinder value)  {
::cordl_internals::setInstanceField<::System::Runtime::Serialization::SerializationBinder, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Runtime::Serialization::SerializationBinder>(value));
}
constexpr ::System::Runtime::Serialization::SerializationBinder ::System::Runtime::Serialization::Formatters::Binary::ObjectReader::__get_m_binder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::Serialization::SerializationBinder, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Runtime::Serialization::Formatters::Binary::ObjectReader::__set_topId(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int64_t>(value));
}
constexpr int64_t ::System::Runtime::Serialization::Formatters::Binary::ObjectReader::__get_topId() const {
return ::cordl_internals::getInstanceField<int64_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Runtime::Serialization::Formatters::Binary::ObjectReader::__set_bSimpleAssembly(bool value)  {
::cordl_internals::setInstanceField<bool, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::System::Runtime::Serialization::Formatters::Binary::ObjectReader::__get_bSimpleAssembly() const {
return ::cordl_internals::getInstanceField<bool, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Runtime::Serialization::Formatters::Binary::ObjectReader::__set_handlerObject(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType ::System::Runtime::Serialization::Formatters::Binary::ObjectReader::__get_handlerObject() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Runtime::Serialization::Formatters::Binary::ObjectReader::__set_m_topObject(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType ::System::Runtime::Serialization::Formatters::Binary::ObjectReader::__get_m_topObject() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Runtime::Serialization::Formatters::Binary::ObjectReader::__set_headers(::ArrayW<::System::Runtime::Remoting::Messaging::Header> value)  {
::cordl_internals::setInstanceField<::ArrayW<::System::Runtime::Remoting::Messaging::Header>, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::System::Runtime::Remoting::Messaging::Header>>(value));
}
constexpr ::ArrayW<::System::Runtime::Remoting::Messaging::Header> ::System::Runtime::Serialization::Formatters::Binary::ObjectReader::__get_headers() const {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Runtime::Remoting::Messaging::Header>, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Runtime::Serialization::Formatters::Binary::ObjectReader::__set_handler(::System::Runtime::Remoting::Messaging::HeaderHandler value)  {
::cordl_internals::setInstanceField<::System::Runtime::Remoting::Messaging::HeaderHandler, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Runtime::Remoting::Messaging::HeaderHandler>(value));
}
constexpr ::System::Runtime::Remoting::Messaging::HeaderHandler ::System::Runtime::Serialization::Formatters::Binary::ObjectReader::__get_handler() const {
return ::cordl_internals::getInstanceField<::System::Runtime::Remoting::Messaging::HeaderHandler, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Runtime::Serialization::Formatters::Binary::ObjectReader::__set_serObjectInfoInit(::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit value)  {
::cordl_internals::setInstanceField<::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit>(value));
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit ::System::Runtime::Serialization::Formatters::Binary::ObjectReader::__get_serObjectInfoInit() const {
return ::cordl_internals::getInstanceField<::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Runtime::Serialization::Formatters::Binary::ObjectReader::__set_m_formatterConverter(::System::Runtime::Serialization::IFormatterConverter value)  {
::cordl_internals::setInstanceField<::System::Runtime::Serialization::IFormatterConverter, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Runtime::Serialization::IFormatterConverter>(value));
}
constexpr ::System::Runtime::Serialization::IFormatterConverter ::System::Runtime::Serialization::Formatters::Binary::ObjectReader::__get_m_formatterConverter() const {
return ::cordl_internals::getInstanceField<::System::Runtime::Serialization::IFormatterConverter, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Runtime::Serialization::Formatters::Binary::ObjectReader::__set_stack(::System::Runtime::Serialization::Formatters::Binary::SerStack value)  {
::cordl_internals::setInstanceField<::System::Runtime::Serialization::Formatters::Binary::SerStack, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Runtime::Serialization::Formatters::Binary::SerStack>(value));
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::SerStack ::System::Runtime::Serialization::Formatters::Binary::ObjectReader::__get_stack() const {
return ::cordl_internals::getInstanceField<::System::Runtime::Serialization::Formatters::Binary::SerStack, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Runtime::Serialization::Formatters::Binary::ObjectReader::__set_valueFixupStack(::System::Runtime::Serialization::Formatters::Binary::SerStack value)  {
::cordl_internals::setInstanceField<::System::Runtime::Serialization::Formatters::Binary::SerStack, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Runtime::Serialization::Formatters::Binary::SerStack>(value));
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::SerStack ::System::Runtime::Serialization::Formatters::Binary::ObjectReader::__get_valueFixupStack() const {
return ::cordl_internals::getInstanceField<::System::Runtime::Serialization::Formatters::Binary::SerStack, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Runtime::Serialization::Formatters::Binary::ObjectReader::__set_crossAppDomainArray(::ArrayW<::bs_hook::Il2CppWrapperType> value)  {
::cordl_internals::setInstanceField<::ArrayW<::bs_hook::Il2CppWrapperType>, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::bs_hook::Il2CppWrapperType>>(value));
}
constexpr ::ArrayW<::bs_hook::Il2CppWrapperType> ::System::Runtime::Serialization::Formatters::Binary::ObjectReader::__get_crossAppDomainArray() const {
return ::cordl_internals::getInstanceField<::ArrayW<::bs_hook::Il2CppWrapperType>, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Runtime::Serialization::Formatters::Binary::ObjectReader::__set_bFullDeserialization(bool value)  {
::cordl_internals::setInstanceField<bool, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::System::Runtime::Serialization::Formatters::Binary::ObjectReader::__get_bFullDeserialization() const {
return ::cordl_internals::getInstanceField<bool, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Runtime::Serialization::Formatters::Binary::ObjectReader::__set_bOldFormatDetected(bool value)  {
::cordl_internals::setInstanceField<bool, 0xa1>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::System::Runtime::Serialization::Formatters::Binary::ObjectReader::__get_bOldFormatDetected() const {
return ::cordl_internals::getInstanceField<bool, 0xa1>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Runtime::Serialization::Formatters::Binary::ObjectReader::__set_valTypeObjectIdTable(::System::Runtime::Serialization::Formatters::Binary::IntSizedArray value)  {
::cordl_internals::setInstanceField<::System::Runtime::Serialization::Formatters::Binary::IntSizedArray, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Runtime::Serialization::Formatters::Binary::IntSizedArray>(value));
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::IntSizedArray ::System::Runtime::Serialization::Formatters::Binary::ObjectReader::__get_valTypeObjectIdTable() const {
return ::cordl_internals::getInstanceField<::System::Runtime::Serialization::Formatters::Binary::IntSizedArray, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Runtime::Serialization::Formatters::Binary::ObjectReader::__set_typeCache(::System::Runtime::Serialization::Formatters::Binary::NameCache value)  {
::cordl_internals::setInstanceField<::System::Runtime::Serialization::Formatters::Binary::NameCache, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Runtime::Serialization::Formatters::Binary::NameCache>(value));
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::NameCache ::System::Runtime::Serialization::Formatters::Binary::ObjectReader::__get_typeCache() const {
return ::cordl_internals::getInstanceField<::System::Runtime::Serialization::Formatters::Binary::NameCache, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Runtime::Serialization::Formatters::Binary::ObjectReader::__set_previousAssemblyString(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::System::Runtime::Serialization::Formatters::Binary::ObjectReader::__get_previousAssemblyString() const {
return ::cordl_internals::getInstanceField<::StringW, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Runtime::Serialization::Formatters::Binary::ObjectReader::__set_previousName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::System::Runtime::Serialization::Formatters::Binary::ObjectReader::__get_previousName() const {
return ::cordl_internals::getInstanceField<::StringW, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Runtime::Serialization::Formatters::Binary::ObjectReader::__set_previousType(::System::Type value)  {
::cordl_internals::setInstanceField<::System::Type, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Type>(value));
}
constexpr ::System::Type ::System::Runtime::Serialization::Formatters::Binary::ObjectReader::__get_previousType() const {
return ::cordl_internals::getInstanceField<::System::Type, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::System::Runtime::Serialization::Formatters::Binary::SerStack ::System::Runtime::Serialization::Formatters::Binary::ObjectReader::get_ValueFixupStack()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader>::get(),
                            "get_ValueFixupStack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::Formatters::Binary::SerStack, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType ::System::Runtime::Serialization::Formatters::Binary::ObjectReader::get_TopObject()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader>::get(),
                            "get_TopObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Runtime::Serialization::Formatters::Binary::ObjectReader::set_TopObject(::bs_hook::Il2CppWrapperType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader>::get(),
                            "set_TopObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "stream", ty: "::System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "selector", ty: "::System::Runtime::Serialization::ISurrogateSelector", modifiers: "", def_value: None }, CppParam { name: "context", ty: "::System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }, CppParam { name: "formatterEnums", ty: "::System::Runtime::Serialization::Formatters::Binary::InternalFE", modifiers: "", def_value: None }, CppParam { name: "binder", ty: "::System::Runtime::Serialization::SerializationBinder", modifiers: "", def_value: None }]
 ::System::Runtime::Serialization::Formatters::Binary::ObjectReader::ObjectReader(::System::IO::Stream stream, ::System::Runtime::Serialization::ISurrogateSelector selector, ::System::Runtime::Serialization::StreamingContext context, ::System::Runtime::Serialization::Formatters::Binary::InternalFE formatterEnums, ::System::Runtime::Serialization::SerializationBinder binder)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<ObjectReader>(stream, selector, context, formatterEnums, binder))) {}
 void ::System::Runtime::Serialization::Formatters::Binary::ObjectReader::_ctor(::System::IO::Stream stream, ::System::Runtime::Serialization::ISurrogateSelector selector, ::System::Runtime::Serialization::StreamingContext context, ::System::Runtime::Serialization::Formatters::Binary::InternalFE formatterEnums, ::System::Runtime::Serialization::SerializationBinder binder)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ISurrogateSelector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::InternalFE>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationBinder>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, stream, selector, context, formatterEnums, binder);
}
 ::bs_hook::Il2CppWrapperType ::System::Runtime::Serialization::Formatters::Binary::ObjectReader::Deserialize(::System::Runtime::Remoting::Messaging::HeaderHandler handler, ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser serParser, bool fCheck)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::HeaderHandler>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, handler, serParser, fCheck);
}
 bool ::System::Runtime::Serialization::Formatters::Binary::ObjectReader::HasSurrogate(::System::Type t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader>::get(),
                            "HasSurrogate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, t);
}
 void ::System::Runtime::Serialization::Formatters::Binary::ObjectReader::CheckSerializable(::System::Type t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader>::get(),
                            "CheckSerializable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, t);
}
 void ::System::Runtime::Serialization::Formatters::Binary::ObjectReader::InitFullDeserialization()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader>::get(),
                            "InitFullDeserialization",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType ::System::Runtime::Serialization::Formatters::Binary::ObjectReader::CrossAppDomainArray(int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader>::get(),
                            "CrossAppDomainArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, index);
}
 ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo ::System::Runtime::Serialization::Formatters::Binary::ObjectReader::CreateReadObjectInfo(::System::Type objectType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader>::get(),
                            "CreateReadObjectInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo, false>(const_cast<void*>(instance), ___internal_method, objectType);
}
 ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo ::System::Runtime::Serialization::Formatters::Binary::ObjectReader::CreateReadObjectInfo(::System::Type objectType, ::ArrayW<::StringW> memberNames, ::ArrayW<::System::Type> memberTypes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader>::get(),
                            "CreateReadObjectInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo, false>(const_cast<void*>(instance), ___internal_method, objectType, memberNames, memberTypes);
}
 void ::System::Runtime::Serialization::Formatters::Binary::ObjectReader::Parse(::System::Runtime::Serialization::Formatters::Binary::ParseRecord pr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader>::get(),
                            "Parse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::ParseRecord>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, pr);
}
 void ::System::Runtime::Serialization::Formatters::Binary::ObjectReader::ParseError(::System::Runtime::Serialization::Formatters::Binary::ParseRecord processing, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord onStack)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader>::get(),
                            "ParseError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::ParseRecord>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::ParseRecord>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, processing, onStack);
}
 void ::System::Runtime::Serialization::Formatters::Binary::ObjectReader::ParseSerializedStreamHeader(::System::Runtime::Serialization::Formatters::Binary::ParseRecord pr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader>::get(),
                            "ParseSerializedStreamHeader",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::ParseRecord>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, pr);
}
 void ::System::Runtime::Serialization::Formatters::Binary::ObjectReader::ParseSerializedStreamHeaderEnd(::System::Runtime::Serialization::Formatters::Binary::ParseRecord pr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader>::get(),
                            "ParseSerializedStreamHeaderEnd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::ParseRecord>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, pr);
}
 void ::System::Runtime::Serialization::Formatters::Binary::ObjectReader::ParseObject(::System::Runtime::Serialization::Formatters::Binary::ParseRecord pr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader>::get(),
                            "ParseObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::ParseRecord>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, pr);
}
 void ::System::Runtime::Serialization::Formatters::Binary::ObjectReader::ParseObjectEnd(::System::Runtime::Serialization::Formatters::Binary::ParseRecord pr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader>::get(),
                            "ParseObjectEnd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::ParseRecord>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, pr);
}
 void ::System::Runtime::Serialization::Formatters::Binary::ObjectReader::ParseArray(::System::Runtime::Serialization::Formatters::Binary::ParseRecord pr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader>::get(),
                            "ParseArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::ParseRecord>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, pr);
}
 void ::System::Runtime::Serialization::Formatters::Binary::ObjectReader::NextRectangleMap(::System::Runtime::Serialization::Formatters::Binary::ParseRecord pr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader>::get(),
                            "NextRectangleMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::ParseRecord>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, pr);
}
 void ::System::Runtime::Serialization::Formatters::Binary::ObjectReader::ParseArrayMember(::System::Runtime::Serialization::Formatters::Binary::ParseRecord pr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader>::get(),
                            "ParseArrayMember",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::ParseRecord>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, pr);
}
 void ::System::Runtime::Serialization::Formatters::Binary::ObjectReader::ParseArrayMemberEnd(::System::Runtime::Serialization::Formatters::Binary::ParseRecord pr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader>::get(),
                            "ParseArrayMemberEnd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::ParseRecord>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, pr);
}
 void ::System::Runtime::Serialization::Formatters::Binary::ObjectReader::ParseMember(::System::Runtime::Serialization::Formatters::Binary::ParseRecord pr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader>::get(),
                            "ParseMember",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::ParseRecord>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, pr);
}
 void ::System::Runtime::Serialization::Formatters::Binary::ObjectReader::ParseMemberEnd(::System::Runtime::Serialization::Formatters::Binary::ParseRecord pr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader>::get(),
                            "ParseMemberEnd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::ParseRecord>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, pr);
}
 void ::System::Runtime::Serialization::Formatters::Binary::ObjectReader::ParseString(::System::Runtime::Serialization::Formatters::Binary::ParseRecord pr, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord parentPr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader>::get(),
                            "ParseString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::ParseRecord>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::ParseRecord>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, pr, parentPr);
}
 void ::System::Runtime::Serialization::Formatters::Binary::ObjectReader::RegisterObject(::bs_hook::Il2CppWrapperType obj, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord pr, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord objectPr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader>::get(),
                            "RegisterObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::ParseRecord>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::ParseRecord>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, obj, pr, objectPr);
}
 void ::System::Runtime::Serialization::Formatters::Binary::ObjectReader::RegisterObject(::bs_hook::Il2CppWrapperType obj, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord pr, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord objectPr, bool bIsString)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader>::get(),
                            "RegisterObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::ParseRecord>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::ParseRecord>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, obj, pr, objectPr, bIsString);
}
 int64_t ::System::Runtime::Serialization::Formatters::Binary::ObjectReader::GetId(int64_t objectId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader>::get(),
                            "GetId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(const_cast<void*>(instance), ___internal_method, objectId);
}
 ::System::Type ::System::Runtime::Serialization::Formatters::Binary::ObjectReader::Bind(::StringW assemblyString, ::StringW typeString)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader>::get(),
                            "Bind",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Type, false>(const_cast<void*>(instance), ___internal_method, assemblyString, typeString);
}
 ::System::Type ::System::Runtime::Serialization::Formatters::Binary::ObjectReader::FastBindToType(::StringW assemblyName, ::StringW typeName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader>::get(),
                            "FastBindToType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Type, false>(const_cast<void*>(instance), ___internal_method, assemblyName, typeName);
}
 ::System::Reflection::Assembly ::System::Runtime::Serialization::Formatters::Binary::ObjectReader::ResolveSimpleAssemblyName(::System::Reflection::AssemblyName assemblyName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader>::get(),
                            "ResolveSimpleAssemblyName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::AssemblyName>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::Assembly, false>(nullptr, ___internal_method, assemblyName);
}
 void ::System::Runtime::Serialization::Formatters::Binary::ObjectReader::GetSimplyNamedTypeFromAssembly(::System::Reflection::Assembly assm, ::StringW typeName, ByRef<::System::Type> type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader>::get(),
                            "GetSimplyNamedTypeFromAssembly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Assembly>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Type>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, assm, typeName, type);
}
 ::System::Type ::System::Runtime::Serialization::Formatters::Binary::ObjectReader::GetType(::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo assemblyInfo, ::StringW name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader>::get(),
                            "GetType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Type, false>(const_cast<void*>(instance), ___internal_method, assemblyInfo, name);
}
 void ::System::Runtime::Serialization::Formatters::Binary::ObjectReader::CheckTypeForwardedTo(::System::Reflection::Assembly sourceAssembly, ::System::Reflection::Assembly destAssembly, ::System::Type resolvedType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectReader>::get(),
                            "CheckTypeForwardedTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Assembly>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Assembly>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sourceAssembly, destAssembly, resolvedType);
}
} // end anonymous namespace
