#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace UnityEngine::AI {
struct NavMeshPathStatus;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::AI {
class NavMeshPath;
}
// Type: UnityEngine.AI::NavMeshPath
namespace UnityEngine::AI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15961))
// CS Name: UnityEngine.AI.NavMeshPath
class CORDL_TYPE NavMeshPath : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~NavMeshPath() = default;

// Ctor Parameters [CppParam { name: "", ty: "NavMeshPath", modifiers: " const&", def_value: None }]
constexpr NavMeshPath(NavMeshPath const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NavMeshPath", modifiers: "&&", def_value: None }]
constexpr NavMeshPath(NavMeshPath&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NavMeshPath(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr NavMeshPath& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NavMeshPath& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NavMeshPath& operator=(NavMeshPath&& o) noexcept = default;
  constexpr NavMeshPath& operator=(NavMeshPath const& o) noexcept = default;
                


// Fields

 ::cordl_internals::intptr_t __declspec(property(get=__get_m_Ptr, put=__set_m_Ptr))  m_Ptr;

constexpr void __set_m_Ptr(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_m_Ptr() const;

 ::ArrayW<::UnityEngine::Vector3> __declspec(property(get=__get_m_Corners, put=__set_m_Corners))  m_Corners;

constexpr void __set_m_Corners(::ArrayW<::UnityEngine::Vector3> value) ;

constexpr ::ArrayW<::UnityEngine::Vector3> __get_m_Corners() const;


// Properties

 ::ArrayW<::UnityEngine::Vector3> __declspec(property(get=get_corners))  corners;

 ::UnityEngine::AI::NavMeshPathStatus __declspec(property(get=get_status))  status;


// Methods

// Ctor Parameters []
explicit NavMeshPath() ;

/// @brief Method .ctor addr 0x2b077f0 size 0x48 virtual false final false
 void _ctor() ;

/// @brief Method Finalize addr 0x2b07860 size 0xf4 virtual true final false
 void Finalize() ;

/// @brief Method InitializeNavMeshPath addr 0x2b07838 size 0x28 virtual false final false
static ::cordl_internals::intptr_t InitializeNavMeshPath() ;

/// @brief Method DestroyNavMeshPath addr 0x2b07954 size 0x3c virtual false final false
static void DestroyNavMeshPath(::cordl_internals::intptr_t ptr) ;

/// @brief Method CalculateCornersInternal addr 0x2b07990 size 0x3c virtual false final false
 ::ArrayW<::UnityEngine::Vector3> CalculateCornersInternal() ;

/// @brief Method ClearCornersInternal addr 0x2b079cc size 0x3c virtual false final false
 void ClearCornersInternal() ;

/// @brief Method ClearCorners addr 0x2b07a08 size 0x44 virtual false final false
 void ClearCorners() ;

/// @brief Method CalculateCorners addr 0x2b07a4c size 0x4c virtual false final false
 void CalculateCorners() ;

/// @brief Method get_corners addr 0x2b07a98 size 0x4c virtual false final false
 ::ArrayW<::UnityEngine::Vector3> get_corners() ;

/// @brief Method get_status addr 0x2b07ae4 size 0x3c virtual false final false
 ::UnityEngine::AI::NavMeshPathStatus get_status() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::AI
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::AI::NavMeshPath);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AI::NavMeshPath, "UnityEngine.AI", "NavMeshPath");
