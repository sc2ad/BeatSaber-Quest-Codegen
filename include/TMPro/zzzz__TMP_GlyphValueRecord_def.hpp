#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstddef>
namespace {
namespace TMPro {
struct GlyphValueRecord_Legacy;
}
namespace UnityEngine::TextCore::LowLevel {
struct GlyphValueRecord;
}
// Forward declare root types
namespace TMPro {
struct TMP_GlyphValueRecord;
}
// Type: TMPro::TMP_GlyphValueRecord
namespace TMPro {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12314))
// CS Name: TMPro.TMP_GlyphValueRecord
struct CORDL_TYPE TMP_GlyphValueRecord : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_XPlacement", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_YPlacement", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_XAdvance", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_YAdvance", ty: "float_t", modifiers: "", def_value: None }]
constexpr TMP_GlyphValueRecord(float_t m_XPlacement, float_t m_YPlacement, float_t m_XAdvance, float_t m_YAdvance) noexcept;


                    constexpr TMP_GlyphValueRecord(TMP_GlyphValueRecord const&) = default;
                    constexpr TMP_GlyphValueRecord(TMP_GlyphValueRecord&&) = default;
                    constexpr TMP_GlyphValueRecord& operator=(TMP_GlyphValueRecord const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TMP_GlyphValueRecord& operator=(TMP_GlyphValueRecord&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TMP_GlyphValueRecord(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 float_t __declspec(property(get=__get_m_XPlacement, put=__set_m_XPlacement))  m_XPlacement;

constexpr void __set_m_XPlacement(float_t value) ;

constexpr float_t __get_m_XPlacement() const;

 float_t __declspec(property(get=__get_m_YPlacement, put=__set_m_YPlacement))  m_YPlacement;

constexpr void __set_m_YPlacement(float_t value) ;

constexpr float_t __get_m_YPlacement() const;

 float_t __declspec(property(get=__get_m_XAdvance, put=__set_m_XAdvance))  m_XAdvance;

constexpr void __set_m_XAdvance(float_t value) ;

constexpr float_t __get_m_XAdvance() const;

 float_t __declspec(property(get=__get_m_YAdvance, put=__set_m_YAdvance))  m_YAdvance;

constexpr void __set_m_YAdvance(float_t value) ;

constexpr float_t __get_m_YAdvance() const;


// Properties

 float_t __declspec(property(get=get_xPlacement, put=set_xPlacement))  xPlacement;

 float_t __declspec(property(get=get_yPlacement, put=set_yPlacement))  yPlacement;

 float_t __declspec(property(get=get_xAdvance, put=set_xAdvance))  xAdvance;

 float_t __declspec(property(get=get_yAdvance, put=set_yAdvance))  yAdvance;


// Methods

/// @brief Method get_xPlacement addr 0x2a7a788 size 0x8 virtual false final false
 float_t get_xPlacement() ;

/// @brief Method set_xPlacement addr 0x2a7a790 size 0x8 virtual false final false
 void set_xPlacement(float_t value) ;

/// @brief Method get_yPlacement addr 0x2a7a798 size 0x8 virtual false final false
 float_t get_yPlacement() ;

/// @brief Method set_yPlacement addr 0x2a7a7a0 size 0x8 virtual false final false
 void set_yPlacement(float_t value) ;

/// @brief Method get_xAdvance addr 0x2a7a7a8 size 0x8 virtual false final false
 float_t get_xAdvance() ;

/// @brief Method set_xAdvance addr 0x2a7a7b0 size 0x8 virtual false final false
 void set_xAdvance(float_t value) ;

/// @brief Method get_yAdvance addr 0x2a7a7b8 size 0x8 virtual false final false
 float_t get_yAdvance() ;

/// @brief Method set_yAdvance addr 0x2a7a7c0 size 0x8 virtual false final false
 void set_yAdvance(float_t value) ;

/// @brief Method .ctor addr 0x2a78098 size 0xc virtual false final false
 void _ctor(float_t xPlacement, float_t yPlacement, float_t xAdvance, float_t yAdvance) ;

/// @brief Method .ctor addr 0x2a7a7c8 size 0xc virtual false final false
 void _ctor(::TMPro::GlyphValueRecord_Legacy valueRecord) ;

/// @brief Method .ctor addr 0x2a7a7d4 size 0x60 virtual false final false
 void _ctor(::UnityEngine::TextCore::LowLevel::GlyphValueRecord valueRecord) ;

/// @brief Method op_Addition addr 0x2a7a834 size 0x14 virtual false final false
static ::TMPro::TMP_GlyphValueRecord op_Addition(::TMPro::TMP_GlyphValueRecord a, ::TMPro::TMP_GlyphValueRecord b) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def TMPro
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_GlyphValueRecord, "TMPro", "TMP_GlyphValueRecord");
