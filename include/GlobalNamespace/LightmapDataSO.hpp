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
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Texture2D
  class Texture2D;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: LightmapDataSO
  class LightmapDataSO;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::LightmapDataSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightmapDataSO*, "", "LightmapDataSO");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: LightmapDataSO
  // [TokenAttribute] Offset: FFFFFFFF
  class LightmapDataSO : public ::GlobalNamespace::PersistentScriptableObject {
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
    // private UnityEngine.Texture2D _lightmap1
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Texture2D* lightmap1;
    // Field size check
    static_assert(sizeof(::UnityEngine::Texture2D*) == 0x8);
    // private UnityEngine.Texture2D _lightmap2
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Texture2D* lightmap2;
    // Field size check
    static_assert(sizeof(::UnityEngine::Texture2D*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.Texture2D _lightmap1
    ::UnityEngine::Texture2D*& dyn__lightmap1();
    // Get instance field reference: private UnityEngine.Texture2D _lightmap2
    ::UnityEngine::Texture2D*& dyn__lightmap2();
    // public UnityEngine.Texture2D get_lightmap1()
    // Offset: 0x147E738
    ::UnityEngine::Texture2D* get_lightmap1();
    // public System.Void set_lightmap1(UnityEngine.Texture2D value)
    // Offset: 0x147E740
    void set_lightmap1(::UnityEngine::Texture2D* value);
    // public UnityEngine.Texture2D get_lightmap2()
    // Offset: 0x147E748
    ::UnityEngine::Texture2D* get_lightmap2();
    // public System.Void set_lightmap2(UnityEngine.Texture2D value)
    // Offset: 0x147E750
    void set_lightmap2(::UnityEngine::Texture2D* value);
    // public System.Void .ctor()
    // Offset: 0x147E758
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LightmapDataSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LightmapDataSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LightmapDataSO*, creationType>()));
    }
  }; // LightmapDataSO
  #pragma pack(pop)
  static check_size<sizeof(LightmapDataSO), 32 + sizeof(::UnityEngine::Texture2D*)> __GlobalNamespace_LightmapDataSOSizeCheck;
  static_assert(sizeof(LightmapDataSO) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LightmapDataSO::get_lightmap1
// Il2CppName: get_lightmap1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Texture2D* (GlobalNamespace::LightmapDataSO::*)()>(&GlobalNamespace::LightmapDataSO::get_lightmap1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightmapDataSO*), "get_lightmap1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightmapDataSO::set_lightmap1
// Il2CppName: set_lightmap1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightmapDataSO::*)(::UnityEngine::Texture2D*)>(&GlobalNamespace::LightmapDataSO::set_lightmap1)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Texture2D")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightmapDataSO*), "set_lightmap1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightmapDataSO::get_lightmap2
// Il2CppName: get_lightmap2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Texture2D* (GlobalNamespace::LightmapDataSO::*)()>(&GlobalNamespace::LightmapDataSO::get_lightmap2)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightmapDataSO*), "get_lightmap2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightmapDataSO::set_lightmap2
// Il2CppName: set_lightmap2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightmapDataSO::*)(::UnityEngine::Texture2D*)>(&GlobalNamespace::LightmapDataSO::set_lightmap2)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Texture2D")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightmapDataSO*), "set_lightmap2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightmapDataSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
