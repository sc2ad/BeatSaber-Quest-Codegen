#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
namespace UnityEngine::InputSystem::LowLevel {
struct InputUpdateType;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
class InputUpdate;
}
namespace UnityEngine::InputSystem::LowLevel {
struct UnityEngine__InputSystem__LowLevel__InputUpdate__SerializedState;
}
namespace UnityEngine::InputSystem::LowLevel {
struct UnityEngine__InputSystem__LowLevel__InputUpdate__UpdateStepCount;
}
// Type: ::UpdateStepCount
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6637))
// CS Name: UnityEngine.InputSystem.LowLevel.InputUpdate::UpdateStepCount
struct CORDL_TYPE UnityEngine__InputSystem__LowLevel__InputUpdate__UpdateStepCount : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_WasUpdated", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_value_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__InputSystem__LowLevel__InputUpdate__UpdateStepCount(bool m_WasUpdated, uint32_t _value_k__BackingField) noexcept;


                    constexpr UnityEngine__InputSystem__LowLevel__InputUpdate__UpdateStepCount(UnityEngine__InputSystem__LowLevel__InputUpdate__UpdateStepCount const&) = default;
                    constexpr UnityEngine__InputSystem__LowLevel__InputUpdate__UpdateStepCount(UnityEngine__InputSystem__LowLevel__InputUpdate__UpdateStepCount&&) = default;
                    constexpr UnityEngine__InputSystem__LowLevel__InputUpdate__UpdateStepCount& operator=(UnityEngine__InputSystem__LowLevel__InputUpdate__UpdateStepCount const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__InputSystem__LowLevel__InputUpdate__UpdateStepCount& operator=(UnityEngine__InputSystem__LowLevel__InputUpdate__UpdateStepCount&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__LowLevel__InputUpdate__UpdateStepCount(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 bool __declspec(property(get=__get_m_WasUpdated, put=__set_m_WasUpdated))  m_WasUpdated;

constexpr void __set_m_WasUpdated(bool value) ;

constexpr bool __get_m_WasUpdated() const;

 uint32_t __declspec(property(get=__get__value_k__BackingField, put=__set__value_k__BackingField))  _value_k__BackingField;

constexpr void __set__value_k__BackingField(uint32_t value) ;

constexpr uint32_t __get__value_k__BackingField() const;


// Properties

 uint32_t __declspec(property(get=get_value, put=set_value))  value;


// Methods

/// @brief Method get_value addr 0x295e5a8 size 0x8 virtual false final false
 uint32_t get_value() ;

/// @brief Method set_value addr 0x295e5b0 size 0x8 virtual false final false
 void set_value(uint32_t value) ;

/// @brief Method OnBeforeUpdate addr 0x295e3c8 size 0x18 virtual false final false
 void OnBeforeUpdate() ;

/// @brief Method OnUpdate addr 0x295e468 size 0x1c virtual false final false
 void OnUpdate() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::LowLevel
// Type: ::SerializedState
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6638))
// CS Name: UnityEngine.InputSystem.LowLevel.InputUpdate::SerializedState
struct CORDL_TYPE UnityEngine__InputSystem__LowLevel__InputUpdate__SerializedState : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "lastUpdateType", ty: "UnityEngine::InputSystem::LowLevel::InputUpdateType", modifiers: "", def_value: None }, CppParam { name: "playerUpdateStepCount", ty: "UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputUpdate__UpdateStepCount", modifiers: "", def_value: None }]
constexpr UnityEngine__InputSystem__LowLevel__InputUpdate__SerializedState(UnityEngine::InputSystem::LowLevel::InputUpdateType lastUpdateType, UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputUpdate__UpdateStepCount playerUpdateStepCount) noexcept;


                    constexpr UnityEngine__InputSystem__LowLevel__InputUpdate__SerializedState(UnityEngine__InputSystem__LowLevel__InputUpdate__SerializedState const&) = default;
                    constexpr UnityEngine__InputSystem__LowLevel__InputUpdate__SerializedState(UnityEngine__InputSystem__LowLevel__InputUpdate__SerializedState&&) = default;
                    constexpr UnityEngine__InputSystem__LowLevel__InputUpdate__SerializedState& operator=(UnityEngine__InputSystem__LowLevel__InputUpdate__SerializedState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__InputSystem__LowLevel__InputUpdate__SerializedState& operator=(UnityEngine__InputSystem__LowLevel__InputUpdate__SerializedState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0xc};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__LowLevel__InputUpdate__SerializedState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::InputSystem::LowLevel::InputUpdateType __declspec(property(get=__get_lastUpdateType, put=__set_lastUpdateType))  lastUpdateType;

constexpr void __set_lastUpdateType(UnityEngine::InputSystem::LowLevel::InputUpdateType value) ;

constexpr UnityEngine::InputSystem::LowLevel::InputUpdateType __get_lastUpdateType() const;

 UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputUpdate__UpdateStepCount __declspec(property(get=__get_playerUpdateStepCount, put=__set_playerUpdateStepCount))  playerUpdateStepCount;

constexpr void __set_playerUpdateStepCount(UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputUpdate__UpdateStepCount value) ;

constexpr UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputUpdate__UpdateStepCount __get_playerUpdateStepCount() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::LowLevel
// Type: UnityEngine.InputSystem.LowLevel::InputUpdate
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6639))
// CS Name: UnityEngine.InputSystem.LowLevel.InputUpdate
class CORDL_TYPE InputUpdate : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using SerializedState = UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputUpdate__SerializedState;

