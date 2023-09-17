#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace HMUI {
class CurvedCanvasSettings;
}
namespace UnityEngine {
class Canvas;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace HMUI {
class CurvedCanvasSettingsHelper;
}
// Type: HMUI::CurvedCanvasSettingsHelper
namespace HMUI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13580))
// CS Name: HMUI.CurvedCanvasSettingsHelper
class CORDL_TYPE CurvedCanvasSettingsHelper : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~CurvedCanvasSettingsHelper() = default;

// Ctor Parameters [CppParam { name: "", ty: "CurvedCanvasSettingsHelper", modifiers: " const&", def_value: None }]
constexpr CurvedCanvasSettingsHelper(CurvedCanvasSettingsHelper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CurvedCanvasSettingsHelper", modifiers: "&&", def_value: None }]
constexpr CurvedCanvasSettingsHelper(CurvedCanvasSettingsHelper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CurvedCanvasSettingsHelper(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CurvedCanvasSettingsHelper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CurvedCanvasSettingsHelper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CurvedCanvasSettingsHelper& operator=(CurvedCanvasSettingsHelper&& o) noexcept = default;
  constexpr CurvedCanvasSettingsHelper& operator=(CurvedCanvasSettingsHelper const& o) noexcept = default;
                


// Fields

 ::UnityEngine::Canvas __declspec(property(get=__get__cachedCanvas, put=__set__cachedCanvas))  _cachedCanvas;

constexpr void __set__cachedCanvas(::UnityEngine::Canvas value) ;

constexpr ::UnityEngine::Canvas __get__cachedCanvas() const;

 bool __declspec(property(get=__get__cachedCanvasIsRootCanvas, put=__set__cachedCanvasIsRootCanvas))  _cachedCanvasIsRootCanvas;

constexpr void __set__cachedCanvasIsRootCanvas(bool value) ;

constexpr bool __get__cachedCanvasIsRootCanvas() const;

 ::HMUI::CurvedCanvasSettings __declspec(property(get=__get__curvedCanvasSettings, put=__set__curvedCanvasSettings))  _curvedCanvasSettings;

constexpr void __set__curvedCanvasSettings(::HMUI::CurvedCanvasSettings value) ;

constexpr ::HMUI::CurvedCanvasSettings __get__curvedCanvasSettings() const;

 bool __declspec(property(get=__get__hasCachedData, put=__set__hasCachedData))  _hasCachedData;

constexpr void __set__hasCachedData(bool value) ;

constexpr bool __get__hasCachedData() const;

static ::System::Collections::Generic::Dictionary_2<::UnityEngine::Canvas,::HMUI::CurvedCanvasSettings> __declspec(property(get=__get__curvedCanvasCache, put=__set__curvedCanvasCache))  _curvedCanvasCache;

static void __set__curvedCanvasCache(::System::Collections::Generic::Dictionary_2<::UnityEngine::Canvas,::HMUI::CurvedCanvasSettings> value) ;

static ::System::Collections::Generic::Dictionary_2<::UnityEngine::Canvas,::HMUI::CurvedCanvasSettings> __get__curvedCanvasCache() ;


// Methods

/// @brief Method Reset addr 0x1fa8960 size 0x14 virtual false final false
 void Reset() ;

/// @brief Method GetCurvedCanvasSettings addr 0x1fa8974 size 0x1ec virtual false final false
 ::HMUI::CurvedCanvasSettings GetCurvedCanvasSettings(::UnityEngine::Canvas canvas) ;

/// @brief Method GetCurvedCanvasSettingsForCanvas addr 0x1fa8b60 size 0x110 virtual false final false
static ::HMUI::CurvedCanvasSettings GetCurvedCanvasSettingsForCanvas(::UnityEngine::Canvas canvas) ;

// Ctor Parameters []
explicit CurvedCanvasSettingsHelper() ;

/// @brief Method .ctor addr 0x1fa8c70 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
} // end anonymous namespace
NEED_NO_BOX(::HMUI::CurvedCanvasSettingsHelper);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::CurvedCanvasSettingsHelper, "HMUI", "CurvedCanvasSettingsHelper");
