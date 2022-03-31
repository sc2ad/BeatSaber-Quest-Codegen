// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: SteamVR_Events
#include "GlobalNamespace/SteamVR_Events.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: SteamVR_TrackedObject
  class SteamVR_TrackedObject;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SteamVR_TrackedObject);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SteamVR_TrackedObject*, "", "SteamVR_TrackedObject");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: SteamVR_TrackedObject
  // [TokenAttribute] Offset: FFFFFFFF
  class SteamVR_TrackedObject : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::SteamVR_TrackedObject::EIndex
    struct EIndex;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: SteamVR_TrackedObject/EIndex
    // [TokenAttribute] Offset: FFFFFFFF
    struct EIndex/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: EIndex
      constexpr EIndex(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public SteamVR_TrackedObject/EIndex None
      static constexpr const int None = -1;
      // Get static field: static public SteamVR_TrackedObject/EIndex None
      static ::GlobalNamespace::SteamVR_TrackedObject::EIndex _get_None();
      // Set static field: static public SteamVR_TrackedObject/EIndex None
      static void _set_None(::GlobalNamespace::SteamVR_TrackedObject::EIndex value);
      // static field const value: static public SteamVR_TrackedObject/EIndex Hmd
      static constexpr const int Hmd = 0;
      // Get static field: static public SteamVR_TrackedObject/EIndex Hmd
      static ::GlobalNamespace::SteamVR_TrackedObject::EIndex _get_Hmd();
      // Set static field: static public SteamVR_TrackedObject/EIndex Hmd
      static void _set_Hmd(::GlobalNamespace::SteamVR_TrackedObject::EIndex value);
      // static field const value: static public SteamVR_TrackedObject/EIndex Device1
      static constexpr const int Device1 = 1;
      // Get static field: static public SteamVR_TrackedObject/EIndex Device1
      static ::GlobalNamespace::SteamVR_TrackedObject::EIndex _get_Device1();
      // Set static field: static public SteamVR_TrackedObject/EIndex Device1
      static void _set_Device1(::GlobalNamespace::SteamVR_TrackedObject::EIndex value);
      // static field const value: static public SteamVR_TrackedObject/EIndex Device2
      static constexpr const int Device2 = 2;
      // Get static field: static public SteamVR_TrackedObject/EIndex Device2
      static ::GlobalNamespace::SteamVR_TrackedObject::EIndex _get_Device2();
      // Set static field: static public SteamVR_TrackedObject/EIndex Device2
      static void _set_Device2(::GlobalNamespace::SteamVR_TrackedObject::EIndex value);
      // static field const value: static public SteamVR_TrackedObject/EIndex Device3
      static constexpr const int Device3 = 3;
      // Get static field: static public SteamVR_TrackedObject/EIndex Device3
      static ::GlobalNamespace::SteamVR_TrackedObject::EIndex _get_Device3();
      // Set static field: static public SteamVR_TrackedObject/EIndex Device3
      static void _set_Device3(::GlobalNamespace::SteamVR_TrackedObject::EIndex value);
      // static field const value: static public SteamVR_TrackedObject/EIndex Device4
      static constexpr const int Device4 = 4;
      // Get static field: static public SteamVR_TrackedObject/EIndex Device4
      static ::GlobalNamespace::SteamVR_TrackedObject::EIndex _get_Device4();
      // Set static field: static public SteamVR_TrackedObject/EIndex Device4
      static void _set_Device4(::GlobalNamespace::SteamVR_TrackedObject::EIndex value);
      // static field const value: static public SteamVR_TrackedObject/EIndex Device5
      static constexpr const int Device5 = 5;
      // Get static field: static public SteamVR_TrackedObject/EIndex Device5
      static ::GlobalNamespace::SteamVR_TrackedObject::EIndex _get_Device5();
      // Set static field: static public SteamVR_TrackedObject/EIndex Device5
      static void _set_Device5(::GlobalNamespace::SteamVR_TrackedObject::EIndex value);
      // static field const value: static public SteamVR_TrackedObject/EIndex Device6
      static constexpr const int Device6 = 6;
      // Get static field: static public SteamVR_TrackedObject/EIndex Device6
      static ::GlobalNamespace::SteamVR_TrackedObject::EIndex _get_Device6();
      // Set static field: static public SteamVR_TrackedObject/EIndex Device6
      static void _set_Device6(::GlobalNamespace::SteamVR_TrackedObject::EIndex value);
      // static field const value: static public SteamVR_TrackedObject/EIndex Device7
      static constexpr const int Device7 = 7;
      // Get static field: static public SteamVR_TrackedObject/EIndex Device7
      static ::GlobalNamespace::SteamVR_TrackedObject::EIndex _get_Device7();
      // Set static field: static public SteamVR_TrackedObject/EIndex Device7
      static void _set_Device7(::GlobalNamespace::SteamVR_TrackedObject::EIndex value);
      // static field const value: static public SteamVR_TrackedObject/EIndex Device8
      static constexpr const int Device8 = 8;
      // Get static field: static public SteamVR_TrackedObject/EIndex Device8
      static ::GlobalNamespace::SteamVR_TrackedObject::EIndex _get_Device8();
      // Set static field: static public SteamVR_TrackedObject/EIndex Device8
      static void _set_Device8(::GlobalNamespace::SteamVR_TrackedObject::EIndex value);
      // static field const value: static public SteamVR_TrackedObject/EIndex Device9
      static constexpr const int Device9 = 9;
      // Get static field: static public SteamVR_TrackedObject/EIndex Device9
      static ::GlobalNamespace::SteamVR_TrackedObject::EIndex _get_Device9();
      // Set static field: static public SteamVR_TrackedObject/EIndex Device9
      static void _set_Device9(::GlobalNamespace::SteamVR_TrackedObject::EIndex value);
      // static field const value: static public SteamVR_TrackedObject/EIndex Device10
      static constexpr const int Device10 = 10;
      // Get static field: static public SteamVR_TrackedObject/EIndex Device10
      static ::GlobalNamespace::SteamVR_TrackedObject::EIndex _get_Device10();
      // Set static field: static public SteamVR_TrackedObject/EIndex Device10
      static void _set_Device10(::GlobalNamespace::SteamVR_TrackedObject::EIndex value);
      // static field const value: static public SteamVR_TrackedObject/EIndex Device11
      static constexpr const int Device11 = 11;
      // Get static field: static public SteamVR_TrackedObject/EIndex Device11
      static ::GlobalNamespace::SteamVR_TrackedObject::EIndex _get_Device11();
      // Set static field: static public SteamVR_TrackedObject/EIndex Device11
      static void _set_Device11(::GlobalNamespace::SteamVR_TrackedObject::EIndex value);
      // static field const value: static public SteamVR_TrackedObject/EIndex Device12
      static constexpr const int Device12 = 12;
      // Get static field: static public SteamVR_TrackedObject/EIndex Device12
      static ::GlobalNamespace::SteamVR_TrackedObject::EIndex _get_Device12();
      // Set static field: static public SteamVR_TrackedObject/EIndex Device12
      static void _set_Device12(::GlobalNamespace::SteamVR_TrackedObject::EIndex value);
      // static field const value: static public SteamVR_TrackedObject/EIndex Device13
      static constexpr const int Device13 = 13;
      // Get static field: static public SteamVR_TrackedObject/EIndex Device13
      static ::GlobalNamespace::SteamVR_TrackedObject::EIndex _get_Device13();
      // Set static field: static public SteamVR_TrackedObject/EIndex Device13
      static void _set_Device13(::GlobalNamespace::SteamVR_TrackedObject::EIndex value);
      // static field const value: static public SteamVR_TrackedObject/EIndex Device14
      static constexpr const int Device14 = 14;
      // Get static field: static public SteamVR_TrackedObject/EIndex Device14
      static ::GlobalNamespace::SteamVR_TrackedObject::EIndex _get_Device14();
      // Set static field: static public SteamVR_TrackedObject/EIndex Device14
      static void _set_Device14(::GlobalNamespace::SteamVR_TrackedObject::EIndex value);
      // static field const value: static public SteamVR_TrackedObject/EIndex Device15
      static constexpr const int Device15 = 15;
      // Get static field: static public SteamVR_TrackedObject/EIndex Device15
      static ::GlobalNamespace::SteamVR_TrackedObject::EIndex _get_Device15();
      // Set static field: static public SteamVR_TrackedObject/EIndex Device15
      static void _set_Device15(::GlobalNamespace::SteamVR_TrackedObject::EIndex value);
      // Get instance field reference: public System.Int32 value__
      int& dyn_value__();
    }; // SteamVR_TrackedObject/EIndex
    #pragma pack(pop)
    static check_size<sizeof(SteamVR_TrackedObject::EIndex), 0 + sizeof(int)> __GlobalNamespace_SteamVR_TrackedObject_EIndexSizeCheck;
    static_assert(sizeof(SteamVR_TrackedObject::EIndex) == 0x4);
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public SteamVR_TrackedObject/EIndex index
    // Size: 0x4
    // Offset: 0x18
    ::GlobalNamespace::SteamVR_TrackedObject::EIndex index;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SteamVR_TrackedObject::EIndex) == 0x4);
    // Padding between fields: index and: origin
    char __padding0[0x4] = {};
    // [TooltipAttribute] Offset: 0x1208DD8
    // public UnityEngine.Transform origin
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Transform* origin;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private System.Boolean <isValid>k__BackingField
    // Size: 0x1
    // Offset: 0x28
    bool isValid;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isValid and: newPosesAction
    char __padding2[0x7] = {};
    // private SteamVR_Events/Action newPosesAction
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::SteamVR_Events::Action* newPosesAction;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SteamVR_Events::Action*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public SteamVR_TrackedObject/EIndex index
    ::GlobalNamespace::SteamVR_TrackedObject::EIndex& dyn_index();
    // Get instance field reference: public UnityEngine.Transform origin
    ::UnityEngine::Transform*& dyn_origin();
    // Get instance field reference: private System.Boolean <isValid>k__BackingField
    bool& dyn_$isValid$k__BackingField();
    // Get instance field reference: private SteamVR_Events/Action newPosesAction
    ::GlobalNamespace::SteamVR_Events::Action*& dyn_newPosesAction();
    // public System.Boolean get_isValid()
    // Offset: 0x1B9DB58
    bool get_isValid();
    // private System.Void set_isValid(System.Boolean value)
    // Offset: 0x1B9DB60
    void set_isValid(bool value);
    // private System.Void OnNewPoses(Valve.VR.TrackedDevicePose_t[] poses)
    // Offset: 0x1B9DB6C
    void OnNewPoses(::ArrayW<::Valve::VR::TrackedDevicePose_t> poses);
    // private System.Void OnEnable()
    // Offset: 0x1B9DE78
    void OnEnable();
    // private System.Void OnDisable()
    // Offset: 0x1B9DF28
    void OnDisable();
    // public System.Void SetDeviceIndex(System.Int32 index)
    // Offset: 0x1B9DF60
    void SetDeviceIndex(int index);
    // private System.Void .ctor()
    // Offset: 0x1B9DDC8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SteamVR_TrackedObject* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SteamVR_TrackedObject::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SteamVR_TrackedObject*, creationType>()));
    }
  }; // SteamVR_TrackedObject
  #pragma pack(pop)
  static check_size<sizeof(SteamVR_TrackedObject), 48 + sizeof(::GlobalNamespace::SteamVR_Events::Action*)> __GlobalNamespace_SteamVR_TrackedObjectSizeCheck;
  static_assert(sizeof(SteamVR_TrackedObject) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SteamVR_TrackedObject::EIndex, "", "SteamVR_TrackedObject/EIndex");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_TrackedObject::get_isValid
