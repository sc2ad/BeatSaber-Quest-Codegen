#pragma once
#include "Newtonsoft/Json/Bson/zzzz__BsonToken_impl.hpp"
#include "Newtonsoft/Json/Bson/zzzz__BsonValue_def.hpp"
#include "Newtonsoft/Json/Bson/zzzz__BsonType_def.hpp"
//  Writing Method size for method: Newtonsoft::Json::Bson::BsonValue._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Bson::BsonValue::*)(::bs_hook::Il2CppWrapperType, Newtonsoft::Json::Bson::BsonType)>(&Newtonsoft::Json::Bson::BsonValue::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2550384;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Bson::BsonValue>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Bson::BsonType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Bson::BsonValue.get_Value
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (Newtonsoft::Json::Bson::BsonValue::*)()>(&Newtonsoft::Json::Bson::BsonValue::get_Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25503b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Bson::BsonValue>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Bson::BsonValue.get_Type
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Newtonsoft::Json::Bson::BsonType (Newtonsoft::Json::Bson::BsonValue::*)()>(&Newtonsoft::Json::Bson::BsonValue::get_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25503bc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Newtonsoft::Json::Bson::BsonValue),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Bson::BsonValue>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
constexpr void Newtonsoft::Json::Bson::BsonValue::__set__value(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType Newtonsoft::Json::Bson::BsonValue::__get__value() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Newtonsoft::Json::Bson::BsonValue::__set__type(Newtonsoft::Json::Bson::BsonType value)  {
::cordl_internals::setInstanceField<Newtonsoft::Json::Bson::BsonType, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Newtonsoft::Json::Bson::BsonType>(value));
}
constexpr Newtonsoft::Json::Bson::BsonType Newtonsoft::Json::Bson::BsonValue::__get__type() const {
return ::cordl_internals::getInstanceField<Newtonsoft::Json::Bson::BsonType, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "value", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "type", ty: "Newtonsoft::Json::Bson::BsonType", modifiers: "", def_value: None }]
 Newtonsoft::Json::Bson::BsonValue::BsonValue(::bs_hook::Il2CppWrapperType value, Newtonsoft::Json::Bson::BsonType type)  : Newtonsoft::Json::Bson::BsonToken(THROW_UNLESS(::il2cpp_utils::New<BsonValue>(value, type))) {}
 void Newtonsoft::Json::Bson::BsonValue::_ctor(::bs_hook::Il2CppWrapperType value, Newtonsoft::Json::Bson::BsonType type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Bson::BsonValue>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Bson::BsonType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value, type);
}
 ::bs_hook::Il2CppWrapperType Newtonsoft::Json::Bson::BsonValue::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Bson::BsonValue>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 Newtonsoft::Json::Bson::BsonType Newtonsoft::Json::Bson::BsonValue::get_Type()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Bson::BsonValue>::get(),
                            "get_Type",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Newtonsoft::Json::Bson::BsonType, false>(const_cast<void*>(instance), ___internal_method);
}
