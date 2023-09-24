#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "RootMotion/zzzz__Baker_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
class AnimationClip;
}
namespace RootMotion {
class BakerTransform;
}
// Forward declare root types
namespace RootMotion {
class GenericBaker;
}
// Type: RootMotion::GenericBaker
namespace RootMotion {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12413))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12414))
// CS Name: RootMotion.GenericBaker
class CORDL_TYPE GenericBaker : public RootMotion::Baker {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xb0};

virtual ~GenericBaker() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericBaker", modifiers: " const&", def_value: None }]
constexpr GenericBaker(GenericBaker const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericBaker", modifiers: "&&", def_value: None }]
constexpr GenericBaker(GenericBaker&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericBaker(void* ptr) noexcept : RootMotion::Baker(ptr) {
}


  constexpr GenericBaker& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericBaker& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericBaker& operator=(GenericBaker&& o) noexcept = default;
  constexpr GenericBaker& operator=(GenericBaker const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_markAsLegacy, put=__set_markAsLegacy))  markAsLegacy;

constexpr void __set_markAsLegacy(bool value) ;

constexpr bool __get_markAsLegacy() const;

 UnityEngine::Transform __declspec(property(get=__get_root, put=__set_root))  root;

constexpr void __set_root(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get_root() const;

 UnityEngine::Transform __declspec(property(get=__get_rootNode, put=__set_rootNode))  rootNode;

constexpr void __set_rootNode(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get_rootNode() const;

 ::ArrayW<UnityEngine::Transform> __declspec(property(get=__get_ignoreList, put=__set_ignoreList))  ignoreList;

constexpr void __set_ignoreList(::ArrayW<UnityEngine::Transform> value) ;

constexpr ::ArrayW<UnityEngine::Transform> __get_ignoreList() const;

 ::ArrayW<UnityEngine::Transform> __declspec(property(get=__get_bakePositionList, put=__set_bakePositionList))  bakePositionList;

constexpr void __set_bakePositionList(::ArrayW<UnityEngine::Transform> value) ;

constexpr ::ArrayW<UnityEngine::Transform> __get_bakePositionList() const;

 ::ArrayW<RootMotion::BakerTransform> __declspec(property(get=__get_children, put=__set_children))  children;

constexpr void __set_children(::ArrayW<RootMotion::BakerTransform> value) ;

constexpr ::ArrayW<RootMotion::BakerTransform> __get_children() const;

 RootMotion::BakerTransform __declspec(property(get=__get_rootChild, put=__set_rootChild))  rootChild;

constexpr void __set_rootChild(RootMotion::BakerTransform value) ;

constexpr RootMotion::BakerTransform __get_rootChild() const;

 int32_t __declspec(property(get=__get_rootChildIndex, put=__set_rootChildIndex))  rootChildIndex;

constexpr void __set_rootChildIndex(int32_t value) ;

constexpr int32_t __get_rootChildIndex() const;


// Methods

/// @brief Method Awake addr 0x11a6b90 size 0x218 virtual false final false
 void Awake() ;

/// @brief Method GetCharacterRoot addr 0x11a6fac size 0x8 virtual true final false
 UnityEngine::Transform GetCharacterRoot() ;

/// @brief Method OnStartBaking addr 0x11a6fb4 size 0xd0 virtual true final false
 void OnStartBaking() ;

/// @brief Method OnSetLoopFrame addr 0x11a71a0 size 0x6c virtual true final false
 void OnSetLoopFrame(float_t time) ;

/// @brief Method OnSetCurves addr 0x11a7404 size 0x64 virtual true final false
 void OnSetCurves(ByRef<UnityEngine::AnimationClip> clip) ;

/// @brief Method OnSetKeyframes addr 0x11a771c size 0x6c virtual true final false
 void OnSetKeyframes(float_t time, bool lastFrame) ;

/// @brief Method IsIgnored addr 0x11a6da8 size 0xb8 virtual false final false
 bool IsIgnored(UnityEngine::Transform t) ;

/// @brief Method BakePosition addr 0x11a6e60 size 0xb8 virtual false final false
 bool BakePosition(UnityEngine::Transform t) ;

static RootMotion::GenericBaker New_ctor() ;

/// @brief Method .ctor addr 0x11a797c size 0x5c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion
NEED_NO_BOX(RootMotion::GenericBaker);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::GenericBaker, "RootMotion", "GenericBaker");
