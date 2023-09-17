#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
namespace {
namespace HMUI {
class ScreenModeData;
}
// Forward declare root types
namespace HMUI {
class ScreenModeSO;
}
// Type: HMUI::ScreenModeSO
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10151))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13643))
// CS Name: HMUI.ScreenModeSO
class CORDL_TYPE ScreenModeSO : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~ScreenModeSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "ScreenModeSO", modifiers: " const&", def_value: None }]
constexpr ScreenModeSO(ScreenModeSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ScreenModeSO", modifiers: "&&", def_value: None }]
constexpr ScreenModeSO(ScreenModeSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ScreenModeSO(void* ptr) noexcept : ::UnityEngine::ScriptableObject(ptr) {
}


  constexpr ScreenModeSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ScreenModeSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ScreenModeSO& operator=(ScreenModeSO&& o) noexcept = default;
  constexpr ScreenModeSO& operator=(ScreenModeSO const& o) noexcept = default;
                


// Fields

 ::HMUI::ScreenModeData __declspec(property(get=__get__data, put=__set__data))  _data;

constexpr void __set__data(::HMUI::ScreenModeData value) ;

constexpr ::HMUI::ScreenModeData __get__data() const;


// Properties

 ::HMUI::ScreenModeData __declspec(property(get=get_data))  data;


// Methods

/// @brief Method get_data addr 0x1fb8d5c size 0x8 virtual false final false
 ::HMUI::ScreenModeData get_data() ;

// Ctor Parameters []
explicit ScreenModeSO() ;

/// @brief Method .ctor addr 0x1fb8d64 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
} // end anonymous namespace
NEED_NO_BOX(::HMUI::ScreenModeSO);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::ScreenModeSO, "HMUI", "ScreenModeSO");
