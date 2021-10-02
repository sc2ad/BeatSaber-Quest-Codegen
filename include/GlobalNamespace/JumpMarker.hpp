// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Timeline.Marker
#include "UnityEngine/Timeline/Marker.hpp"
// Including type: UnityEngine.Playables.INotification
#include "UnityEngine/Playables/INotification.hpp"
// Including type: UnityEngine.PropertyName
#include "UnityEngine/PropertyName.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: JumpDestinationMarker
  class JumpDestinationMarker;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x34
  #pragma pack(push, 1)
  // Autogenerated type: JumpMarker
  // [TokenAttribute] Offset: FFFFFFFF
  // [DisplayNameAttribute] Offset: EC9118
  class JumpMarker : public UnityEngine::Timeline::Marker/*, public UnityEngine::Playables::INotification*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // private JumpDestinationMarker _destination
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::JumpDestinationMarker* destination;
    // Field size check
    static_assert(sizeof(GlobalNamespace::JumpDestinationMarker*) == 0x8);
    // private readonly UnityEngine.PropertyName <id>k__BackingField
    // Size: 0x4
    // Offset: 0x30
    UnityEngine::PropertyName id;
    // Field size check
    static_assert(sizeof(UnityEngine::PropertyName) == 0x4);
    public:
    // Creating interface conversion operator: operator UnityEngine::Playables::INotification
    operator UnityEngine::Playables::INotification() noexcept {
      return *reinterpret_cast<UnityEngine::Playables::INotification*>(this);
    }
    // Get instance field reference: private JumpDestinationMarker _destination
    GlobalNamespace::JumpDestinationMarker*& dyn__destination();
    // Get instance field reference: private readonly UnityEngine.PropertyName <id>k__BackingField
    UnityEngine::PropertyName& dyn_$id$k__BackingField();
    // public UnityEngine.PropertyName get_id()
    // Offset: 0x13867B4
    UnityEngine::PropertyName get_id();
    // public JumpDestinationMarker get_jumpDestination()
    // Offset: 0x13867BC
    GlobalNamespace::JumpDestinationMarker* get_jumpDestination();
    // public System.Void .ctor()
    // Offset: 0x13867C4
    // Implemented from: UnityEngine.Timeline.Marker
    // Base method: System.Void Marker::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JumpMarker* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::JumpMarker::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JumpMarker*, creationType>()));
    }
  }; // JumpMarker
  #pragma pack(pop)
  static check_size<sizeof(JumpMarker), 48 + sizeof(UnityEngine::PropertyName)> __GlobalNamespace_JumpMarkerSizeCheck;
  static_assert(sizeof(JumpMarker) == 0x34);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::JumpMarker*, "", "JumpMarker");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::JumpMarker::get_id
// Il2CppName: get_id
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::PropertyName (GlobalNamespace::JumpMarker::*)()>(&GlobalNamespace::JumpMarker::get_id)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::JumpMarker*), "get_id", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::JumpMarker::get_jumpDestination
// Il2CppName: get_jumpDestination
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::JumpDestinationMarker* (GlobalNamespace::JumpMarker::*)()>(&GlobalNamespace::JumpMarker::get_jumpDestination)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::JumpMarker*), "get_jumpDestination", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::JumpMarker::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
