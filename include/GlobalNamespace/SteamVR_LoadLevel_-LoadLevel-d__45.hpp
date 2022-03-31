// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: SteamVR_LoadLevel
#include "GlobalNamespace/SteamVR_LoadLevel.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
// Including type: SteamVR_Controller
#include "GlobalNamespace/SteamVR_Controller.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: CVROverlay
  class CVROverlay;
  // Forward declaring type: CVRCompositor
  class CVRCompositor;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SteamVR_LoadLevel::$LoadLevel$d__45);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SteamVR_LoadLevel::$LoadLevel$d__45*, "", "SteamVR_LoadLevel/<LoadLevel>d__45");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: SteamVR_LoadLevel/<LoadLevel>d__45
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class SteamVR_LoadLevel::$LoadLevel$d__45 : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
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
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$1__state and: $$2__current
    char __padding0[0x4] = {};
    // private System.Object <>2__current
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* $$2__current;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // public SteamVR_LoadLevel <>4__this
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::SteamVR_LoadLevel* $$4__this;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SteamVR_LoadLevel*) == 0x8);
    // private Valve.VR.CVROverlay <overlay>5__2
    // Size: 0x8
    // Offset: 0x28
    ::Valve::VR::CVROverlay* $overlay$5__2;
    // Field size check
    static_assert(sizeof(::Valve::VR::CVROverlay*) == 0x8);
    // private System.Boolean <fadedForeground>5__3
    // Size: 0x1
    // Offset: 0x30
    bool $fadedForeground$5__3;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: $fadedForeground$5__3 and: $compositor$5__4
    char __padding4[0x7] = {};
    // private Valve.VR.CVRCompositor <compositor>5__4
    // Size: 0x8
    // Offset: 0x38
    ::Valve::VR::CVRCompositor* $compositor$5__4;
    // Field size check
    static_assert(sizeof(::Valve::VR::CVRCompositor*) == 0x8);
    // private SteamVR_Controller/Device <hmd>5__5
    // Size: 0x8
    // Offset: 0x40
    ::GlobalNamespace::SteamVR_Controller::Device* $hmd$5__5;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SteamVR_Controller::Device*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // Get instance field reference: private System.Int32 <>1__state
    int& dyn_$$1__state();
    // Get instance field reference: private System.Object <>2__current
    ::Il2CppObject*& dyn_$$2__current();
    // Get instance field reference: public SteamVR_LoadLevel <>4__this
    ::GlobalNamespace::SteamVR_LoadLevel*& dyn_$$4__this();
    // Get instance field reference: private Valve.VR.CVROverlay <overlay>5__2
    ::Valve::VR::CVROverlay*& dyn_$overlay$5__2();
    // Get instance field reference: private System.Boolean <fadedForeground>5__3
    bool& dyn_$fadedForeground$5__3();
    // Get instance field reference: private Valve.VR.CVRCompositor <compositor>5__4
    ::Valve::VR::CVRCompositor*& dyn_$compositor$5__4();
    // Get instance field reference: private SteamVR_Controller/Device <hmd>5__5
    ::GlobalNamespace::SteamVR_Controller::Device*& dyn_$hmd$5__5();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x1871024
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x187108C
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x186FC48
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SteamVR_LoadLevel::$LoadLevel$d__45* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SteamVR_LoadLevel::$LoadLevel$d__45::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SteamVR_LoadLevel::$LoadLevel$d__45*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x186FDC4
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x186FDC8
    bool MoveNext();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x187102C
    void System_Collections_IEnumerator_Reset();
  }; // SteamVR_LoadLevel/<LoadLevel>d__45
  #pragma pack(pop)
  static check_size<sizeof(SteamVR_LoadLevel::$LoadLevel$d__45), 64 + sizeof(::GlobalNamespace::SteamVR_Controller::Device*)> __GlobalNamespace_SteamVR_LoadLevel_$LoadLevel$d__45SizeCheck;
  static_assert(sizeof(SteamVR_LoadLevel::$LoadLevel$d__45) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_LoadLevel::$LoadLevel$d__45::System_Collections_Generic_IEnumerator$System_Object$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Object>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (GlobalNamespace::SteamVR_LoadLevel::$LoadLevel$d__45::*)()>(&GlobalNamespace::SteamVR_LoadLevel::$LoadLevel$d__45::System_Collections_Generic_IEnumerator$System_Object$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_LoadLevel::$LoadLevel$d__45*), "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_LoadLevel::$LoadLevel$d__45::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (GlobalNamespace::SteamVR_LoadLevel::$LoadLevel$d__45::*)()>(&GlobalNamespace::SteamVR_LoadLevel::$LoadLevel$d__45::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_LoadLevel::$LoadLevel$d__45*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_LoadLevel::$LoadLevel$d__45::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_LoadLevel::$LoadLevel$d__45::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_LoadLevel::$LoadLevel$d__45::*)()>(&GlobalNamespace::SteamVR_LoadLevel::$LoadLevel$d__45::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_LoadLevel::$LoadLevel$d__45*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_LoadLevel::$LoadLevel$d__45::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::SteamVR_LoadLevel::$LoadLevel$d__45::*)()>(&GlobalNamespace::SteamVR_LoadLevel::$LoadLevel$d__45::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_LoadLevel::$LoadLevel$d__45*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_LoadLevel::$LoadLevel$d__45::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_LoadLevel::$LoadLevel$d__45::*)()>(&GlobalNamespace::SteamVR_LoadLevel::$LoadLevel$d__45::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_LoadLevel::$LoadLevel$d__45*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
