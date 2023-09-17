#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace UnityEngine::Playables {
class INotification;
}
namespace UnityEngine::Playables {
struct Playable;
}
// Forward declare root types
namespace UnityEngine::Playables {
class INotificationReceiver;
}
// Type: UnityEngine.Playables::INotificationReceiver
namespace UnityEngine::Playables {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10373))
// CS Name: UnityEngine.Playables.INotificationReceiver
class CORDL_TYPE INotificationReceiver : public ::cordl_internals::InterfaceW {
public:
// Declarations
~INotificationReceiver() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit INotificationReceiver(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method OnNotify addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnNotify(::UnityEngine::Playables::Playable origin, ::UnityEngine::Playables::INotification notification, ::bs_hook::Il2CppWrapperType context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Playables
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::Playables::INotificationReceiver);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Playables::INotificationReceiver, "UnityEngine.Playables", "INotificationReceiver");
