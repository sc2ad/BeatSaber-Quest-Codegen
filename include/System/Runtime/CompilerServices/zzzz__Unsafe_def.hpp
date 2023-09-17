#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Runtime::CompilerServices {
class Unsafe;
}
// Type: System.Runtime.CompilerServices::Unsafe
namespace System::Runtime::CompilerServices {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3416))
// CS Name: System.Runtime.CompilerServices.Unsafe
class CORDL_TYPE Unsafe : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Unsafe() = default;

// Ctor Parameters [CppParam { name: "", ty: "Unsafe", modifiers: " const&", def_value: None }]
constexpr Unsafe(Unsafe const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Unsafe", modifiers: "&&", def_value: None }]
constexpr Unsafe(Unsafe&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Unsafe(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Unsafe& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Unsafe& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Unsafe& operator=(Unsafe&& o) noexcept = default;
  constexpr Unsafe& operator=(Unsafe const& o) noexcept = default;
                


// Methods

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static ByRef<T> Add(ByRef<T> source, int32_t elementOffset) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static ByRef<T> Add(ByRef<T> source, ::cordl_internals::intptr_t elementOffset) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void* Add(void* source, int32_t elementOffset) ;

/// @brief Method AddByteOffset addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static ByRef<T> AddByteOffset(ByRef<T> source, ::cordl_internals::intptr_t byteOffset) ;

/// @brief Method AreSame addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static bool AreSame(ByRef<T> left, ByRef<T> right) ;

/// @brief Method As addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static T As(::bs_hook::Il2CppWrapperType o) ;

/// @brief Method As addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TFrom,typename TTo>
static ByRef<TTo> As(ByRef<TFrom> source) ;

/// @brief Method AsPointer addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void* AsPointer(ByRef<T> value) ;

/// @brief Method AsRef addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static ByRef<T> AsRef(void* source) ;

/// @brief Method AsRef addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static ByRef<T> AsRef(ByRef<T> source) ;

/// @brief Method InitBlockUnaligned addr 0x2370c9c size 0x8 virtual false final false
static void InitBlockUnaligned(ByRef<uint8_t> startAddress, uint8_t value, uint32_t byteCount) ;

/// @brief Method Read addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static T Read(void* source) ;

/// @brief Method ReadUnaligned addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static T ReadUnaligned(ByRef<uint8_t> source) ;

/// @brief Method SizeOf addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static int32_t SizeOf() ;

/// @brief Method WriteUnaligned addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void WriteUnaligned(ByRef<uint8_t> destination, T value) ;

/// @brief Method IsAddressLessThan addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static bool IsAddressLessThan(ByRef<T> left, ByRef<T> right) ;

/// @brief Method AddByteOffset addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static ByRef<T> AddByteOffset(ByRef<T> source, uint64_t byteOffset) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
} // end anonymous namespace
NEED_NO_BOX(::System::Runtime::CompilerServices::Unsafe);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::Unsafe, "System.Runtime.CompilerServices", "Unsafe");
