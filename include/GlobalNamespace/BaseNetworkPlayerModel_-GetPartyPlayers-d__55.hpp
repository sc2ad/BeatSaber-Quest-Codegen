// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BaseNetworkPlayerModel
#include "GlobalNamespace/BaseNetworkPlayerModel.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: INetworkPlayer
  class INetworkPlayer;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BaseNetworkPlayerModel::$GetPartyPlayers$d__55);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BaseNetworkPlayerModel::$GetPartyPlayers$d__55*, "", "BaseNetworkPlayerModel/<GetPartyPlayers>d__55");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: BaseNetworkPlayerModel/<GetPartyPlayers>d__55
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class BaseNetworkPlayerModel::$GetPartyPlayers$d__55 : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>, public ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>*/ {
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
    // private INetworkPlayer <>2__current
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::INetworkPlayer* $$2__current;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::INetworkPlayer*) == 0x8);
    // private System.Int32 <>l__initialThreadId
    // Size: 0x4
    // Offset: 0x20
    int $$l__initialThreadId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>
    operator ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>*>(this);
    }
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>
    operator ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>*>(this);
    }
    // Get instance field reference: private System.Int32 <>1__state
    int& dyn_$$1__state();
    // Get instance field reference: private INetworkPlayer <>2__current
    ::GlobalNamespace::INetworkPlayer*& dyn_$$2__current();
    // Get instance field reference: private System.Int32 <>l__initialThreadId
    int& dyn_$$l__initialThreadId();
    // private INetworkPlayer System.Collections.Generic.IEnumerator<INetworkPlayer>.get_Current()
    // Offset: 0x13603E8
    ::GlobalNamespace::INetworkPlayer* System_Collections_Generic_IEnumerator$INetworkPlayer$_get_Current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x1360450
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x135FF98
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BaseNetworkPlayerModel::$GetPartyPlayers$d__55* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BaseNetworkPlayerModel::$GetPartyPlayers$d__55::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BaseNetworkPlayerModel::$GetPartyPlayers$d__55*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x13603CC
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x13603D0
    bool MoveNext();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x13603F0
    void System_Collections_IEnumerator_Reset();
    // private System.Collections.Generic.IEnumerator`1<INetworkPlayer> System.Collections.Generic.IEnumerable<INetworkPlayer>.GetEnumerator()
    // Offset: 0x1360458
    ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>* System_Collections_Generic_IEnumerable$INetworkPlayer$_GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x13604F0
    ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // BaseNetworkPlayerModel/<GetPartyPlayers>d__55
  #pragma pack(pop)
  static check_size<sizeof(BaseNetworkPlayerModel::$GetPartyPlayers$d__55), 32 + sizeof(int)> __GlobalNamespace_BaseNetworkPlayerModel_$GetPartyPlayers$d__55SizeCheck;
  static_assert(sizeof(BaseNetworkPlayerModel::$GetPartyPlayers$d__55) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BaseNetworkPlayerModel::$GetPartyPlayers$d__55::System_Collections_Generic_IEnumerator$INetworkPlayer$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<INetworkPlayer>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::INetworkPlayer* (GlobalNamespace::BaseNetworkPlayerModel::$GetPartyPlayers$d__55::*)()>(&GlobalNamespace::BaseNetworkPlayerModel::$GetPartyPlayers$d__55::System_Collections_Generic_IEnumerator$INetworkPlayer$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BaseNetworkPlayerModel::$GetPartyPlayers$d__55*), "System.Collections.Generic.IEnumerator<INetworkPlayer>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BaseNetworkPlayerModel::$GetPartyPlayers$d__55::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (GlobalNamespace::BaseNetworkPlayerModel::$GetPartyPlayers$d__55::*)()>(&GlobalNamespace::BaseNetworkPlayerModel::$GetPartyPlayers$d__55::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BaseNetworkPlayerModel::$GetPartyPlayers$d__55*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BaseNetworkPlayerModel::$GetPartyPlayers$d__55::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BaseNetworkPlayerModel::$GetPartyPlayers$d__55::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BaseNetworkPlayerModel::$GetPartyPlayers$d__55::*)()>(&GlobalNamespace::BaseNetworkPlayerModel::$GetPartyPlayers$d__55::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BaseNetworkPlayerModel::$GetPartyPlayers$d__55*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BaseNetworkPlayerModel::$GetPartyPlayers$d__55::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::BaseNetworkPlayerModel::$GetPartyPlayers$d__55::*)()>(&GlobalNamespace::BaseNetworkPlayerModel::$GetPartyPlayers$d__55::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BaseNetworkPlayerModel::$GetPartyPlayers$d__55*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BaseNetworkPlayerModel::$GetPartyPlayers$d__55::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BaseNetworkPlayerModel::$GetPartyPlayers$d__55::*)()>(&GlobalNamespace::BaseNetworkPlayerModel::$GetPartyPlayers$d__55::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BaseNetworkPlayerModel::$GetPartyPlayers$d__55*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BaseNetworkPlayerModel::$GetPartyPlayers$d__55::System_Collections_Generic_IEnumerable$INetworkPlayer$_GetEnumerator
// Il2CppName: System.Collections.Generic.IEnumerable<INetworkPlayer>.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>* (GlobalNamespace::BaseNetworkPlayerModel::$GetPartyPlayers$d__55::*)()>(&GlobalNamespace::BaseNetworkPlayerModel::$GetPartyPlayers$d__55::System_Collections_Generic_IEnumerable$INetworkPlayer$_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BaseNetworkPlayerModel::$GetPartyPlayers$d__55*), "System.Collections.Generic.IEnumerable<INetworkPlayer>.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BaseNetworkPlayerModel::$GetPartyPlayers$d__55::System_Collections_IEnumerable_GetEnumerator
// Il2CppName: System.Collections.IEnumerable.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (GlobalNamespace::BaseNetworkPlayerModel::$GetPartyPlayers$d__55::*)()>(&GlobalNamespace::BaseNetworkPlayerModel::$GetPartyPlayers$d__55::System_Collections_IEnumerable_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BaseNetworkPlayerModel::$GetPartyPlayers$d__55*), "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