using UpdateStepCount = UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputUpdate__UpdateStepCount;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~InputUpdate() = default;

// Ctor Parameters [CppParam { name: "", ty: "InputUpdate", modifiers: " const&", def_value: None }]
constexpr InputUpdate(InputUpdate const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InputUpdate", modifiers: "&&", def_value: None }]
constexpr InputUpdate(InputUpdate&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InputUpdate(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr InputUpdate& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InputUpdate& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InputUpdate& operator=(InputUpdate&& o) noexcept = default;
  constexpr InputUpdate& operator=(InputUpdate const& o) noexcept = default;
                


// Fields

static uint32_t __declspec(property(get=__get_s_UpdateStepCount, put=__set_s_UpdateStepCount))  s_UpdateStepCount;

static void __set_s_UpdateStepCount(uint32_t value) ;

static uint32_t __get_s_UpdateStepCount() ;

static UnityEngine::InputSystem::LowLevel::InputUpdateType __declspec(property(get=__get_s_LatestUpdateType, put=__set_s_LatestUpdateType))  s_LatestUpdateType;

static void __set_s_LatestUpdateType(UnityEngine::InputSystem::LowLevel::InputUpdateType value) ;

static UnityEngine::InputSystem::LowLevel::InputUpdateType __get_s_LatestUpdateType() ;

static UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputUpdate__UpdateStepCount __declspec(property(get=__get_s_PlayerUpdateStepCount, put=__set_s_PlayerUpdateStepCount))  s_PlayerUpdateStepCount;

static void __set_s_PlayerUpdateStepCount(UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputUpdate__UpdateStepCount value) ;

static UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputUpdate__UpdateStepCount __get_s_PlayerUpdateStepCount() ;


// Methods

/// @brief Method OnBeforeUpdate addr 0x295e348 size 0x80 virtual false final false
static void OnBeforeUpdate(UnityEngine::InputSystem::LowLevel::InputUpdateType type) ;

/// @brief Method OnUpdate addr 0x295e3e0 size 0x88 virtual false final false
static void OnUpdate(UnityEngine::InputSystem::LowLevel::InputUpdateType type) ;

/// @brief Method Save addr 0x295e484 size 0x64 virtual false final false
static UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputUpdate__SerializedState Save() ;

/// @brief Method Restore addr 0x295e4e8 size 0x94 virtual false final false
static void Restore(UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputUpdate__SerializedState state) ;

/// @brief Method GetUpdateTypeForPlayer addr 0x295e57c size 0x20 virtual false final false
static UnityEngine::InputSystem::LowLevel::InputUpdateType GetUpdateTypeForPlayer(UnityEngine::InputSystem::LowLevel::InputUpdateType mask) ;

/// @brief Method IsPlayerUpdate addr 0x295e59c size 0xc virtual false final false
static bool IsPlayerUpdate(UnityEngine::InputSystem::LowLevel::InputUpdateType updateType) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::LowLevel
NEED_NO_BOX(UnityEngine::InputSystem::LowLevel::InputUpdate);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::LowLevel::InputUpdate, "UnityEngine.InputSystem.LowLevel", "InputUpdate");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputUpdate__SerializedState, "UnityEngine.InputSystem.LowLevel", "InputUpdate/SerializedState");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputUpdate__UpdateStepCount, "UnityEngine.InputSystem.LowLevel", "InputUpdate/UpdateStepCount");
