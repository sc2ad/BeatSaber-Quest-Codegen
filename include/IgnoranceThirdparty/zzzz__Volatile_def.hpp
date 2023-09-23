#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace IgnoranceThirdparty {
class Volatile;
}
namespace IgnoranceThirdparty {
struct IgnoranceThirdparty__Volatile__PaddedLong;
}
// Type: ::PaddedLong
namespace IgnoranceThirdparty {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15251))
// CS Name: IgnoranceThirdparty.Volatile::PaddedLong
struct CORDL_TYPE IgnoranceThirdparty__Volatile__PaddedLong : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "_value", ty: "int64_t", modifiers: "", def_value: None }]
constexpr IgnoranceThirdparty__Volatile__PaddedLong(int64_t _value) noexcept;


                    constexpr IgnoranceThirdparty__Volatile__PaddedLong(IgnoranceThirdparty__Volatile__PaddedLong const&) = default;
                    constexpr IgnoranceThirdparty__Volatile__PaddedLong(IgnoranceThirdparty__Volatile__PaddedLong&&) = default;
                    constexpr IgnoranceThirdparty__Volatile__PaddedLong& operator=(IgnoranceThirdparty__Volatile__PaddedLong const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr IgnoranceThirdparty__Volatile__PaddedLong& operator=(IgnoranceThirdparty__Volatile__PaddedLong&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x80};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit IgnoranceThirdparty__Volatile__PaddedLong(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int64_t __declspec(property(get=__get__value, put=__set__value))  _value;

constexpr void __set__value(int64_t value) ;

constexpr int64_t __get__value() const;


// Methods

/// @brief Method .ctor addr 0x207c2bc size 0x8 virtual false final false
 void _ctor(int64_t value) ;

/// @brief Method ReadUnfenced addr 0x207c2c4 size 0x8 virtual false final false
 int64_t ReadUnfenced() ;

/// @brief Method ReadAcquireFence addr 0x207c2cc size 0x1c virtual false final false
 int64_t ReadAcquireFence() ;

/// @brief Method ReadFullFence addr 0x207c2e8 size 0x1c virtual false final false
 int64_t ReadFullFence() ;

/// @brief Method ReadCompilerOnlyFence addr 0x207c304 size 0x24 virtual false final false
 int64_t ReadCompilerOnlyFence() ;

/// @brief Method WriteReleaseFence addr 0x207c328 size 0x28 virtual false final false
 void WriteReleaseFence(int64_t newValue) ;

/// @brief Method WriteFullFence addr 0x207c350 size 0x28 virtual false final false
 void WriteFullFence(int64_t newValue) ;

/// @brief Method WriteCompilerOnlyFence addr 0x207c378 size 0x2c virtual false final false
 void WriteCompilerOnlyFence(int64_t newValue) ;

/// @brief Method WriteUnfenced addr 0x207c3a4 size 0x8 virtual false final false
 void WriteUnfenced(int64_t newValue) ;

/// @brief Method AtomicCompareExchange addr 0x207c3ac size 0x24 virtual false final false
 bool AtomicCompareExchange(int64_t newValue, int64_t comparand) ;

/// @brief Method AtomicExchange addr 0x207c3d0 size 0xc virtual false final false
 int64_t AtomicExchange(int64_t newValue) ;

/// @brief Method AtomicAddAndGet addr 0x207c3dc size 0xc virtual false final false
 int64_t AtomicAddAndGet(int64_t delta) ;

/// @brief Method AtomicIncrementAndGet addr 0x207c3e8 size 0xc virtual false final false
 int64_t AtomicIncrementAndGet() ;

/// @brief Method AtomicDecrementAndGet addr 0x207c3f4 size 0xc virtual false final false
 int64_t AtomicDecrementAndGet() ;

/// @brief Method ToString addr 0x207c400 size 0x34 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def IgnoranceThirdparty
// Type: IgnoranceThirdparty::Volatile
namespace IgnoranceThirdparty {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15252))
// CS Name: IgnoranceThirdparty.Volatile
class CORDL_TYPE Volatile : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using PaddedLong = IgnoranceThirdparty::IgnoranceThirdparty__Volatile__PaddedLong;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Volatile() = default;

// Ctor Parameters [CppParam { name: "", ty: "Volatile", modifiers: " const&", def_value: None }]
constexpr Volatile(Volatile const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Volatile", modifiers: "&&", def_value: None }]
constexpr Volatile(Volatile&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Volatile(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Volatile& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Volatile& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Volatile& operator=(Volatile&& o) noexcept = default;
  constexpr Volatile& operator=(Volatile const& o) noexcept = default;
                


// Fields

/// @brief Field CacheLineSize offset 0
static constexpr int32_t  CacheLineSize{64};

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def IgnoranceThirdparty
NEED_NO_BOX(IgnoranceThirdparty::Volatile);
DEFINE_IL2CPP_ARG_TYPE(IgnoranceThirdparty::Volatile, "IgnoranceThirdparty", "Volatile");
DEFINE_IL2CPP_ARG_TYPE(IgnoranceThirdparty::IgnoranceThirdparty__Volatile__PaddedLong, "IgnoranceThirdparty", "Volatile/PaddedLong");
