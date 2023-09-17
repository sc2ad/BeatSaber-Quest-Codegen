#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace System {
class IDisposable;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct HumanPose;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Avatar;
}
// Forward declare root types
namespace UnityEngine {
class HumanPoseHandler;
}
// Type: UnityEngine::HumanPoseHandler
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15056))
// CS Name: UnityEngine.HumanPoseHandler
class CORDL_TYPE HumanPoseHandler : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~HumanPoseHandler() = default;

// Ctor Parameters [CppParam { name: "", ty: "HumanPoseHandler", modifiers: " const&", def_value: None }]
constexpr HumanPoseHandler(HumanPoseHandler const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HumanPoseHandler", modifiers: "&&", def_value: None }]
constexpr HumanPoseHandler(HumanPoseHandler&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HumanPoseHandler(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HumanPoseHandler& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HumanPoseHandler& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HumanPoseHandler& operator=(HumanPoseHandler&& o) noexcept = default;
  constexpr HumanPoseHandler& operator=(HumanPoseHandler const& o) noexcept = default;
                


// Fields

 ::cordl_internals::intptr_t __declspec(property(get=__get_m_Ptr, put=__set_m_Ptr))  m_Ptr;

constexpr void __set_m_Ptr(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_m_Ptr() const;


// Methods

/// @brief Method Internal_CreateFromRoot addr 0x2b20938 size 0x44 virtual false final false
static ::cordl_internals::intptr_t Internal_CreateFromRoot(::UnityEngine::Avatar avatar, ::UnityEngine::Transform root) ;

/// @brief Method Internal_Destroy addr 0x2b2097c size 0x3c virtual false final false
static void Internal_Destroy(::cordl_internals::intptr_t ptr) ;

/// @brief Method GetHumanPose addr 0x2b209b8 size 0x5c virtual false final false
 void GetHumanPose(ByRef<::UnityEngine::Vector3> bodyPosition, ByRef<::UnityEngine::Quaternion> bodyRotation, ByRef<::ArrayW<float_t>> muscles) ;

/// @brief Method Dispose addr 0x2b20a14 size 0xcc virtual true final true
 void Dispose() ;

// Ctor Parameters [CppParam { name: "avatar", ty: "::UnityEngine::Avatar", modifiers: "", def_value: None }, CppParam { name: "root", ty: "::UnityEngine::Transform", modifiers: "", def_value: None }]
explicit HumanPoseHandler(::UnityEngine::Avatar avatar, ::UnityEngine::Transform root) ;

/// @brief Method .ctor addr 0x2b20ae0 size 0x22c virtual false final false
 void _ctor(::UnityEngine::Avatar avatar, ::UnityEngine::Transform root) ;

/// @brief Method GetHumanPose addr 0x2b20d0c size 0xf4 virtual false final false
 void GetHumanPose(ByRef<::UnityEngine::HumanPose> humanPose) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::HumanPoseHandler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::HumanPoseHandler, "UnityEngine", "HumanPoseHandler");
