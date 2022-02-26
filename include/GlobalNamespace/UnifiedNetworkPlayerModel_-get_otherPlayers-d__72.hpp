// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnifiedNetworkPlayerModel
#include "GlobalNamespace/UnifiedNetworkPlayerModel.hpp"
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
NEED_NO_BOX(::GlobalNamespace::UnifiedNetworkPlayerModel::$get_otherPlayers$d__72);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::UnifiedNetworkPlayerModel::$get_otherPlayers$d__72*, "", "UnifiedNetworkPlayerModel/<get_otherPlayers>d__72");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: UnifiedNetworkPlayerModel/<get_otherPlayers>d__72
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class UnifiedNetworkPlayerModel::$get_otherPlayers$d__72 : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>, public ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>*/ {
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
    // Padding between fields: $$l__initialThreadId and: $$4__this
    char __padding2[0x4] = {};
    // public UnifiedNetworkPlayerModel <>4__this
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::UnifiedNetworkPlayerModel* $$4__this;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::UnifiedNetworkPlayerModel*) == 0x8);
    // private System.Collections.Generic.IEnumerator`1<INetworkPlayer> <>7__wrap1
    // Size: 0x8
    // Offset: 0x30
    ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>* $$7__wrap1;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>*) == 0x8);
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
    // Get instance field reference: public UnifiedNetworkPlayerModel <>4__this
    ::GlobalNamespace::UnifiedNetworkPlayerModel*& dyn_$$4__this();
    // Get instance field reference: private System.Collections.Generic.IEnumerator`1<INetworkPlayer> <>7__wrap1
    ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>*& dyn_$$7__wrap1();
    // private INetworkPlayer System.Collections.Generic.IEnumerator<INetworkPlayer>.get_Current()
    // Offset: 0x2CB4194
    ::GlobalNamespace::INetworkPlayer* System_Collections_Generic_IEnumerator$INetworkPlayer$_get_Current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x2CB41FC
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x2CB2A5C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnifiedNetworkPlayerModel::$get_otherPlayers$d__72* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::UnifiedNetworkPlayerModel::$get_otherPlayers$d__72::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnifiedNetworkPlayerModel::$get_otherPlayers$d__72*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x2CB3820
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x2CB3AB4
    bool MoveNext();
    // private System.Void <>m__Finally1()
    // Offset: 0x2CB3874
    void $$m__Finally1();
    // private System.Void <>m__Finally2()
    // Offset: 0x2CB3934
    void $$m__Finally2();
    // private System.Void <>m__Finally3()
    // Offset: 0x2CB39F4
    void $$m__Finally3();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x2CB419C
    void System_Collections_IEnumerator_Reset();
    // private System.Collections.Generic.IEnumerator`1<INetworkPlayer> System.Collections.Generic.IEnumerable<INetworkPlayer>.GetEnumerator()
    // Offset: 0x2CB4204
    ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>* System_Collections_Generic_IEnumerable$INetworkPlayer$_GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x2CB42B0
    ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // UnifiedNetworkPlayerModel/<get_otherPlayers>d__72
  #pragma pack(pop)
  static check_size<sizeof(UnifiedNetworkPlayerModel::$get_otherPlayers$d__72), 48 + sizeof(::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>*)> __GlobalNamespace_UnifiedNetworkPlayerModel_$get_otherPlayers$d__72SizeCheck;
  static_assert(sizeof(UnifiedNetworkPlayerModel::$get_otherPlayers$d__72) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::$get_otherPlayers$d__72::System_Collections_Generic_IEnumerator$INetworkPlayer$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<INetworkPlayer>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::INetworkPlayer* (GlobalNamespace::UnifiedNetworkPlayerModel::$get_otherPlayers$d__72::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::$get_otherPlayers$d__72::System_Collections_Generic_IEnumerator$INetworkPlayer$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::$get_otherPlayers$d__72*), "System.Collections.Generic.IEnumerator<INetworkPlayer>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::$get_otherPlayers$d__72::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (GlobalNamespace::UnifiedNetworkPlayerModel::$get_otherPlayers$d__72::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::$get_otherPlayers$d__72::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::$get_otherPlayers$d__72*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::$get_otherPlayers$d__72::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::$get_otherPlayers$d__72::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnifiedNetworkPlayerModel::$get_otherPlayers$d__72::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::$get_otherPlayers$d__72::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::$get_otherPlayers$d__72*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::$get_otherPlayers$d__72::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::UnifiedNetworkPlayerModel::$get_otherPlayers$d__72::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::$get_otherPlayers$d__72::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::$get_otherPlayers$d__72*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::$get_otherPlayers$d__72::$$m__Finally1
// Il2CppName: <>m__Finally1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnifiedNetworkPlayerModel::$get_otherPlayers$d__72::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::$get_otherPlayers$d__72::$$m__Finally1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::$get_otherPlayers$d__72*), "<>m__Finally1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::$get_otherPlayers$d__72::$$m__Finally2
// Il2CppName: <>m__Finally2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnifiedNetworkPlayerModel::$get_otherPlayers$d__72::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::$get_otherPlayers$d__72::$$m__Finally2)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::$get_otherPlayers$d__72*), "<>m__Finally2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::$get_otherPlayers$d__72::$$m__Finally3
// Il2CppName: <>m__Finally3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnifiedNetworkPlayerModel::$get_otherPlayers$d__72::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::$get_otherPlayers$d__72::$$m__Finally3)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::$get_otherPlayers$d__72*), "<>m__Finally3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::$get_otherPlayers$d__72::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnifiedNetworkPlayerModel::$get_otherPlayers$d__72::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::$get_otherPlayers$d__72::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::$get_otherPlayers$d__72*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::$get_otherPlayers$d__72::System_Collections_Generic_IEnumerable$INetworkPlayer$_GetEnumerator
// Il2CppName: System.Collections.Generic.IEnumerable<INetworkPlayer>.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>* (GlobalNamespace::UnifiedNetworkPlayerModel::$get_otherPlayers$d__72::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::$get_otherPlayers$d__72::System_Collections_Generic_IEnumerable$INetworkPlayer$_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::$get_otherPlayers$d__72*), "System.Collections.Generic.IEnumerable<INetworkPlayer>.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UnifiedNetworkPlayerModel::$get_otherPlayers$d__72::System_Collections_IEnumerable_GetEnumerator
// Il2CppName: System.Collections.IEnumerable.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (GlobalNamespace::UnifiedNetworkPlayerModel::$get_otherPlayers$d__72::*)()>(&GlobalNamespace::UnifiedNetworkPlayerModel::$get_otherPlayers$d__72::System_Collections_IEnumerable_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UnifiedNetworkPlayerModel::$get_otherPlayers$d__72*), "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
