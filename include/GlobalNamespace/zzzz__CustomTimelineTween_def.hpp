#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class CustomTimelineTween;
}
// Type: ::CustomTimelineTween
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6063))
// CS Name: CustomTimelineTween
class CORDL_TYPE CustomTimelineTween : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~CustomTimelineTween() = default;

// Ctor Parameters [CppParam { name: "", ty: "CustomTimelineTween", modifiers: " const&", def_value: None }]
constexpr CustomTimelineTween(CustomTimelineTween const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CustomTimelineTween", modifiers: "&&", def_value: None }]
constexpr CustomTimelineTween(CustomTimelineTween&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CustomTimelineTween(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr CustomTimelineTween& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CustomTimelineTween& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CustomTimelineTween& operator=(CustomTimelineTween&& o) noexcept = default;
  constexpr CustomTimelineTween& operator=(CustomTimelineTween const& o) noexcept = default;
                


// Fields

 ::ArrayW<UnityEngine::Transform> __declspec(property(get=__get_transforms, put=__set_transforms))  transforms;

constexpr void __set_transforms(::ArrayW<UnityEngine::Transform> value) ;

constexpr ::ArrayW<UnityEngine::Transform> __get_transforms() const;

 ::ArrayW<UnityEngine::Vector3> __declspec(property(get=__get_startPositions, put=__set_startPositions))  startPositions;

constexpr void __set_startPositions(::ArrayW<UnityEngine::Vector3> value) ;

constexpr ::ArrayW<UnityEngine::Vector3> __get_startPositions() const;


// Methods

/// @brief Method OnValidate addr 0x21b1dc8 size 0xd4 virtual false final false
 void OnValidate() ;

static GlobalNamespace::CustomTimelineTween New_ctor() ;

/// @brief Method .ctor addr 0x21b1e9c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::CustomTimelineTween);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CustomTimelineTween, "", "CustomTimelineTween");
