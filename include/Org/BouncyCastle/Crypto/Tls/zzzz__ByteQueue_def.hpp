#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::IO {
class MemoryStream;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class ByteQueue;
}
// Type: Org.BouncyCastle.Crypto.Tls::ByteQueue
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1183))
// CS Name: Org.BouncyCastle.Crypto.Tls.ByteQueue
class CORDL_TYPE ByteQueue : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~ByteQueue() = default;

// Ctor Parameters [CppParam { name: "", ty: "ByteQueue", modifiers: " const&", def_value: None }]
constexpr ByteQueue(ByteQueue const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ByteQueue", modifiers: "&&", def_value: None }]
constexpr ByteQueue(ByteQueue&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ByteQueue(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ByteQueue& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ByteQueue& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ByteQueue& operator=(ByteQueue&& o) noexcept = default;
  constexpr ByteQueue& operator=(ByteQueue const& o) noexcept = default;
                


// Fields

/// @brief Field DefaultCapacity offset 0
static constexpr int32_t  DefaultCapacity{1024};

 ::ArrayW<uint8_t> __declspec(property(get=__get_databuf, put=__set_databuf))  databuf;

constexpr void __set_databuf(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_databuf() const;

 int32_t __declspec(property(get=__get_skipped, put=__set_skipped))  skipped;

constexpr void __set_skipped(int32_t value) ;

constexpr int32_t __get_skipped() const;

 int32_t __declspec(property(get=__get_available, put=__set_available))  available;

constexpr void __set_available(int32_t value) ;

constexpr int32_t __get_available() const;

 bool __declspec(property(get=__get_readOnlyBuf, put=__set_readOnlyBuf))  readOnlyBuf;

constexpr void __set_readOnlyBuf(bool value) ;

constexpr bool __get_readOnlyBuf() const;


// Properties

 int32_t __declspec(property(get=get_Available))  Available;


// Methods

/// @brief Method NextTwoPow addr 0xece1f8 size 0x1c virtual false final false
static int32_t NextTwoPow(int32_t i) ;

// Ctor Parameters []
explicit ByteQueue() ;

/// @brief Method .ctor addr 0xece214 size 0x8 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "capacity", ty: "int32_t", modifiers: "", def_value: None }]
explicit ByteQueue(int32_t capacity) ;

/// @brief Method .ctor addr 0xece21c size 0xa0 virtual false final false
 void _ctor(int32_t capacity) ;

// Ctor Parameters [CppParam { name: "buf", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "off", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "len", ty: "int32_t", modifiers: "", def_value: None }]
explicit ByteQueue(::ArrayW<uint8_t> buf, int32_t off, int32_t len) ;

/// @brief Method .ctor addr 0xece2bc size 0x4c virtual false final false
 void _ctor(::ArrayW<uint8_t> buf, int32_t off, int32_t len) ;

/// @brief Method AddData addr 0xece308 size 0x16c virtual false final false
 void AddData(::ArrayW<uint8_t> data, int32_t offset, int32_t len) ;

/// @brief Method get_Available addr 0xece474 size 0x8 virtual false final false
 int32_t get_Available() ;

/// @brief Method CopyTo addr 0xece47c size 0x1bc virtual false final false
 void CopyTo(System::IO::Stream output, int32_t length) ;

/// @brief Method Read addr 0xece638 size 0x25c virtual false final false
 void Read(::ArrayW<uint8_t> buf, int32_t offset, int32_t len, int32_t skip) ;

/// @brief Method ReadFrom addr 0xece894 size 0x200 virtual false final false
 System::IO::MemoryStream ReadFrom(int32_t length) ;

/// @brief Method RemoveData addr 0xecea94 size 0x1a4 virtual false final false
 void RemoveData(int32_t i) ;

/// @brief Method RemoveData addr 0xecec38 size 0x2c virtual false final false
 void RemoveData(::ArrayW<uint8_t> buf, int32_t off, int32_t len, int32_t skip) ;

/// @brief Method RemoveData addr 0xecec64 size 0x88 virtual false final false
 ::ArrayW<uint8_t> RemoveData(int32_t len, int32_t skip) ;

/// @brief Method Shrink addr 0xececec size 0xe8 virtual false final false
 void Shrink() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::ByteQueue);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::ByteQueue, "Org.BouncyCastle.Crypto.Tls", "ByteQueue");
