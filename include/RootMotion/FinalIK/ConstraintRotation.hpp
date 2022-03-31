// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: RootMotion.FinalIK.Constraint
#include "RootMotion/FinalIK/Constraint.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: ConstraintRotation
  class ConstraintRotation;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::RootMotion::FinalIK::ConstraintRotation);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::ConstraintRotation*, "RootMotion.FinalIK", "ConstraintRotation");
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.ConstraintRotation
  // [TokenAttribute] Offset: FFFFFFFF
  class ConstraintRotation : public ::RootMotion::FinalIK::Constraint {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public UnityEngine.Quaternion rotation
    // Size: 0x10
    // Offset: 0x1C
    ::UnityEngine::Quaternion rotation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    public:
    // Creating conversion operator: operator ::UnityEngine::Quaternion
    constexpr operator ::UnityEngine::Quaternion() const noexcept {
      return rotation;
    }
    // Get instance field reference: public UnityEngine.Quaternion rotation
    ::UnityEngine::Quaternion& dyn_rotation();
    // public System.Void .ctor(UnityEngine.Transform transform)
    // Offset: 0x22052E0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConstraintRotation* New_ctor(::UnityEngine::Transform* transform) {
      static auto ___internal__logger = ::Logger::get().WithContext("::RootMotion::FinalIK::ConstraintRotation::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConstraintRotation*, creationType>(transform)));
    }
    // public System.Void .ctor()
    // Offset: 0x22052D8
    // Implemented from: RootMotion.FinalIK.Constraint
    // Base method: System.Void Constraint::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConstraintRotation* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::RootMotion::FinalIK::ConstraintRotation::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConstraintRotation*, creationType>()));
    }
    // public override System.Void UpdateConstraint()
    // Offset: 0x22051B0
    // Implemented from: RootMotion.FinalIK.Constraint
    // Base method: System.Void Constraint::UpdateConstraint()
    void UpdateConstraint();
  }; // RootMotion.FinalIK.ConstraintRotation
  #pragma pack(pop)
  static check_size<sizeof(ConstraintRotation), 28 + sizeof(::UnityEngine::Quaternion)> __RootMotion_FinalIK_ConstraintRotationSizeCheck;
  static_assert(sizeof(ConstraintRotation) == 0x2C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::ConstraintRotation::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RootMotion::FinalIK::ConstraintRotation::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RootMotion::FinalIK::ConstraintRotation::UpdateConstraint
// Il2CppName: UpdateConstraint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::ConstraintRotation::*)()>(&RootMotion::FinalIK::ConstraintRotation::UpdateConstraint)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::ConstraintRotation*), "UpdateConstraint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
