// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: LiteNetLibConnectionManager
#include "GlobalNamespace/LiteNetLibConnectionManager.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Predicate`1<T>
  template<typename T>
  class Predicate_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::LiteNetLibConnectionManager::$$c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LiteNetLibConnectionManager::$$c*, "", "LiteNetLibConnectionManager/<>c");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: LiteNetLibConnectionManager/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class LiteNetLibConnectionManager::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly LiteNetLibConnectionManager/<>c <>9
    static ::GlobalNamespace::LiteNetLibConnectionManager::$$c* _get_$$9();
    // Set static field: static public readonly LiteNetLibConnectionManager/<>c <>9
    static void _set_$$9(::GlobalNamespace::LiteNetLibConnectionManager::$$c* value);
    // Get static field: static public System.Predicate`1<LiteNetLibConnectionManager/NetPeerConnection> <>9__70_0
    static ::System::Predicate_1<::GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnection*>* _get_$$9__70_0();
    // Set static field: static public System.Predicate`1<LiteNetLibConnectionManager/NetPeerConnection> <>9__70_0
    static void _set_$$9__70_0(::System::Predicate_1<::GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnection*>* value);
    // static private System.Void .cctor()
    // Offset: 0x164B634
    static void _cctor();
    // System.Boolean <get_hasConnectionOwner>b__70_0(LiteNetLibConnectionManager/NetPeerConnection c)
    // Offset: 0x164B6A0
    bool $get_hasConnectionOwner$b__70_0(::GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnection* c);
    // public System.Void .ctor()
    // Offset: 0x164B698
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LiteNetLibConnectionManager::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LiteNetLibConnectionManager::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LiteNetLibConnectionManager::$$c*, creationType>()));
    }
  }; // LiteNetLibConnectionManager/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LiteNetLibConnectionManager::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::LiteNetLibConnectionManager::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LiteNetLibConnectionManager::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LiteNetLibConnectionManager::$$c::$get_hasConnectionOwner$b__70_0
// Il2CppName: <get_hasConnectionOwner>b__70_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::LiteNetLibConnectionManager::$$c::*)(::GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnection*)>(&GlobalNamespace::LiteNetLibConnectionManager::$$c::$get_hasConnectionOwner$b__70_0)> {
  static const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("", "LiteNetLibConnectionManager/NetPeerConnection")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LiteNetLibConnectionManager::$$c*), "<get_hasConnectionOwner>b__70_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LiteNetLibConnectionManager::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
