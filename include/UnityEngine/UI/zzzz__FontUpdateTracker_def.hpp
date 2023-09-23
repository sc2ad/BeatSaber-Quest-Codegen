#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace UnityEngine::UI {
class Text;
}
namespace UnityEngine {
class Font;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace UnityEngine::UI {
class FontUpdateTracker;
}
// Type: UnityEngine.UI::FontUpdateTracker
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12980))
// CS Name: UnityEngine.UI.FontUpdateTracker
class CORDL_TYPE FontUpdateTracker : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~FontUpdateTracker() = default;

// Ctor Parameters [CppParam { name: "", ty: "FontUpdateTracker", modifiers: " const&", def_value: None }]
constexpr FontUpdateTracker(FontUpdateTracker const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FontUpdateTracker", modifiers: "&&", def_value: None }]
constexpr FontUpdateTracker(FontUpdateTracker&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FontUpdateTracker(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr FontUpdateTracker& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FontUpdateTracker& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FontUpdateTracker& operator=(FontUpdateTracker&& o) noexcept = default;
  constexpr FontUpdateTracker& operator=(FontUpdateTracker const& o) noexcept = default;
                


// Fields

static System::Collections::Generic::Dictionary_2<UnityEngine::Font,System::Collections::Generic::HashSet_1<UnityEngine::UI::Text>> __declspec(property(get=__get_m_Tracked, put=__set_m_Tracked))  m_Tracked;

static void __set_m_Tracked(System::Collections::Generic::Dictionary_2<UnityEngine::Font,System::Collections::Generic::HashSet_1<UnityEngine::UI::Text>> value) ;

static System::Collections::Generic::Dictionary_2<UnityEngine::Font,System::Collections::Generic::HashSet_1<UnityEngine::UI::Text>> __get_m_Tracked() ;


// Methods

/// @brief Method TrackText addr 0x2be2084 size 0x250 virtual false final false
static void TrackText(UnityEngine::UI::Text t) ;

/// @brief Method RebuildForFont addr 0x2be22d4 size 0x1a4 virtual false final false
static void RebuildForFont(UnityEngine::Font f) ;

/// @brief Method UntrackText addr 0x2be2478 size 0x20c virtual false final false
static void UntrackText(UnityEngine::UI::Text t) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
NEED_NO_BOX(UnityEngine::UI::FontUpdateTracker);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::FontUpdateTracker, "UnityEngine.UI", "FontUpdateTracker");
