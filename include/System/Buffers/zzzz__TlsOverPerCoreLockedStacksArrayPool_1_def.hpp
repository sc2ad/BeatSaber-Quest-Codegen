#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Buffers/zzzz__ArrayPool_1_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
namespace System::Runtime::CompilerServices {
template<typename TKey,typename TValue>
class ConditionalWeakTable_2;
}
// Forward declare root types
namespace System::Buffers {
template<typename T>
class System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack;
}
namespace System::Buffers {
template<typename T>
class System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks;
}
namespace System::Buffers {
template<typename T>
class TlsOverPerCoreLockedStacksArrayPool_1;
}
namespace System::Buffers {
template<typename T>
struct System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure;
}
namespace System::Buffers {
template<::cordl_internals::il2cpp_reference_type T>
class System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<T>;
}
namespace System::Buffers {
template<>
class System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<char16_t>;
}
namespace System::Buffers {
template<>
class System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<int32_t>;
}
namespace System::Buffers {
template<>
class System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<uint8_t>;
}
namespace System::Buffers {
template<::cordl_internals::il2cpp_reference_type T>
class System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<T>;
}
namespace System::Buffers {
template<>
class System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<char16_t>;
}
namespace System::Buffers {
template<>
class System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<int32_t>;
}
namespace System::Buffers {
template<>
class System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<uint8_t>;
}
namespace System::Buffers {
template<::cordl_internals::il2cpp_reference_type T>
class TlsOverPerCoreLockedStacksArrayPool_1<T>;
}
namespace System::Buffers {
template<>
class TlsOverPerCoreLockedStacksArrayPool_1<char16_t>;
}
namespace System::Buffers {
template<>
class TlsOverPerCoreLockedStacksArrayPool_1<int32_t>;
}
namespace System::Buffers {
template<>
class TlsOverPerCoreLockedStacksArrayPool_1<uint8_t>;
}
// Type: ::MemoryPressure
namespace System::Buffers {
// cpp template
template<typename T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3871))
// CS Name: System.Buffers.TlsOverPerCoreLockedStacksArrayPool`1::MemoryPressure
struct CORDL_TYPE System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure(int32_t value__) noexcept;


                    constexpr System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure(System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure const&) = default;
                    constexpr System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure(System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure&&) = default;
                    constexpr System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure& operator=(System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure& operator=(System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure_Unwrapped : int32_t {
__Low = 0,
__Medium = 1,
__High = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure_Unwrapped () const noexcept {
return std::bit_cast<__System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Low offset 0
static System::Buffers::System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<T> const Low;

/// @brief Field Medium offset 0
static System::Buffers::System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<T> const Medium;

/// @brief Field High offset 0
static System::Buffers::System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<T> const High;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Buffers
// Type: ::PerCoreLockedStacks
// Type: ::LockedStack
// Type: System.Buffers::TlsOverPerCoreLockedStacksArrayPool`1
// Type: ::PerCoreLockedStacks
namespace System::Buffers {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3872))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3872), inst: 2 })
// CS Name: System.Buffers.TlsOverPerCoreLockedStacksArrayPool`1::PerCoreLockedStacks
class CORDL_TYPE System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks", modifiers: " const&", def_value: None }]
constexpr System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks(System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks", modifiers: "&&", def_value: None }]
constexpr System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks(System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks& operator=(System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks&& o) noexcept = default;
  constexpr System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks& operator=(System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks const& o) noexcept = default;
                


// Fields

 ::ArrayW<System::Buffers::System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<T>> __declspec(property(get=__get__perCoreStacks, put=__set__perCoreStacks))  _perCoreStacks;

constexpr void __set__perCoreStacks(::ArrayW<System::Buffers::System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<T>> value) ;

constexpr ::ArrayW<System::Buffers::System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<T>> __get__perCoreStacks() const;


// Methods

// Ctor Parameters []
explicit System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method TryPush addr 0x0 size 0xffffffffffffffff virtual false final false
 void TryPush(::ArrayW<T> array) ;

/// @brief Method TryPop addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<T> TryPop() ;

/// @brief Method Trim addr 0x0 size 0xffffffffffffffff virtual false final false
 bool Trim(uint32_t tickCount, int32_t id, System::Buffers::System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<T> pressure, ::ArrayW<int32_t> bucketSizes) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Buffers
// Type: ::PerCoreLockedStacks
namespace System::Buffers {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3872))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3872), inst: 92 })
// CS Name: System.Buffers.TlsOverPerCoreLockedStacksArrayPool`1::PerCoreLockedStacks
class CORDL_TYPE System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<int32_t> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks", modifiers: " const&", def_value: None }]
constexpr System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks(System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks", modifiers: "&&", def_value: None }]
constexpr System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks(System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks& operator=(System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks&& o) noexcept = default;
  constexpr System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks& operator=(System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks const& o) noexcept = default;
                


// Fields

 ::ArrayW<System::Buffers::System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<int32_t>> __declspec(property(get=__get__perCoreStacks, put=__set__perCoreStacks))  _perCoreStacks;

constexpr void __set__perCoreStacks(::ArrayW<System::Buffers::System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<int32_t>> value) ;

constexpr ::ArrayW<System::Buffers::System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<int32_t>> __get__perCoreStacks() const;


// Methods

// Ctor Parameters []
explicit System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method TryPush addr 0x0 size 0xffffffffffffffff virtual false final false
 void TryPush(::ArrayW<int32_t> array) ;

/// @brief Method TryPop addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<int32_t> TryPop() ;

/// @brief Method Trim addr 0x0 size 0xffffffffffffffff virtual false final false
 bool Trim(uint32_t tickCount, int32_t id, System::Buffers::System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<int32_t> pressure, ::ArrayW<int32_t> bucketSizes) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Buffers
// Type: ::PerCoreLockedStacks
namespace System::Buffers {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3872))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3872), inst: 279 })
// CS Name: System.Buffers.TlsOverPerCoreLockedStacksArrayPool`1::PerCoreLockedStacks
class CORDL_TYPE System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<char16_t> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks", modifiers: " const&", def_value: None }]
constexpr System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks(System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks", modifiers: "&&", def_value: None }]
constexpr System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks(System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks& operator=(System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks&& o) noexcept = default;
  constexpr System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks& operator=(System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks const& o) noexcept = default;
                


// Fields

 ::ArrayW<System::Buffers::System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<char16_t>> __declspec(property(get=__get__perCoreStacks, put=__set__perCoreStacks))  _perCoreStacks;

constexpr void __set__perCoreStacks(::ArrayW<System::Buffers::System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<char16_t>> value) ;

constexpr ::ArrayW<System::Buffers::System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<char16_t>> __get__perCoreStacks() const;


// Methods

// Ctor Parameters []
explicit System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method TryPush addr 0x0 size 0xffffffffffffffff virtual false final false
 void TryPush(::ArrayW<char16_t> array) ;

/// @brief Method TryPop addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<char16_t> TryPop() ;

/// @brief Method Trim addr 0x0 size 0xffffffffffffffff virtual false final false
 bool Trim(uint32_t tickCount, int32_t id, System::Buffers::System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<char16_t> pressure, ::ArrayW<int32_t> bucketSizes) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Buffers
// Type: ::PerCoreLockedStacks
namespace System::Buffers {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3872))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3872), inst: 717 })
// CS Name: System.Buffers.TlsOverPerCoreLockedStacksArrayPool`1::PerCoreLockedStacks
class CORDL_TYPE System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<uint8_t> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks", modifiers: " const&", def_value: None }]
constexpr System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks(System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks", modifiers: "&&", def_value: None }]
constexpr System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks(System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks& operator=(System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks&& o) noexcept = default;
  constexpr System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks& operator=(System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks const& o) noexcept = default;
                


// Fields

 ::ArrayW<System::Buffers::System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<uint8_t>> __declspec(property(get=__get__perCoreStacks, put=__set__perCoreStacks))  _perCoreStacks;

constexpr void __set__perCoreStacks(::ArrayW<System::Buffers::System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<uint8_t>> value) ;

constexpr ::ArrayW<System::Buffers::System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<uint8_t>> __get__perCoreStacks() const;


// Methods

// Ctor Parameters []
explicit System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method TryPush addr 0x0 size 0xffffffffffffffff virtual false final false
 void TryPush(::ArrayW<uint8_t> array) ;

/// @brief Method TryPop addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<uint8_t> TryPop() ;

/// @brief Method Trim addr 0x0 size 0xffffffffffffffff virtual false final false
 bool Trim(uint32_t tickCount, int32_t id, System::Buffers::System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<uint8_t> pressure, ::ArrayW<int32_t> bucketSizes) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Buffers
// Type: ::LockedStack
namespace System::Buffers {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3873))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3873), inst: 2 })
// CS Name: System.Buffers.TlsOverPerCoreLockedStacksArrayPool`1::LockedStack
class CORDL_TYPE System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack", modifiers: " const&", def_value: None }]
constexpr System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack(System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack", modifiers: "&&", def_value: None }]
constexpr System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack(System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack& operator=(System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack&& o) noexcept = default;
  constexpr System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack& operator=(System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack const& o) noexcept = default;
                


// Fields

 ::ArrayW<::ArrayW<T>> __declspec(property(get=__get__arrays, put=__set__arrays))  _arrays;

constexpr void __set__arrays(::ArrayW<::ArrayW<T>> value) ;

constexpr ::ArrayW<::ArrayW<T>> __get__arrays() const;

 int32_t __declspec(property(get=__get__count, put=__set__count))  _count;

constexpr void __set__count(int32_t value) ;

constexpr int32_t __get__count() const;

 uint32_t __declspec(property(get=__get__firstStackItemMS, put=__set__firstStackItemMS))  _firstStackItemMS;

constexpr void __set__firstStackItemMS(uint32_t value) ;

constexpr uint32_t __get__firstStackItemMS() const;


// Methods

/// @brief Method TryPush addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TryPush(::ArrayW<T> array) ;

/// @brief Method TryPop addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<T> TryPop() ;

/// @brief Method Trim addr 0x0 size 0xffffffffffffffff virtual false final false
 void Trim(uint32_t tickCount, int32_t id, System::Buffers::System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<T> pressure, int32_t bucketSize) ;

// Ctor Parameters []
explicit System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Buffers
// Type: ::LockedStack
namespace System::Buffers {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3873))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3873), inst: 92 })
// CS Name: System.Buffers.TlsOverPerCoreLockedStacksArrayPool`1::LockedStack
class CORDL_TYPE System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<int32_t> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack", modifiers: " const&", def_value: None }]
constexpr System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack(System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack", modifiers: "&&", def_value: None }]
constexpr System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack(System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack& operator=(System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack&& o) noexcept = default;
  constexpr System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack& operator=(System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack const& o) noexcept = default;
                


// Fields

 ::ArrayW<::ArrayW<int32_t>> __declspec(property(get=__get__arrays, put=__set__arrays))  _arrays;

constexpr void __set__arrays(::ArrayW<::ArrayW<int32_t>> value) ;

constexpr ::ArrayW<::ArrayW<int32_t>> __get__arrays() const;

 int32_t __declspec(property(get=__get__count, put=__set__count))  _count;

constexpr void __set__count(int32_t value) ;

constexpr int32_t __get__count() const;

 uint32_t __declspec(property(get=__get__firstStackItemMS, put=__set__firstStackItemMS))  _firstStackItemMS;

constexpr void __set__firstStackItemMS(uint32_t value) ;

constexpr uint32_t __get__firstStackItemMS() const;


// Methods

/// @brief Method TryPush addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TryPush(::ArrayW<int32_t> array) ;

/// @brief Method TryPop addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<int32_t> TryPop() ;

/// @brief Method Trim addr 0x0 size 0xffffffffffffffff virtual false final false
 void Trim(uint32_t tickCount, int32_t id, System::Buffers::System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<int32_t> pressure, int32_t bucketSize) ;

// Ctor Parameters []
explicit System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Buffers
// Type: ::LockedStack
namespace System::Buffers {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3873))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3873), inst: 279 })
// CS Name: System.Buffers.TlsOverPerCoreLockedStacksArrayPool`1::LockedStack
class CORDL_TYPE System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<char16_t> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack", modifiers: " const&", def_value: None }]
constexpr System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack(System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack", modifiers: "&&", def_value: None }]
constexpr System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack(System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack& operator=(System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack&& o) noexcept = default;
  constexpr System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack& operator=(System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack const& o) noexcept = default;
                


// Fields

 ::ArrayW<::ArrayW<char16_t>> __declspec(property(get=__get__arrays, put=__set__arrays))  _arrays;

constexpr void __set__arrays(::ArrayW<::ArrayW<char16_t>> value) ;

constexpr ::ArrayW<::ArrayW<char16_t>> __get__arrays() const;

 int32_t __declspec(property(get=__get__count, put=__set__count))  _count;

constexpr void __set__count(int32_t value) ;

constexpr int32_t __get__count() const;

 uint32_t __declspec(property(get=__get__firstStackItemMS, put=__set__firstStackItemMS))  _firstStackItemMS;

constexpr void __set__firstStackItemMS(uint32_t value) ;

constexpr uint32_t __get__firstStackItemMS() const;


// Methods

/// @brief Method TryPush addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TryPush(::ArrayW<char16_t> array) ;

/// @brief Method TryPop addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<char16_t> TryPop() ;

/// @brief Method Trim addr 0x0 size 0xffffffffffffffff virtual false final false
 void Trim(uint32_t tickCount, int32_t id, System::Buffers::System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<char16_t> pressure, int32_t bucketSize) ;

// Ctor Parameters []
explicit System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Buffers
// Type: ::LockedStack
namespace System::Buffers {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3873))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3873), inst: 717 })
// CS Name: System.Buffers.TlsOverPerCoreLockedStacksArrayPool`1::LockedStack
class CORDL_TYPE System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<uint8_t> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack", modifiers: " const&", def_value: None }]
constexpr System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack(System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack", modifiers: "&&", def_value: None }]
constexpr System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack(System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack& operator=(System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack&& o) noexcept = default;
  constexpr System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack& operator=(System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack const& o) noexcept = default;
                


// Fields

 ::ArrayW<::ArrayW<uint8_t>> __declspec(property(get=__get__arrays, put=__set__arrays))  _arrays;

constexpr void __set__arrays(::ArrayW<::ArrayW<uint8_t>> value) ;

constexpr ::ArrayW<::ArrayW<uint8_t>> __get__arrays() const;

 int32_t __declspec(property(get=__get__count, put=__set__count))  _count;

constexpr void __set__count(int32_t value) ;

constexpr int32_t __get__count() const;

 uint32_t __declspec(property(get=__get__firstStackItemMS, put=__set__firstStackItemMS))  _firstStackItemMS;

constexpr void __set__firstStackItemMS(uint32_t value) ;

constexpr uint32_t __get__firstStackItemMS() const;


// Methods

/// @brief Method TryPush addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TryPush(::ArrayW<uint8_t> array) ;

/// @brief Method TryPop addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<uint8_t> TryPop() ;

/// @brief Method Trim addr 0x0 size 0xffffffffffffffff virtual false final false
 void Trim(uint32_t tickCount, int32_t id, System::Buffers::System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<uint8_t> pressure, int32_t bucketSize) ;

// Ctor Parameters []
explicit System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Buffers
// Type: System.Buffers::TlsOverPerCoreLockedStacksArrayPool`1
namespace System::Buffers {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3865), inst: 744 }), TypeDefinitionIndex(TypeDefinitionIndex(3865)), TypeDefinitionIndex(TypeDefinitionIndex(3874))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3874), inst: 2 })
// CS Name: System.Buffers.TlsOverPerCoreLockedStacksArrayPool`1
class CORDL_TYPE TlsOverPerCoreLockedStacksArrayPool_1<T> : public System::Buffers::ArrayPool_1<T> {
public:
// Declarations
using LockedStack = System::Buffers::System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<T>;

using PerCoreLockedStacks = System::Buffers::System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<T>;

using MemoryPressure = System::Buffers::System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<T>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~TlsOverPerCoreLockedStacksArrayPool_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "TlsOverPerCoreLockedStacksArrayPool_1", modifiers: " const&", def_value: None }]
constexpr TlsOverPerCoreLockedStacksArrayPool_1(TlsOverPerCoreLockedStacksArrayPool_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TlsOverPerCoreLockedStacksArrayPool_1", modifiers: "&&", def_value: None }]
constexpr TlsOverPerCoreLockedStacksArrayPool_1(TlsOverPerCoreLockedStacksArrayPool_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TlsOverPerCoreLockedStacksArrayPool_1(void* ptr) noexcept : System::Buffers::ArrayPool_1<T>(ptr) {
}


  constexpr TlsOverPerCoreLockedStacksArrayPool_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TlsOverPerCoreLockedStacksArrayPool_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TlsOverPerCoreLockedStacksArrayPool_1& operator=(TlsOverPerCoreLockedStacksArrayPool_1&& o) noexcept = default;
  constexpr TlsOverPerCoreLockedStacksArrayPool_1& operator=(TlsOverPerCoreLockedStacksArrayPool_1 const& o) noexcept = default;
                


// Fields

 ::ArrayW<int32_t> __declspec(property(get=__get__bucketArraySizes, put=__set__bucketArraySizes))  _bucketArraySizes;

constexpr void __set__bucketArraySizes(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get__bucketArraySizes() const;

 ::ArrayW<System::Buffers::System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<T>> __declspec(property(get=__get__buckets, put=__set__buckets))  _buckets;

constexpr void __set__buckets(::ArrayW<System::Buffers::System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<T>> value) ;

constexpr ::ArrayW<System::Buffers::System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<T>> __get__buckets() const;

static ::ArrayW<::ArrayW<T>> __declspec(property(get=__get_t_tlsBuckets, put=__set_t_tlsBuckets))  t_tlsBuckets;

static void __set_t_tlsBuckets(::ArrayW<::ArrayW<T>> value) ;

static ::ArrayW<::ArrayW<T>> __get_t_tlsBuckets() ;

 int32_t __declspec(property(get=__get__callbackCreated, put=__set__callbackCreated))  _callbackCreated;

constexpr void __set__callbackCreated(int32_t value) ;

constexpr int32_t __get__callbackCreated() const;

static bool __declspec(property(get=__get_s_trimBuffers, put=__set_s_trimBuffers))  s_trimBuffers;

static void __set_s_trimBuffers(bool value) ;

static bool __get_s_trimBuffers() ;

static System::Runtime::CompilerServices::ConditionalWeakTable_2<::ArrayW<::ArrayW<T>>,::bs_hook::Il2CppWrapperType> __declspec(property(get=__get_s_allTlsBuckets, put=__set_s_allTlsBuckets))  s_allTlsBuckets;

static void __set_s_allTlsBuckets(System::Runtime::CompilerServices::ConditionalWeakTable_2<::ArrayW<::ArrayW<T>>,::bs_hook::Il2CppWrapperType> value) ;

static System::Runtime::CompilerServices::ConditionalWeakTable_2<::ArrayW<::ArrayW<T>>,::bs_hook::Il2CppWrapperType> __get_s_allTlsBuckets() ;


// Properties

 int32_t __declspec(property(get=get_Id))  Id;


// Methods

// Ctor Parameters []
explicit TlsOverPerCoreLockedStacksArrayPool_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method CreatePerCoreLockedStacks addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Buffers::System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<T> CreatePerCoreLockedStacks(int32_t bucketIndex) ;

/// @brief Method get_Id addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Id() ;

/// @brief Method Rent addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<T> Rent(int32_t minimumLength) ;

/// @brief Method Return addr 0x0 size 0xffffffffffffffff virtual true final false
 void Return(::ArrayW<T> array, bool clearArray) ;

/// @brief Method Trim addr 0x0 size 0xffffffffffffffff virtual false final false
 bool Trim() ;

/// @brief Method Gen2GcCallbackFunc addr 0x0 size 0xffffffffffffffff virtual false final false
static bool Gen2GcCallbackFunc(::bs_hook::Il2CppWrapperType target) ;

/// @brief Method GetMemoryPressure addr 0x0 size 0xffffffffffffffff virtual false final false
static System::Buffers::System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<T> GetMemoryPressure() ;

/// @brief Method GetTrimBuffers addr 0x0 size 0xffffffffffffffff virtual false final false
static bool GetTrimBuffers() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Buffers
// Type: System.Buffers::TlsOverPerCoreLockedStacksArrayPool`1
namespace System::Buffers {
// cpp template
template<>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3865), inst: 744 }), TypeDefinitionIndex(TypeDefinitionIndex(3874)), TypeDefinitionIndex(TypeDefinitionIndex(3865))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3874), inst: 92 })
// CS Name: System.Buffers.TlsOverPerCoreLockedStacksArrayPool`1
class CORDL_TYPE TlsOverPerCoreLockedStacksArrayPool_1<int32_t> : public System::Buffers::ArrayPool_1<int32_t> {
public:
// Declarations
using LockedStack = System::Buffers::System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<int32_t>;

using PerCoreLockedStacks = System::Buffers::System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<int32_t>;

using MemoryPressure = System::Buffers::System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<int32_t>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~TlsOverPerCoreLockedStacksArrayPool_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "TlsOverPerCoreLockedStacksArrayPool_1", modifiers: " const&", def_value: None }]
constexpr TlsOverPerCoreLockedStacksArrayPool_1(TlsOverPerCoreLockedStacksArrayPool_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TlsOverPerCoreLockedStacksArrayPool_1", modifiers: "&&", def_value: None }]
constexpr TlsOverPerCoreLockedStacksArrayPool_1(TlsOverPerCoreLockedStacksArrayPool_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TlsOverPerCoreLockedStacksArrayPool_1(void* ptr) noexcept : System::Buffers::ArrayPool_1<int32_t>(ptr) {
}


  constexpr TlsOverPerCoreLockedStacksArrayPool_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TlsOverPerCoreLockedStacksArrayPool_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TlsOverPerCoreLockedStacksArrayPool_1& operator=(TlsOverPerCoreLockedStacksArrayPool_1&& o) noexcept = default;
  constexpr TlsOverPerCoreLockedStacksArrayPool_1& operator=(TlsOverPerCoreLockedStacksArrayPool_1 const& o) noexcept = default;
                


// Fields

 ::ArrayW<int32_t> __declspec(property(get=__get__bucketArraySizes, put=__set__bucketArraySizes))  _bucketArraySizes;

constexpr void __set__bucketArraySizes(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get__bucketArraySizes() const;

 ::ArrayW<System::Buffers::System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<int32_t>> __declspec(property(get=__get__buckets, put=__set__buckets))  _buckets;

constexpr void __set__buckets(::ArrayW<System::Buffers::System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<int32_t>> value) ;

constexpr ::ArrayW<System::Buffers::System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<int32_t>> __get__buckets() const;

static ::ArrayW<::ArrayW<int32_t>> __declspec(property(get=__get_t_tlsBuckets, put=__set_t_tlsBuckets))  t_tlsBuckets;

static void __set_t_tlsBuckets(::ArrayW<::ArrayW<int32_t>> value) ;

static ::ArrayW<::ArrayW<int32_t>> __get_t_tlsBuckets() ;

 int32_t __declspec(property(get=__get__callbackCreated, put=__set__callbackCreated))  _callbackCreated;

constexpr void __set__callbackCreated(int32_t value) ;

constexpr int32_t __get__callbackCreated() const;

static bool __declspec(property(get=__get_s_trimBuffers, put=__set_s_trimBuffers))  s_trimBuffers;

static void __set_s_trimBuffers(bool value) ;

static bool __get_s_trimBuffers() ;

static System::Runtime::CompilerServices::ConditionalWeakTable_2<::ArrayW<::ArrayW<int32_t>>,::bs_hook::Il2CppWrapperType> __declspec(property(get=__get_s_allTlsBuckets, put=__set_s_allTlsBuckets))  s_allTlsBuckets;

static void __set_s_allTlsBuckets(System::Runtime::CompilerServices::ConditionalWeakTable_2<::ArrayW<::ArrayW<int32_t>>,::bs_hook::Il2CppWrapperType> value) ;

static System::Runtime::CompilerServices::ConditionalWeakTable_2<::ArrayW<::ArrayW<int32_t>>,::bs_hook::Il2CppWrapperType> __get_s_allTlsBuckets() ;


// Properties

 int32_t __declspec(property(get=get_Id))  Id;


// Methods

// Ctor Parameters []
explicit TlsOverPerCoreLockedStacksArrayPool_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method CreatePerCoreLockedStacks addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Buffers::System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<int32_t> CreatePerCoreLockedStacks(int32_t bucketIndex) ;

/// @brief Method get_Id addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Id() ;

/// @brief Method Rent addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<int32_t> Rent(int32_t minimumLength) ;

/// @brief Method Return addr 0x0 size 0xffffffffffffffff virtual true final false
 void Return(::ArrayW<int32_t> array, bool clearArray) ;

/// @brief Method Trim addr 0x0 size 0xffffffffffffffff virtual false final false
 bool Trim() ;

/// @brief Method Gen2GcCallbackFunc addr 0x0 size 0xffffffffffffffff virtual false final false
static bool Gen2GcCallbackFunc(::bs_hook::Il2CppWrapperType target) ;

/// @brief Method GetMemoryPressure addr 0x0 size 0xffffffffffffffff virtual false final false
static System::Buffers::System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<int32_t> GetMemoryPressure() ;

/// @brief Method GetTrimBuffers addr 0x0 size 0xffffffffffffffff virtual false final false
static bool GetTrimBuffers() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Buffers
// Type: System.Buffers::TlsOverPerCoreLockedStacksArrayPool`1
namespace System::Buffers {
// cpp template
template<>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3865), inst: 744 }), TypeDefinitionIndex(TypeDefinitionIndex(3874)), TypeDefinitionIndex(TypeDefinitionIndex(3865))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3874), inst: 279 })
// CS Name: System.Buffers.TlsOverPerCoreLockedStacksArrayPool`1
class CORDL_TYPE TlsOverPerCoreLockedStacksArrayPool_1<char16_t> : public System::Buffers::ArrayPool_1<char16_t> {
public:
// Declarations
using LockedStack = System::Buffers::System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<char16_t>;

using PerCoreLockedStacks = System::Buffers::System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<char16_t>;

using MemoryPressure = System::Buffers::System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<char16_t>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~TlsOverPerCoreLockedStacksArrayPool_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "TlsOverPerCoreLockedStacksArrayPool_1", modifiers: " const&", def_value: None }]
constexpr TlsOverPerCoreLockedStacksArrayPool_1(TlsOverPerCoreLockedStacksArrayPool_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TlsOverPerCoreLockedStacksArrayPool_1", modifiers: "&&", def_value: None }]
constexpr TlsOverPerCoreLockedStacksArrayPool_1(TlsOverPerCoreLockedStacksArrayPool_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TlsOverPerCoreLockedStacksArrayPool_1(void* ptr) noexcept : System::Buffers::ArrayPool_1<char16_t>(ptr) {
}


  constexpr TlsOverPerCoreLockedStacksArrayPool_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TlsOverPerCoreLockedStacksArrayPool_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TlsOverPerCoreLockedStacksArrayPool_1& operator=(TlsOverPerCoreLockedStacksArrayPool_1&& o) noexcept = default;
  constexpr TlsOverPerCoreLockedStacksArrayPool_1& operator=(TlsOverPerCoreLockedStacksArrayPool_1 const& o) noexcept = default;
                


// Fields

 ::ArrayW<int32_t> __declspec(property(get=__get__bucketArraySizes, put=__set__bucketArraySizes))  _bucketArraySizes;

constexpr void __set__bucketArraySizes(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get__bucketArraySizes() const;

 ::ArrayW<System::Buffers::System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<char16_t>> __declspec(property(get=__get__buckets, put=__set__buckets))  _buckets;

constexpr void __set__buckets(::ArrayW<System::Buffers::System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<char16_t>> value) ;

constexpr ::ArrayW<System::Buffers::System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<char16_t>> __get__buckets() const;

static ::ArrayW<::ArrayW<char16_t>> __declspec(property(get=__get_t_tlsBuckets, put=__set_t_tlsBuckets))  t_tlsBuckets;

static void __set_t_tlsBuckets(::ArrayW<::ArrayW<char16_t>> value) ;

static ::ArrayW<::ArrayW<char16_t>> __get_t_tlsBuckets() ;

 int32_t __declspec(property(get=__get__callbackCreated, put=__set__callbackCreated))  _callbackCreated;

constexpr void __set__callbackCreated(int32_t value) ;

constexpr int32_t __get__callbackCreated() const;

static bool __declspec(property(get=__get_s_trimBuffers, put=__set_s_trimBuffers))  s_trimBuffers;

static void __set_s_trimBuffers(bool value) ;

static bool __get_s_trimBuffers() ;

static System::Runtime::CompilerServices::ConditionalWeakTable_2<::ArrayW<::ArrayW<char16_t>>,::bs_hook::Il2CppWrapperType> __declspec(property(get=__get_s_allTlsBuckets, put=__set_s_allTlsBuckets))  s_allTlsBuckets;

static void __set_s_allTlsBuckets(System::Runtime::CompilerServices::ConditionalWeakTable_2<::ArrayW<::ArrayW<char16_t>>,::bs_hook::Il2CppWrapperType> value) ;

static System::Runtime::CompilerServices::ConditionalWeakTable_2<::ArrayW<::ArrayW<char16_t>>,::bs_hook::Il2CppWrapperType> __get_s_allTlsBuckets() ;


// Properties

 int32_t __declspec(property(get=get_Id))  Id;


// Methods

// Ctor Parameters []
explicit TlsOverPerCoreLockedStacksArrayPool_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method CreatePerCoreLockedStacks addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Buffers::System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<char16_t> CreatePerCoreLockedStacks(int32_t bucketIndex) ;

/// @brief Method get_Id addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Id() ;

/// @brief Method Rent addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<char16_t> Rent(int32_t minimumLength) ;

/// @brief Method Return addr 0x0 size 0xffffffffffffffff virtual true final false
 void Return(::ArrayW<char16_t> array, bool clearArray) ;

/// @brief Method Trim addr 0x0 size 0xffffffffffffffff virtual false final false
 bool Trim() ;

/// @brief Method Gen2GcCallbackFunc addr 0x0 size 0xffffffffffffffff virtual false final false
static bool Gen2GcCallbackFunc(::bs_hook::Il2CppWrapperType target) ;

/// @brief Method GetMemoryPressure addr 0x0 size 0xffffffffffffffff virtual false final false
static System::Buffers::System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<char16_t> GetMemoryPressure() ;

/// @brief Method GetTrimBuffers addr 0x0 size 0xffffffffffffffff virtual false final false
static bool GetTrimBuffers() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Buffers
// Type: System.Buffers::TlsOverPerCoreLockedStacksArrayPool`1
namespace System::Buffers {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3865)), TypeDefinitionIndex(TypeDefinitionIndex(3874)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3865), inst: 744 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3874), inst: 717 })
// CS Name: System.Buffers.TlsOverPerCoreLockedStacksArrayPool`1
class CORDL_TYPE TlsOverPerCoreLockedStacksArrayPool_1<uint8_t> : public System::Buffers::ArrayPool_1<uint8_t> {
public:
// Declarations
using LockedStack = System::Buffers::System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack<uint8_t>;

using PerCoreLockedStacks = System::Buffers::System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<uint8_t>;

using MemoryPressure = System::Buffers::System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<uint8_t>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~TlsOverPerCoreLockedStacksArrayPool_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "TlsOverPerCoreLockedStacksArrayPool_1", modifiers: " const&", def_value: None }]
constexpr TlsOverPerCoreLockedStacksArrayPool_1(TlsOverPerCoreLockedStacksArrayPool_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TlsOverPerCoreLockedStacksArrayPool_1", modifiers: "&&", def_value: None }]
constexpr TlsOverPerCoreLockedStacksArrayPool_1(TlsOverPerCoreLockedStacksArrayPool_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TlsOverPerCoreLockedStacksArrayPool_1(void* ptr) noexcept : System::Buffers::ArrayPool_1<uint8_t>(ptr) {
}


  constexpr TlsOverPerCoreLockedStacksArrayPool_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TlsOverPerCoreLockedStacksArrayPool_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TlsOverPerCoreLockedStacksArrayPool_1& operator=(TlsOverPerCoreLockedStacksArrayPool_1&& o) noexcept = default;
  constexpr TlsOverPerCoreLockedStacksArrayPool_1& operator=(TlsOverPerCoreLockedStacksArrayPool_1 const& o) noexcept = default;
                


// Fields

 ::ArrayW<int32_t> __declspec(property(get=__get__bucketArraySizes, put=__set__bucketArraySizes))  _bucketArraySizes;

constexpr void __set__bucketArraySizes(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get__bucketArraySizes() const;

 ::ArrayW<System::Buffers::System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<uint8_t>> __declspec(property(get=__get__buckets, put=__set__buckets))  _buckets;

constexpr void __set__buckets(::ArrayW<System::Buffers::System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<uint8_t>> value) ;

constexpr ::ArrayW<System::Buffers::System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<uint8_t>> __get__buckets() const;

static ::ArrayW<::ArrayW<uint8_t>> __declspec(property(get=__get_t_tlsBuckets, put=__set_t_tlsBuckets))  t_tlsBuckets;

static void __set_t_tlsBuckets(::ArrayW<::ArrayW<uint8_t>> value) ;

static ::ArrayW<::ArrayW<uint8_t>> __get_t_tlsBuckets() ;

 int32_t __declspec(property(get=__get__callbackCreated, put=__set__callbackCreated))  _callbackCreated;

constexpr void __set__callbackCreated(int32_t value) ;

constexpr int32_t __get__callbackCreated() const;

static bool __declspec(property(get=__get_s_trimBuffers, put=__set_s_trimBuffers))  s_trimBuffers;

static void __set_s_trimBuffers(bool value) ;

static bool __get_s_trimBuffers() ;

static System::Runtime::CompilerServices::ConditionalWeakTable_2<::ArrayW<::ArrayW<uint8_t>>,::bs_hook::Il2CppWrapperType> __declspec(property(get=__get_s_allTlsBuckets, put=__set_s_allTlsBuckets))  s_allTlsBuckets;

static void __set_s_allTlsBuckets(System::Runtime::CompilerServices::ConditionalWeakTable_2<::ArrayW<::ArrayW<uint8_t>>,::bs_hook::Il2CppWrapperType> value) ;

static System::Runtime::CompilerServices::ConditionalWeakTable_2<::ArrayW<::ArrayW<uint8_t>>,::bs_hook::Il2CppWrapperType> __get_s_allTlsBuckets() ;


// Properties

 int32_t __declspec(property(get=get_Id))  Id;


// Methods

// Ctor Parameters []
explicit TlsOverPerCoreLockedStacksArrayPool_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method CreatePerCoreLockedStacks addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Buffers::System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks<uint8_t> CreatePerCoreLockedStacks(int32_t bucketIndex) ;

/// @brief Method get_Id addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Id() ;

/// @brief Method Rent addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<uint8_t> Rent(int32_t minimumLength) ;

/// @brief Method Return addr 0x0 size 0xffffffffffffffff virtual true final false
 void Return(::ArrayW<uint8_t> array, bool clearArray) ;

/// @brief Method Trim addr 0x0 size 0xffffffffffffffff virtual false final false
 bool Trim() ;

/// @brief Method Gen2GcCallbackFunc addr 0x0 size 0xffffffffffffffff virtual false final false
static bool Gen2GcCallbackFunc(::bs_hook::Il2CppWrapperType target) ;

/// @brief Method GetMemoryPressure addr 0x0 size 0xffffffffffffffff virtual false final false
static System::Buffers::System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure<uint8_t> GetMemoryPressure() ;

/// @brief Method GetTrimBuffers addr 0x0 size 0xffffffffffffffff virtual false final false
static bool GetTrimBuffers() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Buffers
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Buffers::System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__LockedStack, "System.Buffers", "TlsOverPerCoreLockedStacksArrayPool`1/LockedStack");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Buffers::System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__PerCoreLockedStacks, "System.Buffers", "TlsOverPerCoreLockedStacksArrayPool`1/PerCoreLockedStacks");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Buffers::TlsOverPerCoreLockedStacksArrayPool_1, "System.Buffers", "TlsOverPerCoreLockedStacksArrayPool`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(System::Buffers::System__Buffers__TlsOverPerCoreLockedStacksArrayPool_1__MemoryPressure, "System.Buffers", "TlsOverPerCoreLockedStacksArrayPool`1/MemoryPressure");
