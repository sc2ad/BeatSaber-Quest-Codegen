// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HoudiniEngineUnity.IEquivable`1
#include "HoudiniEngineUnity/IEquivable_1.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HEU_DetailPrototype
  class HEU_DetailPrototype;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HoudiniEngineUnity::HEU_DetailPrototype);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_DetailPrototype*, "HoudiniEngineUnity", "HEU_DetailPrototype");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x5C
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HEU_DetailPrototype
  // [TokenAttribute] Offset: FFFFFFFF
  class HEU_DetailPrototype : public ::Il2CppObject/*, public ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_DetailPrototype*>*/ {
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
    // public System.String _prototypePrefab
    // Size: 0x8
    // Offset: 0x10
    ::StringW prototypePrefab;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String _prototypeTexture
    // Size: 0x8
    // Offset: 0x18
    ::StringW prototypeTexture;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Single _bendFactor
    // Size: 0x4
    // Offset: 0x20
    float bendFactor;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.Color _dryColor
    // Size: 0x10
    // Offset: 0x24
    ::UnityEngine::Color dryColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // public UnityEngine.Color _healthyColor
    // Size: 0x10
    // Offset: 0x34
    ::UnityEngine::Color healthyColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // public System.Single _maxHeight
    // Size: 0x4
    // Offset: 0x44
    float maxHeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single _maxWidth
    // Size: 0x4
    // Offset: 0x48
    float maxWidth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single _minHeight
    // Size: 0x4
    // Offset: 0x4C
    float minHeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single _minWidth
    // Size: 0x4
    // Offset: 0x50
    float minWidth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single _noiseSpread
    // Size: 0x4
    // Offset: 0x54
    float noiseSpread;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Int32 _renderMode
    // Size: 0x4
    // Offset: 0x58
    int renderMode;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating interface conversion operator: operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_DetailPrototype*>
    operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_DetailPrototype*>() noexcept {
      return *reinterpret_cast<::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_DetailPrototype*>*>(this);
    }
    // Get instance field reference: public System.String _prototypePrefab
    ::StringW& dyn__prototypePrefab();
    // Get instance field reference: public System.String _prototypeTexture
    ::StringW& dyn__prototypeTexture();
    // Get instance field reference: public System.Single _bendFactor
    float& dyn__bendFactor();
    // Get instance field reference: public UnityEngine.Color _dryColor
    ::UnityEngine::Color& dyn__dryColor();
    // Get instance field reference: public UnityEngine.Color _healthyColor
    ::UnityEngine::Color& dyn__healthyColor();
    // Get instance field reference: public System.Single _maxHeight
    float& dyn__maxHeight();
    // Get instance field reference: public System.Single _maxWidth
    float& dyn__maxWidth();
    // Get instance field reference: public System.Single _minHeight
    float& dyn__minHeight();
    // Get instance field reference: public System.Single _minWidth
    float& dyn__minWidth();
    // Get instance field reference: public System.Single _noiseSpread
    float& dyn__noiseSpread();
    // Get instance field reference: public System.Int32 _renderMode
    int& dyn__renderMode();
    // public System.Boolean IsEquivalentTo(HoudiniEngineUnity.HEU_DetailPrototype other)
    // Offset: 0x16B8B1C
    bool IsEquivalentTo(::HoudiniEngineUnity::HEU_DetailPrototype* other);
    // public System.Void .ctor()
    // Offset: 0x16B89F4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HEU_DetailPrototype* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::HoudiniEngineUnity::HEU_DetailPrototype::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HEU_DetailPrototype*, creationType>()));
    }
  }; // HoudiniEngineUnity.HEU_DetailPrototype
  #pragma pack(pop)
  static check_size<sizeof(HEU_DetailPrototype), 88 + sizeof(int)> __HoudiniEngineUnity_HEU_DetailPrototypeSizeCheck;
  static_assert(sizeof(HEU_DetailPrototype) == 0x5C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_DetailPrototype::IsEquivalentTo
// Il2CppName: IsEquivalentTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_DetailPrototype::*)(::HoudiniEngineUnity::HEU_DetailPrototype*)>(&HoudiniEngineUnity::HEU_DetailPrototype::IsEquivalentTo)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_DetailPrototype")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_DetailPrototype*), "IsEquivalentTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_DetailPrototype::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
