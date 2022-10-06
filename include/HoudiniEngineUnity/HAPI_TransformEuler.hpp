// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: HoudiniEngineUnity.HAPI_XYZOrder
#include "HoudiniEngineUnity/HAPI_XYZOrder.hpp"
// Including type: HoudiniEngineUnity.HAPI_RSTOrder
#include "HoudiniEngineUnity/HAPI_RSTOrder.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HAPI_TransformEuler
  struct HAPI_TransformEuler;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_TransformEuler, "HoudiniEngineUnity", "HAPI_TransformEuler");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x28
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: HoudiniEngineUnity.HAPI_TransformEuler
  // [TokenAttribute] Offset: FFFFFFFF
  struct HAPI_TransformEuler/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Single[] position
    // Size: 0x8
    // Offset: 0x0
    ::ArrayW<float> position;
    // Field size check
    static_assert(sizeof(::ArrayW<float>) == 0x8);
    // public System.Single[] rotationEuler
    // Size: 0x8
    // Offset: 0x8
    ::ArrayW<float> rotationEuler;
    // Field size check
    static_assert(sizeof(::ArrayW<float>) == 0x8);
    // public System.Single[] scale
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<float> scale;
    // Field size check
    static_assert(sizeof(::ArrayW<float>) == 0x8);
    // public System.Single[] shear
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<float> shear;
    // Field size check
    static_assert(sizeof(::ArrayW<float>) == 0x8);
    // public HoudiniEngineUnity.HAPI_XYZOrder rotationOrder
    // Size: 0x4
    // Offset: 0x20
    ::HoudiniEngineUnity::HAPI_XYZOrder rotationOrder;
    // Field size check
    static_assert(sizeof(::HoudiniEngineUnity::HAPI_XYZOrder) == 0x4);
    // public HoudiniEngineUnity.HAPI_RSTOrder rstOrder
    // Size: 0x4
    // Offset: 0x24
    ::HoudiniEngineUnity::HAPI_RSTOrder rstOrder;
    // Field size check
    static_assert(sizeof(::HoudiniEngineUnity::HAPI_RSTOrder) == 0x4);
    public:
    // Creating value type constructor for type: HAPI_TransformEuler
    constexpr HAPI_TransformEuler(::ArrayW<float> position_ = ::ArrayW<float>(static_cast<void*>(nullptr)), ::ArrayW<float> rotationEuler_ = ::ArrayW<float>(static_cast<void*>(nullptr)), ::ArrayW<float> scale_ = ::ArrayW<float>(static_cast<void*>(nullptr)), ::ArrayW<float> shear_ = ::ArrayW<float>(static_cast<void*>(nullptr)), ::HoudiniEngineUnity::HAPI_XYZOrder rotationOrder_ = {}, ::HoudiniEngineUnity::HAPI_RSTOrder rstOrder_ = {}) noexcept : position{position_}, rotationEuler{rotationEuler_}, scale{scale_}, shear{shear_}, rotationOrder{rotationOrder_}, rstOrder{rstOrder_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Single[] position
    [[deprecated("Use field access instead!")]] ::ArrayW<float>& dyn_position();
    // Get instance field reference: public System.Single[] rotationEuler
    [[deprecated("Use field access instead!")]] ::ArrayW<float>& dyn_rotationEuler();
    // Get instance field reference: public System.Single[] scale
    [[deprecated("Use field access instead!")]] ::ArrayW<float>& dyn_scale();
    // Get instance field reference: public System.Single[] shear
    [[deprecated("Use field access instead!")]] ::ArrayW<float>& dyn_shear();
    // Get instance field reference: public HoudiniEngineUnity.HAPI_XYZOrder rotationOrder
    [[deprecated("Use field access instead!")]] ::HoudiniEngineUnity::HAPI_XYZOrder& dyn_rotationOrder();
    // Get instance field reference: public HoudiniEngineUnity.HAPI_RSTOrder rstOrder
    [[deprecated("Use field access instead!")]] ::HoudiniEngineUnity::HAPI_RSTOrder& dyn_rstOrder();
    // public System.Void .ctor(System.Boolean initializeFields)
    // Offset: 0x16F1544
    HAPI_TransformEuler(bool initializeFields);
    // public System.Void Init()
    // Offset: 0x16F15F0
    void Init();
  }; // HoudiniEngineUnity.HAPI_TransformEuler
  #pragma pack(pop)
  static check_size<sizeof(HAPI_TransformEuler), 36 + sizeof(::HoudiniEngineUnity::HAPI_RSTOrder)> __HoudiniEngineUnity_HAPI_TransformEulerSizeCheck;
  static_assert(sizeof(HAPI_TransformEuler) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::HAPI_TransformEuler::HAPI_TransformEuler
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HoudiniEngineUnity::HAPI_TransformEuler::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HAPI_TransformEuler::*)()>(&HoudiniEngineUnity::HAPI_TransformEuler::Init)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HAPI_TransformEuler), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
