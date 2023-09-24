#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
class GUILayoutGroup;
}
namespace UnityEngine {
class UnityEngine__GUILayoutUtility__LayoutCache;
}
namespace UnityEngine {
class GUILayoutOption;
}
namespace UnityEngine {
class GUIContent;
}
namespace UnityEngine {
class GUIStyle;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngineInternal {
class GenericStack;
}
// Forward declare root types
namespace UnityEngine {
class GUILayoutUtility;
}
namespace UnityEngine {
class UnityEngine__GUILayoutUtility__LayoutCache;
}
// Type: ::LayoutCache
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14766))
// CS Name: UnityEngine.GUILayoutUtility::LayoutCache
class CORDL_TYPE UnityEngine__GUILayoutUtility__LayoutCache : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~UnityEngine__GUILayoutUtility__LayoutCache() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__GUILayoutUtility__LayoutCache", modifiers: " const&", def_value: None }]
constexpr UnityEngine__GUILayoutUtility__LayoutCache(UnityEngine__GUILayoutUtility__LayoutCache const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__GUILayoutUtility__LayoutCache", modifiers: "&&", def_value: None }]
constexpr UnityEngine__GUILayoutUtility__LayoutCache(UnityEngine__GUILayoutUtility__LayoutCache&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__GUILayoutUtility__LayoutCache(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__GUILayoutUtility__LayoutCache& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__GUILayoutUtility__LayoutCache& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__GUILayoutUtility__LayoutCache& operator=(UnityEngine__GUILayoutUtility__LayoutCache&& o) noexcept = default;
  constexpr UnityEngine__GUILayoutUtility__LayoutCache& operator=(UnityEngine__GUILayoutUtility__LayoutCache const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__id_k__BackingField, put=__set__id_k__BackingField))  _id_k__BackingField;

constexpr void __set__id_k__BackingField(int32_t value) ;

constexpr int32_t __get__id_k__BackingField() const;

 UnityEngine::GUILayoutGroup __declspec(property(get=__get_topLevel, put=__set_topLevel))  topLevel;

constexpr void __set_topLevel(UnityEngine::GUILayoutGroup value) ;

constexpr UnityEngine::GUILayoutGroup __get_topLevel() const;

 UnityEngineInternal::GenericStack __declspec(property(get=__get_layoutGroups, put=__set_layoutGroups))  layoutGroups;

constexpr void __set_layoutGroups(UnityEngineInternal::GenericStack value) ;

constexpr UnityEngineInternal::GenericStack __get_layoutGroups() const;

 UnityEngine::GUILayoutGroup __declspec(property(get=__get_windows, put=__set_windows))  windows;

constexpr void __set_windows(UnityEngine::GUILayoutGroup value) ;

constexpr UnityEngine::GUILayoutGroup __get_windows() const;


// Properties

 int32_t __declspec(property(put=set_id))  id;


// Methods

/// @brief Method set_id addr 0x2b8b068 size 0x8 virtual false final false
 void set_id(int32_t value) ;

static UnityEngine::UnityEngine__GUILayoutUtility__LayoutCache New_ctor(int32_t instanceID) ;

/// @brief Method .ctor addr 0x2b89b34 size 0xd8 virtual false final false
 void _ctor(int32_t instanceID) ;

/// @brief Method ResetCursor addr 0x2b8b070 size 0x2e0 virtual false final false
 void ResetCursor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
// Type: UnityEngine::GUILayoutUtility
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14767))
// CS Name: UnityEngine.GUILayoutUtility
class CORDL_TYPE GUILayoutUtility : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using LayoutCache = UnityEngine::UnityEngine__GUILayoutUtility__LayoutCache;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GUILayoutUtility() = default;

