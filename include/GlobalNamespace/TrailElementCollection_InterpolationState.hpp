// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: TrailElementCollection
#include "GlobalNamespace/TrailElementCollection.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TrailElementCollection::InterpolationState, "", "TrailElementCollection/InterpolationState");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: TrailElementCollection/InterpolationState
  // [TokenAttribute] Offset: FFFFFFFF
  struct TrailElementCollection::InterpolationState/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Int32 segmentIndex
    // Size: 0x4
    // Offset: 0x0
    int segmentIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Single segmentLerp
    // Size: 0x4
    // Offset: 0x4
    float segmentLerp;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating value type constructor for type: InterpolationState
    constexpr InterpolationState(int segmentIndex_ = {}, float segmentLerp_ = {}) noexcept : segmentIndex{segmentIndex_}, segmentLerp{segmentLerp_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Int32 segmentIndex
    int& dyn_segmentIndex();
    // Get instance field reference: public System.Single segmentLerp
    float& dyn_segmentLerp();
  }; // TrailElementCollection/InterpolationState
  #pragma pack(pop)
  static check_size<sizeof(TrailElementCollection::InterpolationState), 4 + sizeof(float)> __GlobalNamespace_TrailElementCollection_InterpolationStateSizeCheck;
  static_assert(sizeof(TrailElementCollection::InterpolationState) == 0x8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
