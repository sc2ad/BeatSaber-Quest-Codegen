// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.EventSystems.PhysicsRaycaster
#include "UnityEngine/EventSystems/PhysicsRaycaster.hpp"
// Including type: System.Collections.Generic.IComparer`1
#include "System/Collections/Generic/IComparer_1.hpp"
// Including type: UnityEngine.RaycastHit
#include "UnityEngine/RaycastHit.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::EventSystems::PhysicsRaycaster::RaycastHitComparer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::PhysicsRaycaster::RaycastHitComparer*, "UnityEngine.EventSystems", "PhysicsRaycaster/RaycastHitComparer");
// Type namespace: UnityEngine.EventSystems
namespace UnityEngine::EventSystems {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.EventSystems.PhysicsRaycaster/UnityEngine.EventSystems.RaycastHitComparer
  // [TokenAttribute] Offset: FFFFFFFF
  class PhysicsRaycaster::RaycastHitComparer : public ::Il2CppObject/*, public ::System::Collections::Generic::IComparer_1<::UnityEngine::RaycastHit>*/ {
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IComparer_1<::UnityEngine::RaycastHit>
    operator ::System::Collections::Generic::IComparer_1<::UnityEngine::RaycastHit>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IComparer_1<::UnityEngine::RaycastHit>*>(this);
    }
    // Creating interface conversion operator: i_RaycastHit
    inline ::System::Collections::Generic::IComparer_1<::UnityEngine::RaycastHit>* i_RaycastHit() noexcept {
      return reinterpret_cast<::System::Collections::Generic::IComparer_1<::UnityEngine::RaycastHit>*>(this);
    }
    // Get static field: static public UnityEngine.EventSystems.PhysicsRaycaster/UnityEngine.EventSystems.RaycastHitComparer instance
    static ::UnityEngine::EventSystems::PhysicsRaycaster::RaycastHitComparer* _get_instance();
    // Set static field: static public UnityEngine.EventSystems.PhysicsRaycaster/UnityEngine.EventSystems.RaycastHitComparer instance
    static void _set_instance(::UnityEngine::EventSystems::PhysicsRaycaster::RaycastHitComparer* value);
    // public System.Void .ctor()
    // Offset: 0x1955674
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PhysicsRaycaster::RaycastHitComparer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::EventSystems::PhysicsRaycaster::RaycastHitComparer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PhysicsRaycaster::RaycastHitComparer*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x195567C
    static void _cctor();
    // public System.Int32 Compare(UnityEngine.RaycastHit x, UnityEngine.RaycastHit y)
    // Offset: 0x1955630
    int Compare(::UnityEngine::RaycastHit x, ::UnityEngine::RaycastHit y);
  }; // UnityEngine.EventSystems.PhysicsRaycaster/UnityEngine.EventSystems.RaycastHitComparer
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::EventSystems::PhysicsRaycaster::RaycastHitComparer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::EventSystems::PhysicsRaycaster::RaycastHitComparer::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::EventSystems::PhysicsRaycaster::RaycastHitComparer::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::PhysicsRaycaster::RaycastHitComparer*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::PhysicsRaycaster::RaycastHitComparer::Compare
// Il2CppName: Compare
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::EventSystems::PhysicsRaycaster::RaycastHitComparer::*)(::UnityEngine::RaycastHit, ::UnityEngine::RaycastHit)>(&UnityEngine::EventSystems::PhysicsRaycaster::RaycastHitComparer::Compare)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("UnityEngine", "RaycastHit")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("UnityEngine", "RaycastHit")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::PhysicsRaycaster::RaycastHitComparer*), "Compare", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y});
  }
};
