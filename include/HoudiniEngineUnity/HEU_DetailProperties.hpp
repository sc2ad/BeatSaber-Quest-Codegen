// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HoudiniEngineUnity.IEquivable`1
#include "HoudiniEngineUnity/IEquivable_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HEU_DetailProperties
  class HEU_DetailProperties;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HoudiniEngineUnity::HEU_DetailProperties);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_DetailProperties*, "HoudiniEngineUnity", "HEU_DetailProperties");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HEU_DetailProperties
  // [TokenAttribute] Offset: FFFFFFFF
  class HEU_DetailProperties : public ::Il2CppObject/*, public ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_DetailProperties*>*/ {
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
    // public System.Single _detailDistance
    // Size: 0x4
    // Offset: 0x10
    float detailDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single _detailDensity
    // Size: 0x4
    // Offset: 0x14
    float detailDensity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Int32 _detailResolution
    // Size: 0x4
    // Offset: 0x18
    int detailResolution;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 _detailResolutionPerPatch
    // Size: 0x4
    // Offset: 0x1C
    int detailResolutionPerPatch;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating interface conversion operator: operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_DetailProperties*>
    operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_DetailProperties*>() noexcept {
      return *reinterpret_cast<::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_DetailProperties*>*>(this);
    }
    // Get instance field reference: public System.Single _detailDistance
    float& dyn__detailDistance();
    // Get instance field reference: public System.Single _detailDensity
    float& dyn__detailDensity();
    // Get instance field reference: public System.Int32 _detailResolution
    int& dyn__detailResolution();
    // Get instance field reference: public System.Int32 _detailResolutionPerPatch
    int& dyn__detailResolutionPerPatch();
    // public System.Boolean IsEquivalentTo(HoudiniEngineUnity.HEU_DetailProperties other)
    // Offset: 0x16B884C
    bool IsEquivalentTo(::HoudiniEngineUnity::HEU_DetailProperties* other);
    // public System.Void .ctor()
    // Offset: 0x16B89DC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HEU_DetailProperties* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::HoudiniEngineUnity::HEU_DetailProperties::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HEU_DetailProperties*, creationType>()));
    }
  }; // HoudiniEngineUnity.HEU_DetailProperties
  #pragma pack(pop)
  static check_size<sizeof(HEU_DetailProperties), 28 + sizeof(int)> __HoudiniEngineUnity_HEU_DetailPropertiesSizeCheck;
  static_assert(sizeof(HEU_DetailProperties) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_DetailProperties::IsEquivalentTo
// Il2CppName: IsEquivalentTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_DetailProperties::*)(::HoudiniEngineUnity::HEU_DetailProperties*)>(&HoudiniEngineUnity::HEU_DetailProperties::IsEquivalentTo)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_DetailProperties")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_DetailProperties*), "IsEquivalentTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_DetailProperties::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