// Ctor Parameters [CppParam { name: "", ty: "GUILayoutUtility", modifiers: " const&", def_value: None }]
constexpr GUILayoutUtility(GUILayoutUtility const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GUILayoutUtility", modifiers: "&&", def_value: None }]
constexpr GUILayoutUtility(GUILayoutUtility&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GUILayoutUtility(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GUILayoutUtility& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GUILayoutUtility& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GUILayoutUtility& operator=(GUILayoutUtility&& o) noexcept = default;
  constexpr GUILayoutUtility& operator=(GUILayoutUtility const& o) noexcept = default;
                


// Fields

static System::Collections::Generic::Dictionary_2<int32_t,UnityEngine::UnityEngine__GUILayoutUtility__LayoutCache> __declspec(property(get=__get_s_StoredLayouts, put=__set_s_StoredLayouts))  s_StoredLayouts;

static void __set_s_StoredLayouts(System::Collections::Generic::Dictionary_2<int32_t,UnityEngine::UnityEngine__GUILayoutUtility__LayoutCache> value) ;

static System::Collections::Generic::Dictionary_2<int32_t,UnityEngine::UnityEngine__GUILayoutUtility__LayoutCache> __get_s_StoredLayouts() ;

static System::Collections::Generic::Dictionary_2<int32_t,UnityEngine::UnityEngine__GUILayoutUtility__LayoutCache> __declspec(property(get=__get_s_StoredWindows, put=__set_s_StoredWindows))  s_StoredWindows;

static void __set_s_StoredWindows(System::Collections::Generic::Dictionary_2<int32_t,UnityEngine::UnityEngine__GUILayoutUtility__LayoutCache> value) ;

static System::Collections::Generic::Dictionary_2<int32_t,UnityEngine::UnityEngine__GUILayoutUtility__LayoutCache> __get_s_StoredWindows() ;

static UnityEngine::UnityEngine__GUILayoutUtility__LayoutCache __declspec(property(get=__get_current, put=__set_current))  current;

static void __set_current(UnityEngine::UnityEngine__GUILayoutUtility__LayoutCache value) ;

static UnityEngine::UnityEngine__GUILayoutUtility__LayoutCache __get_current() ;

static UnityEngine::Rect __declspec(property(get=__get_kDummyRect, put=__set_kDummyRect))  kDummyRect;

static void __set_kDummyRect(UnityEngine::Rect value) ;

static UnityEngine::Rect __get_kDummyRect() ;


// Methods

/// @brief Method Internal_GetWindowRect addr 0x2b89990 size 0x90 virtual false final false
static UnityEngine::Rect Internal_GetWindowRect(int32_t windowID) ;

/// @brief Method Internal_MoveWindow addr 0x2b89a64 size 0x8c virtual false final false
static void Internal_MoveWindow(int32_t windowID, UnityEngine::Rect r) ;

/// @brief Method SelectIDList addr 0x2b8532c size 0x148 virtual false final false
static UnityEngine::UnityEngine__GUILayoutUtility__LayoutCache SelectIDList(int32_t instanceID, bool isWindow) ;

/// @brief Method Begin addr 0x2b89c0c size 0x1cc virtual false final false
static void Begin(int32_t instanceID) ;

/// @brief Method BeginContainer addr 0x2b89ef0 size 0x15c virtual false final false
static void BeginContainer(UnityEngine::UnityEngine__GUILayoutUtility__LayoutCache cache) ;

/// @brief Method BeginWindow addr 0x2b855ac size 0x278 virtual false final false
static void BeginWindow(int32_t windowID, UnityEngine::GUIStyle style, ::ArrayW<UnityEngine::GUILayoutOption> options) ;

/// @brief Method Layout addr 0x2b85824 size 0x1f8 virtual false final false
static void Layout() ;

/// @brief Method LayoutFromEditorWindow addr 0x2b8a400 size 0x1ec virtual false final false
static void LayoutFromEditorWindow() ;

/// @brief Method LayoutFromContainer addr 0x2b8a5ec size 0x188 virtual false final false
static void LayoutFromContainer(float_t w, float_t h) ;

/// @brief Method LayoutFreeGroup addr 0x2b8a074 size 0x1bc virtual false final false
static void LayoutFreeGroup(UnityEngine::GUILayoutGroup toplevel) ;

/// @brief Method LayoutSingleGroup addr 0x2b8a230 size 0x1d0 virtual false final false
static void LayoutSingleGroup(UnityEngine::GUILayoutGroup i) ;

/// @brief Method GetRect addr 0x2b8a77c size 0x6c virtual false final false
static UnityEngine::Rect GetRect(UnityEngine::GUIContent content, UnityEngine::GUIStyle style, ::ArrayW<UnityEngine::GUILayoutOption> options) ;

/// @brief Method DoGetRect addr 0x2b8a7e8 size 0x338 virtual false final false
static UnityEngine::Rect DoGetRect(UnityEngine::GUIContent content, UnityEngine::GUIStyle style, ::ArrayW<UnityEngine::GUILayoutOption> options) ;

/// @brief Method Internal_GetWindowRect_Injected addr 0x2b89a20 size 0x44 virtual false final false
static void Internal_GetWindowRect_Injected(int32_t windowID, ByRef<UnityEngine::Rect> ret) ;

/// @brief Method Internal_MoveWindow_Injected addr 0x2b89af0 size 0x44 virtual false final false
static void Internal_MoveWindow_Injected(int32_t windowID, ByRef<UnityEngine::Rect> r) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::GUILayoutUtility);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::GUILayoutUtility, "UnityEngine", "GUILayoutUtility");
NEED_NO_BOX(UnityEngine::UnityEngine__GUILayoutUtility__LayoutCache);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UnityEngine__GUILayoutUtility__LayoutCache, "UnityEngine", "GUILayoutUtility/LayoutCache");
