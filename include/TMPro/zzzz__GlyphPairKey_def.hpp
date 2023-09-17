#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace TMPro {
class TMP_GlyphPairAdjustmentRecord;
}
// Forward declare root types
namespace TMPro {
struct GlyphPairKey;
}
// Type: TMPro::GlyphPairKey
namespace TMPro {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12317))
// CS Name: TMPro.GlyphPairKey
struct CORDL_TYPE GlyphPairKey : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "firstGlyphIndex", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "secondGlyphIndex", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "key", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr GlyphPairKey(uint32_t firstGlyphIndex, uint32_t secondGlyphIndex, uint32_t key) noexcept;


                    constexpr GlyphPairKey(GlyphPairKey const&) = default;
                    constexpr GlyphPairKey(GlyphPairKey&&) = default;
                    constexpr GlyphPairKey& operator=(GlyphPairKey const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlyphPairKey& operator=(GlyphPairKey&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0xc};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlyphPairKey(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 uint32_t __declspec(property(get=__get_firstGlyphIndex, put=__set_firstGlyphIndex))  firstGlyphIndex;

constexpr void __set_firstGlyphIndex(uint32_t value) ;

constexpr uint32_t __get_firstGlyphIndex() const;

 uint32_t __declspec(property(get=__get_secondGlyphIndex, put=__set_secondGlyphIndex))  secondGlyphIndex;

constexpr void __set_secondGlyphIndex(uint32_t value) ;

constexpr uint32_t __get_secondGlyphIndex() const;

 uint32_t __declspec(property(get=__get_key, put=__set_key))  key;

constexpr void __set_key(uint32_t value) ;

constexpr uint32_t __get_key() const;


// Methods

/// @brief Method .ctor addr 0x2a7a924 size 0x10 virtual false final false
 void _ctor(uint32_t firstGlyphIndex, uint32_t secondGlyphIndex) ;

/// @brief Method .ctor addr 0x2a722a8 size 0x28 virtual false final false
 void _ctor(::TMPro::TMP_GlyphPairAdjustmentRecord record) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def TMPro
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::TMPro::GlyphPairKey, "TMPro", "GlyphPairKey");
