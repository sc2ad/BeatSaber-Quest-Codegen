// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: RandomValueToShader
  class RandomValueToShader;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::RandomValueToShader);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RandomValueToShader*, "", "RandomValueToShader");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: RandomValueToShader
  // [TokenAttribute] Offset: FFFFFFFF
  class RandomValueToShader : public ::GlobalNamespace::PersistentScriptableObject {
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
    // private System.Int32 _lastFrameNum
    // Size: 0x4
    // Offset: 0x18
    int lastFrameNum;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0x12381F8
    // Get static field: static private readonly System.Int32 _randomValueID
    static int _get__randomValueID();
    // Set static field: static private readonly System.Int32 _randomValueID
    static void _set__randomValueID(int value);
    // Get instance field reference: private System.Int32 _lastFrameNum
    int& dyn__lastFrameNum();
    // public System.Void SetRandomValueToShaders()
    // Offset: 0x2ACF3B8
    void SetRandomValueToShaders();
    // public System.Void .ctor()
    // Offset: 0x2AD9338
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RandomValueToShader* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::RandomValueToShader::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RandomValueToShader*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x2AD9348
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // RandomValueToShader
  #pragma pack(pop)
  static check_size<sizeof(RandomValueToShader), 24 + sizeof(int)> __GlobalNamespace_RandomValueToShaderSizeCheck;
  static_assert(sizeof(RandomValueToShader) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::RandomValueToShader::SetRandomValueToShaders
// Il2CppName: SetRandomValueToShaders
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RandomValueToShader::*)()>(&GlobalNamespace::RandomValueToShader::SetRandomValueToShaders)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RandomValueToShader*), "SetRandomValueToShaders", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RandomValueToShader::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::RandomValueToShader::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::RandomValueToShader::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RandomValueToShader*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
