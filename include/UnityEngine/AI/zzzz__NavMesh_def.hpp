#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine::AI {
class UnityEngine__AI__NavMesh__OnNavMeshPreUpdate;
}
namespace UnityEngine::AI {
struct NavMeshHit;
}
namespace UnityEngine::AI {
class NavMeshPath;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::AI {
class NavMesh;
}
namespace UnityEngine::AI {
class UnityEngine__AI__NavMesh__OnNavMeshPreUpdate;
}
// Type: ::OnNavMeshPreUpdate
namespace UnityEngine::AI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15963))
// CS Name: UnityEngine.AI.NavMesh::OnNavMeshPreUpdate
class CORDL_TYPE UnityEngine__AI__NavMesh__OnNavMeshPreUpdate : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~UnityEngine__AI__NavMesh__OnNavMeshPreUpdate() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__AI__NavMesh__OnNavMeshPreUpdate", modifiers: " const&", def_value: None }]
constexpr UnityEngine__AI__NavMesh__OnNavMeshPreUpdate(UnityEngine__AI__NavMesh__OnNavMeshPreUpdate const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__AI__NavMesh__OnNavMeshPreUpdate", modifiers: "&&", def_value: None }]
constexpr UnityEngine__AI__NavMesh__OnNavMeshPreUpdate(UnityEngine__AI__NavMesh__OnNavMeshPreUpdate&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__AI__NavMesh__OnNavMeshPreUpdate(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr UnityEngine__AI__NavMesh__OnNavMeshPreUpdate& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__AI__NavMesh__OnNavMeshPreUpdate& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__AI__NavMesh__OnNavMeshPreUpdate& operator=(UnityEngine__AI__NavMesh__OnNavMeshPreUpdate&& o) noexcept = default;
  constexpr UnityEngine__AI__NavMesh__OnNavMeshPreUpdate& operator=(UnityEngine__AI__NavMesh__OnNavMeshPreUpdate const& o) noexcept = default;
                


// Methods

static UnityEngine::AI::UnityEngine__AI__NavMesh__OnNavMeshPreUpdate New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2b07dcc size 0xbc virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2b07e88 size 0x14 virtual true final false
 void Invoke() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::AI
// Type: UnityEngine.AI::NavMesh
namespace UnityEngine::AI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15964))
// CS Name: UnityEngine.AI.NavMesh
class CORDL_TYPE NavMesh : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using OnNavMeshPreUpdate = UnityEngine::AI::UnityEngine__AI__NavMesh__OnNavMeshPreUpdate;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~NavMesh() = default;

// Ctor Parameters [CppParam { name: "", ty: "NavMesh", modifiers: " const&", def_value: None }]
constexpr NavMesh(NavMesh const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NavMesh", modifiers: "&&", def_value: None }]
constexpr NavMesh(NavMesh&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NavMesh(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr NavMesh& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NavMesh& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NavMesh& operator=(NavMesh&& o) noexcept = default;
  constexpr NavMesh& operator=(NavMesh const& o) noexcept = default;
                


// Fields

static UnityEngine::AI::UnityEngine__AI__NavMesh__OnNavMeshPreUpdate __declspec(property(get=__get_onPreUpdate, put=__set_onPreUpdate))  onPreUpdate;

static void __set_onPreUpdate(UnityEngine::AI::UnityEngine__AI__NavMesh__OnNavMeshPreUpdate value) ;

static UnityEngine::AI::UnityEngine__AI__NavMesh__OnNavMeshPreUpdate __get_onPreUpdate() ;


// Methods

/// @brief Method Internal_CallOnNavMeshPreUpdate addr 0x2b07b2c size 0x64 virtual false final false
static void Internal_CallOnNavMeshPreUpdate() ;

/// @brief Method CalculatePath addr 0x2b07b90 size 0xa0 virtual false final false
static bool CalculatePath(UnityEngine::Vector3 sourcePosition, UnityEngine::Vector3 targetPosition, int32_t areaMask, UnityEngine::AI::NavMeshPath path) ;

/// @brief Method CalculatePathInternal addr 0x2b07c30 size 0x6c virtual false final false
static bool CalculatePathInternal(UnityEngine::Vector3 sourcePosition, UnityEngine::Vector3 targetPosition, int32_t areaMask, UnityEngine::AI::NavMeshPath path) ;

/// @brief Method SamplePosition addr 0x2b07cf8 size 0x70 virtual false final false
static bool SamplePosition(UnityEngine::Vector3 sourcePosition, ByRef<UnityEngine::AI::NavMeshHit> hit, float_t maxDistance, int32_t areaMask) ;

/// @brief Method CalculatePathInternal_Injected addr 0x2b07c9c size 0x5c virtual false final false
static bool CalculatePathInternal_Injected(ByRef<UnityEngine::Vector3> sourcePosition, ByRef<UnityEngine::Vector3> targetPosition, int32_t areaMask, UnityEngine::AI::NavMeshPath path) ;

/// @brief Method SamplePosition_Injected addr 0x2b07d68 size 0x64 virtual false final false
static bool SamplePosition_Injected(ByRef<UnityEngine::Vector3> sourcePosition, ByRef<UnityEngine::AI::NavMeshHit> hit, float_t maxDistance, int32_t areaMask) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::AI
NEED_NO_BOX(UnityEngine::AI::NavMesh);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AI::NavMesh, "UnityEngine.AI", "NavMesh");
NEED_NO_BOX(UnityEngine::AI::UnityEngine__AI__NavMesh__OnNavMeshPreUpdate);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AI::UnityEngine__AI__NavMesh__OnNavMeshPreUpdate, "UnityEngine.AI", "NavMesh/OnNavMeshPreUpdate");
