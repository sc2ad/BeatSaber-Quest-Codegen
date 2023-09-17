#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
class IMultiplayerObservable;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class IMultiplayerSpectatingSpot;
}
// Type: ::IMultiplayerSpectatingSpot
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5348))
// CS Name: IMultiplayerSpectatingSpot
class CORDL_TYPE IMultiplayerSpectatingSpot : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IMultiplayerSpectatingSpot() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IMultiplayerSpectatingSpot(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 bool __declspec(property(get=get_isMain))  isMain;

 ::GlobalNamespace::IMultiplayerObservable __declspec(property(get=get_observable))  observable;

 ::UnityEngine::Transform __declspec(property(get=get_transform))  transform;

 ::StringW __declspec(property(get=get_spotName))  spotName;


// Methods

/// @brief Method add_hasBeenRemovedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_hasBeenRemovedEvent(::System::Action_1<::GlobalNamespace::IMultiplayerSpectatingSpot> value) ;

/// @brief Method remove_hasBeenRemovedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_hasBeenRemovedEvent(::System::Action_1<::GlobalNamespace::IMultiplayerSpectatingSpot> value) ;

/// @brief Method get_isMain addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_isMain() ;

/// @brief Method get_observable addr 0x0 size 0xffffffffffffffff virtual true final false
 ::GlobalNamespace::IMultiplayerObservable get_observable() ;

/// @brief Method get_transform addr 0x0 size 0xffffffffffffffff virtual true final false
 ::UnityEngine::Transform get_transform() ;

/// @brief Method get_spotName addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_spotName() ;

/// @brief Method SetIsObserved addr 0x0 size 0xffffffffffffffff virtual true final false
 void SetIsObserved(bool isObserved) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::IMultiplayerSpectatingSpot);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IMultiplayerSpectatingSpot, "", "IMultiplayerSpectatingSpot");
