#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace IgnoranceThirdparty {
struct ____IgnoranceThirdparty__Volatile__PaddedLong;
}
namespace IgnoranceCore {
struct IgnoranceClientStats;
}
namespace IgnoranceCore {
struct IgnoranceCommandPacket;
}
namespace IgnoranceCore {
struct IgnoranceConnectionEvent;
}
namespace IgnoranceCore {
struct IgnoranceIncomingPacket;
}
namespace IgnoranceCore {
struct IgnoranceOutgoingPacket;
}
namespace IgnoranceCore {
struct IgnoranceServerStats;
}
// Forward declare root types
namespace IgnoranceThirdparty {
template<typename T>
class RingBuffer_1;
}
namespace IgnoranceThirdparty {
template<::cordl_internals::il2cpp_reference_type T>
class RingBuffer_1<T>;
}
namespace IgnoranceThirdparty {
template<>
class RingBuffer_1<::IgnoranceCore::IgnoranceClientStats>;
}
namespace IgnoranceThirdparty {
template<>
class RingBuffer_1<::IgnoranceCore::IgnoranceCommandPacket>;
}
namespace IgnoranceThirdparty {
template<>
class RingBuffer_1<::IgnoranceCore::IgnoranceConnectionEvent>;
}
namespace IgnoranceThirdparty {
template<>
class RingBuffer_1<::IgnoranceCore::IgnoranceIncomingPacket>;
}
namespace IgnoranceThirdparty {
template<>
class RingBuffer_1<::IgnoranceCore::IgnoranceOutgoingPacket>;
}
namespace IgnoranceThirdparty {
template<>
class RingBuffer_1<::IgnoranceCore::IgnoranceServerStats>;
}
// Type: IgnoranceThirdparty::RingBuffer`1
// Type: IgnoranceThirdparty::RingBuffer`1
namespace IgnoranceThirdparty {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15250))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15250), inst: 2 })
// CS Name: IgnoranceThirdparty.RingBuffer`1
class CORDL_TYPE RingBuffer_1<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~RingBuffer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "RingBuffer_1", modifiers: " const&", def_value: None }]
constexpr RingBuffer_1(RingBuffer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RingBuffer_1", modifiers: "&&", def_value: None }]
constexpr RingBuffer_1(RingBuffer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RingBuffer_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RingBuffer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RingBuffer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RingBuffer_1& operator=(RingBuffer_1&& o) noexcept = default;
  constexpr RingBuffer_1& operator=(RingBuffer_1 const& o) noexcept = default;
                


// Fields

 ::ArrayW<T> __declspec(property(get=__get__entries, put=__set__entries))  _entries;

constexpr void __set__entries(::ArrayW<T> value) ;

constexpr ::ArrayW<T> __get__entries() const;

 int32_t __declspec(property(get=__get__modMask, put=__set__modMask))  _modMask;

constexpr void __set__modMask(int32_t value) ;

constexpr int32_t __get__modMask() const;

 ::IgnoranceThirdparty::____IgnoranceThirdparty__Volatile__PaddedLong __declspec(property(get=__get__consumerCursor, put=__set__consumerCursor))  _consumerCursor;

constexpr void __set__consumerCursor(::IgnoranceThirdparty::____IgnoranceThirdparty__Volatile__PaddedLong value) ;

constexpr ::IgnoranceThirdparty::____IgnoranceThirdparty__Volatile__PaddedLong __get__consumerCursor() const;

 ::IgnoranceThirdparty::____IgnoranceThirdparty__Volatile__PaddedLong __declspec(property(get=__get__producerCursor, put=__set__producerCursor))  _producerCursor;

constexpr void __set__producerCursor(::IgnoranceThirdparty::____IgnoranceThirdparty__Volatile__PaddedLong value) ;

constexpr ::IgnoranceThirdparty::____IgnoranceThirdparty__Volatile__PaddedLong __get__producerCursor() const;


// Properties

 int32_t __declspec(property(get=get_Capacity))  Capacity;

 T __declspec(property(get=get_Item, put=set_Item))  Item;

 int32_t __declspec(property(get=get_Count))  Count;


// Methods

// Ctor Parameters [CppParam { name: "capacity", ty: "int32_t", modifiers: "", def_value: None }]
explicit RingBuffer_1(int32_t capacity) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t capacity) ;

/// @brief Method get_Capacity addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Capacity() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 T get_Item(int64_t index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_Item(int64_t index, T value) ;

/// @brief Method Dequeue addr 0x0 size 0xffffffffffffffff virtual false final false
 T Dequeue() ;

/// @brief Method TryDequeue addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TryDequeue(ByRef<T> obj) ;

/// @brief Method Enqueue addr 0x0 size 0xffffffffffffffff virtual false final false
 void Enqueue(T item) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Count() ;

/// @brief Method NextPowerOfTwo addr 0x0 size 0xffffffffffffffff virtual false final false
static int32_t NextPowerOfTwo(int32_t x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def IgnoranceThirdparty
// Type: IgnoranceThirdparty::RingBuffer`1
namespace IgnoranceThirdparty {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15250))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15250), inst: 4781 })
// CS Name: IgnoranceThirdparty.RingBuffer`1
class CORDL_TYPE RingBuffer_1<::IgnoranceCore::IgnoranceClientStats> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~RingBuffer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "RingBuffer_1", modifiers: " const&", def_value: None }]
constexpr RingBuffer_1(RingBuffer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RingBuffer_1", modifiers: "&&", def_value: None }]
constexpr RingBuffer_1(RingBuffer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RingBuffer_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RingBuffer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RingBuffer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RingBuffer_1& operator=(RingBuffer_1&& o) noexcept = default;
  constexpr RingBuffer_1& operator=(RingBuffer_1 const& o) noexcept = default;
                


// Fields

 ::ArrayW<::IgnoranceCore::IgnoranceClientStats> __declspec(property(get=__get__entries, put=__set__entries))  _entries;

constexpr void __set__entries(::ArrayW<::IgnoranceCore::IgnoranceClientStats> value) ;

constexpr ::ArrayW<::IgnoranceCore::IgnoranceClientStats> __get__entries() const;

 int32_t __declspec(property(get=__get__modMask, put=__set__modMask))  _modMask;

constexpr void __set__modMask(int32_t value) ;

constexpr int32_t __get__modMask() const;

 ::IgnoranceThirdparty::____IgnoranceThirdparty__Volatile__PaddedLong __declspec(property(get=__get__consumerCursor, put=__set__consumerCursor))  _consumerCursor;

constexpr void __set__consumerCursor(::IgnoranceThirdparty::____IgnoranceThirdparty__Volatile__PaddedLong value) ;

constexpr ::IgnoranceThirdparty::____IgnoranceThirdparty__Volatile__PaddedLong __get__consumerCursor() const;

 ::IgnoranceThirdparty::____IgnoranceThirdparty__Volatile__PaddedLong __declspec(property(get=__get__producerCursor, put=__set__producerCursor))  _producerCursor;

constexpr void __set__producerCursor(::IgnoranceThirdparty::____IgnoranceThirdparty__Volatile__PaddedLong value) ;

constexpr ::IgnoranceThirdparty::____IgnoranceThirdparty__Volatile__PaddedLong __get__producerCursor() const;


// Properties

 int32_t __declspec(property(get=get_Capacity))  Capacity;

 ::IgnoranceCore::IgnoranceClientStats __declspec(property(get=get_Item, put=set_Item))  Item;

 int32_t __declspec(property(get=get_Count))  Count;


// Methods

// Ctor Parameters [CppParam { name: "capacity", ty: "int32_t", modifiers: "", def_value: None }]
explicit RingBuffer_1(int32_t capacity) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t capacity) ;

/// @brief Method get_Capacity addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Capacity() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 ::IgnoranceCore::IgnoranceClientStats get_Item(int64_t index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_Item(int64_t index, ::IgnoranceCore::IgnoranceClientStats value) ;

/// @brief Method Dequeue addr 0x0 size 0xffffffffffffffff virtual false final false
 ::IgnoranceCore::IgnoranceClientStats Dequeue() ;

/// @brief Method TryDequeue addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TryDequeue(ByRef<::IgnoranceCore::IgnoranceClientStats> obj) ;

/// @brief Method Enqueue addr 0x0 size 0xffffffffffffffff virtual false final false
 void Enqueue(::IgnoranceCore::IgnoranceClientStats item) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Count() ;

/// @brief Method NextPowerOfTwo addr 0x0 size 0xffffffffffffffff virtual false final false
static int32_t NextPowerOfTwo(int32_t x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def IgnoranceThirdparty
// Type: IgnoranceThirdparty::RingBuffer`1
namespace IgnoranceThirdparty {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15250))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15250), inst: 4782 })
// CS Name: IgnoranceThirdparty.RingBuffer`1
class CORDL_TYPE RingBuffer_1<::IgnoranceCore::IgnoranceCommandPacket> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~RingBuffer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "RingBuffer_1", modifiers: " const&", def_value: None }]
constexpr RingBuffer_1(RingBuffer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RingBuffer_1", modifiers: "&&", def_value: None }]
constexpr RingBuffer_1(RingBuffer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RingBuffer_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RingBuffer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RingBuffer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RingBuffer_1& operator=(RingBuffer_1&& o) noexcept = default;
  constexpr RingBuffer_1& operator=(RingBuffer_1 const& o) noexcept = default;
                


// Fields

 ::ArrayW<::IgnoranceCore::IgnoranceCommandPacket> __declspec(property(get=__get__entries, put=__set__entries))  _entries;

constexpr void __set__entries(::ArrayW<::IgnoranceCore::IgnoranceCommandPacket> value) ;

constexpr ::ArrayW<::IgnoranceCore::IgnoranceCommandPacket> __get__entries() const;

 int32_t __declspec(property(get=__get__modMask, put=__set__modMask))  _modMask;

constexpr void __set__modMask(int32_t value) ;

constexpr int32_t __get__modMask() const;

 ::IgnoranceThirdparty::____IgnoranceThirdparty__Volatile__PaddedLong __declspec(property(get=__get__consumerCursor, put=__set__consumerCursor))  _consumerCursor;

constexpr void __set__consumerCursor(::IgnoranceThirdparty::____IgnoranceThirdparty__Volatile__PaddedLong value) ;

constexpr ::IgnoranceThirdparty::____IgnoranceThirdparty__Volatile__PaddedLong __get__consumerCursor() const;

 ::IgnoranceThirdparty::____IgnoranceThirdparty__Volatile__PaddedLong __declspec(property(get=__get__producerCursor, put=__set__producerCursor))  _producerCursor;

constexpr void __set__producerCursor(::IgnoranceThirdparty::____IgnoranceThirdparty__Volatile__PaddedLong value) ;

constexpr ::IgnoranceThirdparty::____IgnoranceThirdparty__Volatile__PaddedLong __get__producerCursor() const;


// Properties

 int32_t __declspec(property(get=get_Capacity))  Capacity;

 ::IgnoranceCore::IgnoranceCommandPacket __declspec(property(get=get_Item, put=set_Item))  Item;

 int32_t __declspec(property(get=get_Count))  Count;


// Methods

// Ctor Parameters [CppParam { name: "capacity", ty: "int32_t", modifiers: "", def_value: None }]
explicit RingBuffer_1(int32_t capacity) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t capacity) ;

/// @brief Method get_Capacity addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Capacity() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 ::IgnoranceCore::IgnoranceCommandPacket get_Item(int64_t index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_Item(int64_t index, ::IgnoranceCore::IgnoranceCommandPacket value) ;

/// @brief Method Dequeue addr 0x0 size 0xffffffffffffffff virtual false final false
 ::IgnoranceCore::IgnoranceCommandPacket Dequeue() ;

/// @brief Method TryDequeue addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TryDequeue(ByRef<::IgnoranceCore::IgnoranceCommandPacket> obj) ;

/// @brief Method Enqueue addr 0x0 size 0xffffffffffffffff virtual false final false
 void Enqueue(::IgnoranceCore::IgnoranceCommandPacket item) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Count() ;

/// @brief Method NextPowerOfTwo addr 0x0 size 0xffffffffffffffff virtual false final false
static int32_t NextPowerOfTwo(int32_t x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def IgnoranceThirdparty
// Type: IgnoranceThirdparty::RingBuffer`1
namespace IgnoranceThirdparty {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15250))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15250), inst: 4783 })
// CS Name: IgnoranceThirdparty.RingBuffer`1
class CORDL_TYPE RingBuffer_1<::IgnoranceCore::IgnoranceConnectionEvent> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~RingBuffer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "RingBuffer_1", modifiers: " const&", def_value: None }]
constexpr RingBuffer_1(RingBuffer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RingBuffer_1", modifiers: "&&", def_value: None }]
constexpr RingBuffer_1(RingBuffer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RingBuffer_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RingBuffer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RingBuffer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RingBuffer_1& operator=(RingBuffer_1&& o) noexcept = default;
  constexpr RingBuffer_1& operator=(RingBuffer_1 const& o) noexcept = default;
                


// Fields

 ::ArrayW<::IgnoranceCore::IgnoranceConnectionEvent> __declspec(property(get=__get__entries, put=__set__entries))  _entries;

constexpr void __set__entries(::ArrayW<::IgnoranceCore::IgnoranceConnectionEvent> value) ;

constexpr ::ArrayW<::IgnoranceCore::IgnoranceConnectionEvent> __get__entries() const;

 int32_t __declspec(property(get=__get__modMask, put=__set__modMask))  _modMask;

constexpr void __set__modMask(int32_t value) ;

constexpr int32_t __get__modMask() const;

 ::IgnoranceThirdparty::____IgnoranceThirdparty__Volatile__PaddedLong __declspec(property(get=__get__consumerCursor, put=__set__consumerCursor))  _consumerCursor;

constexpr void __set__consumerCursor(::IgnoranceThirdparty::____IgnoranceThirdparty__Volatile__PaddedLong value) ;

constexpr ::IgnoranceThirdparty::____IgnoranceThirdparty__Volatile__PaddedLong __get__consumerCursor() const;

 ::IgnoranceThirdparty::____IgnoranceThirdparty__Volatile__PaddedLong __declspec(property(get=__get__producerCursor, put=__set__producerCursor))  _producerCursor;

constexpr void __set__producerCursor(::IgnoranceThirdparty::____IgnoranceThirdparty__Volatile__PaddedLong value) ;

constexpr ::IgnoranceThirdparty::____IgnoranceThirdparty__Volatile__PaddedLong __get__producerCursor() const;


// Properties

 int32_t __declspec(property(get=get_Capacity))  Capacity;

 ::IgnoranceCore::IgnoranceConnectionEvent __declspec(property(get=get_Item, put=set_Item))  Item;

 int32_t __declspec(property(get=get_Count))  Count;


// Methods

// Ctor Parameters [CppParam { name: "capacity", ty: "int32_t", modifiers: "", def_value: None }]
explicit RingBuffer_1(int32_t capacity) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t capacity) ;

/// @brief Method get_Capacity addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Capacity() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 ::IgnoranceCore::IgnoranceConnectionEvent get_Item(int64_t index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_Item(int64_t index, ::IgnoranceCore::IgnoranceConnectionEvent value) ;

/// @brief Method Dequeue addr 0x0 size 0xffffffffffffffff virtual false final false
 ::IgnoranceCore::IgnoranceConnectionEvent Dequeue() ;

/// @brief Method TryDequeue addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TryDequeue(ByRef<::IgnoranceCore::IgnoranceConnectionEvent> obj) ;

/// @brief Method Enqueue addr 0x0 size 0xffffffffffffffff virtual false final false
 void Enqueue(::IgnoranceCore::IgnoranceConnectionEvent item) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Count() ;

/// @brief Method NextPowerOfTwo addr 0x0 size 0xffffffffffffffff virtual false final false
static int32_t NextPowerOfTwo(int32_t x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def IgnoranceThirdparty
// Type: IgnoranceThirdparty::RingBuffer`1
namespace IgnoranceThirdparty {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15250))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15250), inst: 4784 })
// CS Name: IgnoranceThirdparty.RingBuffer`1
class CORDL_TYPE RingBuffer_1<::IgnoranceCore::IgnoranceIncomingPacket> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~RingBuffer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "RingBuffer_1", modifiers: " const&", def_value: None }]
constexpr RingBuffer_1(RingBuffer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RingBuffer_1", modifiers: "&&", def_value: None }]
constexpr RingBuffer_1(RingBuffer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RingBuffer_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RingBuffer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RingBuffer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RingBuffer_1& operator=(RingBuffer_1&& o) noexcept = default;
  constexpr RingBuffer_1& operator=(RingBuffer_1 const& o) noexcept = default;
                


// Fields

 ::ArrayW<::IgnoranceCore::IgnoranceIncomingPacket> __declspec(property(get=__get__entries, put=__set__entries))  _entries;

constexpr void __set__entries(::ArrayW<::IgnoranceCore::IgnoranceIncomingPacket> value) ;

constexpr ::ArrayW<::IgnoranceCore::IgnoranceIncomingPacket> __get__entries() const;

 int32_t __declspec(property(get=__get__modMask, put=__set__modMask))  _modMask;

constexpr void __set__modMask(int32_t value) ;

constexpr int32_t __get__modMask() const;

 ::IgnoranceThirdparty::____IgnoranceThirdparty__Volatile__PaddedLong __declspec(property(get=__get__consumerCursor, put=__set__consumerCursor))  _consumerCursor;

constexpr void __set__consumerCursor(::IgnoranceThirdparty::____IgnoranceThirdparty__Volatile__PaddedLong value) ;

constexpr ::IgnoranceThirdparty::____IgnoranceThirdparty__Volatile__PaddedLong __get__consumerCursor() const;

 ::IgnoranceThirdparty::____IgnoranceThirdparty__Volatile__PaddedLong __declspec(property(get=__get__producerCursor, put=__set__producerCursor))  _producerCursor;

constexpr void __set__producerCursor(::IgnoranceThirdparty::____IgnoranceThirdparty__Volatile__PaddedLong value) ;

constexpr ::IgnoranceThirdparty::____IgnoranceThirdparty__Volatile__PaddedLong __get__producerCursor() const;


// Properties

 int32_t __declspec(property(get=get_Capacity))  Capacity;

 ::IgnoranceCore::IgnoranceIncomingPacket __declspec(property(get=get_Item, put=set_Item))  Item;

 int32_t __declspec(property(get=get_Count))  Count;


// Methods

// Ctor Parameters [CppParam { name: "capacity", ty: "int32_t", modifiers: "", def_value: None }]
explicit RingBuffer_1(int32_t capacity) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t capacity) ;

/// @brief Method get_Capacity addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Capacity() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 ::IgnoranceCore::IgnoranceIncomingPacket get_Item(int64_t index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_Item(int64_t index, ::IgnoranceCore::IgnoranceIncomingPacket value) ;

/// @brief Method Dequeue addr 0x0 size 0xffffffffffffffff virtual false final false
 ::IgnoranceCore::IgnoranceIncomingPacket Dequeue() ;

/// @brief Method TryDequeue addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TryDequeue(ByRef<::IgnoranceCore::IgnoranceIncomingPacket> obj) ;

/// @brief Method Enqueue addr 0x0 size 0xffffffffffffffff virtual false final false
 void Enqueue(::IgnoranceCore::IgnoranceIncomingPacket item) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Count() ;

/// @brief Method NextPowerOfTwo addr 0x0 size 0xffffffffffffffff virtual false final false
static int32_t NextPowerOfTwo(int32_t x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def IgnoranceThirdparty
// Type: IgnoranceThirdparty::RingBuffer`1
namespace IgnoranceThirdparty {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15250))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15250), inst: 4785 })
// CS Name: IgnoranceThirdparty.RingBuffer`1
class CORDL_TYPE RingBuffer_1<::IgnoranceCore::IgnoranceOutgoingPacket> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~RingBuffer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "RingBuffer_1", modifiers: " const&", def_value: None }]
constexpr RingBuffer_1(RingBuffer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RingBuffer_1", modifiers: "&&", def_value: None }]
constexpr RingBuffer_1(RingBuffer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RingBuffer_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RingBuffer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RingBuffer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RingBuffer_1& operator=(RingBuffer_1&& o) noexcept = default;
  constexpr RingBuffer_1& operator=(RingBuffer_1 const& o) noexcept = default;
                


// Fields

 ::ArrayW<::IgnoranceCore::IgnoranceOutgoingPacket> __declspec(property(get=__get__entries, put=__set__entries))  _entries;

constexpr void __set__entries(::ArrayW<::IgnoranceCore::IgnoranceOutgoingPacket> value) ;

constexpr ::ArrayW<::IgnoranceCore::IgnoranceOutgoingPacket> __get__entries() const;

 int32_t __declspec(property(get=__get__modMask, put=__set__modMask))  _modMask;

constexpr void __set__modMask(int32_t value) ;

constexpr int32_t __get__modMask() const;

 ::IgnoranceThirdparty::____IgnoranceThirdparty__Volatile__PaddedLong __declspec(property(get=__get__consumerCursor, put=__set__consumerCursor))  _consumerCursor;

constexpr void __set__consumerCursor(::IgnoranceThirdparty::____IgnoranceThirdparty__Volatile__PaddedLong value) ;

constexpr ::IgnoranceThirdparty::____IgnoranceThirdparty__Volatile__PaddedLong __get__consumerCursor() const;

 ::IgnoranceThirdparty::____IgnoranceThirdparty__Volatile__PaddedLong __declspec(property(get=__get__producerCursor, put=__set__producerCursor))  _producerCursor;

constexpr void __set__producerCursor(::IgnoranceThirdparty::____IgnoranceThirdparty__Volatile__PaddedLong value) ;

constexpr ::IgnoranceThirdparty::____IgnoranceThirdparty__Volatile__PaddedLong __get__producerCursor() const;


// Properties

 int32_t __declspec(property(get=get_Capacity))  Capacity;

 ::IgnoranceCore::IgnoranceOutgoingPacket __declspec(property(get=get_Item, put=set_Item))  Item;

 int32_t __declspec(property(get=get_Count))  Count;


// Methods

// Ctor Parameters [CppParam { name: "capacity", ty: "int32_t", modifiers: "", def_value: None }]
explicit RingBuffer_1(int32_t capacity) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t capacity) ;

/// @brief Method get_Capacity addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Capacity() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 ::IgnoranceCore::IgnoranceOutgoingPacket get_Item(int64_t index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_Item(int64_t index, ::IgnoranceCore::IgnoranceOutgoingPacket value) ;

/// @brief Method Dequeue addr 0x0 size 0xffffffffffffffff virtual false final false
 ::IgnoranceCore::IgnoranceOutgoingPacket Dequeue() ;

/// @brief Method TryDequeue addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TryDequeue(ByRef<::IgnoranceCore::IgnoranceOutgoingPacket> obj) ;

/// @brief Method Enqueue addr 0x0 size 0xffffffffffffffff virtual false final false
 void Enqueue(::IgnoranceCore::IgnoranceOutgoingPacket item) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Count() ;

/// @brief Method NextPowerOfTwo addr 0x0 size 0xffffffffffffffff virtual false final false
static int32_t NextPowerOfTwo(int32_t x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def IgnoranceThirdparty
// Type: IgnoranceThirdparty::RingBuffer`1
namespace IgnoranceThirdparty {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15250))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15250), inst: 4786 })
// CS Name: IgnoranceThirdparty.RingBuffer`1
class CORDL_TYPE RingBuffer_1<::IgnoranceCore::IgnoranceServerStats> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~RingBuffer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "RingBuffer_1", modifiers: " const&", def_value: None }]
constexpr RingBuffer_1(RingBuffer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RingBuffer_1", modifiers: "&&", def_value: None }]
constexpr RingBuffer_1(RingBuffer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RingBuffer_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RingBuffer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RingBuffer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RingBuffer_1& operator=(RingBuffer_1&& o) noexcept = default;
  constexpr RingBuffer_1& operator=(RingBuffer_1 const& o) noexcept = default;
                


// Fields

 ::ArrayW<::IgnoranceCore::IgnoranceServerStats> __declspec(property(get=__get__entries, put=__set__entries))  _entries;

constexpr void __set__entries(::ArrayW<::IgnoranceCore::IgnoranceServerStats> value) ;

constexpr ::ArrayW<::IgnoranceCore::IgnoranceServerStats> __get__entries() const;

 int32_t __declspec(property(get=__get__modMask, put=__set__modMask))  _modMask;

constexpr void __set__modMask(int32_t value) ;

constexpr int32_t __get__modMask() const;

 ::IgnoranceThirdparty::____IgnoranceThirdparty__Volatile__PaddedLong __declspec(property(get=__get__consumerCursor, put=__set__consumerCursor))  _consumerCursor;

constexpr void __set__consumerCursor(::IgnoranceThirdparty::____IgnoranceThirdparty__Volatile__PaddedLong value) ;

constexpr ::IgnoranceThirdparty::____IgnoranceThirdparty__Volatile__PaddedLong __get__consumerCursor() const;

 ::IgnoranceThirdparty::____IgnoranceThirdparty__Volatile__PaddedLong __declspec(property(get=__get__producerCursor, put=__set__producerCursor))  _producerCursor;

constexpr void __set__producerCursor(::IgnoranceThirdparty::____IgnoranceThirdparty__Volatile__PaddedLong value) ;

constexpr ::IgnoranceThirdparty::____IgnoranceThirdparty__Volatile__PaddedLong __get__producerCursor() const;


// Properties

 int32_t __declspec(property(get=get_Capacity))  Capacity;

 ::IgnoranceCore::IgnoranceServerStats __declspec(property(get=get_Item, put=set_Item))  Item;

 int32_t __declspec(property(get=get_Count))  Count;


// Methods

// Ctor Parameters [CppParam { name: "capacity", ty: "int32_t", modifiers: "", def_value: None }]
explicit RingBuffer_1(int32_t capacity) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t capacity) ;

/// @brief Method get_Capacity addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Capacity() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 ::IgnoranceCore::IgnoranceServerStats get_Item(int64_t index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_Item(int64_t index, ::IgnoranceCore::IgnoranceServerStats value) ;

/// @brief Method Dequeue addr 0x0 size 0xffffffffffffffff virtual false final false
 ::IgnoranceCore::IgnoranceServerStats Dequeue() ;

/// @brief Method TryDequeue addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TryDequeue(ByRef<::IgnoranceCore::IgnoranceServerStats> obj) ;

/// @brief Method Enqueue addr 0x0 size 0xffffffffffffffff virtual false final false
 void Enqueue(::IgnoranceCore::IgnoranceServerStats item) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Count() ;

/// @brief Method NextPowerOfTwo addr 0x0 size 0xffffffffffffffff virtual false final false
static int32_t NextPowerOfTwo(int32_t x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def IgnoranceThirdparty
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::IgnoranceThirdparty::RingBuffer_1, "IgnoranceThirdparty", "RingBuffer`1");
