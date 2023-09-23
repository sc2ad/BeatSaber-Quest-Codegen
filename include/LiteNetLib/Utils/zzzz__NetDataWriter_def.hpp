#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace System::Net {
class IPEndPoint;
}
namespace System {
class Array;
}
// Forward declare root types
namespace LiteNetLib::Utils {
class NetDataWriter;
}
// Type: LiteNetLib.Utils::NetDataWriter
namespace LiteNetLib::Utils {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14476))
// CS Name: LiteNetLib.Utils.NetDataWriter
class CORDL_TYPE NetDataWriter : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~NetDataWriter() = default;

// Ctor Parameters [CppParam { name: "", ty: "NetDataWriter", modifiers: " const&", def_value: None }]
constexpr NetDataWriter(NetDataWriter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NetDataWriter", modifiers: "&&", def_value: None }]
constexpr NetDataWriter(NetDataWriter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NetDataWriter(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr NetDataWriter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NetDataWriter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NetDataWriter& operator=(NetDataWriter&& o) noexcept = default;
  constexpr NetDataWriter& operator=(NetDataWriter const& o) noexcept = default;
                


// Fields

 ::ArrayW<uint8_t> __declspec(property(get=__get__data, put=__set__data))  _data;

constexpr void __set__data(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get__data() const;

 int32_t __declspec(property(get=__get__position, put=__set__position))  _position;

constexpr void __set__position(int32_t value) ;

constexpr int32_t __get__position() const;

/// @brief Field InitialSize offset 0
static constexpr int32_t  InitialSize{64};

 bool __declspec(property(get=__get__autoResize, put=__set__autoResize))  _autoResize;

constexpr void __set__autoResize(bool value) ;

constexpr bool __get__autoResize() const;


// Properties

 int32_t __declspec(property(get=get_Capacity))  Capacity;

 ::ArrayW<uint8_t> __declspec(property(get=get_Data))  Data;

 int32_t __declspec(property(get=get_Length))  Length;


// Methods

/// @brief Method get_Capacity addr 0x2097020 size 0x1c virtual false final false
 int32_t get_Capacity() ;

// Ctor Parameters []
explicit NetDataWriter() ;

/// @brief Method .ctor addr 0x20874e4 size 0xc virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "autoResize", ty: "bool", modifiers: "", def_value: None }]
explicit NetDataWriter(bool autoResize) ;

/// @brief Method .ctor addr 0x20970ac size 0xc virtual false final false
 void _ctor(bool autoResize) ;

// Ctor Parameters [CppParam { name: "autoResize", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "initialSize", ty: "int32_t", modifiers: "", def_value: None }]
explicit NetDataWriter(bool autoResize, int32_t initialSize) ;

/// @brief Method .ctor addr 0x209703c size 0x70 virtual false final false
 void _ctor(bool autoResize, int32_t initialSize) ;

/// @brief Method FromBytes addr 0x20970b8 size 0xa0 virtual false final false
static LiteNetLib::Utils::NetDataWriter FromBytes(::ArrayW<uint8_t> bytes, bool copy) ;

/// @brief Method FromBytes addr 0x20971cc size 0x8c virtual false final false
static LiteNetLib::Utils::NetDataWriter FromBytes(::ArrayW<uint8_t> bytes, int32_t offset, int32_t length) ;

/// @brief Method FromString addr 0x208e78c size 0x70 virtual false final false
static LiteNetLib::Utils::NetDataWriter FromString(::StringW value) ;

/// @brief Method ResizeIfNeed addr 0x2097390 size 0x80 virtual false final false
 void ResizeIfNeed(int32_t newSize) ;

/// @brief Method Reset addr 0x2097410 size 0x18 virtual false final false
 void Reset(int32_t size) ;

/// @brief Method Reset addr 0x2097428 size 0x8 virtual false final false
 void Reset() ;

/// @brief Method CopyData addr 0x2097430 size 0x74 virtual false final false
 ::ArrayW<uint8_t> CopyData() ;

/// @brief Method get_Data addr 0x20974a4 size 0x8 virtual false final false
 ::ArrayW<uint8_t> get_Data() ;

/// @brief Method get_Length addr 0x20974ac size 0x8 virtual false final false
 int32_t get_Length() ;

/// @brief Method Put addr 0x20974b4 size 0x50 virtual false final false
 void Put(float_t value) ;

/// @brief Method Put addr 0x2097504 size 0x50 virtual false final false
 void Put(double_t value) ;

/// @brief Method Put addr 0x2097554 size 0x50 virtual false final false
 void Put(int64_t value) ;

/// @brief Method Put addr 0x20975a4 size 0x50 virtual false final false
 void Put(uint64_t value) ;

/// @brief Method Put addr 0x20975f4 size 0x50 virtual false final false
 void Put(int32_t value) ;

/// @brief Method Put addr 0x2097644 size 0x50 virtual false final false
 void Put(uint32_t value) ;

/// @brief Method Put addr 0x2097694 size 0x50 virtual false final false
 void Put(char16_t value) ;

/// @brief Method Put addr 0x20976e4 size 0x50 virtual false final false
 void Put(uint16_t value) ;

/// @brief Method Put addr 0x2097734 size 0x50 virtual false final false
 void Put(int16_t value) ;

/// @brief Method Put addr 0x2097784 size 0x68 virtual false final false
 void Put(int8_t value) ;

/// @brief Method Put addr 0x20977ec size 0x68 virtual false final false
 void Put(uint8_t value) ;

/// @brief Method Put addr 0x2097258 size 0x6c virtual false final false
 void Put(::ArrayW<uint8_t> data, int32_t offset, int32_t length) ;

/// @brief Method Put addr 0x2097158 size 0x74 virtual false final false
 void Put(::ArrayW<uint8_t> data) ;

/// @brief Method PutSBytesWithLength addr 0x2097854 size 0x8c virtual false final false
 void PutSBytesWithLength(::ArrayW<int8_t> data, int32_t offset, int32_t length) ;

/// @brief Method PutSBytesWithLength addr 0x20978e0 size 0x90 virtual false final false
 void PutSBytesWithLength(::ArrayW<int8_t> data) ;

/// @brief Method PutBytesWithLength addr 0x2097970 size 0x8c virtual false final false
 void PutBytesWithLength(::ArrayW<uint8_t> data, int32_t offset, int32_t length) ;

/// @brief Method PutBytesWithLength addr 0x20979fc size 0x90 virtual false final false
 void PutBytesWithLength(::ArrayW<uint8_t> data) ;

/// @brief Method Put addr 0x2097a8c size 0x6c virtual false final false
 void Put(bool value) ;

/// @brief Method PutArray addr 0x2097af8 size 0xac virtual false final false
 void PutArray(System::Array arr, int32_t sz) ;

/// @brief Method PutArray addr 0x2097ba4 size 0x8 virtual false final false
 void PutArray(::ArrayW<float_t> value) ;

/// @brief Method PutArray addr 0x2097bac size 0x8 virtual false final false
 void PutArray(::ArrayW<double_t> value) ;

/// @brief Method PutArray addr 0x2097bb4 size 0x8 virtual false final false
 void PutArray(::ArrayW<int64_t> value) ;

/// @brief Method PutArray addr 0x2097bbc size 0x8 virtual false final false
 void PutArray(::ArrayW<uint64_t> value) ;

/// @brief Method PutArray addr 0x2097bc4 size 0x8 virtual false final false
 void PutArray(::ArrayW<int32_t> value) ;

/// @brief Method PutArray addr 0x2097bcc size 0x8 virtual false final false
 void PutArray(::ArrayW<uint32_t> value) ;

/// @brief Method PutArray addr 0x2097bd4 size 0x8 virtual false final false
 void PutArray(::ArrayW<uint16_t> value) ;

/// @brief Method PutArray addr 0x2097bdc size 0x8 virtual false final false
 void PutArray(::ArrayW<int16_t> value) ;

/// @brief Method PutArray addr 0x2097be4 size 0x8 virtual false final false
 void PutArray(::ArrayW<bool> value) ;

/// @brief Method PutArray addr 0x2097bec size 0x88 virtual false final false
 void PutArray(::ArrayW<::StringW> value) ;

/// @brief Method PutArray addr 0x2097c74 size 0x9c virtual false final false
 void PutArray(::ArrayW<::StringW> value, int32_t maxLength) ;

/// @brief Method Put addr 0x2097df8 size 0x104c virtual false final false
 void Put(System::Net::IPEndPoint endPoint) ;

/// @brief Method Put addr 0x20972c4 size 0xcc virtual false final false
 void Put(::StringW value) ;

/// @brief Method Put addr 0x2097d10 size 0xe8 virtual false final false
 void Put(::StringW value, int32_t maxLength) ;

/// @brief Method Put addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void Put(T obj) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def LiteNetLib::Utils
NEED_NO_BOX(LiteNetLib::Utils::NetDataWriter);
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::Utils::NetDataWriter, "LiteNetLib.Utils", "NetDataWriter");
