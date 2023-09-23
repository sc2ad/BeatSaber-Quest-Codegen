#pragma once
#include "Newtonsoft/Json/zzzz__JsonConverter_impl.hpp"
#include "Newtonsoft/Json/Converters/zzzz__VersionConverter_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonWriter_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonSerializer_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonReader_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: Newtonsoft::Json::Converters::VersionConverter.WriteJson
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Converters::VersionConverter::*)(Newtonsoft::Json::JsonWriter, ::bs_hook::Il2CppWrapperType, Newtonsoft::Json::JsonSerializer)>(&Newtonsoft::Json::Converters::VersionConverter::WriteJson)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x254057c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Newtonsoft::Json::Converters::VersionConverter),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Converters::VersionConverter>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Converters::VersionConverter.ReadJson
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (Newtonsoft::Json::Converters::VersionConverter::*)(Newtonsoft::Json::JsonReader, System::Type, ::bs_hook::Il2CppWrapperType, Newtonsoft::Json::JsonSerializer)>(&Newtonsoft::Json::Converters::VersionConverter::ReadJson)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x2540668;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Newtonsoft::Json::Converters::VersionConverter),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Converters::VersionConverter>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Converters::VersionConverter.CanConvert
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::Converters::VersionConverter::*)(System::Type)>(&Newtonsoft::Json::Converters::VersionConverter::CanConvert)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x25408f4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Newtonsoft::Json::Converters::VersionConverter),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Converters::VersionConverter>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Converters::VersionConverter._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Converters::VersionConverter::*)()>(&Newtonsoft::Json::Converters::VersionConverter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2540978;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Converters::VersionConverter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void Newtonsoft::Json::Converters::VersionConverter::WriteJson(Newtonsoft::Json::JsonWriter writer, ::bs_hook::Il2CppWrapperType value, Newtonsoft::Json::JsonSerializer serializer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Converters::VersionConverter>::get(),
                            "WriteJson",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::JsonWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::JsonSerializer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, writer, value, serializer);
}
 ::bs_hook::Il2CppWrapperType Newtonsoft::Json::Converters::VersionConverter::ReadJson(Newtonsoft::Json::JsonReader reader, System::Type objectType, ::bs_hook::Il2CppWrapperType existingValue, Newtonsoft::Json::JsonSerializer serializer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Converters::VersionConverter>::get(),
                            "ReadJson",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::JsonReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::JsonSerializer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, reader, objectType, existingValue, serializer);
}
 bool Newtonsoft::Json::Converters::VersionConverter::CanConvert(System::Type objectType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Converters::VersionConverter>::get(),
                            "CanConvert",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, objectType);
}
// Ctor Parameters []
 Newtonsoft::Json::Converters::VersionConverter::VersionConverter()  : Newtonsoft::Json::JsonConverter(THROW_UNLESS(::il2cpp_utils::New<VersionConverter>())) {}
 void Newtonsoft::Json::Converters::VersionConverter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Converters::VersionConverter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
