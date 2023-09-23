#pragma once
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__BinaryConverter_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz____BinaryWriter_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__BinaryAssemblyInfo_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz____BinaryParser_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__ObjectReader_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__WriteObjectInfo_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__ObjectWriter_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__InternalPrimitiveTypeE_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__BinaryTypeEnum_def.hpp"
//  Writing Method size for method: System::Runtime::Serialization::Formatters::Binary::BinaryConverter.GetBinaryTypeInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum (*)(System::Type, System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo, ::StringW, System::Runtime::Serialization::Formatters::Binary::ObjectWriter, ByRef<::bs_hook::Il2CppWrapperType>, ByRef<int32_t>)>(&System::Runtime::Serialization::Formatters::Binary::BinaryConverter::GetBinaryTypeInfo)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x2353cd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::BinaryConverter>::get(),
                            "GetBinaryTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::ObjectWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::bs_hook::Il2CppWrapperType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::Formatters::Binary::BinaryConverter.GetParserBinaryTypeInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum (*)(System::Type, ByRef<::bs_hook::Il2CppWrapperType>)>(&System::Runtime::Serialization::Formatters::Binary::BinaryConverter::GetParserBinaryTypeInfo)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x23542a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::BinaryConverter>::get(),
                            "GetParserBinaryTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::Formatters::Binary::BinaryConverter.WriteTypeInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum, ::bs_hook::Il2CppWrapperType, int32_t, System::Runtime::Serialization::Formatters::Binary::__BinaryWriter)>(&System::Runtime::Serialization::Formatters::Binary::BinaryConverter::WriteTypeInfo)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x235459c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::BinaryConverter>::get(),
                            "WriteTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::__BinaryWriter>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::Formatters::Binary::BinaryConverter.ReadTypeInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (*)(System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum, System::Runtime::Serialization::Formatters::Binary::__BinaryParser, ByRef<int32_t>)>(&System::Runtime::Serialization::Formatters::Binary::BinaryConverter::ReadTypeInfo)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x235482c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::BinaryConverter>::get(),
                            "ReadTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::__BinaryParser>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::Formatters::Binary::BinaryConverter.TypeFromInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum, ::bs_hook::Il2CppWrapperType, System::Runtime::Serialization::Formatters::Binary::ObjectReader, System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo, ByRef<System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE>, ByRef<::StringW>, ByRef<System::Type>, ByRef<bool>)>(&System::Runtime::Serialization::Formatters::Binary::BinaryConverter::TypeFromInfo)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x23549d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::BinaryConverter>::get(),
                            "TypeFromInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::ObjectReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Type>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
    return ___internal_method;
  }
};
 System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum System::Runtime::Serialization::Formatters::Binary::BinaryConverter::GetBinaryTypeInfo(System::Type type, System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo objectInfo, ::StringW typeName, System::Runtime::Serialization::Formatters::Binary::ObjectWriter objectWriter, ByRef<::bs_hook::Il2CppWrapperType> typeInformation, ByRef<int32_t> assemId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::BinaryConverter>::get(),
                            "GetBinaryTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::ObjectWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::bs_hook::Il2CppWrapperType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum, false>(nullptr, ___internal_method, type, objectInfo, typeName, objectWriter, typeInformation, assemId);
}
 System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum System::Runtime::Serialization::Formatters::Binary::BinaryConverter::GetParserBinaryTypeInfo(System::Type type, ByRef<::bs_hook::Il2CppWrapperType> typeInformation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::BinaryConverter>::get(),
                            "GetParserBinaryTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum, false>(nullptr, ___internal_method, type, typeInformation);
}
 void System::Runtime::Serialization::Formatters::Binary::BinaryConverter::WriteTypeInfo(System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum binaryTypeEnum, ::bs_hook::Il2CppWrapperType typeInformation, int32_t assemId, System::Runtime::Serialization::Formatters::Binary::__BinaryWriter sout)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::BinaryConverter>::get(),
                            "WriteTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::__BinaryWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, binaryTypeEnum, typeInformation, assemId, sout);
}
 ::bs_hook::Il2CppWrapperType System::Runtime::Serialization::Formatters::Binary::BinaryConverter::ReadTypeInfo(System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum binaryTypeEnum, System::Runtime::Serialization::Formatters::Binary::__BinaryParser input, ByRef<int32_t> assemId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::BinaryConverter>::get(),
                            "ReadTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::__BinaryParser>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, binaryTypeEnum, input, assemId);
}
 void System::Runtime::Serialization::Formatters::Binary::BinaryConverter::TypeFromInfo(System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum binaryTypeEnum, ::bs_hook::Il2CppWrapperType typeInformation, System::Runtime::Serialization::Formatters::Binary::ObjectReader objectReader, System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo assemblyInfo, ByRef<System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE> primitiveTypeEnum, ByRef<::StringW> typeString, ByRef<System::Type> type, ByRef<bool> isVariant)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::BinaryConverter>::get(),
                            "TypeFromInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::ObjectReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Type>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, binaryTypeEnum, typeInformation, objectReader, assemblyInfo, primitiveTypeEnum, typeString, type, isVariant);
}
