#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
namespace UnityEngine {
struct Color;
}
namespace GlobalNamespace {
class FlyingObjectEffect;
}
namespace GlobalNamespace {
class GlobalNamespace__FlyingScoreEffect__Pool;
}
namespace GlobalNamespace {
class IFlyingObjectEffectDidFinishEvent;
}
namespace GlobalNamespace {
class IReadonlyCutScoreBuffer;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__FlyingScoreSpawner__SpawnPosition;
}
namespace GlobalNamespace {
class FlyingScoreSpawner;
}
namespace GlobalNamespace {
class GlobalNamespace__FlyingScoreSpawner__InitData;
}
// Type: ::SpawnPosition
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5000))
// CS Name: FlyingScoreSpawner::SpawnPosition
struct CORDL_TYPE GlobalNamespace__FlyingScoreSpawner__SpawnPosition : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__FlyingScoreSpawner__SpawnPosition(int32_t value__) noexcept;


                    constexpr GlobalNamespace__FlyingScoreSpawner__SpawnPosition(GlobalNamespace__FlyingScoreSpawner__SpawnPosition const&) = default;
                    constexpr GlobalNamespace__FlyingScoreSpawner__SpawnPosition(GlobalNamespace__FlyingScoreSpawner__SpawnPosition&&) = default;
                    constexpr GlobalNamespace__FlyingScoreSpawner__SpawnPosition& operator=(GlobalNamespace__FlyingScoreSpawner__SpawnPosition const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__FlyingScoreSpawner__SpawnPosition& operator=(GlobalNamespace__FlyingScoreSpawner__SpawnPosition&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__FlyingScoreSpawner__SpawnPosition(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__FlyingScoreSpawner__SpawnPosition_Unwrapped : int32_t {
__Underground = 0,
__AboveGround = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__FlyingScoreSpawner__SpawnPosition_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__FlyingScoreSpawner__SpawnPosition_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Underground offset 0
static GlobalNamespace::GlobalNamespace__FlyingScoreSpawner__SpawnPosition const Underground;

/// @brief Field AboveGround offset 0
static GlobalNamespace::GlobalNamespace__FlyingScoreSpawner__SpawnPosition const AboveGround;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::InitData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5001))
// CS Name: FlyingScoreSpawner::InitData
class CORDL_TYPE GlobalNamespace__FlyingScoreSpawner__InitData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~GlobalNamespace__FlyingScoreSpawner__InitData() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__FlyingScoreSpawner__InitData", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__FlyingScoreSpawner__InitData(GlobalNamespace__FlyingScoreSpawner__InitData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__FlyingScoreSpawner__InitData", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__FlyingScoreSpawner__InitData(GlobalNamespace__FlyingScoreSpawner__InitData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__FlyingScoreSpawner__InitData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__FlyingScoreSpawner__InitData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__FlyingScoreSpawner__InitData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__FlyingScoreSpawner__InitData& operator=(GlobalNamespace__FlyingScoreSpawner__InitData&& o) noexcept = default;
  constexpr GlobalNamespace__FlyingScoreSpawner__InitData& operator=(GlobalNamespace__FlyingScoreSpawner__InitData const& o) noexcept = default;
                


// Fields

 GlobalNamespace::GlobalNamespace__FlyingScoreSpawner__SpawnPosition __declspec(property(get=__get_spawnPosition, put=__set_spawnPosition))  spawnPosition;

constexpr void __set_spawnPosition(GlobalNamespace::GlobalNamespace__FlyingScoreSpawner__SpawnPosition value) ;

constexpr GlobalNamespace::GlobalNamespace__FlyingScoreSpawner__SpawnPosition __get_spawnPosition() const;


// Methods

// Ctor Parameters [CppParam { name: "spawnPosition", ty: "GlobalNamespace::GlobalNamespace__FlyingScoreSpawner__SpawnPosition", modifiers: "", def_value: None }]
explicit GlobalNamespace__FlyingScoreSpawner__InitData(GlobalNamespace::GlobalNamespace__FlyingScoreSpawner__SpawnPosition spawnPosition) ;

/// @brief Method .ctor addr 0x2258bf4 size 0x28 virtual false final false
 void _ctor(GlobalNamespace::GlobalNamespace__FlyingScoreSpawner__SpawnPosition spawnPosition) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::FlyingScoreSpawner
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5002))
// CS Name: FlyingScoreSpawner
class CORDL_TYPE FlyingScoreSpawner : public UnityEngine::MonoBehaviour {
public:
// Declarations
using InitData = GlobalNamespace::GlobalNamespace__FlyingScoreSpawner__InitData;

using SpawnPosition = GlobalNamespace::GlobalNamespace__FlyingScoreSpawner__SpawnPosition;

/// @brief Convert operator to GlobalNamespace::IFlyingObjectEffectDidFinishEvent
constexpr operator  GlobalNamespace::IFlyingObjectEffectDidFinishEvent() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~FlyingScoreSpawner() = default;

// Ctor Parameters [CppParam { name: "", ty: "FlyingScoreSpawner", modifiers: " const&", def_value: None }]
constexpr FlyingScoreSpawner(FlyingScoreSpawner const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FlyingScoreSpawner", modifiers: "&&", def_value: None }]
constexpr FlyingScoreSpawner(FlyingScoreSpawner&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FlyingScoreSpawner(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr FlyingScoreSpawner& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FlyingScoreSpawner& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FlyingScoreSpawner& operator=(FlyingScoreSpawner&& o) noexcept = default;
  constexpr FlyingScoreSpawner& operator=(FlyingScoreSpawner const& o) noexcept = default;
                


// Fields

 GlobalNamespace::GlobalNamespace__FlyingScoreEffect__Pool __declspec(property(get=__get__flyingScoreEffectPool, put=__set__flyingScoreEffectPool))  _flyingScoreEffectPool;

constexpr void __set__flyingScoreEffectPool(GlobalNamespace::GlobalNamespace__FlyingScoreEffect__Pool value) ;

constexpr GlobalNamespace::GlobalNamespace__FlyingScoreEffect__Pool __get__flyingScoreEffectPool() const;

 GlobalNamespace::GlobalNamespace__FlyingScoreSpawner__InitData __declspec(property(get=__get__initData, put=__set__initData))  _initData;

constexpr void __set__initData(GlobalNamespace::GlobalNamespace__FlyingScoreSpawner__InitData value) ;

constexpr GlobalNamespace::GlobalNamespace__FlyingScoreSpawner__InitData __get__initData() const;


// Methods

/// @brief Method SpawnFlyingScore addr 0x2258850 size 0x280 virtual false final false
 void SpawnFlyingScore(GlobalNamespace::IReadonlyCutScoreBuffer cutScoreBuffer, UnityEngine::Color color) ;

/// @brief Method HandleFlyingObjectEffectDidFinish addr 0x2258ad0 size 0x11c virtual true final true
 void HandleFlyingObjectEffectDidFinish(GlobalNamespace::FlyingObjectEffect flyingObjectEffect) ;

// Ctor Parameters []
explicit FlyingScoreSpawner() ;

/// @brief Method .ctor addr 0x2258bec size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__FlyingScoreSpawner__SpawnPosition, "", "FlyingScoreSpawner/SpawnPosition");
NEED_NO_BOX(GlobalNamespace::FlyingScoreSpawner);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FlyingScoreSpawner, "", "FlyingScoreSpawner");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__FlyingScoreSpawner__InitData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__FlyingScoreSpawner__InitData, "", "FlyingScoreSpawner/InitData");
