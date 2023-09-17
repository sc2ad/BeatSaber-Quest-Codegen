#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__GUILayoutEntry_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
namespace {
namespace UnityEngine {
class GUIContent;
}
namespace UnityEngine {
class GUIStyle;
}
namespace UnityEngine {
class GUILayoutOption;
}
// Forward declare root types
namespace UnityEngine {
class GUIWordWrapSizer;
}
// Type: UnityEngine::GUIWordWrapSizer
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14752))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14753))
// CS Name: UnityEngine.GUIWordWrapSizer
class CORDL_TYPE GUIWordWrapSizer : public ::UnityEngine::GUILayoutEntry {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~GUIWordWrapSizer() = default;

// Ctor Parameters [CppParam { name: "", ty: "GUIWordWrapSizer", modifiers: " const&", def_value: None }]
constexpr GUIWordWrapSizer(GUIWordWrapSizer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GUIWordWrapSizer", modifiers: "&&", def_value: None }]
constexpr GUIWordWrapSizer(GUIWordWrapSizer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GUIWordWrapSizer(void* ptr) noexcept : ::UnityEngine::GUILayoutEntry(ptr) {
}


  constexpr GUIWordWrapSizer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GUIWordWrapSizer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GUIWordWrapSizer& operator=(GUIWordWrapSizer&& o) noexcept = default;
  constexpr GUIWordWrapSizer& operator=(GUIWordWrapSizer const& o) noexcept = default;
                


// Fields

 ::UnityEngine::GUIContent __declspec(property(get=__get_m_Content, put=__set_m_Content))  m_Content;

constexpr void __set_m_Content(::UnityEngine::GUIContent value) ;

constexpr ::UnityEngine::GUIContent __get_m_Content() const;

 float_t __declspec(property(get=__get_m_ForcedMinHeight, put=__set_m_ForcedMinHeight))  m_ForcedMinHeight;

constexpr void __set_m_ForcedMinHeight(float_t value) ;

constexpr float_t __get_m_ForcedMinHeight() const;

 float_t __declspec(property(get=__get_m_ForcedMaxHeight, put=__set_m_ForcedMaxHeight))  m_ForcedMaxHeight;

constexpr void __set_m_ForcedMaxHeight(float_t value) ;

constexpr float_t __get_m_ForcedMaxHeight() const;


// Methods

// Ctor Parameters [CppParam { name: "style", ty: "::UnityEngine::GUIStyle", modifiers: "", def_value: None }, CppParam { name: "content", ty: "::UnityEngine::GUIContent", modifiers: "", def_value: None }, CppParam { name: "options", ty: "::ArrayW<::UnityEngine::GUILayoutOption>", modifiers: "", def_value: None }]
explicit GUIWordWrapSizer(::UnityEngine::GUIStyle style, ::UnityEngine::GUIContent content, ::ArrayW<::UnityEngine::GUILayoutOption> options) ;

/// @brief Method .ctor addr 0x2b83dec size 0xdc virtual false final false
 void _ctor(::UnityEngine::GUIStyle style, ::UnityEngine::GUIContent content, ::ArrayW<::UnityEngine::GUILayoutOption> options) ;

/// @brief Method CalcWidth addr 0x2b83f4c size 0x84 virtual true final false
 void CalcWidth() ;

/// @brief Method CalcHeight addr 0x2b83fd0 size 0x70 virtual true final false
 void CalcHeight() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::GUIWordWrapSizer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::GUIWordWrapSizer, "UnityEngine", "GUIWordWrapSizer");
