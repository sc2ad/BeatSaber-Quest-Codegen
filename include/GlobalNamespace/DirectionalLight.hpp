// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: DirectionalLight
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExecuteInEditMode] Offset: FFFFFFFF
  class DirectionalLight : public UnityEngine::MonoBehaviour {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // [ColorUsageAttribute] Offset: 0xEDEA74
    // public UnityEngine.Color color
    // Size: 0x10
    // Offset: 0x18
    UnityEngine::Color color;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // public System.Single intensity
    // Size: 0x4
    // Offset: 0x28
    float intensity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single radius
    // Size: 0x4
    // Offset: 0x2C
    float radius;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static field const value: static public System.Int32 kMaxLights
    static constexpr const int kMaxLights = 5;
    // Get static field: static public System.Int32 kMaxLights
    static int _get_kMaxLights();
    // Set static field: static public System.Int32 kMaxLights
    static void _set_kMaxLights(int value);
    // Get static field: static private System.Collections.Generic.List`1<DirectionalLight> _lights
    static System::Collections::Generic::List_1<GlobalNamespace::DirectionalLight*>* _get__lights();
    // Set static field: static private System.Collections.Generic.List`1<DirectionalLight> _lights
    static void _set__lights(System::Collections::Generic::List_1<GlobalNamespace::DirectionalLight*>* value);
    // Get static field: static private DirectionalLight _mainLight
    static GlobalNamespace::DirectionalLight* _get__mainLight();
    // Set static field: static private DirectionalLight _mainLight
    static void _set__mainLight(GlobalNamespace::DirectionalLight* value);
    // Get instance field reference: public UnityEngine.Color color
    UnityEngine::Color& dyn_color();
    // Get instance field reference: public System.Single intensity
    float& dyn_intensity();
    // Get instance field reference: public System.Single radius
    float& dyn_radius();
    // static public System.Collections.Generic.List`1<DirectionalLight> get_lights()
    // Offset: 0x1E2677C
    static System::Collections::Generic::List_1<GlobalNamespace::DirectionalLight*>* get_lights();
    // protected System.Void OnEnable()
    // Offset: 0x1E267E4
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x1E26868
    void OnDisable();
    // public System.Void .ctor()
    // Offset: 0x1E268EC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DirectionalLight* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::DirectionalLight::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DirectionalLight*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x1E268FC
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // DirectionalLight
  #pragma pack(pop)
  static check_size<sizeof(DirectionalLight), 44 + sizeof(float)> __GlobalNamespace_DirectionalLightSizeCheck;
  static_assert(sizeof(DirectionalLight) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DirectionalLight*, "", "DirectionalLight");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::DirectionalLight::get_lights
// Il2CppName: get_lights
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<GlobalNamespace::DirectionalLight*>* (*)()>(&GlobalNamespace::DirectionalLight::get_lights)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DirectionalLight*), "get_lights", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DirectionalLight::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DirectionalLight::*)()>(&GlobalNamespace::DirectionalLight::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DirectionalLight*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DirectionalLight::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DirectionalLight::*)()>(&GlobalNamespace::DirectionalLight::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DirectionalLight*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DirectionalLight::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::DirectionalLight::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::DirectionalLight::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DirectionalLight*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
