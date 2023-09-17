#pragma once
#include "Newtonsoft/Json/Serialization/zzzz__JsonContract_impl.hpp"
namespace {
#include "Newtonsoft/Json/Serialization/zzzz__JsonPrimitiveContract_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__PrimitiveTypeCode_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "Newtonsoft/Json/zzzz__ReadType_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonPrimitiveContract.get_TypeCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Utilities::PrimitiveTypeCode (::Newtonsoft::Json::Serialization::JsonPrimitiveContract::*)()>(&::Newtonsoft::Json::Serialization::JsonPrimitiveContract::get_TypeCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24f62cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonPrimitiveContract>::get(),
                            "get_TypeCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonPrimitiveContract.set_TypeCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::JsonPrimitiveContract::*)(::Newtonsoft::Json::Utilities::PrimitiveTypeCode)>(&::Newtonsoft::Json::Serialization::JsonPrimitiveContract::set_TypeCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24f62d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonPrimitiveContract>::get(),
                            "set_TypeCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Utilities::PrimitiveTypeCode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonPrimitiveContract._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::JsonPrimitiveContract::*)(::System::Type)>(&::Newtonsoft::Json::Serialization::JsonPrimitiveContract::_ctor)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x24f62dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonPrimitiveContract>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::Newtonsoft::Json::Serialization::JsonPrimitiveContract::__set__TypeCode_k__BackingField(::Newtonsoft::Json::Utilities::PrimitiveTypeCode value)  {
::cordl_internals::setInstanceField<::Newtonsoft::Json::Utilities::PrimitiveTypeCode, 0x8c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Newtonsoft::Json::Utilities::PrimitiveTypeCode>(value));
}
constexpr ::Newtonsoft::Json::Utilities::PrimitiveTypeCode ::Newtonsoft::Json::Serialization::JsonPrimitiveContract::__get__TypeCode_k__BackingField() const {
return ::cordl_internals::getInstanceField<::Newtonsoft::Json::Utilities::PrimitiveTypeCode, 0x8c>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::Newtonsoft::Json::Serialization::JsonPrimitiveContract::__set_ReadTypeMap(::System::Collections::Generic::Dictionary_2<::System::Type,::Newtonsoft::Json::ReadType> value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Type,::Newtonsoft::Json::ReadType>, "ReadTypeMap", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonPrimitiveContract>::get>(std::forward<::System::Collections::Generic::Dictionary_2<::System::Type,::Newtonsoft::Json::ReadType>>(value));
}
 ::System::Collections::Generic::Dictionary_2<::System::Type,::Newtonsoft::Json::ReadType> ::Newtonsoft::Json::Serialization::JsonPrimitiveContract::__get_ReadTypeMap()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Type,::Newtonsoft::Json::ReadType>, "ReadTypeMap", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonPrimitiveContract>::get>();
}
 ::Newtonsoft::Json::Utilities::PrimitiveTypeCode ::Newtonsoft::Json::Serialization::JsonPrimitiveContract::get_TypeCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonPrimitiveContract>::get(),
                            "get_TypeCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Utilities::PrimitiveTypeCode, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Newtonsoft::Json::Serialization::JsonPrimitiveContract::set_TypeCode(::Newtonsoft::Json::Utilities::PrimitiveTypeCode value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonPrimitiveContract>::get(),
                            "set_TypeCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Utilities::PrimitiveTypeCode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "underlyingType", ty: "::System::Type", modifiers: "", def_value: None }]
 ::Newtonsoft::Json::Serialization::JsonPrimitiveContract::JsonPrimitiveContract(::System::Type underlyingType)  : ::Newtonsoft::Json::Serialization::JsonContract(THROW_UNLESS(::il2cpp_utils::New<JsonPrimitiveContract>(underlyingType))) {}
 void ::Newtonsoft::Json::Serialization::JsonPrimitiveContract::_ctor(::System::Type underlyingType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonPrimitiveContract>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, underlyingType);
}
} // end anonymous namespace
