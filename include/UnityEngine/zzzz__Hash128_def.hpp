#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace System {
class IComparable;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
template<typename T>
class IComparable_1;
}
// Forward declare root types
namespace UnityEngine {
struct Hash128;
}
// Type: UnityEngine::Hash128
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10202))
// CS Name: UnityEngine.Hash128
struct CORDL_TYPE Hash128 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::IComparable
constexpr operator  System::IComparable() const;

/// @brief Convert operator to System::IComparable_1<UnityEngine::Hash128>
constexpr operator  System::IComparable_1<UnityEngine::Hash128>() const;

/// @brief Convert operator to System::IEquatable_1<UnityEngine::Hash128>
constexpr operator  System::IEquatable_1<UnityEngine::Hash128>() const;

// Ctor Parameters [CppParam { name: "u64_0", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "u64_1", ty: "uint64_t", modifiers: "", def_value: None }]
constexpr Hash128(uint64_t u64_0, uint64_t u64_1) noexcept;


                    constexpr Hash128(Hash128 const&) = default;
                    constexpr Hash128(Hash128&&) = default;
                    constexpr Hash128& operator=(Hash128 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Hash128& operator=(Hash128&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Hash128(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 uint64_t __declspec(property(get=__get_u64_0, put=__set_u64_0))  u64_0;

constexpr void __set_u64_0(uint64_t value) ;

constexpr uint64_t __get_u64_0() const;

 uint64_t __declspec(property(get=__get_u64_1, put=__set_u64_1))  u64_1;

constexpr void __set_u64_1(uint64_t value) ;

constexpr uint64_t __get_u64_1() const;


// Properties

 bool __declspec(property(get=get_isValid))  isValid;


// Methods

/// @brief Method get_isValid addr 0x2b67598 size 0x20 virtual false final false
 bool get_isValid() ;

/// @brief Method CompareTo addr 0x2b675b8 size 0x38 virtual true final true
 int32_t CompareTo(UnityEngine::Hash128 rhs) ;

/// @brief Method ToString addr 0x2b6763c size 0xc virtual true final false
 ::StringW ToString() ;

/// @brief Method Parse addr 0x2b67688 size 0x54 virtual false final false
static UnityEngine::Hash128 Parse(::StringW hashString) ;

/// @brief Method Hash128ToStringImpl addr 0x2b67648 size 0x40 virtual false final false
static ::StringW Hash128ToStringImpl(UnityEngine::Hash128 hash) ;

/// @brief Method ComputeFromString addr 0x2b6775c size 0x44 virtual false final false
static void ComputeFromString(::StringW data, ByRef<UnityEngine::Hash128> hash) ;

/// @brief Method Compute addr 0x2b677a0 size 0x54 virtual false final false
static UnityEngine::Hash128 Compute(::StringW data) ;

/// @brief Method Equals addr 0x2b677f4 size 0x84 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Equals addr 0x2b67890 size 0x1c virtual true final true
 bool Equals(UnityEngine::Hash128 obj) ;

/// @brief Method GetHashCode addr 0x2b678ac size 0x34 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method CompareTo addr 0x2b678e0 size 0xa4 virtual true final true
 int32_t CompareTo(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method op_Equality addr 0x2b67878 size 0x18 virtual false final false
static bool op_Equality(UnityEngine::Hash128 hash1, UnityEngine::Hash128 hash2) ;

/// @brief Method op_LessThan addr 0x2b675f0 size 0x18 virtual false final false
static bool op_LessThan(UnityEngine::Hash128 x, UnityEngine::Hash128 y) ;

/// @brief Method op_GreaterThan addr 0x2b67608 size 0x34 virtual false final false
static bool op_GreaterThan(UnityEngine::Hash128 x, UnityEngine::Hash128 y) ;

/// @brief Method Parse_Injected addr 0x2b676dc size 0x44 virtual false final false
static void Parse_Injected(::StringW hashString, ByRef<UnityEngine::Hash128> ret) ;

/// @brief Method Hash128ToStringImpl_Injected addr 0x2b67720 size 0x3c virtual false final false
static ::StringW Hash128ToStringImpl_Injected(ByRef<UnityEngine::Hash128> hash) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Hash128, "UnityEngine", "Hash128");
