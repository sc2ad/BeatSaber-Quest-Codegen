#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace GlobalNamespace {
class MissionNodeConnection;
}
// Forward declare root types
namespace GlobalNamespace {
class MissionNodeUpdatePositionInEditMode;
}
// Type: ::MissionNodeUpdatePositionInEditMode
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5639))
// CS Name: MissionNodeUpdatePositionInEditMode
class CORDL_TYPE MissionNodeUpdatePositionInEditMode : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~MissionNodeUpdatePositionInEditMode() = default;

// Ctor Parameters [CppParam { name: "", ty: "MissionNodeUpdatePositionInEditMode", modifiers: " const&", def_value: None }]
constexpr MissionNodeUpdatePositionInEditMode(MissionNodeUpdatePositionInEditMode const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MissionNodeUpdatePositionInEditMode", modifiers: "&&", def_value: None }]
constexpr MissionNodeUpdatePositionInEditMode(MissionNodeUpdatePositionInEditMode&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MissionNodeUpdatePositionInEditMode(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MissionNodeUpdatePositionInEditMode& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MissionNodeUpdatePositionInEditMode& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MissionNodeUpdatePositionInEditMode& operator=(MissionNodeUpdatePositionInEditMode&& o) noexcept = default;
  constexpr MissionNodeUpdatePositionInEditMode& operator=(MissionNodeUpdatePositionInEditMode const& o) noexcept = default;
                


// Fields

 GlobalNamespace::MissionNodeConnection __declspec(property(get=__get__missionNodeConnection, put=__set__missionNodeConnection))  _missionNodeConnection;

constexpr void __set__missionNodeConnection(GlobalNamespace::MissionNodeConnection value) ;

constexpr GlobalNamespace::MissionNodeConnection __get__missionNodeConnection() const;


// Methods

// Ctor Parameters []
explicit MissionNodeUpdatePositionInEditMode() ;

/// @brief Method .ctor addr 0x214a634 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MissionNodeUpdatePositionInEditMode);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionNodeUpdatePositionInEditMode, "", "MissionNodeUpdatePositionInEditMode");
