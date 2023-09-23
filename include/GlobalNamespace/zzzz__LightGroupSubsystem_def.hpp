#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
namespace GlobalNamespace {
class LightGroup;
}
// Forward declare root types
namespace GlobalNamespace {
class LightGroupSubsystem;
}
// Type: ::LightGroupSubsystem
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5035))
// CS Name: LightGroupSubsystem
class CORDL_TYPE LightGroupSubsystem : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~LightGroupSubsystem() = default;

// Ctor Parameters [CppParam { name: "", ty: "LightGroupSubsystem", modifiers: " const&", def_value: None }]
constexpr LightGroupSubsystem(LightGroupSubsystem const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LightGroupSubsystem", modifiers: "&&", def_value: None }]
constexpr LightGroupSubsystem(LightGroupSubsystem&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LightGroupSubsystem(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr LightGroupSubsystem& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LightGroupSubsystem& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LightGroupSubsystem& operator=(LightGroupSubsystem&& o) noexcept = default;
  constexpr LightGroupSubsystem& operator=(LightGroupSubsystem const& o) noexcept = default;
                


// Fields

 GlobalNamespace::LightGroup __declspec(property(get=__get__lightGroup, put=__set__lightGroup))  _lightGroup;

constexpr void __set__lightGroup(GlobalNamespace::LightGroup value) ;

constexpr GlobalNamespace::LightGroup __get__lightGroup() const;


// Properties

 int32_t __declspec(property(get=get_groupId))  groupId;

 GlobalNamespace::LightGroup __declspec(property(get=get_lightGroup))  lightGroup;


// Methods

/// @brief Method get_groupId addr 0x225e780 size 0x1c virtual false final false
 int32_t get_groupId() ;

/// @brief Method get_lightGroup addr 0x225e79c size 0x8 virtual false final false
 GlobalNamespace::LightGroup get_lightGroup() ;

/// @brief Method OnEnable addr 0x225e7a4 size 0x60 virtual false final false
 void OnEnable() ;

// Ctor Parameters []
explicit LightGroupSubsystem() ;

/// @brief Method .ctor addr 0x225cc60 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::LightGroupSubsystem);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LightGroupSubsystem, "", "LightGroupSubsystem");
