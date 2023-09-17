#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstddef>
namespace {
namespace UnityEngine::TextCore::LowLevel {
struct GlyphValueRecord;
}
// Forward declare root types
namespace TMPro {
struct GlyphValueRecord_Legacy;
}
// Type: TMPro::GlyphValueRecord_Legacy
namespace TMPro {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12304))
// CS Name: TMPro.GlyphValueRecord_Legacy
struct CORDL_TYPE GlyphValueRecord_Legacy : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "xPlacement", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "yPlacement", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "xAdvance", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "yAdvance", ty: "float_t", modifiers: "", def_value: None }]
constexpr GlyphValueRecord_Legacy(float_t xPlacement, float_t yPlacement, float_t xAdvance, float_t yAdvance) noexcept;


                    constexpr GlyphValueRecord_Legacy(GlyphValueRecord_Legacy const&) = default;
                    constexpr GlyphValueRecord_Legacy(GlyphValueRecord_Legacy&&) = default;
                    constexpr GlyphValueRecord_Legacy& operator=(GlyphValueRecord_Legacy const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlyphValueRecord_Legacy& operator=(GlyphValueRecord_Legacy&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlyphValueRecord_Legacy(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 float_t __declspec(property(get=__get_xPlacement, put=__set_xPlacement))  xPlacement;

constexpr void __set_xPlacement(float_t value) ;

constexpr float_t __get_xPlacement() const;

 float_t __declspec(property(get=__get_yPlacement, put=__set_yPlacement))  yPlacement;

constexpr void __set_yPlacement(float_t value) ;

constexpr float_t __get_yPlacement() const;

 float_t __declspec(property(get=__get_xAdvance, put=__set_xAdvance))  xAdvance;

constexpr void __set_xAdvance(float_t value) ;

constexpr float_t __get_xAdvance() const;

 float_t __declspec(property(get=__get_yAdvance, put=__set_yAdvance))  yAdvance;

constexpr void __set_yAdvance(float_t value) ;

constexpr float_t __get_yAdvance() const;


// Methods

/// @brief Method .ctor addr 0x2a7897c size 0x60 virtual false final false
 void _ctor(::UnityEngine::TextCore::LowLevel::GlyphValueRecord valueRecord) ;

/// @brief Method op_Addition addr 0x2a789dc size 0x14 virtual false final false
static ::TMPro::GlyphValueRecord_Legacy op_Addition(::TMPro::GlyphValueRecord_Legacy a, ::TMPro::GlyphValueRecord_Legacy b) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def TMPro
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::TMPro::GlyphValueRecord_Legacy, "TMPro", "GlyphValueRecord_Legacy");
