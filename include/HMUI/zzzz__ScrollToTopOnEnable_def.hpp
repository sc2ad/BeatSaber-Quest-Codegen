#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace HMUI {
class ScrollView;
}
// Forward declare root types
namespace HMUI {
class ScrollToTopOnEnable;
}
// Type: HMUI::ScrollToTopOnEnable
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13690))
// CS Name: HMUI.ScrollToTopOnEnable
class CORDL_TYPE ScrollToTopOnEnable : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~ScrollToTopOnEnable() = default;

// Ctor Parameters [CppParam { name: "", ty: "ScrollToTopOnEnable", modifiers: " const&", def_value: None }]
constexpr ScrollToTopOnEnable(ScrollToTopOnEnable const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ScrollToTopOnEnable", modifiers: "&&", def_value: None }]
constexpr ScrollToTopOnEnable(ScrollToTopOnEnable&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ScrollToTopOnEnable(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr ScrollToTopOnEnable& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ScrollToTopOnEnable& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ScrollToTopOnEnable& operator=(ScrollToTopOnEnable&& o) noexcept = default;
  constexpr ScrollToTopOnEnable& operator=(ScrollToTopOnEnable const& o) noexcept = default;
                


// Fields

 HMUI::ScrollView __declspec(property(get=__get__scrollView, put=__set__scrollView))  _scrollView;

constexpr void __set__scrollView(HMUI::ScrollView value) ;

constexpr HMUI::ScrollView __get__scrollView() const;


// Methods

/// @brief Method OnEnable addr 0x1fcf56c size 0x20 virtual false final false
 void OnEnable() ;

static HMUI::ScrollToTopOnEnable New_ctor() ;

/// @brief Method .ctor addr 0x1fcf650 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
NEED_NO_BOX(HMUI::ScrollToTopOnEnable);
DEFINE_IL2CPP_ARG_TYPE(HMUI::ScrollToTopOnEnable, "HMUI", "ScrollToTopOnEnable");
