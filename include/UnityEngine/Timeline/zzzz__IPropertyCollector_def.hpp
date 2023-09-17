#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace UnityEngine {
class GameObject;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
class AnimationClip;
}
namespace UnityEngine {
class Component;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class IPropertyCollector;
}
// Type: UnityEngine.Timeline::IPropertyCollector
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14144))
// CS Name: UnityEngine.Timeline.IPropertyCollector
class CORDL_TYPE IPropertyCollector : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IPropertyCollector() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IPropertyCollector(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method PushActiveGameObject addr 0x0 size 0xffffffffffffffff virtual true final false
 void PushActiveGameObject(::UnityEngine::GameObject gameObject) ;

/// @brief Method PopActiveGameObject addr 0x0 size 0xffffffffffffffff virtual true final false
 void PopActiveGameObject() ;

/// @brief Method AddFromClip addr 0x0 size 0xffffffffffffffff virtual true final false
 void AddFromClip(::UnityEngine::AnimationClip clip) ;

/// @brief Method AddFromClips addr 0x0 size 0xffffffffffffffff virtual true final false
 void AddFromClips(::System::Collections::Generic::IEnumerable_1<::UnityEngine::AnimationClip> clips) ;

/// @brief Method AddFromName addr 0x0 size 0xffffffffffffffff virtual true final false
template<typename T>
 void AddFromName(::StringW name) ;

/// @brief Method AddFromName addr 0x0 size 0xffffffffffffffff virtual true final false
 void AddFromName(::StringW name) ;

/// @brief Method AddFromClip addr 0x0 size 0xffffffffffffffff virtual true final false
 void AddFromClip(::UnityEngine::GameObject obj, ::UnityEngine::AnimationClip clip) ;

/// @brief Method AddFromClips addr 0x0 size 0xffffffffffffffff virtual true final false
 void AddFromClips(::UnityEngine::GameObject obj, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::AnimationClip> clips) ;

/// @brief Method AddFromName addr 0x0 size 0xffffffffffffffff virtual true final false
template<typename T>
 void AddFromName(::UnityEngine::GameObject obj, ::StringW name) ;

/// @brief Method AddFromName addr 0x0 size 0xffffffffffffffff virtual true final false
 void AddFromName(::UnityEngine::GameObject obj, ::StringW name) ;

/// @brief Method AddFromName addr 0x0 size 0xffffffffffffffff virtual true final false
 void AddFromName(::UnityEngine::Component component, ::StringW name) ;

/// @brief Method AddFromComponent addr 0x0 size 0xffffffffffffffff virtual true final false
 void AddFromComponent(::UnityEngine::GameObject obj, ::UnityEngine::Component component) ;

/// @brief Method AddObjectProperties addr 0x0 size 0xffffffffffffffff virtual true final false
 void AddObjectProperties(::UnityEngine::Object obj, ::UnityEngine::AnimationClip clip) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::Timeline::IPropertyCollector);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::IPropertyCollector, "UnityEngine.Timeline", "IPropertyCollector");
