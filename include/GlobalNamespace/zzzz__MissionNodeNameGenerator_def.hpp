#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace GlobalNamespace {
class MissionNodesManager;
}
// Forward declare root types
namespace GlobalNamespace {
class MissionNodeNameGenerator;
}
// Type: ::MissionNodeNameGenerator
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5635))
// CS Name: MissionNodeNameGenerator
class CORDL_TYPE MissionNodeNameGenerator : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~MissionNodeNameGenerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "MissionNodeNameGenerator", modifiers: " const&", def_value: None }]
constexpr MissionNodeNameGenerator(MissionNodeNameGenerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MissionNodeNameGenerator", modifiers: "&&", def_value: None }]
constexpr MissionNodeNameGenerator(MissionNodeNameGenerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MissionNodeNameGenerator(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MissionNodeNameGenerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MissionNodeNameGenerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MissionNodeNameGenerator& operator=(MissionNodeNameGenerator&& o) noexcept = default;
  constexpr MissionNodeNameGenerator& operator=(MissionNodeNameGenerator const& o) noexcept = default;
                


// Fields

 GlobalNamespace::MissionNodesManager __declspec(property(get=__get__missionNodesManager, put=__set__missionNodesManager))  _missionNodesManager;

constexpr void __set__missionNodesManager(GlobalNamespace::MissionNodesManager value) ;

constexpr GlobalNamespace::MissionNodesManager __get__missionNodesManager() const;


// Methods

// Ctor Parameters []
explicit MissionNodeNameGenerator() ;

/// @brief Method .ctor addr 0x2149140 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MissionNodeNameGenerator);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionNodeNameGenerator, "", "MissionNodeNameGenerator");