// Il2CppName: get_isValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::SteamVR_TrackedObject::*)()>(&GlobalNamespace::SteamVR_TrackedObject::get_isValid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_TrackedObject*), "get_isValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_TrackedObject::set_isValid
// Il2CppName: set_isValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_TrackedObject::*)(bool)>(&GlobalNamespace::SteamVR_TrackedObject::set_isValid)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_TrackedObject*), "set_isValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_TrackedObject::OnNewPoses
// Il2CppName: OnNewPoses
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_TrackedObject::*)(::ArrayW<::Valve::VR::TrackedDevicePose_t>)>(&GlobalNamespace::SteamVR_TrackedObject::OnNewPoses)> {
  static const MethodInfo* get() {
    static auto* poses = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("Valve.VR", "TrackedDevicePose_t"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_TrackedObject*), "OnNewPoses", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{poses});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_TrackedObject::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_TrackedObject::*)()>(&GlobalNamespace::SteamVR_TrackedObject::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_TrackedObject*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_TrackedObject::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_TrackedObject::*)()>(&GlobalNamespace::SteamVR_TrackedObject::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_TrackedObject*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_TrackedObject::SetDeviceIndex
// Il2CppName: SetDeviceIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_TrackedObject::*)(int)>(&GlobalNamespace::SteamVR_TrackedObject::SetDeviceIndex)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_TrackedObject*), "SetDeviceIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_TrackedObject::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
