#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace System {
template<typename T>
class IEquatable_1;
}
namespace UnityEngine::TextCore::LowLevel {
struct GlyphValueRecord;
}
// Forward declare root types
namespace UnityEngine::TextCore::LowLevel {
struct GlyphAdjustmentRecord;
}
// Type: UnityEngine.TextCore.LowLevel::GlyphAdjustmentRecord
namespace UnityEngine::TextCore::LowLevel {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15517))
// CS Name: UnityEngine.TextCore.LowLevel.GlyphAdjustmentRecord
struct CORDL_TYPE GlyphAdjustmentRecord : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::IEquatable_1<::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord>
constexpr operator  ::System::IEquatable_1<::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord>() const;

// Ctor Parameters [CppParam { name: "m_GlyphIndex", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_GlyphValueRecord", ty: "::UnityEngine::TextCore::LowLevel::GlyphValueRecord", modifiers: "", def_value: None }]
constexpr GlyphAdjustmentRecord(uint32_t m_GlyphIndex, ::UnityEngine::TextCore::LowLevel::GlyphValueRecord m_GlyphValueRecord) noexcept;


                    constexpr GlyphAdjustmentRecord(GlyphAdjustmentRecord const&) = default;
                    constexpr GlyphAdjustmentRecord(GlyphAdjustmentRecord&&) = default;
                    constexpr GlyphAdjustmentRecord& operator=(GlyphAdjustmentRecord const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlyphAdjustmentRecord& operator=(GlyphAdjustmentRecord&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x14};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlyphAdjustmentRecord(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 uint32_t __declspec(property(get=__get_m_GlyphIndex, put=__set_m_GlyphIndex))  m_GlyphIndex;

constexpr void __set_m_GlyphIndex(uint32_t value) ;

constexpr uint32_t __get_m_GlyphIndex() const;

 ::UnityEngine::TextCore::LowLevel::GlyphValueRecord __declspec(property(get=__get_m_GlyphValueRecord, put=__set_m_GlyphValueRecord))  m_GlyphValueRecord;

constexpr void __set_m_GlyphValueRecord(::UnityEngine::TextCore::LowLevel::GlyphValueRecord value) ;

constexpr ::UnityEngine::TextCore::LowLevel::GlyphValueRecord __get_m_GlyphValueRecord() const;


// Properties

 uint32_t __declspec(property(get=get_glyphIndex))  glyphIndex;

 ::UnityEngine::TextCore::LowLevel::GlyphValueRecord __declspec(property(get=get_glyphValueRecord))  glyphValueRecord;


// Methods

/// @brief Method get_glyphIndex addr 0x2bac8c0 size 0x8 virtual false final false
 uint32_t get_glyphIndex() ;

/// @brief Method get_glyphValueRecord addr 0x2bac8c8 size 0xc virtual false final false
 ::UnityEngine::TextCore::LowLevel::GlyphValueRecord get_glyphValueRecord() ;

/// @brief Method GetHashCode addr 0x2bac8d4 size 0x6c virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Equals addr 0x2bac940 size 0x80 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Equals addr 0x2bac9c0 size 0xa4 virtual true final true
 bool Equals(::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord other) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::TextCore::LowLevel
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord, "UnityEngine.TextCore.LowLevel", "GlyphAdjustmentRecord");
