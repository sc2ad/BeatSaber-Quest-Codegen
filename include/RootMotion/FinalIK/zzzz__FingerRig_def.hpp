#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "RootMotion/zzzz__SolverManager_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace UnityEngine {
class Transform;
}
namespace RootMotion::FinalIK {
class Finger;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class FingerRig;
}
// Type: RootMotion.FinalIK::FingerRig
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12441))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12458))
// CS Name: RootMotion.FinalIK.FingerRig
class CORDL_TYPE FingerRig : public ::RootMotion::SolverManager {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~FingerRig() = default;

// Ctor Parameters [CppParam { name: "", ty: "FingerRig", modifiers: " const&", def_value: None }]
constexpr FingerRig(FingerRig const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FingerRig", modifiers: "&&", def_value: None }]
constexpr FingerRig(FingerRig&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FingerRig(void* ptr) noexcept : ::RootMotion::SolverManager(ptr) {
}


  constexpr FingerRig& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FingerRig& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FingerRig& operator=(FingerRig&& o) noexcept = default;
  constexpr FingerRig& operator=(FingerRig const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get_weight, put=__set_weight))  weight;

constexpr void __set_weight(float_t value) ;

constexpr float_t __get_weight() const;

 ::ArrayW<::RootMotion::FinalIK::Finger> __declspec(property(get=__get_fingers, put=__set_fingers))  fingers;

constexpr void __set_fingers(::ArrayW<::RootMotion::FinalIK::Finger> value) ;

constexpr ::ArrayW<::RootMotion::FinalIK::Finger> __get_fingers() const;

 bool __declspec(property(get=__get__initiated_k__BackingField, put=__set__initiated_k__BackingField))  _initiated_k__BackingField;

constexpr void __set__initiated_k__BackingField(bool value) ;

constexpr bool __get__initiated_k__BackingField() const;


// Properties

 bool __declspec(property(get=get_initiated, put=set_initiated))  initiated;


// Methods

/// @brief Method get_initiated addr 0x11b97a8 size 0x8 virtual false final false
 bool get_initiated() ;

/// @brief Method set_initiated addr 0x11b97b0 size 0xc virtual false final false
 void set_initiated(bool value) ;

/// @brief Method IsValid addr 0x11b97bc size 0x74 virtual false final false
 bool IsValid(ByRef<::StringW> errorMessage) ;

/// @brief Method AutoDetect addr 0x11b9830 size 0x224 virtual false final false
 void AutoDetect() ;

/// @brief Method AddFinger addr 0x11b9b3c size 0x16c virtual false final false
 void AddFinger(::UnityEngine::Transform bone1, ::UnityEngine::Transform bone2, ::UnityEngine::Transform bone3, ::UnityEngine::Transform tip, ::UnityEngine::Transform target) ;

/// @brief Method RemoveFinger addr 0x11b9ca8 size 0x160 virtual false final false
 void RemoveFinger(int32_t index) ;

/// @brief Method AddChildrenRecursive addr 0x11b9a54 size 0xe8 virtual false final false
 void AddChildrenRecursive(::UnityEngine::Transform parent, ByRef<::ArrayW<::UnityEngine::Transform>> array) ;

/// @brief Method InitiateSolver addr 0x11b9e08 size 0xa8 virtual true final false
 void InitiateSolver() ;

/// @brief Method UpdateFingerSolvers addr 0x11b9eb0 size 0x64 virtual false final false
 void UpdateFingerSolvers() ;

/// @brief Method FixFingerTransforms addr 0x11b9f14 size 0x68 virtual false final false
 void FixFingerTransforms() ;

/// @brief Method StoreDefaultLocalState addr 0x11b9f7c size 0x5c virtual false final false
 void StoreDefaultLocalState() ;

/// @brief Method UpdateSolver addr 0x11b9fd8 size 0x4 virtual true final false
 void UpdateSolver() ;

/// @brief Method FixTransforms addr 0x11b9fdc size 0x14 virtual true final false
 void FixTransforms() ;

// Ctor Parameters []
explicit FingerRig() ;

/// @brief Method .ctor addr 0x11b9ff0 size 0x68 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
} // end anonymous namespace
NEED_NO_BOX(::RootMotion::FinalIK::FingerRig);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::FingerRig, "RootMotion.FinalIK", "FingerRig");
