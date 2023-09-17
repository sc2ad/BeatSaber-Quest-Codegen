#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace System {
struct HashCode;
}
// Type: System::HashCode
namespace System {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2407))
// CS Name: System.HashCode
struct CORDL_TYPE HashCode : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "_v1", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_v2", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_v3", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_v4", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_queue1", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_queue2", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_queue3", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_length", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr HashCode(uint32_t _v1, uint32_t _v2, uint32_t _v3, uint32_t _v4, uint32_t _queue1, uint32_t _queue2, uint32_t _queue3, uint32_t _length) noexcept;


                    constexpr HashCode(HashCode const&) = default;
                    constexpr HashCode(HashCode&&) = default;
                    constexpr HashCode& operator=(HashCode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HashCode& operator=(HashCode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HashCode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

static uint32_t __declspec(property(get=__get_s_seed, put=__set_s_seed))  s_seed;

static void __set_s_seed(uint32_t value) ;

static uint32_t __get_s_seed() ;

 uint32_t __declspec(property(get=__get__v1, put=__set__v1))  _v1;

constexpr void __set__v1(uint32_t value) ;

constexpr uint32_t __get__v1() const;

 uint32_t __declspec(property(get=__get__v2, put=__set__v2))  _v2;

constexpr void __set__v2(uint32_t value) ;

constexpr uint32_t __get__v2() const;

 uint32_t __declspec(property(get=__get__v3, put=__set__v3))  _v3;

constexpr void __set__v3(uint32_t value) ;

constexpr uint32_t __get__v3() const;

 uint32_t __declspec(property(get=__get__v4, put=__set__v4))  _v4;

constexpr void __set__v4(uint32_t value) ;

constexpr uint32_t __get__v4() const;

 uint32_t __declspec(property(get=__get__queue1, put=__set__queue1))  _queue1;

constexpr void __set__queue1(uint32_t value) ;

constexpr uint32_t __get__queue1() const;

 uint32_t __declspec(property(get=__get__queue2, put=__set__queue2))  _queue2;

constexpr void __set__queue2(uint32_t value) ;

constexpr uint32_t __get__queue2() const;

 uint32_t __declspec(property(get=__get__queue3, put=__set__queue3))  _queue3;

constexpr void __set__queue3(uint32_t value) ;

constexpr uint32_t __get__queue3() const;

 uint32_t __declspec(property(get=__get__length, put=__set__length))  _length;

constexpr void __set__length(uint32_t value) ;

constexpr uint32_t __get__length() const;


// Methods

/// @brief Method GenerateGlobalSeed addr 0x243b7cc size 0x24 virtual false final false
static uint32_t GenerateGlobalSeed() ;

/// @brief Method Combine addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7>
static int32_t Combine(T1 value1, T2 value2, T3 value3, T4 value4, T5 value5, T6 value6, T7 value7) ;

/// @brief Method Rol addr 0x243b7f0 size 0xc virtual false final false
static uint32_t Rol(uint32_t value, int32_t count) ;

/// @brief Method Initialize addr 0x243b7fc size 0xb8 virtual false final false
static void Initialize(ByRef<uint32_t> v1, ByRef<uint32_t> v2, ByRef<uint32_t> v3, ByRef<uint32_t> v4) ;

/// @brief Method Round addr 0x243b8b4 size 0x78 virtual false final false
static uint32_t Round(uint32_t hash, uint32_t input) ;

/// @brief Method QueueRound addr 0x243b92c size 0x78 virtual false final false
static uint32_t QueueRound(uint32_t hash, uint32_t queuedValue) ;

/// @brief Method MixState addr 0x243b9a4 size 0x88 virtual false final false
static uint32_t MixState(uint32_t v1, uint32_t v2, uint32_t v3, uint32_t v4) ;

/// @brief Method MixFinal addr 0x243ba2c size 0x28 virtual false final false
static uint32_t MixFinal(uint32_t hash) ;

/// @brief Method GetHashCode addr 0x243ba54 size 0x4c virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Equals addr 0x243bac4 size 0x4c virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::HashCode, "System", "HashCode");
