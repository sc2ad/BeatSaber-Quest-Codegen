#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine::TextCore::LowLevel {
struct GlyphAdjustmentRecord;
}
namespace TMPro {
struct TMP_GlyphValueRecord;
}
// Forward declare root types
namespace TMPro {
struct TMP_GlyphAdjustmentRecord;
}
// Type: TMPro::TMP_GlyphAdjustmentRecord
namespace TMPro {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12315))
// CS Name: TMPro.TMP_GlyphAdjustmentRecord
struct CORDL_TYPE TMP_GlyphAdjustmentRecord : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_GlyphIndex", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_GlyphValueRecord", ty: "::TMPro::TMP_GlyphValueRecord", modifiers: "", def_value: None }]
constexpr TMP_GlyphAdjustmentRecord(uint32_t m_GlyphIndex, ::TMPro::TMP_GlyphValueRecord m_GlyphValueRecord) noexcept;


                    constexpr TMP_GlyphAdjustmentRecord(TMP_GlyphAdjustmentRecord const&) = default;
                    constexpr TMP_GlyphAdjustmentRecord(TMP_GlyphAdjustmentRecord&&) = default;
                    constexpr TMP_GlyphAdjustmentRecord& operator=(TMP_GlyphAdjustmentRecord const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TMP_GlyphAdjustmentRecord& operator=(TMP_GlyphAdjustmentRecord&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x14};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TMP_GlyphAdjustmentRecord(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 uint32_t __declspec(property(get=__get_m_GlyphIndex, put=__set_m_GlyphIndex))  m_GlyphIndex;

constexpr void __set_m_GlyphIndex(uint32_t value) ;

constexpr uint32_t __get_m_GlyphIndex() const;

 ::TMPro::TMP_GlyphValueRecord __declspec(property(get=__get_m_GlyphValueRecord, put=__set_m_GlyphValueRecord))  m_GlyphValueRecord;

constexpr void __set_m_GlyphValueRecord(::TMPro::TMP_GlyphValueRecord value) ;

constexpr ::TMPro::TMP_GlyphValueRecord __get_m_GlyphValueRecord() const;


// Properties

 uint32_t __declspec(property(get=get_glyphIndex, put=set_glyphIndex))  glyphIndex;

 ::TMPro::TMP_GlyphValueRecord __declspec(property(get=get_glyphValueRecord, put=set_glyphValueRecord))  glyphValueRecord;


// Methods

/// @brief Method get_glyphIndex addr 0x2a7a848 size 0x8 virtual false final false
 uint32_t get_glyphIndex() ;

/// @brief Method set_glyphIndex addr 0x2a7a850 size 0x8 virtual false final false
 void set_glyphIndex(uint32_t value) ;

/// @brief Method get_glyphValueRecord addr 0x2a7a858 size 0xc virtual false final false
 ::TMPro::TMP_GlyphValueRecord get_glyphValueRecord() ;

/// @brief Method set_glyphValueRecord addr 0x2a7a864 size 0xc virtual false final false
 void set_glyphValueRecord(::TMPro::TMP_GlyphValueRecord value) ;

/// @brief Method .ctor addr 0x2a780a4 size 0x10 virtual false final false
 void _ctor(uint32_t glyphIndex, ::TMPro::TMP_GlyphValueRecord glyphValueRecord) ;

/// @brief Method .ctor addr 0x2a7a870 size 0x54 virtual false final false
 void _ctor(::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord adjustmentRecord) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def TMPro
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_GlyphAdjustmentRecord, "TMPro", "TMP_GlyphAdjustmentRecord");
