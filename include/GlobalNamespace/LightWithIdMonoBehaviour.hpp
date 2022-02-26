// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: ILightWithId
#include "GlobalNamespace/ILightWithId.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: LightWithIdManager
  class LightWithIdManager;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: LightWithIdMonoBehaviour
  class LightWithIdMonoBehaviour;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::LightWithIdMonoBehaviour);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightWithIdMonoBehaviour*, "", "LightWithIdMonoBehaviour");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x29
  #pragma pack(push, 1)
  // Autogenerated type: LightWithIdMonoBehaviour
  // [TokenAttribute] Offset: FFFFFFFF
  class LightWithIdMonoBehaviour : public ::UnityEngine::MonoBehaviour/*, public ::GlobalNamespace::ILightWithId*/ {
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
    // private System.Int32 _ID
    // Size: 0x4
    // Offset: 0x18
    int _ID;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: _ID and: lightManager
    char __padding0[0x4] = {};
    // [InjectAttribute] Offset: 0x1229778
    // private readonly LightWithIdManager _lightManager
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::LightWithIdManager* lightManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::LightWithIdManager*) == 0x8);
    // private System.Boolean _isRegistered
    // Size: 0x1
    // Offset: 0x28
    bool isRegistered;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::GlobalNamespace::ILightWithId
    operator ::GlobalNamespace::ILightWithId() noexcept {
      return *reinterpret_cast<::GlobalNamespace::ILightWithId*>(this);
    }
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Int32 _ID
    int& dyn__ID();
    // Get instance field reference: private readonly LightWithIdManager _lightManager
    ::GlobalNamespace::LightWithIdManager*& dyn__lightManager();
    // Get instance field reference: private System.Boolean _isRegistered
    bool& dyn__isRegistered();
    // public System.Int32 get_lightId()
    // Offset: 0x208C048
    int get_lightId();
    // public System.Boolean get_isRegistered()
    // Offset: 0x208C050
    bool get_isRegistered();
    // public System.Void __SetIsRegistered()
    // Offset: 0x208C058
    void __SetIsRegistered();
    // public System.Void __SetIsUnRegistered()
    // Offset: 0x208C064
    void __SetIsUnRegistered();
    // public System.Void ColorWasSet(UnityEngine.Color color)
    // Offset: 0xFFFFFFFF
    void ColorWasSet(::UnityEngine::Color color);
    // protected System.Void OnEnable()
    // Offset: 0x208C06C
    void OnEnable();
    // protected System.Void Start()
    // Offset: 0x208C104
    void Start();
    // protected System.Void OnDisable()
    // Offset: 0x208C108
    void OnDisable();
    // private System.Void RegisterLight()
    // Offset: 0x208C070
    void RegisterLight();
    // public System.Void SetLightId(System.Int32 newLightId)
    // Offset: 0x208C19C
    void SetLightId(int newLightId);
    // protected System.Void .ctor()
    // Offset: 0x2084D20
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LightWithIdMonoBehaviour* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LightWithIdMonoBehaviour::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LightWithIdMonoBehaviour*, creationType>()));
    }
  }; // LightWithIdMonoBehaviour
  #pragma pack(pop)
  static check_size<sizeof(LightWithIdMonoBehaviour), 40 + sizeof(bool)> __GlobalNamespace_LightWithIdMonoBehaviourSizeCheck;
  static_assert(sizeof(LightWithIdMonoBehaviour) == 0x29);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LightWithIdMonoBehaviour::get_lightId
// Il2CppName: get_lightId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::LightWithIdMonoBehaviour::*)()>(&GlobalNamespace::LightWithIdMonoBehaviour::get_lightId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightWithIdMonoBehaviour*), "get_lightId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightWithIdMonoBehaviour::get_isRegistered
// Il2CppName: get_isRegistered
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::LightWithIdMonoBehaviour::*)()>(&GlobalNamespace::LightWithIdMonoBehaviour::get_isRegistered)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightWithIdMonoBehaviour*), "get_isRegistered", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightWithIdMonoBehaviour::__SetIsRegistered
// Il2CppName: __SetIsRegistered
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightWithIdMonoBehaviour::*)()>(&GlobalNamespace::LightWithIdMonoBehaviour::__SetIsRegistered)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightWithIdMonoBehaviour*), "__SetIsRegistered", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightWithIdMonoBehaviour::__SetIsUnRegistered
// Il2CppName: __SetIsUnRegistered
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightWithIdMonoBehaviour::*)()>(&GlobalNamespace::LightWithIdMonoBehaviour::__SetIsUnRegistered)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightWithIdMonoBehaviour*), "__SetIsUnRegistered", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightWithIdMonoBehaviour::ColorWasSet
// Il2CppName: ColorWasSet
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightWithIdMonoBehaviour::*)(::UnityEngine::Color)>(&GlobalNamespace::LightWithIdMonoBehaviour::ColorWasSet)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightWithIdMonoBehaviour*), "ColorWasSet", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightWithIdMonoBehaviour::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightWithIdMonoBehaviour::*)()>(&GlobalNamespace::LightWithIdMonoBehaviour::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightWithIdMonoBehaviour*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightWithIdMonoBehaviour::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightWithIdMonoBehaviour::*)()>(&GlobalNamespace::LightWithIdMonoBehaviour::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightWithIdMonoBehaviour*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightWithIdMonoBehaviour::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightWithIdMonoBehaviour::*)()>(&GlobalNamespace::LightWithIdMonoBehaviour::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightWithIdMonoBehaviour*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightWithIdMonoBehaviour::RegisterLight
// Il2CppName: RegisterLight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightWithIdMonoBehaviour::*)()>(&GlobalNamespace::LightWithIdMonoBehaviour::RegisterLight)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightWithIdMonoBehaviour*), "RegisterLight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightWithIdMonoBehaviour::SetLightId
// Il2CppName: SetLightId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightWithIdMonoBehaviour::*)(int)>(&GlobalNamespace::LightWithIdMonoBehaviour::SetLightId)> {
  static const MethodInfo* get() {
    static auto* newLightId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightWithIdMonoBehaviour*), "SetLightId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newLightId});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightWithIdMonoBehaviour::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
