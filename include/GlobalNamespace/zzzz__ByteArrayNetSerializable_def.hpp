#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace LiteNetLib::Utils {
class INetSerializable;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
// Forward declare root types
namespace GlobalNamespace {
class ByteArrayNetSerializable;
}
// Type: ::ByteArrayNetSerializable
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12629))
// CS Name: ByteArrayNetSerializable
class CORDL_TYPE ByteArrayNetSerializable : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to LiteNetLib::Utils::INetSerializable
constexpr operator  LiteNetLib::Utils::INetSerializable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~ByteArrayNetSerializable() = default;

// Ctor Parameters [CppParam { name: "", ty: "ByteArrayNetSerializable", modifiers: " const&", def_value: None }]
constexpr ByteArrayNetSerializable(ByteArrayNetSerializable const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ByteArrayNetSerializable", modifiers: "&&", def_value: None }]
constexpr ByteArrayNetSerializable(ByteArrayNetSerializable&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ByteArrayNetSerializable(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ByteArrayNetSerializable& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ByteArrayNetSerializable& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ByteArrayNetSerializable& operator=(ByteArrayNetSerializable&& o) noexcept = default;
  constexpr ByteArrayNetSerializable& operator=(ByteArrayNetSerializable const& o) noexcept = default;
                


// Fields

 ::ArrayW<uint8_t> __declspec(property(get=__get__data, put=__set__data))  _data;

constexpr void __set__data(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get__data() const;

 int32_t __declspec(property(get=__get__length, put=__set__length))  _length;

constexpr void __set__length(int32_t value) ;

constexpr int32_t __get__length() const;

 ::StringW __declspec(property(get=__get__name, put=__set__name))  _name;

constexpr void __set__name(::StringW value) ;

constexpr ::StringW __get__name() const;

 bool __declspec(property(get=__get__allowEmpty, put=__set__allowEmpty))  _allowEmpty;

constexpr void __set__allowEmpty(bool value) ;

constexpr bool __get__allowEmpty() const;

 int32_t __declspec(property(get=__get__minLength, put=__set__minLength))  _minLength;

constexpr void __set__minLength(int32_t value) ;

constexpr int32_t __get__minLength() const;

 int32_t __declspec(property(get=__get__maxLength, put=__set__maxLength))  _maxLength;

constexpr void __set__maxLength(int32_t value) ;

constexpr int32_t __get__maxLength() const;


// Properties

 int32_t __declspec(property(get=get_length))  length;

 ::ArrayW<uint8_t> __declspec(property(get=get_data, put=set_data))  data;


// Methods

/// @brief Method get_length addr 0xd9ce14 size 0x8 virtual false final false
 int32_t get_length() ;

/// @brief Method get_data addr 0xd9ce1c size 0x8 virtual false final false
 ::ArrayW<uint8_t> get_data() ;

/// @brief Method set_data addr 0xd9cf00 size 0x4 virtual false final false
 void set_data(::ArrayW<uint8_t> value) ;

static GlobalNamespace::ByteArrayNetSerializable New_ctor(::StringW name, int32_t minLength, int32_t maxLength, bool allowEmpty) ;

/// @brief Method .ctor addr 0xd9cf2c size 0x48 virtual false final false
 void _ctor(::StringW name, int32_t minLength, int32_t maxLength, bool allowEmpty) ;

static GlobalNamespace::ByteArrayNetSerializable New_ctor(::StringW name, int32_t size, bool allowEmpty) ;

/// @brief Method .ctor addr 0xd9cf74 size 0x44 virtual false final false
 void _ctor(::StringW name, int32_t size, bool allowEmpty) ;

/// @brief Method SetData addr 0xd9cf04 size 0x28 virtual false final false
 void SetData(::ArrayW<uint8_t> value) ;

/// @brief Method SetData addr 0xd9cfb8 size 0x220 virtual false final false
 void SetData(::ArrayW<uint8_t> value, int32_t offset, int32_t length) ;

/// @brief Method GetData addr 0xd9ce24 size 0xdc virtual false final false
 ::ArrayW<uint8_t> GetData(bool emptyAsNull) ;

/// @brief Method Serialize addr 0xd9d308 size 0xf0 virtual true final true
 void Serialize(LiteNetLib::Utils::NetDataWriter writer) ;

/// @brief Method Deserialize addr 0xd9d3f8 size 0x244 virtual true final true
 void Deserialize(LiteNetLib::Utils::NetDataReader reader) ;

/// @brief Method Clear addr 0xd9d1d8 size 0x70 virtual false final false
 void Clear() ;

/// @brief Method Resize addr 0xd9d248 size 0xa4 virtual false final false
 void Resize(int32_t length) ;

/// @brief Method op_Implicit addr 0xd9d63c size 0x14 virtual false final false
static ::ArrayW<uint8_t> op_Implicit___ArrayW_uint8_t_(GlobalNamespace::ByteArrayNetSerializable byteArrayNetSerializable) ;

/// @brief Method CopyTo addr 0xd9d2ec size 0x1c virtual false final false
 void CopyTo(::ArrayW<uint8_t> destination) ;

/// @brief Method CopyTo addr 0xd9d650 size 0x3c virtual false final false
 void CopyTo(::ArrayW<uint8_t> destination, ByRef<int32_t> length) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::ByteArrayNetSerializable);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ByteArrayNetSerializable, "", "ByteArrayNetSerializable");
