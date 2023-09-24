#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
namespace UnityEngine::UIElements {
class BaseVisualElementPanel;
}
namespace UnityEngine::UIElements {
struct VersionChangeType;
}
namespace Unity::Profiling {
struct ProfilerMarker;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class IVisualTreeUpdater;
}
// Type: UnityEngine.UIElements::IVisualTreeUpdater
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6837))
// CS Name: UnityEngine.UIElements.IVisualTreeUpdater
class CORDL_TYPE IVisualTreeUpdater : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

~IVisualTreeUpdater() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IVisualTreeUpdater(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 UnityEngine::UIElements::BaseVisualElementPanel __declspec(property(put=set_panel))  panel;

 Unity::Profiling::ProfilerMarker __declspec(property(get=get_profilerMarker))  profilerMarker;


// Methods

/// @brief Method set_panel addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_panel(UnityEngine::UIElements::BaseVisualElementPanel value) ;

/// @brief Method get_profilerMarker addr 0x0 size 0xffffffffffffffff virtual true final false
 Unity::Profiling::ProfilerMarker get_profilerMarker() ;

/// @brief Method Update addr 0x0 size 0xffffffffffffffff virtual true final false
 void Update() ;

/// @brief Method OnVersionChanged addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnVersionChanged(UnityEngine::UIElements::VisualElement ve, UnityEngine::UIElements::VersionChangeType versionChangeType) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::IVisualTreeUpdater);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::IVisualTreeUpdater, "UnityEngine.UIElements", "IVisualTreeUpdater");
