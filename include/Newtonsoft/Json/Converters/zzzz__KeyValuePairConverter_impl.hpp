#pragma once
#include "Newtonsoft/Json/zzzz__JsonConverter_impl.hpp"
#include "Newtonsoft/Json/Converters/zzzz__KeyValuePairConverter_def.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__ThreadSafeStore_2_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonReader_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonWriter_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonSerializer_def.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__ReflectionObject_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: Newtonsoft::Json::Converters::KeyValuePairConverter.InitializeReflectionObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Newtonsoft::Json::Utilities::ReflectionObject (*)(System::Type)>(&Newtonsoft::Json::Converters::KeyValuePairConverter::InitializeReflectionObject)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x253c074;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Converters::KeyValuePairConverter>::get(),
                            "InitializeReflectionObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Converters::KeyValuePairConverter.WriteJson
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Converters::KeyValuePairConverter::*)(Newtonsoft::Json::JsonWriter, ::bs_hook::Il2CppWrapperType, Newtonsoft::Json::JsonSerializer)>(&Newtonsoft::Json::Converters::KeyValuePairConverter::WriteJson)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x253c2f4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Newtonsoft::Json::Converters::KeyValuePairConverter),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Converters::KeyValuePairConverter>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Converters::KeyValuePairConverter.ReadJson
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (Newtonsoft::Json::Converters::KeyValuePairConverter::*)(Newtonsoft::Json::JsonReader, System::Type, ::bs_hook::Il2CppWrapperType, Newtonsoft::Json::JsonSerializer)>(&Newtonsoft::Json::Converters::KeyValuePairConverter::ReadJson)> {
  constexpr static std::size_t size = 0x37c;
  constexpr static std::size_t addrs = 0x253c534;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Newtonsoft::Json::Converters::KeyValuePairConverter),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Converters::KeyValuePairConverter>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Converters::KeyValuePairConverter.CanConvert
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::Converters::KeyValuePairConverter::*)(System::Type)>(&Newtonsoft::Json::Converters::KeyValuePairConverter::CanConvert)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x253c8b0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Newtonsoft::Json::Converters::KeyValuePairConverter),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Converters::KeyValuePairConverter>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Converters::KeyValuePairConverter._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Converters::KeyValuePairConverter::*)()>(&Newtonsoft::Json::Converters::KeyValuePairConverter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x253c9bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Converters::KeyValuePairConverter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void Newtonsoft::Json::Converters::KeyValuePairConverter::__set_ReflectionObjectPerType(Newtonsoft::Json::Utilities::ThreadSafeStore_2<System::Type,Newtonsoft::Json::Utilities::ReflectionObject> value)  {
::cordl_internals::setStaticField<Newtonsoft::Json::Utilities::ThreadSafeStore_2<System::Type,Newtonsoft::Json::Utilities::ReflectionObject>, "ReflectionObjectPerType", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Converters::KeyValuePairConverter>::get>(std::forward<Newtonsoft::Json::Utilities::ThreadSafeStore_2<System::Type,Newtonsoft::Json::Utilities::ReflectionObject>>(value));
}
 Newtonsoft::Json::Utilities::ThreadSafeStore_2<System::Type,Newtonsoft::Json::Utilities::ReflectionObject> Newtonsoft::Json::Converters::KeyValuePairConverter::__get_ReflectionObjectPerType()  {
return ::cordl_internals::getStaticField<Newtonsoft::Json::Utilities::ThreadSafeStore_2<System::Type,Newtonsoft::Json::Utilities::ReflectionObject>, "ReflectionObjectPerType", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Converters::KeyValuePairConverter>::get>();
}
 Newtonsoft::Json::Utilities::ReflectionObject Newtonsoft::Json::Converters::KeyValuePairConverter::InitializeReflectionObject(System::Type t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Converters::KeyValuePairConverter>::get(),
                            "InitializeReflectionObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Newtonsoft::Json::Utilities::ReflectionObject, false>(nullptr, ___internal_method, t);
}
 void Newtonsoft::Json::Converters::KeyValuePairConverter::WriteJson(Newtonsoft::Json::JsonWriter writer, ::bs_hook::Il2CppWrapperType value, Newtonsoft::Json::JsonSerializer serializer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Converters::KeyValuePairConverter>::get(),
                            "WriteJson",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::JsonWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::JsonSerializer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, writer, value, serializer);
}
 ::bs_hook::Il2CppWrapperType Newtonsoft::Json::Converters::KeyValuePairConverter::ReadJson(Newtonsoft::Json::JsonReader reader, System::Type objectType, ::bs_hook::Il2CppWrapperType existingValue, Newtonsoft::Json::JsonSerializer serializer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Converters::KeyValuePairConverter>::get(),
                            "ReadJson",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::JsonReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::JsonSerializer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, reader, objectType, existingValue, serializer);
}
 bool Newtonsoft::Json::Converters::KeyValuePairConverter::CanConvert(System::Type objectType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Converters::KeyValuePairConverter>::get(),
                            "CanConvert",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, objectType);
}
// Ctor Parameters []
 Newtonsoft::Json::Converters::KeyValuePairConverter::KeyValuePairConverter()  : Newtonsoft::Json::JsonConverter(THROW_UNLESS(::il2cpp_utils::New<KeyValuePairConverter>())) {}
 void Newtonsoft::Json::Converters::KeyValuePairConverter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Converters::KeyValuePairConverter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
