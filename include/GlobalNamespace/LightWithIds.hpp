// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: LightWithIdManager
  class LightWithIdManager;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x21
  #pragma pack(push, 1)
  // Autogenerated type: LightWithIds
  // [TokenAttribute] Offset: FFFFFFFF
  class LightWithIds : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::LightWithIds::LightData
    class LightData;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // [InjectAttribute] Offset: 0xEDEE20
    // private readonly LightWithIdManager _lightManager
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::LightWithIdManager* lightManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LightWithIdManager*) == 0x8);
    // private System.Boolean _isRegistered
    // Size: 0x1
    // Offset: 0x20
    bool isRegistered;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private readonly LightWithIdManager _lightManager
    GlobalNamespace::LightWithIdManager*& dyn__lightManager();
    // Get instance field reference: private System.Boolean _isRegistered
    bool& dyn__isRegistered();
    // protected System.Collections.Generic.IEnumerable`1<LightWithIds/LightData> get_lightIntensityData()
    // Offset: 0xFFFFFFFF
    System::Collections::Generic::IEnumerable_1<GlobalNamespace::LightWithIds::LightData*>* get_lightIntensityData();
    // protected System.Void Start()
    // Offset: 0x1E2A58C
    void Start();
    // protected System.Void OnEnable()
    // Offset: 0x1E2A888
    void OnEnable();
    // private System.Void RegisterForColorChanges()
    // Offset: 0x1E2A590
    void RegisterForColorChanges();
    // protected System.Void OnDisable()
    // Offset: 0x1E2A88C
    void OnDisable();
    // protected System.Void HandleLightManagerDidChangeSomeColorsThisFrame()
    // Offset: 0xFFFFFFFF
    void HandleLightManagerDidChangeSomeColorsThisFrame();
    // protected System.Void .ctor()
    // Offset: 0x1E2AB78
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LightWithIds* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LightWithIds::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LightWithIds*, creationType>()));
    }
  }; // LightWithIds
  #pragma pack(pop)
  static check_size<sizeof(LightWithIds), 32 + sizeof(bool)> __GlobalNamespace_LightWithIdsSizeCheck;
  static_assert(sizeof(LightWithIds) == 0x21);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LightWithIds*, "", "LightWithIds");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LightWithIds::get_lightIntensityData
// Il2CppName: get_lightIntensityData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<GlobalNamespace::LightWithIds::LightData*>* (GlobalNamespace::LightWithIds::*)()>(&GlobalNamespace::LightWithIds::get_lightIntensityData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightWithIds*), "get_lightIntensityData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightWithIds::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightWithIds::*)()>(&GlobalNamespace::LightWithIds::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightWithIds*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightWithIds::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightWithIds::*)()>(&GlobalNamespace::LightWithIds::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightWithIds*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightWithIds::RegisterForColorChanges
// Il2CppName: RegisterForColorChanges
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightWithIds::*)()>(&GlobalNamespace::LightWithIds::RegisterForColorChanges)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightWithIds*), "RegisterForColorChanges", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightWithIds::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightWithIds::*)()>(&GlobalNamespace::LightWithIds::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightWithIds*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightWithIds::HandleLightManagerDidChangeSomeColorsThisFrame
// Il2CppName: HandleLightManagerDidChangeSomeColorsThisFrame
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightWithIds::*)()>(&GlobalNamespace::LightWithIds::HandleLightManagerDidChangeSomeColorsThisFrame)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightWithIds*), "HandleLightManagerDidChangeSomeColorsThisFrame", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightWithIds::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
