#pragma once
#include "Newtonsoft/Json/Bson/zzzz__BsonObjectId_def.hpp"
//  Writing Method size for method: Newtonsoft::Json::Bson::BsonObjectId.get_Value
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Newtonsoft::Json::Bson::BsonObjectId::*)()>(&Newtonsoft::Json::Bson::BsonObjectId::get_Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2551ab0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Bson::BsonObjectId>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Bson::BsonObjectId.set_Value
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Bson::BsonObjectId::*)(::ArrayW<uint8_t>)>(&Newtonsoft::Json::Bson::BsonObjectId::set_Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2551ab8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Bson::BsonObjectId>::get(),
                            "set_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Bson::BsonObjectId._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Bson::BsonObjectId::*)(::ArrayW<uint8_t>)>(&Newtonsoft::Json::Bson::BsonObjectId::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x2551ac0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Bson::BsonObjectId>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Newtonsoft::Json::Bson::BsonObjectId::__set__Value_k__BackingField(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> Newtonsoft::Json::Bson::BsonObjectId::__get__Value_k__BackingField() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::ArrayW<uint8_t> Newtonsoft::Json::Bson::BsonObjectId::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Bson::BsonObjectId>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 void Newtonsoft::Json::Bson::BsonObjectId::set_Value(::ArrayW<uint8_t> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Bson::BsonObjectId>::get(),
                            "set_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "value", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
 Newtonsoft::Json::Bson::BsonObjectId::BsonObjectId(::ArrayW<uint8_t> value)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<BsonObjectId>(value))) {}
 void Newtonsoft::Json::Bson::BsonObjectId::_ctor(::ArrayW<uint8_t> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Bson::BsonObjectId>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
