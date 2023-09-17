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
struct GlyphAdjustmentRecord;
}
namespace UnityEngine::TextCore::LowLevel {
struct FontFeatureLookupFlags;
}
// Forward declare root types
namespace UnityEngine::TextCore::LowLevel {
struct GlyphPairAdjustmentRecord;
}
// Type: UnityEngine.TextCore.LowLevel::GlyphPairAdjustmentRecord
namespace UnityEngine::TextCore::LowLevel {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15518))
// CS Name: UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord
struct CORDL_TYPE GlyphPairAdjustmentRecord : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::IEquatable_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>
constexpr operator  ::System::IEquatable_1<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>() const;

// Ctor Parameters [CppParam { name: "m_FirstAdjustmentRecord", ty: "::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord", modifiers: "", def_value: None }, CppParam { name: "m_SecondAdjustmentRecord", ty: "::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord", modifiers: "", def_value: None }, CppParam { name: "m_FeatureLookupFlags", ty: "::UnityEngine::TextCore::LowLevel::FontFeatureLookupFlags", modifiers: "", def_value: None }]
constexpr GlyphPairAdjustmentRecord(::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord m_FirstAdjustmentRecord, ::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord m_SecondAdjustmentRecord, ::UnityEngine::TextCore::LowLevel::FontFeatureLookupFlags m_FeatureLookupFlags) noexcept;


                    constexpr GlyphPairAdjustmentRecord(GlyphPairAdjustmentRecord const&) = default;
                    constexpr GlyphPairAdjustmentRecord(GlyphPairAdjustmentRecord&&) = default;
                    constexpr GlyphPairAdjustmentRecord& operator=(GlyphPairAdjustmentRecord const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlyphPairAdjustmentRecord& operator=(GlyphPairAdjustmentRecord&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x2c};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlyphPairAdjustmentRecord(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord __declspec(property(get=__get_m_FirstAdjustmentRecord, put=__set_m_FirstAdjustmentRecord))  m_FirstAdjustmentRecord;

constexpr void __set_m_FirstAdjustmentRecord(::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord value) ;

constexpr ::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord __get_m_FirstAdjustmentRecord() const;

 ::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord __declspec(property(get=__get_m_SecondAdjustmentRecord, put=__set_m_SecondAdjustmentRecord))  m_SecondAdjustmentRecord;

constexpr void __set_m_SecondAdjustmentRecord(::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord value) ;

constexpr ::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord __get_m_SecondAdjustmentRecord() const;

 ::UnityEngine::TextCore::LowLevel::FontFeatureLookupFlags __declspec(property(get=__get_m_FeatureLookupFlags, put=__set_m_FeatureLookupFlags))  m_FeatureLookupFlags;

constexpr void __set_m_FeatureLookupFlags(::UnityEngine::TextCore::LowLevel::FontFeatureLookupFlags value) ;

constexpr ::UnityEngine::TextCore::LowLevel::FontFeatureLookupFlags __get_m_FeatureLookupFlags() const;


// Properties

 ::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord __declspec(property(get=get_firstAdjustmentRecord))  firstAdjustmentRecord;

 ::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord __declspec(property(get=get_secondAdjustmentRecord))  secondAdjustmentRecord;


// Methods

/// @brief Method get_firstAdjustmentRecord addr 0x2baca64 size 0x14 virtual false final false
 ::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord get_firstAdjustmentRecord() ;

/// @brief Method get_secondAdjustmentRecord addr 0x2baca78 size 0x14 virtual false final false
 ::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord get_secondAdjustmentRecord() ;

/// @brief Method GetHashCode addr 0x2baca8c size 0x6c virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Equals addr 0x2bacaf8 size 0x80 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Equals addr 0x2bacb78 size 0xa4 virtual true final true
 bool Equals(::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord other) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::TextCore::LowLevel
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord, "UnityEngine.TextCore.LowLevel", "GlyphPairAdjustmentRecord");
