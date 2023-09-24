#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine::TextCore {
struct GlyphRect;
}
namespace UnityEngine::TextCore::LowLevel {
struct GlyphMarshallingStruct;
}
namespace UnityEngine::TextCore {
struct GlyphMetrics;
}
namespace UnityEngine::TextCore {
struct GlyphClassDefinitionType;
}
// Forward declare root types
namespace UnityEngine::TextCore {
class Glyph;
}
// Type: UnityEngine.TextCore::Glyph
namespace UnityEngine::TextCore {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15506))
// CS Name: UnityEngine.TextCore.Glyph
class CORDL_TYPE Glyph : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~Glyph() = default;

// Ctor Parameters [CppParam { name: "", ty: "Glyph", modifiers: " const&", def_value: None }]
constexpr Glyph(Glyph const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Glyph", modifiers: "&&", def_value: None }]
constexpr Glyph(Glyph&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Glyph(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Glyph& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Glyph& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Glyph& operator=(Glyph&& o) noexcept = default;
  constexpr Glyph& operator=(Glyph const& o) noexcept = default;
                


// Fields

 uint32_t __declspec(property(get=__get_m_Index, put=__set_m_Index))  m_Index;

constexpr void __set_m_Index(uint32_t value) ;

constexpr uint32_t __get_m_Index() const;

 UnityEngine::TextCore::GlyphMetrics __declspec(property(get=__get_m_Metrics, put=__set_m_Metrics))  m_Metrics;

constexpr void __set_m_Metrics(UnityEngine::TextCore::GlyphMetrics value) ;

constexpr UnityEngine::TextCore::GlyphMetrics __get_m_Metrics() const;

 UnityEngine::TextCore::GlyphRect __declspec(property(get=__get_m_GlyphRect, put=__set_m_GlyphRect))  m_GlyphRect;

constexpr void __set_m_GlyphRect(UnityEngine::TextCore::GlyphRect value) ;

constexpr UnityEngine::TextCore::GlyphRect __get_m_GlyphRect() const;

 float_t __declspec(property(get=__get_m_Scale, put=__set_m_Scale))  m_Scale;

constexpr void __set_m_Scale(float_t value) ;

constexpr float_t __get_m_Scale() const;

 int32_t __declspec(property(get=__get_m_AtlasIndex, put=__set_m_AtlasIndex))  m_AtlasIndex;

constexpr void __set_m_AtlasIndex(int32_t value) ;

constexpr int32_t __get_m_AtlasIndex() const;

 UnityEngine::TextCore::GlyphClassDefinitionType __declspec(property(get=__get_m_ClassDefinitionType, put=__set_m_ClassDefinitionType))  m_ClassDefinitionType;

constexpr void __set_m_ClassDefinitionType(UnityEngine::TextCore::GlyphClassDefinitionType value) ;

constexpr UnityEngine::TextCore::GlyphClassDefinitionType __get_m_ClassDefinitionType() const;


// Properties

 uint32_t __declspec(property(get=get_index, put=set_index))  index;

 UnityEngine::TextCore::GlyphMetrics __declspec(property(get=get_metrics, put=set_metrics))  metrics;

 UnityEngine::TextCore::GlyphRect __declspec(property(get=get_glyphRect, put=set_glyphRect))  glyphRect;

 float_t __declspec(property(get=get_scale, put=set_scale))  scale;

 int32_t __declspec(property(get=get_atlasIndex, put=set_atlasIndex))  atlasIndex;


// Methods

/// @brief Method get_index addr 0x2baa7fc size 0x8 virtual false final false
 uint32_t get_index() ;

/// @brief Method set_index addr 0x2baa804 size 0x8 virtual false final false
 void set_index(uint32_t value) ;

/// @brief Method get_metrics addr 0x2baa80c size 0x14 virtual false final false
 UnityEngine::TextCore::GlyphMetrics get_metrics() ;

/// @brief Method set_metrics addr 0x2baa820 size 0x14 virtual false final false
 void set_metrics(UnityEngine::TextCore::GlyphMetrics value) ;

/// @brief Method get_glyphRect addr 0x2baa834 size 0xc virtual false final false
 UnityEngine::TextCore::GlyphRect get_glyphRect() ;

/// @brief Method set_glyphRect addr 0x2baa840 size 0x8 virtual false final false
 void set_glyphRect(UnityEngine::TextCore::GlyphRect value) ;

/// @brief Method get_scale addr 0x2baa848 size 0x8 virtual false final false
 float_t get_scale() ;

/// @brief Method set_scale addr 0x2baa850 size 0x8 virtual false final false
 void set_scale(float_t value) ;

/// @brief Method get_atlasIndex addr 0x2baa858 size 0x8 virtual false final false
 int32_t get_atlasIndex() ;

/// @brief Method set_atlasIndex addr 0x2baa860 size 0x8 virtual false final false
 void set_atlasIndex(int32_t value) ;

static UnityEngine::TextCore::Glyph New_ctor() ;

/// @brief Method .ctor addr 0x2baa868 size 0x28 virtual false final false
 void _ctor() ;

static UnityEngine::TextCore::Glyph New_ctor(UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct glyphStruct) ;

/// @brief Method .ctor addr 0x2baa890 size 0x8c virtual false final false
 void _ctor(UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct glyphStruct) ;

static UnityEngine::TextCore::Glyph New_ctor(uint32_t index, UnityEngine::TextCore::GlyphMetrics metrics, UnityEngine::TextCore::GlyphRect glyphRect, float_t scale, int32_t atlasIndex) ;

/// @brief Method .ctor addr 0x2baa91c size 0x70 virtual false final false
 void _ctor(uint32_t index, UnityEngine::TextCore::GlyphMetrics metrics, UnityEngine::TextCore::GlyphRect glyphRect, float_t scale, int32_t atlasIndex) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::TextCore
NEED_NO_BOX(UnityEngine::TextCore::Glyph);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TextCore::Glyph, "UnityEngine.TextCore", "Glyph");
