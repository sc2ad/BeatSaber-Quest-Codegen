// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: OVRPlugin/HandState
#include "GlobalNamespace/OVRPlugin_HandState.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Text
  class Text;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: OVRHandTest
  class OVRHandTest;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OVRHandTest);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRHandTest*, "", "OVRHandTest");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x174
  #pragma pack(push, 1)
  // Autogenerated type: OVRHandTest
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRHandTest : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::OVRHandTest::BoolMonitor
    class BoolMonitor;
    // Nested type: ::GlobalNamespace::OVRHandTest::$$c
    class $$c;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public UnityEngine.UI.Text uiText
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::UI::Text* uiText;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Text*) == 0x8);
    // private System.Collections.Generic.List`1<OVRHandTest/BoolMonitor> monitors
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::List_1<::GlobalNamespace::OVRHandTest::BoolMonitor*>* monitors;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::OVRHandTest::BoolMonitor*>*) == 0x8);
    // private System.Text.StringBuilder data
    // Size: 0x8
    // Offset: 0x28
    ::System::Text::StringBuilder* data;
    // Field size check
    static_assert(sizeof(::System::Text::StringBuilder*) == 0x8);
    // private OVRPlugin/HandState hs_LH
    // Size: 0x78
    // Offset: 0x30
    ::GlobalNamespace::OVRPlugin::HandState hs_LH;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRPlugin::HandState) == 0x78);
    // private OVRPlugin/HandState hs_RH
    // Size: 0x78
    // Offset: 0xA8
    ::GlobalNamespace::OVRPlugin::HandState hs_RH;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRPlugin::HandState) == 0x78);
    // private OVRPlugin/Skeleton skel_LH
    // Size: 0x20
    // Offset: 0x120
    ::GlobalNamespace::OVRPlugin::Skeleton skel_LH;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRPlugin::Skeleton) == 0x20);
    // private OVRPlugin/Skeleton skel_RH
    // Size: 0x20
    // Offset: 0x140
    ::GlobalNamespace::OVRPlugin::Skeleton skel_RH;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRPlugin::Skeleton) == 0x20);
    // private OVRPlugin/Mesh mesh_LH
    // Size: 0x8
    // Offset: 0x160
    ::GlobalNamespace::OVRPlugin::Mesh* mesh_LH;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRPlugin::Mesh*) == 0x8);
    // private OVRPlugin/Mesh mesh_RH
    // Size: 0x8
    // Offset: 0x168
    ::GlobalNamespace::OVRPlugin::Mesh* mesh_RH;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRPlugin::Mesh*) == 0x8);
    // private System.Boolean result_skel_LH
    // Size: 0x1
    // Offset: 0x170
    bool result_skel_LH;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean result_skel_RH
    // Size: 0x1
    // Offset: 0x171
    bool result_skel_RH;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean result_mesh_LH
    // Size: 0x1
    // Offset: 0x172
    bool result_mesh_LH;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean result_mesh_RH
    // Size: 0x1
    // Offset: 0x173
    bool result_mesh_RH;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get static field: static private System.String prevConnected
    static ::StringW _get_prevConnected();
    // Set static field: static private System.String prevConnected
    static void _set_prevConnected(::StringW value);
    // Get static field: static private OVRHandTest/BoolMonitor controllers
    static ::GlobalNamespace::OVRHandTest::BoolMonitor* _get_controllers();
    // Set static field: static private OVRHandTest/BoolMonitor controllers
    static void _set_controllers(::GlobalNamespace::OVRHandTest::BoolMonitor* value);
    // Get instance field reference: public UnityEngine.UI.Text uiText
    ::UnityEngine::UI::Text*& dyn_uiText();
    // Get instance field reference: private System.Collections.Generic.List`1<OVRHandTest/BoolMonitor> monitors
    ::System::Collections::Generic::List_1<::GlobalNamespace::OVRHandTest::BoolMonitor*>*& dyn_monitors();
    // Get instance field reference: private System.Text.StringBuilder data
    ::System::Text::StringBuilder*& dyn_data();
    // Get instance field reference: private OVRPlugin/HandState hs_LH
    ::GlobalNamespace::OVRPlugin::HandState& dyn_hs_LH();
    // Get instance field reference: private OVRPlugin/HandState hs_RH
    ::GlobalNamespace::OVRPlugin::HandState& dyn_hs_RH();
    // Get instance field reference: private OVRPlugin/Skeleton skel_LH
    ::GlobalNamespace::OVRPlugin::Skeleton& dyn_skel_LH();
    // Get instance field reference: private OVRPlugin/Skeleton skel_RH
    ::GlobalNamespace::OVRPlugin::Skeleton& dyn_skel_RH();
    // Get instance field reference: private OVRPlugin/Mesh mesh_LH
    ::GlobalNamespace::OVRPlugin::Mesh*& dyn_mesh_LH();
    // Get instance field reference: private OVRPlugin/Mesh mesh_RH
    ::GlobalNamespace::OVRPlugin::Mesh*& dyn_mesh_RH();
    // Get instance field reference: private System.Boolean result_skel_LH
    bool& dyn_result_skel_LH();
    // Get instance field reference: private System.Boolean result_skel_RH
    bool& dyn_result_skel_RH();
    // Get instance field reference: private System.Boolean result_mesh_LH
    bool& dyn_result_mesh_LH();
    // Get instance field reference: private System.Boolean result_mesh_RH
    bool& dyn_result_mesh_RH();
    // private System.Void Start()
    // Offset: 0x19B9C64
    void Start();
    // private System.Void Update()
    // Offset: 0x19B9F38
    void Update();
    // public System.Void .ctor()
    // Offset: 0x19BAB40
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRHandTest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OVRHandTest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRHandTest*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x19BABC8
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // OVRHandTest
  #pragma pack(pop)
  static check_size<sizeof(OVRHandTest), 371 + sizeof(bool)> __GlobalNamespace_OVRHandTestSizeCheck;
  static_assert(sizeof(OVRHandTest) == 0x174);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRHandTest::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRHandTest::*)()>(&GlobalNamespace::OVRHandTest::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRHandTest*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRHandTest::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRHandTest::*)()>(&GlobalNamespace::OVRHandTest::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRHandTest*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRHandTest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::OVRHandTest::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::OVRHandTest::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRHandTest*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
