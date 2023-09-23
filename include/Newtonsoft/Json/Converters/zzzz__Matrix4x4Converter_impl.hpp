#pragma once
#include "Newtonsoft/Json/zzzz__JsonConverter_impl.hpp"
#include "Newtonsoft/Json/Converters/zzzz__Matrix4x4Converter_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonSerializer_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonWriter_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonReader_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: Newtonsoft::Json::Converters::Matrix4x4Converter.WriteJson
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Converters::Matrix4x4Converter::*)(Newtonsoft::Json::JsonWriter, ::bs_hook::Il2CppWrapperType, Newtonsoft::Json::JsonSerializer)>(&Newtonsoft::Json::Converters::Matrix4x4Converter::WriteJson)> {
  constexpr static std::size_t size = 0x580;
  constexpr static std::size_t addrs = 0x253cdb8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Newtonsoft::Json::Converters::Matrix4x4Converter),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Converters::Matrix4x4Converter>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Converters::Matrix4x4Converter.ReadJson
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (Newtonsoft::Json::Converters::Matrix4x4Converter::*)(Newtonsoft::Json::JsonReader, System::Type, ::bs_hook::Il2CppWrapperType, Newtonsoft::Json::JsonSerializer)>(&Newtonsoft::Json::Converters::Matrix4x4Converter::ReadJson)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x253d338;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Newtonsoft::Json::Converters::Matrix4x4Converter),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Converters::Matrix4x4Converter>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Converters::Matrix4x4Converter.get_CanRead
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::Converters::Matrix4x4Converter::*)()>(&Newtonsoft::Json::Converters::Matrix4x4Converter::get_CanRead)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x253d6b8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Newtonsoft::Json::Converters::Matrix4x4Converter),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Converters::Matrix4x4Converter>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Converters::Matrix4x4Converter.CanConvert
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::Converters::Matrix4x4Converter::*)(System::Type)>(&Newtonsoft::Json::Converters::Matrix4x4Converter::CanConvert)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x253d6c0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Newtonsoft::Json::Converters::Matrix4x4Converter),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Converters::Matrix4x4Converter>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Converters::Matrix4x4Converter._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Converters::Matrix4x4Converter::*)()>(&Newtonsoft::Json::Converters::Matrix4x4Converter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x253d744;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Converters::Matrix4x4Converter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void Newtonsoft::Json::Converters::Matrix4x4Converter::WriteJson(Newtonsoft::Json::JsonWriter writer, ::bs_hook::Il2CppWrapperType value, Newtonsoft::Json::JsonSerializer serializer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Converters::Matrix4x4Converter>::get(),
                            "WriteJson",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::JsonWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::JsonSerializer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, writer, value, serializer);
}
 ::bs_hook::Il2CppWrapperType Newtonsoft::Json::Converters::Matrix4x4Converter::ReadJson(Newtonsoft::Json::JsonReader reader, System::Type objectType, ::bs_hook::Il2CppWrapperType existingValue, Newtonsoft::Json::JsonSerializer serializer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Converters::Matrix4x4Converter>::get(),
                            "ReadJson",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::JsonReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::JsonSerializer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, reader, objectType, existingValue, serializer);
}
 bool Newtonsoft::Json::Converters::Matrix4x4Converter::get_CanRead()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Converters::Matrix4x4Converter>::get(),
                            "get_CanRead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool Newtonsoft::Json::Converters::Matrix4x4Converter::CanConvert(System::Type objectType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Converters::Matrix4x4Converter>::get(),
                            "CanConvert",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, objectType);
}
// Ctor Parameters []
 Newtonsoft::Json::Converters::Matrix4x4Converter::Matrix4x4Converter()  : Newtonsoft::Json::JsonConverter(THROW_UNLESS(::il2cpp_utils::New<Matrix4x4Converter>())) {}
 void Newtonsoft::Json::Converters::Matrix4x4Converter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Converters::Matrix4x4Converter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
