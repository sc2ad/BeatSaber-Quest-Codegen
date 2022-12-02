// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: Zenject.BindingId
#include "Zenject/BindingId.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: Zenject
namespace Zenject {
  // Forward declaring type: SignalSubscriptionId
  struct SignalSubscriptionId;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SignalSubscriptionId, "Zenject", "SignalSubscriptionId");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x18
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Zenject.SignalSubscriptionId
  // [TokenAttribute] Offset: FFFFFFFF
  // [DebuggerStepThroughAttribute] Offset: FFFFFFFF
  struct SignalSubscriptionId/*, public ::System::ValueType, public ::System::IEquatable_1<::Zenject::SignalSubscriptionId>*/ {
    public:
    public:
    // private Zenject.BindingId _signalId
    // Size: 0x10
    // Offset: 0x0
    ::Zenject::BindingId signalId;
    // Field size check
    static_assert(sizeof(::Zenject::BindingId) == 0x10);
    // private System.Object _callback
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppObject* callback;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    public:
    // Creating value type constructor for type: SignalSubscriptionId
    constexpr SignalSubscriptionId(::Zenject::BindingId signalId_ = {}, ::Il2CppObject* callback_ = {}) noexcept : signalId{signalId_}, callback{callback_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::Zenject::SignalSubscriptionId>
    operator ::System::IEquatable_1<::Zenject::SignalSubscriptionId>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::Zenject::SignalSubscriptionId>*>(this);
    }
    // Creating interface conversion operator: i_SignalSubscriptionId
    inline ::System::IEquatable_1<::Zenject::SignalSubscriptionId>* i_SignalSubscriptionId() noexcept {
      return reinterpret_cast<::System::IEquatable_1<::Zenject::SignalSubscriptionId>*>(this);
    }
    // Get instance field reference: private Zenject.BindingId _signalId
    [[deprecated("Use field access instead!")]] ::Zenject::BindingId& dyn__signalId();
    // Get instance field reference: private System.Object _callback
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn__callback();
    // public Zenject.BindingId get_SignalId()
    // Offset: 0x1DBBA34
    ::Zenject::BindingId get_SignalId();
    // public System.Object get_Callback()
    // Offset: 0x1DBBA40
    ::Il2CppObject* get_Callback();
    // public System.Void .ctor(Zenject.BindingId signalId, System.Object callback)
    // Offset: 0x1DB7DA8
    // ABORTED: conflicts with another method.  SignalSubscriptionId(::Zenject::BindingId signalId, ::Il2CppObject* callback);
    // public System.Boolean Equals(Zenject.SignalSubscriptionId that)
    // Offset: 0x1DBBB3C
    bool Equals(::Zenject::SignalSubscriptionId that);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1DBBA48
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object that)
    // Offset: 0x1DBBA9C
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object that)
    bool Equals(::Il2CppObject* that);
  }; // Zenject.SignalSubscriptionId
  #pragma pack(pop)
  static check_size<sizeof(SignalSubscriptionId), 16 + sizeof(::Il2CppObject*)> __Zenject_SignalSubscriptionIdSizeCheck;
  static_assert(sizeof(SignalSubscriptionId) == 0x18);
  // static public System.Boolean op_Equality(Zenject.SignalSubscriptionId left, Zenject.SignalSubscriptionId right)
  // Offset: 0x1DBBBF4
  bool operator ==(const ::Zenject::SignalSubscriptionId& left, const ::Zenject::SignalSubscriptionId& right);
  // static public System.Boolean op_Inequality(Zenject.SignalSubscriptionId left, Zenject.SignalSubscriptionId right)
  // Offset: 0x1DBBC28
  bool operator !=(const ::Zenject::SignalSubscriptionId& left, const ::Zenject::SignalSubscriptionId& right);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::SignalSubscriptionId::get_SignalId
// Il2CppName: get_SignalId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::BindingId (Zenject::SignalSubscriptionId::*)()>(&Zenject::SignalSubscriptionId::get_SignalId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::SignalSubscriptionId), "get_SignalId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::SignalSubscriptionId::get_Callback
// Il2CppName: get_Callback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Zenject::SignalSubscriptionId::*)()>(&Zenject::SignalSubscriptionId::get_Callback)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::SignalSubscriptionId), "get_Callback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::SignalSubscriptionId::SignalSubscriptionId
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::SignalSubscriptionId::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::SignalSubscriptionId::*)(::Zenject::SignalSubscriptionId)>(&Zenject::SignalSubscriptionId::Equals)> {
  static const MethodInfo* get() {
    static auto* that = &::il2cpp_utils::GetClassFromName("Zenject", "SignalSubscriptionId")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SignalSubscriptionId), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{that});
  }
};
// Writing MetadataGetter for method: Zenject::SignalSubscriptionId::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Zenject::SignalSubscriptionId::*)()>(&Zenject::SignalSubscriptionId::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::SignalSubscriptionId), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::SignalSubscriptionId::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::SignalSubscriptionId::*)(::Il2CppObject*)>(&Zenject::SignalSubscriptionId::Equals)> {
  static const MethodInfo* get() {
    static auto* that = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SignalSubscriptionId), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{that});
  }
};
// Writing MetadataGetter for method: Zenject::SignalSubscriptionId::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Zenject::SignalSubscriptionId::operator !=
// Il2CppName: op_Inequality
// Cannot perform method pointer template specialization from operators!
