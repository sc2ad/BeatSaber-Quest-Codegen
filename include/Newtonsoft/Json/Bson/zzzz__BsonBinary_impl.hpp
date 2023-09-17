#pragma once
#include "Newtonsoft/Json/Bson/zzzz__BsonValue_impl.hpp"
namespace {
#include "Newtonsoft/Json/Bson/zzzz__BsonBinary_def.hpp"
#include "Newtonsoft/Json/Bson/zzzz__BsonBinaryType_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonBinary.get_BinaryType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Bson::BsonBinaryType (::Newtonsoft::Json::Bson::BsonBinary::*)()>(&::Newtonsoft::Json::Bson::BsonBinary::get_BinaryType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25503e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonBinary>::get(),
                            "get_BinaryType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonBinary.set_BinaryType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Bson::BsonBinary::*)(::Newtonsoft::Json::Bson::BsonBinaryType)>(&::Newtonsoft::Json::Bson::BsonBinary::set_BinaryType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25503f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonBinary>::get(),
                            "set_BinaryType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Bson::BsonBinaryType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonBinary._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Bson::BsonBinary::*)(::ArrayW<uint8_t>, ::Newtonsoft::Json::Bson::BsonBinaryType)>(&::Newtonsoft::Json::Bson::BsonBinary::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x25503f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonBinary>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Bson::BsonBinaryType>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::Newtonsoft::Json::Bson::BsonBinary::__set__BinaryType_k__BackingField(::Newtonsoft::Json::Bson::BsonBinaryType value)  {
::cordl_internals::setInstanceField<::Newtonsoft::Json::Bson::BsonBinaryType, 0x29>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Newtonsoft::Json::Bson::BsonBinaryType>(value));
}
constexpr ::Newtonsoft::Json::Bson::BsonBinaryType ::Newtonsoft::Json::Bson::BsonBinary::__get__BinaryType_k__BackingField() const {
return ::cordl_internals::getInstanceField<::Newtonsoft::Json::Bson::BsonBinaryType, 0x29>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::Newtonsoft::Json::Bson::BsonBinaryType ::Newtonsoft::Json::Bson::BsonBinary::get_BinaryType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonBinary>::get(),
                            "get_BinaryType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Bson::BsonBinaryType, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Newtonsoft::Json::Bson::BsonBinary::set_BinaryType(::Newtonsoft::Json::Bson::BsonBinaryType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonBinary>::get(),
                            "set_BinaryType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Bson::BsonBinaryType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "value", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "binaryType", ty: "::Newtonsoft::Json::Bson::BsonBinaryType", modifiers: "", def_value: None }]
 ::Newtonsoft::Json::Bson::BsonBinary::BsonBinary(::ArrayW<uint8_t> value, ::Newtonsoft::Json::Bson::BsonBinaryType binaryType)  : ::Newtonsoft::Json::Bson::BsonValue(THROW_UNLESS(::il2cpp_utils::New<BsonBinary>(value, binaryType))) {}
 void ::Newtonsoft::Json::Bson::BsonBinary::_ctor(::ArrayW<uint8_t> value, ::Newtonsoft::Json::Bson::BsonBinaryType binaryType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonBinary>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Bson::BsonBinaryType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value, binaryType);
}
} // end anonymous namespace
