// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OculusNetworkPlayerModel
#include "GlobalNamespace/OculusNetworkPlayerModel.hpp"
// Including type: Oculus.Platform.Message`1
#include "Oculus/Platform/Message_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: UserAndRoomList
  class UserAndRoomList;
  // Forward declaring type: UserList
  class UserList;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OculusNetworkPlayerModel::$$c__DisplayClass55_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusNetworkPlayerModel::$$c__DisplayClass55_0*, "", "OculusNetworkPlayerModel/<>c__DisplayClass55_0");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: OculusNetworkPlayerModel/<>c__DisplayClass55_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class OculusNetworkPlayerModel::$$c__DisplayClass55_0 : public ::Il2CppObject {
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
    // public OculusNetworkPlayerModel <>4__this
    // Size: 0x8
    // Offset: 0x10
    ::GlobalNamespace::OculusNetworkPlayerModel* $$4__this;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OculusNetworkPlayerModel*) == 0x8);
    // public Oculus.Platform.Message`1/Oculus.Platform.Callback<Oculus.Platform.Models.UserAndRoomList> onGetFriends
    // Size: 0x8
    // Offset: 0x18
    typename ::Oculus::Platform::Message_1<::Oculus::Platform::Models::UserAndRoomList*>::Callback* onGetFriends;
    // Field size check
    static_assert(sizeof(typename ::Oculus::Platform::Message_1<::Oculus::Platform::Models::UserAndRoomList*>::Callback*) == 0x8);
    // public Oculus.Platform.Message`1/Oculus.Platform.Callback<Oculus.Platform.Models.UserList> onGetInvitable
    // Size: 0x8
    // Offset: 0x20
    typename ::Oculus::Platform::Message_1<::Oculus::Platform::Models::UserList*>::Callback* onGetInvitable;
    // Field size check
    static_assert(sizeof(typename ::Oculus::Platform::Message_1<::Oculus::Platform::Models::UserList*>::Callback*) == 0x8);
    public:
    // Get instance field reference: public OculusNetworkPlayerModel <>4__this
    ::GlobalNamespace::OculusNetworkPlayerModel*& dyn_$$4__this();
    // Get instance field reference: public Oculus.Platform.Message`1/Oculus.Platform.Callback<Oculus.Platform.Models.UserAndRoomList> onGetFriends
    typename ::Oculus::Platform::Message_1<::Oculus::Platform::Models::UserAndRoomList*>::Callback*& dyn_onGetFriends();
    // Get instance field reference: public Oculus.Platform.Message`1/Oculus.Platform.Callback<Oculus.Platform.Models.UserList> onGetInvitable
    typename ::Oculus::Platform::Message_1<::Oculus::Platform::Models::UserList*>::Callback*& dyn_onGetInvitable();
    // System.Void <Refresh>b__0(Oculus.Platform.Message`1<Oculus.Platform.Models.UserAndRoomList> result)
    // Offset: 0x1511880
    void $Refresh$b__0(::Oculus::Platform::Message_1<::Oculus::Platform::Models::UserAndRoomList*>* result);
    // System.Void <Refresh>b__1(Oculus.Platform.Message`1<Oculus.Platform.Models.UserList> result)
    // Offset: 0x1511D48
    void $Refresh$b__1(::Oculus::Platform::Message_1<::Oculus::Platform::Models::UserList*>* result);
    // public System.Void .ctor()
    // Offset: 0x15110D0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OculusNetworkPlayerModel::$$c__DisplayClass55_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OculusNetworkPlayerModel::$$c__DisplayClass55_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OculusNetworkPlayerModel::$$c__DisplayClass55_0*, creationType>()));
    }
  }; // OculusNetworkPlayerModel/<>c__DisplayClass55_0
  #pragma pack(pop)
  static check_size<sizeof(OculusNetworkPlayerModel::$$c__DisplayClass55_0), 32 + sizeof(typename ::Oculus::Platform::Message_1<::Oculus::Platform::Models::UserList*>::Callback*)> __GlobalNamespace_OculusNetworkPlayerModel_$$c__DisplayClass55_0SizeCheck;
  static_assert(sizeof(OculusNetworkPlayerModel::$$c__DisplayClass55_0) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OculusNetworkPlayerModel::$$c__DisplayClass55_0::$Refresh$b__0
// Il2CppName: <Refresh>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusNetworkPlayerModel::$$c__DisplayClass55_0::*)(::Oculus::Platform::Message_1<::Oculus::Platform::Models::UserAndRoomList*>*)>(&GlobalNamespace::OculusNetworkPlayerModel::$$c__DisplayClass55_0::$Refresh$b__0)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Oculus.Platform", "Message`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Oculus.Platform.Models", "UserAndRoomList")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusNetworkPlayerModel::$$c__DisplayClass55_0*), "<Refresh>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusNetworkPlayerModel::$$c__DisplayClass55_0::$Refresh$b__1
// Il2CppName: <Refresh>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusNetworkPlayerModel::$$c__DisplayClass55_0::*)(::Oculus::Platform::Message_1<::Oculus::Platform::Models::UserList*>*)>(&GlobalNamespace::OculusNetworkPlayerModel::$$c__DisplayClass55_0::$Refresh$b__1)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Oculus.Platform", "Message`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Oculus.Platform.Models", "UserList")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusNetworkPlayerModel::$$c__DisplayClass55_0*), "<Refresh>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusNetworkPlayerModel::$$c__DisplayClass55_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
