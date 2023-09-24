#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class IDisposable;
}
namespace Unity::Profiling {
struct ProfilerMarker;
}
namespace UnityEngine::UIElements {
class BaseVisualElementPanel;
}
namespace UnityEngine::UIElements {
struct VersionChangeType;
}
namespace UnityEngine::UIElements {
class IVisualTreeUpdater;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class BaseVisualTreeUpdater;
}
// Type: UnityEngine.UIElements::BaseVisualTreeUpdater
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6838))
// CS Name: UnityEngine.UIElements.BaseVisualTreeUpdater
class CORDL_TYPE BaseVisualTreeUpdater : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to UnityEngine::UIElements::IVisualTreeUpdater
constexpr operator  UnityEngine::UIElements::IVisualTreeUpdater() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~BaseVisualTreeUpdater() = default;

// Ctor Parameters [CppParam { name: "", ty: "BaseVisualTreeUpdater", modifiers: " const&", def_value: None }]
constexpr BaseVisualTreeUpdater(BaseVisualTreeUpdater const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BaseVisualTreeUpdater", modifiers: "&&", def_value: None }]
constexpr BaseVisualTreeUpdater(BaseVisualTreeUpdater&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BaseVisualTreeUpdater(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BaseVisualTreeUpdater& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BaseVisualTreeUpdater& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BaseVisualTreeUpdater& operator=(BaseVisualTreeUpdater&& o) noexcept = default;
  constexpr BaseVisualTreeUpdater& operator=(BaseVisualTreeUpdater const& o) noexcept = default;
                


// Fields

 System::Action_1<UnityEngine::UIElements::BaseVisualElementPanel> __declspec(property(get=__get_panelChanged, put=__set_panelChanged))  panelChanged;

constexpr void __set_panelChanged(System::Action_1<UnityEngine::UIElements::BaseVisualElementPanel> value) ;

constexpr System::Action_1<UnityEngine::UIElements::BaseVisualElementPanel> __get_panelChanged() const;

 UnityEngine::UIElements::BaseVisualElementPanel __declspec(property(get=__get_m_Panel, put=__set_m_Panel))  m_Panel;

constexpr void __set_m_Panel(UnityEngine::UIElements::BaseVisualElementPanel value) ;

constexpr UnityEngine::UIElements::BaseVisualElementPanel __get_m_Panel() const;


// Properties

 UnityEngine::UIElements::BaseVisualElementPanel __declspec(property(get=get_panel, put=set_panel))  panel;

 UnityEngine::UIElements::VisualElement __declspec(property(get=get_visualTree))  visualTree;

 Unity::Profiling::ProfilerMarker __declspec(property(get=get_profilerMarker))  profilerMarker;


// Methods

/// @brief Method add_panelChanged addr 0x2c39cdc size 0xb0 virtual false final false
 void add_panelChanged(System::Action_1<UnityEngine::UIElements::BaseVisualElementPanel> value) ;

/// @brief Method remove_panelChanged addr 0x2c39d8c size 0xb0 virtual false final false
 void remove_panelChanged(System::Action_1<UnityEngine::UIElements::BaseVisualElementPanel> value) ;

/// @brief Method get_panel addr 0x2c39e3c size 0x8 virtual true final true
 UnityEngine::UIElements::BaseVisualElementPanel get_panel() ;

/// @brief Method set_panel addr 0x2c39e44 size 0x20 virtual true final true
 void set_panel(UnityEngine::UIElements::BaseVisualElementPanel value) ;

/// @brief Method get_visualTree addr 0x2c39e64 size 0x24 virtual false final false
 UnityEngine::UIElements::VisualElement get_visualTree() ;

/// @brief Method get_profilerMarker addr 0x0 size 0xffffffffffffffff virtual true final false
 Unity::Profiling::ProfilerMarker get_profilerMarker() ;

/// @brief Method Dispose addr 0x2c39e88 size 0x6c virtual true final true
 void Dispose() ;

/// @brief Method Dispose addr 0x2c39ef4 size 0x4 virtual true final false
 void Dispose(bool disposing) ;

/// @brief Method Update addr 0x0 size 0xffffffffffffffff virtual true final false
 void Update() ;

/// @brief Method OnVersionChanged addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnVersionChanged(UnityEngine::UIElements::VisualElement ve, UnityEngine::UIElements::VersionChangeType versionChangeType) ;

static UnityEngine::UIElements::BaseVisualTreeUpdater New_ctor() ;

/// @brief Method .ctor addr 0x2c39ef8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::BaseVisualTreeUpdater);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::BaseVisualTreeUpdater, "UnityEngine.UIElements", "BaseVisualTreeUpdater");
