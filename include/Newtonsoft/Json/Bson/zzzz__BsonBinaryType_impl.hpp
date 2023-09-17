#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "Newtonsoft/Json/Bson/zzzz__BsonBinaryType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::Bson::BsonBinaryType::BsonBinaryType(uint8_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::Newtonsoft::Json::Bson::BsonBinaryType::__set_value__(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x0>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t ::Newtonsoft::Json::Bson::BsonBinaryType::__get_value__() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x0>(this->__instance);
}
constexpr ::Newtonsoft::Json::Bson::BsonBinaryType  ::Newtonsoft::Json::Bson::BsonBinaryType::Binary{0u};
constexpr ::Newtonsoft::Json::Bson::BsonBinaryType  ::Newtonsoft::Json::Bson::BsonBinaryType::Function{1u};
constexpr ::Newtonsoft::Json::Bson::BsonBinaryType  ::Newtonsoft::Json::Bson::BsonBinaryType::BinaryOld{2u};
constexpr ::Newtonsoft::Json::Bson::BsonBinaryType  ::Newtonsoft::Json::Bson::BsonBinaryType::UuidOld{3u};
constexpr ::Newtonsoft::Json::Bson::BsonBinaryType  ::Newtonsoft::Json::Bson::BsonBinaryType::Uuid{4u};
constexpr ::Newtonsoft::Json::Bson::BsonBinaryType  ::Newtonsoft::Json::Bson::BsonBinaryType::Md5{5u};
constexpr ::Newtonsoft::Json::Bson::BsonBinaryType  ::Newtonsoft::Json::Bson::BsonBinaryType::UserDefined{128u};
} // end anonymous namespace
