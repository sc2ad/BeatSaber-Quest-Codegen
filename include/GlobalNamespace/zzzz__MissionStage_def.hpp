#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace GlobalNamespace {
class MissionStage;
}
// Type: ::MissionStage
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4473))
// CS Name: MissionStage
class CORDL_TYPE MissionStage : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~MissionStage() = default;

// Ctor Parameters [CppParam { name: "", ty: "MissionStage", modifiers: " const&", def_value: None }]
constexpr MissionStage(MissionStage const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MissionStage", modifiers: "&&", def_value: None }]
constexpr MissionStage(MissionStage&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MissionStage(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MissionStage& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MissionStage& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MissionStage& operator=(MissionStage&& o) noexcept = default;
  constexpr MissionStage& operator=(MissionStage const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__minimumMissionsToUnlock, put=__set__minimumMissionsToUnlock))  _minimumMissionsToUnlock;

constexpr void __set__minimumMissionsToUnlock(int32_t value) ;

constexpr int32_t __get__minimumMissionsToUnlock() const;

 UnityEngine::RectTransform __declspec(property(get=__get__rectTransform, put=__set__rectTransform))  _rectTransform;

constexpr void __set__rectTransform(UnityEngine::RectTransform value) ;

constexpr UnityEngine::RectTransform __get__rectTransform() const;


// Properties

 int32_t __declspec(property(get=get_minimumMissionsToUnlock))  minimumMissionsToUnlock;

 UnityEngine::Vector2 __declspec(property(get=get_position))  position;


// Methods

/// @brief Method get_minimumMissionsToUnlock addr 0x21f1278 size 0x8 virtual false final false
 int32_t get_minimumMissionsToUnlock() ;

/// @brief Method get_position addr 0x21f1280 size 0x1c virtual false final false
 UnityEngine::Vector2 get_position() ;

// Ctor Parameters []
explicit MissionStage() ;

/// @brief Method .ctor addr 0x21f129c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MissionStage);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionStage, "", "MissionStage");
