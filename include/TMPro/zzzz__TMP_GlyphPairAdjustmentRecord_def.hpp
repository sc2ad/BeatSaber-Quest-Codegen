#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace TMPro {
struct FontFeatureLookupFlags;
}
namespace TMPro {
struct TMP_GlyphAdjustmentRecord;
}
namespace UnityEngine::TextCore::LowLevel {
struct GlyphPairAdjustmentRecord;
}
// Forward declare root types
namespace TMPro {
class TMP_GlyphPairAdjustmentRecord;
}
// Type: TMPro::TMP_GlyphPairAdjustmentRecord
namespace TMPro {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12316))
// CS Name: TMPro.TMP_GlyphPairAdjustmentRecord
class CORDL_TYPE TMP_GlyphPairAdjustmentRecord : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~TMP_GlyphPairAdjustmentRecord() = default;

// Ctor Parameters [CppParam { name: "", ty: "TMP_GlyphPairAdjustmentRecord", modifiers: " const&", def_value: None }]
constexpr TMP_GlyphPairAdjustmentRecord(TMP_GlyphPairAdjustmentRecord const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TMP_GlyphPairAdjustmentRecord", modifiers: "&&", def_value: None }]
constexpr TMP_GlyphPairAdjustmentRecord(TMP_GlyphPairAdjustmentRecord&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TMP_GlyphPairAdjustmentRecord(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TMP_GlyphPairAdjustmentRecord& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TMP_GlyphPairAdjustmentRecord& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TMP_GlyphPairAdjustmentRecord& operator=(TMP_GlyphPairAdjustmentRecord&& o) noexcept = default;
  constexpr TMP_GlyphPairAdjustmentRecord& operator=(TMP_GlyphPairAdjustmentRecord const& o) noexcept = default;
                


// Fields

 ::TMPro::TMP_GlyphAdjustmentRecord __declspec(property(get=__get_m_FirstAdjustmentRecord, put=__set_m_FirstAdjustmentRecord))  m_FirstAdjustmentRecord;

constexpr void __set_m_FirstAdjustmentRecord(::TMPro::TMP_GlyphAdjustmentRecord value) ;

constexpr ::TMPro::TMP_GlyphAdjustmentRecord __get_m_FirstAdjustmentRecord() const;

 ::TMPro::TMP_GlyphAdjustmentRecord __declspec(property(get=__get_m_SecondAdjustmentRecord, put=__set_m_SecondAdjustmentRecord))  m_SecondAdjustmentRecord;

constexpr void __set_m_SecondAdjustmentRecord(::TMPro::TMP_GlyphAdjustmentRecord value) ;

constexpr ::TMPro::TMP_GlyphAdjustmentRecord __get_m_SecondAdjustmentRecord() const;

 ::TMPro::FontFeatureLookupFlags __declspec(property(get=__get_m_FeatureLookupFlags, put=__set_m_FeatureLookupFlags))  m_FeatureLookupFlags;

constexpr void __set_m_FeatureLookupFlags(::TMPro::FontFeatureLookupFlags value) ;

constexpr ::TMPro::FontFeatureLookupFlags __get_m_FeatureLookupFlags() const;


// Properties

 ::TMPro::TMP_GlyphAdjustmentRecord __declspec(property(get=get_firstAdjustmentRecord, put=set_firstAdjustmentRecord))  firstAdjustmentRecord;

 ::TMPro::TMP_GlyphAdjustmentRecord __declspec(property(get=get_secondAdjustmentRecord, put=set_secondAdjustmentRecord))  secondAdjustmentRecord;

 ::TMPro::FontFeatureLookupFlags __declspec(property(get=get_featureLookupFlags, put=set_featureLookupFlags))  featureLookupFlags;


// Methods

/// @brief Method get_firstAdjustmentRecord addr 0x2a7a8c4 size 0x14 virtual false final false
 ::TMPro::TMP_GlyphAdjustmentRecord get_firstAdjustmentRecord() ;

/// @brief Method set_firstAdjustmentRecord addr 0x2a7a8d8 size 0x14 virtual false final false
 void set_firstAdjustmentRecord(::TMPro::TMP_GlyphAdjustmentRecord value) ;

/// @brief Method get_secondAdjustmentRecord addr 0x2a7a8ec size 0x14 virtual false final false
 ::TMPro::TMP_GlyphAdjustmentRecord get_secondAdjustmentRecord() ;

/// @brief Method set_secondAdjustmentRecord addr 0x2a7a900 size 0x14 virtual false final false
 void set_secondAdjustmentRecord(::TMPro::TMP_GlyphAdjustmentRecord value) ;

/// @brief Method get_featureLookupFlags addr 0x2a7a914 size 0x8 virtual false final false
 ::TMPro::FontFeatureLookupFlags get_featureLookupFlags() ;

/// @brief Method set_featureLookupFlags addr 0x2a7a91c size 0x8 virtual false final false
 void set_featureLookupFlags(::TMPro::FontFeatureLookupFlags value) ;

// Ctor Parameters [CppParam { name: "firstAdjustmentRecord", ty: "::TMPro::TMP_GlyphAdjustmentRecord", modifiers: "", def_value: None }, CppParam { name: "secondAdjustmentRecord", ty: "::TMPro::TMP_GlyphAdjustmentRecord", modifiers: "", def_value: None }]
explicit TMP_GlyphPairAdjustmentRecord(::TMPro::TMP_GlyphAdjustmentRecord firstAdjustmentRecord, ::TMPro::TMP_GlyphAdjustmentRecord secondAdjustmentRecord) ;

/// @brief Method .ctor addr 0x2a780b4 size 0x48 virtual false final false
 void _ctor(::TMPro::TMP_GlyphAdjustmentRecord firstAdjustmentRecord, ::TMPro::TMP_GlyphAdjustmentRecord secondAdjustmentRecord) ;

// Ctor Parameters [CppParam { name: "glyphPairAdjustmentRecord", ty: "::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord", modifiers: "", def_value: None }]
explicit TMP_GlyphPairAdjustmentRecord(::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord glyphPairAdjustmentRecord) ;

/// @brief Method .ctor addr 0x2a775a4 size 0xb4 virtual false final false
 void _ctor(::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord glyphPairAdjustmentRecord) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def TMPro
} // end anonymous namespace
NEED_NO_BOX(::TMPro::TMP_GlyphPairAdjustmentRecord);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_GlyphPairAdjustmentRecord, "TMPro", "TMP_GlyphPairAdjustmentRecord");
