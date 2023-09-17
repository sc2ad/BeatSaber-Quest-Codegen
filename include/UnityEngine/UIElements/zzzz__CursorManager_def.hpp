#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace UnityEngine::UIElements {
class ICursorManager;
}
namespace UnityEngine::UIElements {
struct Cursor;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class CursorManager;
}
// Type: UnityEngine.UIElements::CursorManager
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6895))
// CS Name: UnityEngine.UIElements.CursorManager
class CORDL_TYPE CursorManager : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::UnityEngine::UIElements::ICursorManager
constexpr operator  ::UnityEngine::UIElements::ICursorManager() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~CursorManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "CursorManager", modifiers: " const&", def_value: None }]
constexpr CursorManager(CursorManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CursorManager", modifiers: "&&", def_value: None }]
constexpr CursorManager(CursorManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CursorManager(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CursorManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CursorManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CursorManager& operator=(CursorManager&& o) noexcept = default;
  constexpr CursorManager& operator=(CursorManager const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get__isCursorOverriden_k__BackingField, put=__set__isCursorOverriden_k__BackingField))  _isCursorOverriden_k__BackingField;

constexpr void __set__isCursorOverriden_k__BackingField(bool value) ;

constexpr bool __get__isCursorOverriden_k__BackingField() const;


// Properties

 bool __declspec(property(get=get_isCursorOverriden, put=set_isCursorOverriden))  isCursorOverriden;


// Methods

/// @brief Method get_isCursorOverriden addr 0x2c46654 size 0x8 virtual false final false
 bool get_isCursorOverriden() ;

/// @brief Method set_isCursorOverriden addr 0x2c4665c size 0xc virtual false final false
 void set_isCursorOverriden(bool value) ;

/// @brief Method SetCursor addr 0x2c46668 size 0xf0 virtual true final true
 void SetCursor(::UnityEngine::UIElements::Cursor cursor) ;

/// @brief Method ResetCursor addr 0x2c46758 size 0x68 virtual true final true
 void ResetCursor() ;

// Ctor Parameters []
explicit CursorManager() ;

/// @brief Method .ctor addr 0x2c467c0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UIElements::CursorManager);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::CursorManager, "UnityEngine.UIElements", "CursorManager");
