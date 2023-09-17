#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace TMPro {
struct KerningPairKey;
}
// Type: TMPro::KerningPairKey
namespace TMPro {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12303))
// CS Name: TMPro.KerningPairKey
struct CORDL_TYPE KerningPairKey : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "ascii_Left", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "ascii_Right", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "key", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr KerningPairKey(uint32_t ascii_Left, uint32_t ascii_Right, uint32_t key) noexcept;


                    constexpr KerningPairKey(KerningPairKey const&) = default;
                    constexpr KerningPairKey(KerningPairKey&&) = default;
                    constexpr KerningPairKey& operator=(KerningPairKey const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr KerningPairKey& operator=(KerningPairKey&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0xc};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit KerningPairKey(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 uint32_t __declspec(property(get=__get_ascii_Left, put=__set_ascii_Left))  ascii_Left;

constexpr void __set_ascii_Left(uint32_t value) ;

constexpr uint32_t __get_ascii_Left() const;

 uint32_t __declspec(property(get=__get_ascii_Right, put=__set_ascii_Right))  ascii_Right;

constexpr void __set_ascii_Right(uint32_t value) ;

constexpr uint32_t __get_ascii_Right() const;

 uint32_t __declspec(property(get=__get_key, put=__set_key))  key;

constexpr void __set_key(uint32_t value) ;

constexpr uint32_t __get_key() const;


// Methods

/// @brief Method .ctor addr 0x2a7896c size 0x10 virtual false final false
 void _ctor(uint32_t ascii_left, uint32_t ascii_right) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def TMPro
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::TMPro::KerningPairKey, "TMPro", "KerningPairKey");
